# Schema-serde vs C2J serde: DynamoDB benchmark (discussion only, not for merge)

This branch exists to share evidence. It contains the schema-serde work, DynamoDB and STS regenerated with
`--use-smithy-models`, and the benchmark below. **Do not merge it**: the regenerated clients change shipping code.

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
