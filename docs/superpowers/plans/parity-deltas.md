# Smithy Per-Service Model Parity — Documented Deltas

Reviewed, accepted differences between Smithy-generated and C2J-generated `model::`
files. Anything not listed here must be resolved (empty diff) before a transform is "done".

## Global-baseline deltas (not service-specific)
- **Stubbed payload serde (global):** Smithy emits empty serde bodies (e.g. `SerializePayload() const { return {}; }`, `OutputToStream(...) {}`) where C2J emits full serialization. Affects every shape; not service-specific. Pending serde implementation in the model plugin.
- **Doc-comment reflow (global):** Smithy wraps member documentation comments differently from C2J. Cosmetic; affects many members across services.


- **Pagination-traits files (global):** Smithy emits `<Op>PaginationTraits.h` under model/ that the C2J model tree doesn't; separate pagination plugin output, pre-existing.
- **ResponseMetadata standalone file (query/ec2, global):** C2J emits a standalone `ResponseMetadata.{h,cpp}`; the Smithy plugin injects ResponseMetadata via GlobalTransforms but doesn't emit it as a standalone sub-object file. Pre-existing; unaffected by the dual-role classifier fix.
- **Required-member HasBeenSet handling (FIXED):** The C++ SDK tracks member presence via `HasBeenSet`, not required-ness. In C2J, `CppClientGenerator#generateSourceFiles` unconditionally clears `required` on EVERY modeled member ("so we can do a value has been set check on all fields"), then `addRequestIdToResults` injects `ResponseMetadata` as required — so the injected `ResponseMetadata` is the ONLY member rendered with no `HasBeenSet()` getter + flag `= true` (in a `useRequiredField=true` context: sub-object/request; a pure result uses `useRequiredField=false` so even it inits `= false`). Every modeled member — plain `@required` (JSON) AND `@required @clientOptional` (the 17 query/xml services) — renders a getter + `= false`. The Smithy plugin does NOT mirror C2J's model mutation (that would discard `@required`, which serde/validation will want). Instead `MemberRenderer` keys the always-present treatment on **recognizing the injected `ResponseMetadata`** (member named `ResponseMetadata` whose target is the `ResponseMetadata` structure — exactly how C2J identifies it), gated on `emitHasBeenSet` (the `useRequiredField` proxy: `forStructure`=true, `forResult`=false), excepting event-stream / raw-streaming-payload members. `@required` is left intact on all members. `GlobalTransforms.injectResponseMetadata` fails fast (`IllegalStateException`) if a model already defines a `ResponseMetadata` shape or member, so the name-based recognition stays unambiguous (verified: 0 of 433 models define one). `GlobalTransforms.RESPONSE_METADATA` is the single shared name constant. Verified end-to-end on EC2 (identical to C2J): 747 results init `= false`, 4 dual-role sub-objects (`Reservation`/`Snapshot`/`Volume`/`VolumeAttachment`) init `= true`; `VolumeDetail.Size` (`@required @clientOptional`) → getter + `= false`. NOTE: keying on `@clientOptional` would be WRONG — absent from the 380 JSON services whose plain `@required` members C2J also treats as optional (e.g. DynamoDB `GetItemRequest.TableName`).
- **Enum Windows-macro #undef guard (FIXED):** C2J's `ModelEnumHeader.vm` wraps enum values that collide with a Windows preprocessor macro in `#if defined(_WIN32) && defined(X) / #undef X / #endif`, driven by `PlatformAndKeywordSanitizer.PREDEFINED_SYMBOLS_MAPPING` (namespace-keyed: `EC2→interface`, `DynamoDB→IN`, `S3Crt→IGNORE`). The Smithy `EnumRenderer.renderHeader` now emits the same guard (before the namespace block) via `predefinedWindowsSymbols(serviceNamespace, values)`, mirroring that mapping. Fixes e.g. `NetworkInterfaceType.h` (`interface` value). Per-service/namespace keyed; other services with the same value do not emit it.
- **ShapeClassifier dual-role fix (FIXED):** structures that are both an operation output AND a member target (e.g. lambda FunctionConfiguration/AliasConfiguration/EventSourceMappingConfiguration/Concurrency/FunctionEventInvokeConfig) are now emitted as sub-objects too, matching C2J. Verified: lambda Only-in-C2J model files 10 -> 0; no spurious over-emission; sqs unchanged.
- **Deprecated-orphan dead files (global, ACCEPTED):** When a shape is reachable ONLY through `@deprecated` member(s), C2J still emits a model file for it, while the Smithy plugin omits it. Root cause is a C2J bug: `C2jModelToGeneratorModelTransformer.removeUnreferencedShapes()` is a single, non-transitive pass over `referencedBy`, so it removes only the first-order orphan (usually the intermediate list/map, which emits no file) and still emits the struct/enum that list pointed at as a dead, unreferenced file. The Smithy plugin's `computeReachableShapes` walks only surviving edges and correctly omits the whole orphan subtree. **Proven safe:** across all 433 services this drops files in 17 (e.g. ec2: AssociatedTargetNetwork/AssociatedNetworkType/ElasticGpuSpecification/ElasticInferenceAccelerator/LaunchTemplateElasticInferenceAccelerator; guardduty: 32) with **0 dangling references** — a shape shared with any non-deprecated reference is always kept (verified by `GlobalTransformsTest.dropDeprecatedMembers_sharedTargetSurvivesViaNonDeprecatedReference`). Smithy output is strictly cleaner; accepted rather than replicating C2J's dead files.

## rds
- SourceRegion member injected by SourceRegionTransform is present and structurally identical to C2J at the member/accessor level (verified Task 2). Remaining rds diffs are the two global deltas above.

## docdb
_(none yet)_

## neptune
_(none yet)_

## lambda
_(none yet)_

## sqs
_(none yet)_

## apigateway
_(none yet)_

## apigatewayv2
_(none yet)_

## ec2
- Result naming: operation-output result classes use `Response` via ResultRenderer+ShapeUtil.getResultSuffix; nested `*Result` domain structs renamed to `*Response` by Ec2Transforms. Verified 0 Result/Response file mismatches vs C2J.
- SpotInstanceState `disabled` value present (parity).
- SecureBlobAttributeValue (FIXED via Ec2Transforms): upstream `aws/aws-models` itself diverges — the C2J `ec2/<date>/service-2.json` models `ModifyInstanceAttributeRequest.UserData -> SecureBlobAttributeValue -> SecureBlob(@sensitive)`, but the upstream Smithy `ec2/smithy/model.json` still targets the non-sensitive `BlobAttributeValue` (verified against upstream on master). Re-syncing the Smithy model would NOT fix it (upstream Smithy lacks the shape). `Ec2Transforms.addSecureBlobUserData` mirrors the C2J modeling in the Smithy model at generation time: adds `SecureBlob`(@sensitive -> CryptoBuffer) + `SecureBlobAttributeValue{Value}` and repoints `UserData`, which orphans `BlobAttributeValue` so it drops from the emitted set exactly as in C2J. Self-retires (no-op) once the upstream Smithy model catches up. Temporary compensation for upstream data lag; the durable fix is an upstream aws-models correction. Note: the generated `SecureBlobAttributeValue.{h,cpp}` still differs from C2J only in the stubbed-serde bodies (global delta above).
- Deprecated-orphan dead files: 5 shapes / 10 files (AssociatedTargetNetwork, AssociatedNetworkType, ElasticGpuSpecification, ElasticInferenceAccelerator, LaunchTemplateElasticInferenceAccelerator) — see global "Deprecated-orphan dead files" delta above.
- OUT OF SCOPE (remain C2J, documented): ~180 legacy error-code injection, CopySnapshot presign, custom endpoint-enum template. These are client/error/endpoint artifacts, not model-shape.
- Remaining diffs are the two global deltas (stubbed serde, doc reflow).

## S3 serde-phased customizations (deferred until Smithy serde lands)
- `markChecksumMembers` (S3 `CHECKSUM_MEMBERS_ENUMS`): checksum members drive request serialization
  only; no model-header delta today. Implement as an `S3Transforms` marker step when serde is
  un-stubbed. Map (member → algorithm value): ChecksumCRC32→CRC32, ChecksumCRC32C→CRC32C,
  ChecksumSHA1→SHA1, ChecksumSHA256→SHA256, ChecksumSHA512→SHA512, ChecksumXXHASH64→XXHASH64,
  ChecksumXXHASH3→XXHASH3, ChecksumXXHASH128→XXHASH128, ChecksumMD5→MD5. (ChecksumCRC64NVME NOT mapped.)
- `injectAccessLogTagQuery` (S3 `customizedAccessLogTag` querystring map on every request):
  **IMPLEMENTED** (Task 7) — `S3Transforms.injectAccessLogTagQuery` injects a `customizedAccessLogTag`
  `map<string,string>` member (targeting `com.amazonaws.s3#CustomizedAccessLogTag`, key+value
  `smithy.api#String`) onto every operation request shape, appended last, idempotent. This closes the
  `.h` member-accessor delta (`GetCustomizedAccessLogTag` / `SetCustomizedAccessLogTag` /
  `WithCustomizedAccessLogTag` / `AddCustomizedAccessLogTag` / `m_customizedAccessLogTag`). The
  querystring binding (`location=querystring`, `customizedQuery=true` → `AddQueryStringParameters`
  serde) is still DEFERRED until Smithy serde lands; no `@httpQuery`/`@httpQueryParams` trait is
  attached yet, to avoid perturbing stubbed request emission.

### Task 7 investigation note (evidence correction — access-log IMPLEMENTED, checksum DEFERRED)
The two "serde only" labels above are imprecise: **both customizations DO produce an observable
model-HEADER delta today** in C2J vs the current `--use-smithy-models` output. Per a later controller
decision, the **access-log tag member injection is now IMPLEMENTED** (the `.h` accessors are a pure
model-shape delta, closeable by a standalone `S3Transforms` injection; only its querystring serde
binding is deferred). **Checksum stays DEFERRED** — it is not closeable by a marker transform without
renderer work. Evidence:

- **Checksum (header delta, needs MemberRenderer support):** `markChecksumMembers` sets
  `ShapeMember.checksumMember/checksumEnumMember`, which C2J's *header* template
  `ModelClassMembersAndInlines.vm` (lines 56–59, 100–101) consumes to emit a setter side-effect —
  e.g. `SetChecksumCRC32(...)` also calls `SetChecksumAlgorithm(ChecksumAlgorithm::CRC32);` (and a
  `const char*` overload). Confirmed present in C2J `generated/.../PutObjectRequest.h`
  (`SetChecksumCRC32/CRC32C/SHA1/SHA256/SHA512/MD5/XXHASH64/XXHASH3/XXHASH128`), and correctly ABSENT
  on the unmapped `ChecksumCRC64NVME`. The Smithy `MemberRenderer` setter bodies emit only
  `<field>HasBeenSet = true; ...` and never `SetChecksumAlgorithm(...)`; `RequestRenderer.renderChecksumImpls`
  only handles the separate `@httpChecksum` trait impls (`GetChecksumAlgorithmName`, `ChecksumAlgorithmIsSet`,
  etc. — the `ModelClassChecksumMembers.vm` concern), not the value-member setter side-effect. So a
  *marker* transform alone is inert: closing this delta requires `MemberRenderer` to grow bespoke
  logic that reads the marker. Deferred to the render/serde phase.

- **Access-log tag (header delta — IMPLEMENTED; query-binding serde deferred):**
  `injectAccessLogTagQuery` (S3RestXmlCppClientGenerator.java ~299–340) injects a real
  `customizedAccessLogTag` `map<string,string>` member (`location=querystring`,
  `customizedQuery=true`) into EVERY request input. C2J's header template renders full accessors —
  confirmed in C2J `generated/.../PutObjectRequest.h` and others (`GetCustomizedAccessLogTag`,
  `SetCustomizedAccessLogTag`, `WithCustomizedAccessLogTag`, `AddCustomizedAccessLogTag`,
  `m_customizedAccessLogTag`, `m_customizedAccessLogTagHasBeenSet`). The Smithy S3 model
  (`smithy/api-descriptions/s3.json`) has ZERO occurrences. `S3Transforms.injectAccessLogTagQuery`
  now mirrors the C2J injection at the model-shape level: it appends the `customizedAccessLogTag`
  `map<string,string>` member to every request input (idempotent), closing the `.h` accessor delta.
  The query-string binding is intentionally NOT modeled yet: no `@httpQuery`/`@httpQueryParams` trait
  is attached, because that would engage the (stubbed) serde/render path and risk perturbing request
  emission. For restXml an unbound member would be misclassified as a payload member during serde;
  the correct query-param binding (`customizedQuery` loop in `AddQueryStringParametersToRequest.vm`)
  lands with the querystring serde work. Byte-parity of the querystring serialization is a Task 9
  follow-up once Smithy serde is un-stubbed.
