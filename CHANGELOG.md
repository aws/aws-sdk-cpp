# 1.11.879 (2026-08-26)

## SDK Highlights
* **Documentation**: Announce the new CHANGELOG format (SDK Highlights and Service Updates) and upcoming inclusion of change notes in release notes

## Service Updates
* **DevOps Agent**: AWS DevOps Agent now supports trigger filter groups for Release Readiness Review, letting you control when the capability auto-triggers based on webhook events and target branches.
* **EC2**: Adds deleting state to possible VPC States.
* **License Manager User Subscriptions**: Released support for License Expiry field in ListProductSubscriptions API
* **Network Firewall**: Adding new status enum for Firewalls.
* **SageMaker**: Amazon SageMaker AI now supports ml.g7 instances for model optimization. You can now run model optimization jobs on ml.g7 instances, in supported AWS Regions.

# 1.11.878 (2026-08-25)

## Service Updates
* **Auto Scaling**: Adds support for Distribution Segments in mixed instances policies, providing ordered prioritization across On-Demand Capacity Reservations, Capacity Blocks, interruptible Capacity Reservations, and On-Demand capacity.
* **DevOps Agent**: Adds the UpdateApprovalAction API for resolving agent action approvals in AWS DevOps Agent agent spaces.
* **EC2**: Fleet feature to support Capacity Reservation Resource Groups with Amazon EC2 Capacity Blocks and interruptible Capacity Reservations
* **EKS**: This feature would give customers the ability to tune TerminatedPodGcThreshold configuration in an Amazon EKS cluster.
* **IAM Toolbox**: AWS Identity and Access Management (IAM) announces access troubleshooter, helping you debug access denied errors faster. Supported error messages now include an identifier you can use to retrieve detailed evaluations of the policies considered and their results. Preview in US East (N. Virginia).
* **IoT**: As part of this release, we are extending capability of AWS IoT Rules Engine to support IoT InfluxDB Action. The IoT InfluxDB action lets customers send messages from IoT sensors and applications to InfluxDB.
* **Marketplace Metering**: Updated documentation to clarify duplicate-billing prevention and BatchMeterUsage retry guidance
* **evs**: EVS now supports i7i.metal-48xl EC2 bare metal instance type, delivering high random IOPS performance with real-time latency, ideal for IO intensive and latency-sensitive workloads such as transactional databases, real-time analytics, and AI ML pre-processing.

# 1.11.877 (2026-08-24)

## SDK Highlights
* **Feature**: Add changelog fragment script and update CONTRIBUTING.md

## Service Updates
* **Batch**: Doc Update, Add note that UpdatePolicy applies only to EC2 managed compute environments
* **Bedrock**: Adds support for specifying an inference profile ID or ARN, or an application inference profile ARN as the target model in CreateAdvancedPromptOptimizationJob.
* **Connect Contact Lens**: This release adds the ExtractedInformation segment to the ListRealtimeContactAnalysisSegments API, enabling customers to retrieve information extracted from real-time contact analysis.
* **Connect**: This release adds the ExtractedInformation segment to the ListRealtimeContactAnalysisSegmentsV2 API, enabling customers to retrieve information extracted from real-time contact analysis.
* **DSQL**: Corrected the validation pattern on the ServiceName response field in the GetVpcEndpointServiceName API to match the values Amazon Aurora DSQL actually returns.
* **ElementalInference**: Added support for the GetFixture API, enabling customers to retrieve the details of a fixture from its fixture ID, and added the access role ARN to the CreateFeed, GetFeed, and UpdateFeed responses.
* **Kafka**: Amazon MSK Replicator now supports OAuth authentication when connecting to external Apache Kafka clusters, enabling customers to replicate data from clusters that require OAuth for client authentication. This new capability is supported in all AWS Regions where MSK Express brokers are available.
* **Launch Wizard**: Added accountConstraints and patternType to GetWorkload, ListWorkloads, GetWorkloadDeploymentPattern and ListWorkloadDeploymentPatterns for Launch Wizard
* **SecurityAgent**: Adding private and self-signed certificate configuration support for penetration tests
* **Timestream InfluxDB**: Service-managed parameter groups now only apply optimized defaults to DB Clusters automatically. New field effectiveDbParameterGroupIdentifier surfaces the parameter group actually applied.

# Announcement
We are moving the changelog to a new format and tying it to a new release process.

Changelog entries are grouped into sections. For example:
* **SDK Highlights**: SDK core feature updates will show up as SDK Highlights when updated.
* **Service Updates**: the daily service model updates are noted here.

We are also making GitHub releases the source of truth for a "release". The changelog will only be updated when the SDK source is "released", meaning a GitHub release with a tag, and the change notes for that release will be included as part of the release notes.

# Breaking changes in AWS SDK for C++
## [1.11.0](https://github.com/aws/aws-sdk-cpp/tree/1.11.0) (2022-01-24)
This release introduces a refactored Asynchronous API and restructures the File Hierarchy of the project source code. Additionally, the minimum required version of cmake was raised to 3.13.
* Asynchronous API refactoring is a partially breaking, backward incompatible change: all client methods such as OperationAsync and OperationCallable are no longer virtual methods but instead are conditionally compiled template methods. Having these methods as templates reduces the total binary size of the SDK by 40%. Individual client binary size may vary. In addition, it reduces build time of the SDK by up to 50% (release, unity build, SDK clients only).
  A code change may be required if your code inherits SDK’s Client classes and overrides the virtual async methods. Regular synchronous/blocking call methods are still available for override.
  Code changes are not required and SDK API are backward compatible if virtual async methods were not overwritten before.
* Scripts and IDE project files not using the provided cmake build infrastructure must be reviewed and updated to reflect source tree changes.

## [1.10.0](https://github.com/aws/aws-sdk-cpp/tree/1.10.0) (2021-11-07)
This release introduces a new endpoint resolution based on client configuration and request input parameters. Endpoint Discovery and ARN Resource APIs are deprecated.

## [1.9.0](https://github.com/aws/aws-sdk-cpp/tree/1.9.0) (2021-04-19)
This release introduces a new Amazon S3 client, providing high throughput for Amazon S3 GET and PUT operations. The all new S3 Client is implemented on the top of the AWS Common Runtime (CRT) libraries, and is aptly named the "S3 CRT client". Lastly, there are also configuration updates related to Endpoint Discovery.

## [1.8.0](https://github.com/aws/aws-sdk-cpp/tree/1.8.0) (2020-06-30)
Check our [Wiki](https://github.com/aws/aws-sdk-cpp/wiki/What’s-New-in-AWS-SDK-for-CPP-Version-1.8) for a comprehensive list of the featuers introduced on this version.

## [1.7.0](https://github.com/aws/aws-sdk-cpp/tree/1.7.0) (2018-11-15)

### aws-cpp-sdk-core
Add new dependencies: [aws-c-common](https://github.com/awslabs/aws-c-common), [aws-checksums](https://github.com/awslabs/aws-checksums) and [aws-c-event-stream](https://github.com/awslabs/aws-c-event-stream) to support S3 select streaming API. The API is implemented in C99 via libraries that are developed by AWS as well.

These libraries are downloaded and built as part of the CMake configure step. That can be disabled via the new switch `-DBUILD_DEPS=OFF`. The switch is set to ON by default.

### aws-cpp-sdk-s3
Add support for S3 `SelectContentObject` API.

## [1.6.0](https://github.com/aws/aws-sdk-cpp/tree/1.6.0) (2018-08-28)

### aws-cpp-sdk-core

Code for future SDK instrumentation and telemetry

## [1.5.0](https://github.com/aws/aws-sdk-cpp/tree/1.5.0) (2018-07-25)

### aws-cpp-sdk-core

`cJSON` is now the underlying JSON parser, replacing JsonCpp.

`JsonValue` is now strictly a DOM manipulation class. All reads and serialization must be done through the new
`JsonView` class. The `JsonView` is lightweight and follows the `string_view` concept from C++17 such that, it does not
extend the lifetime of its underlying DOM (the `JsonValue`).

## [1.4.0](https://github.com/aws/aws-sdk-cpp/tree/1.4.0) (2018-02-19)

### aws-cpp-sdk-s3

Fixed bug in Aws::S3::Model::CopyObjectResult, added CopyObjectResultDetails as a member of CopyObjectResult.

We were missing a member of CopyObjectResult because of name conflict and related files are overwritten when we generate the source code.

We renamed this member to CopyObjectResultDetails.

### aws-cpp-sdk-config

Removed unused enum values.

From the service release notes:
> AWS Config updated the ConfigurationItemStatus enum values. The values prior to this update did not represent appropriate values returned by GetResourceConfigHistory. You must update your code to enumerate the new enum values so this is a breaking change. To map old properties to new properties, use the following descriptions: New discovered resource - Old property: Discovered, New property: ResourceDiscovered. Updated resource - Old property: Ok, New property: OK. Deleted resource - Old property: Deleted, New property: ResourceDeleted or ResourceDeletedNotRecorded. Not-recorded resource - Old property: N/A, New property: ResourceNotRecorded or ResourceDeletedNotRecorded.


## [1.3.0](https://github.com/aws/aws-sdk-cpp/tree/1.3.0) (2017-11-09)

### aws-cpp-sdk-s3

Changed the constructor of AWSAuthV4Signer to use PayloadSigningPolicy instead of a boolean.


## [1.2.0](https://github.com/aws/aws-sdk-cpp/tree/1.2.0) (2017-09-24)

### aws-cpp-sdk-transfer

Changed ownership of thread executor in TransferManager.


## [1.1.1](https://github.com/aws/aws-sdk-cpp/tree/1.1.1) (2017-06-22)

### aws-cpp-sdk-transfer

Introduced a builder function to instantiate TransferManager
as a shared_ptr. That ensures that other threads can increase
TransferManager's lifetime until all the callbacks have finished.
