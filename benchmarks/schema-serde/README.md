# Schema-serde vs C2J serde: DynamoDB benchmark (discussion only, not for merge)

This branch exists to share evidence. It contains the schema-serde work, DynamoDB and STS regenerated with
`--use-smithy-models`, and the benchmark below. **Do not merge it**: the regenerated clients change shipping code.

## Summary

- As generated today, schema-serde is **2-15x slower** than C2J on DynamoDB (run 1, below).
- The cause is that every generated adapter builds its `Schema` per request and per nested value. Building each schema
  **once** (run 2, an experiment) makes schema-serde **faster than C2J in 15 of 17 cases**, up to 16x on large items,
  with identical output. So the gap is mostly fixable in codegen.
- The exception is decoding large blobs (base64 in the JSON reader), which caching does not help: a separate core fix.

## Run 2: schemas built once (experiment)

`cache_schemas_experiment.py` rewrites every generated `BuildSchema()` in DynamoDB to build its schema once and reuse it.
The cached schemas are deliberately never freed, which sidesteps the `ShutdownAPI` lifetime problem (a function-local
static would be destroyed after `ShutdownAPI`); a real fix needs ownership inside the `InitAPI` ... `ShutdownAPI`
window. All three builds ran back to back on the same machine; request JSON and parsed attributes matched C2J in every case.

| Case | C2J | schema-serde today | schema-serde, schemas cached | cached vs C2J |
|---|---|---|---|---|
| serialize PutItem Item_S | 1.8 us | 27.4 us | 1.2 us | 1.5x faster |
| serialize PutItem Item_M | 19.9 us | 279.0 us | 8.6 us | 2.3x faster |
| serialize PutItem Item_ShallowMap_L | 1,887 us | 3,795 us | 116 us | 16x faster |
| serialize PutItem Item_Binary_L | 198 us | 130 us | 79 us | 2.5x faster |
| deserialize GetItem Item_S | 2.8 us | 27.8 us | 1.4 us | 1.9x faster |
| deserialize GetItem Item_M | 36.0 us | 283.2 us | 16.8 us | 2.1x faster |
| deserialize GetItem Item_ShallowMap_L | 740 us | 4,007 us | 314 us | 2.4x faster |
| deserialize GetItem Item_Binary_L | 224 us | 625 us | 565 us | 2.5x slower |
| deserialize Query 100 x Item_M | 3,915 us | 27,706 us | 1,692 us | 2.3x faster |
| e2e PutItem Item_S | 33.2 us | 69.4 us | 32.4 us | same |
| e2e GetItem Item_S | 34.3 us | 68.7 us | 33.7 us | same |
| e2e PutItem Item_M | 53.1 us | 315.4 us | 41.0 us | 1.3x faster |
| e2e GetItem Item_M | 66.1 us | 328.6 us | 54.5 us | 1.2x faster |
| e2e PutItem Item_ShallowMap_L | 1,919 us | 3,831 us | 163 us | 12x faster |
| e2e GetItem Item_ShallowMap_L | 746 us | 4,101 us | 434 us | 1.7x faster |
| e2e PutItem Item_Binary_L | 314 us | 255 us | 194 us | 1.6x faster |
| e2e GetItem Item_Binary_L | 667 us | 1,151 us | 1,088 us | 1.6x slower |

Raw data: `results/run2-cached/results-{c2j,schema,cached}.tsv`. To reproduce, regenerate DynamoDB on this branch, run
`python3 benchmarks/schema-serde/cache_schemas_experiment.py <sdk root> dynamodb`, build and install that SDK, and build
the benchmark against it with `-DSCHEMA_SERDE=ON`.

## Run 1: schema-serde as generated today

## What is measured

One program (`bench.cpp`) built twice, with identical payloads:

- **C2J**: an SDK built from `main`'s generated DynamoDB (`SerializePayload()` and `JsonValue` + result constructor).
- **schema-serde**: an SDK built from this branch (`ClientProtocol::SerializeHttpRequest` / `DeserializeHttpResponse`
  over the generated schema-serde adapters, raw response body handed to the protocol).

Three groups:

| Group | Timed window |
|---|---|
| `serialize` | build the request body + headers for `PutItem` |
| `deserialize` | parse the response body into `GetItemResult` / `QueryResult` (parse is inside the window for both) |
| `e2e` | a full `DynamoDBClient` call (endpoint resolution, signing, serialize, deserialize) through an in-process HTTP client that returns a canned response, so no network |

Payloads: `Item_S` (5 attributes), `Item_M` (50 mixed, nested map and list), `Item_ShallowMap_L` (1,000 string
attributes), `Item_Binary_L` (10 x 10 KiB blobs), and `Query` with 100 `Item_M` items. Each case runs a 200-call
warm-up, then about 1 s of calls, each timed individually.

Correctness check done alongside: every request body is equivalent JSON on both builds, and every parsed item has the
same attributes.

## Results (Apple M3 Pro, macOS 26.7, Apple clang 21, Release, single run)

| Case | C2J mean | schema-serde mean | schema-serde vs C2J |
|---|---|---|---|
| serialize PutItem Item_S | 1.8 us | 27.2 us | 15x slower |
| serialize PutItem Item_M | 20.2 us | 274.3 us | 14x slower |
| serialize PutItem Item_ShallowMap_L | 1,839 us | 4,838 us (p99 15,152 us) | 2.6x slower |
| serialize PutItem Item_Binary_L | 225 us | 130 us | **1.7x faster** |
| deserialize GetItem Item_S | 2.8 us | 28.0 us | 10x slower |
| deserialize GetItem Item_M | 36.1 us | 282.3 us | 7.8x slower |
| deserialize GetItem Item_ShallowMap_L | 739 us | 4,031 us | 5.5x slower |
| deserialize GetItem Item_Binary_L | 238 us | 619 us | 2.6x slower |
| deserialize Query 100 x Item_M | 3,970 us | 27,630 us | 7x slower |
| e2e PutItem Item_S | 32.9 us | 69.4 us | 2.1x slower |
| e2e GetItem Item_S | 34.2 us | 69.2 us | 2.0x slower |
| e2e GetItem Item_ShallowMap_L | 719 us | 4,155 us | 5.8x slower |
| e2e PutItem Item_Binary_L | 315 us | 255 us | **1.2x faster** |

Full per-case mean / p50 / p99 / sample counts: `results/results-c2j.tsv`, `results/results-schema.tsv`
(columns: build, group, case, mean ns, p50 ns, p99 ns, samples).

Request bodies are also smaller with schema-serde (compact JSON; the C2J serializer writes indented JSON): 163 vs
234 bytes for `Item_S`, 1,503 vs 2,427 for `Item_M`, 24,584 vs 36,605 for `Item_ShallowMap_L`.

## Where the time goes (schema-serde)

From a `sample` profile of the schema-serde run (`results/schema-serde-profile-summary.txt`), on the busy thread:

- about 39% in `SchemaBuilder::Build`: every adapter builds its `Schema` in its constructor, per request and per
  nested value (a 1,000-attribute item builds 1,000 `AttributeValue` schemas per call);
- about 45% in `malloc` / `new` (overlapping the above);
- the JSON shape serializer / deserializer themselves are the rest; member dispatch compares member names as strings.

The schema construction and name-based dispatch are emitted by the Smithy codegen (`SchemaSerdeRenderer`); the JSON
reader / writer are in `aws-cpp-sdk-core`. Large blobs, where there is little per-member work, already favour
schema-serde.

## Caveats

- One machine, one run; not the reference m7i / m7g environment. The gaps (2x and more) are well beyond run-to-run noise.
- awsJson 1.0 only. XML, query and rest-json are not measured here; CBOR is not supported by schema-serde yet.
- Measured before the codec changes in aws/aws-sdk-cpp#3973.

## Reproducing

1. Build and install two SDKs (Release, `-DBUILD_ONLY=dynamodb`): one from `main`, one from this branch.
   On macOS with Homebrew OpenSSL 4.x also pass `-DUSE_OPENSSL=OFF`.
2. Build the benchmark against each install:
   ```
   cmake -S benchmarks/schema-serde -B build-c2j -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=<main install>
   cmake -S benchmarks/schema-serde -B build-ss -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=<branch install> -DSCHEMA_SERDE=ON
   cmake --build build-c2j && cmake --build build-ss
   ```
3. Run each with an output directory for the correctness samples: `./build-c2j/serde-bench <dir>` and
   `./build-ss/serde-bench <dir>`. Each prints tab-separated results.
