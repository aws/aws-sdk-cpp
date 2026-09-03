# 1.11.886 (2026-09-03)

## Service Updates
* **Bedrock AgentCore Control**: AgentCore Identity adds Consent Portal APIs to manage portals that let end users grant OAuth authorization for agents to access resources. AgentCore Evaluation adds trace source selection by log group prefix, custom or source log group result destinations, and metrics namespace customization.
* **Bedrock AgentCore**: Adds log group name prefix trace source selection, custom or source log group result destinations, and metrics namespace customization
* **Connect**: This release enables TagOnCreate for Rule resource on CreateRule API. It also introduces a new field called PreEvaluationFilters to Rule resource, thereby impacting all Create, Update, Describe and Search APIs for Rules
* **ECS**: Adds a critical parameter to the Amazon ECS managed daemon APIs that controls whether a daemon task failure drains the container instance. Non-critical daemon failures no longer drain the instance or block instance registration.
* **EKS**: Deprecate EncryptionConfig resources field. Amazon EKS encrypts all Kubernetes API data with envelope encryption by default for clusters running Kubernetes version 1.28 or higher, so this field no longer affects which resources are encrypted.
* **Elastic Load Balancing v2**: This release adds support for sending TCP resets for Gateway Load Balancer when a flow's idle timeout expires, or when a target becomes unhealthy or is deregistered. This adds updates the CLI documentation.
* **GuardDuty**: Adding support for Sequence Activities in GuardDuty Findings
* **SFN**: Updates Step Functions API documentation around CloudTrail, Execution name reuse and sort order of ListExecutions API
* **SocialMessaging**: Adding support for WhatsApp Flows with endpoints.
* **Transcribe**: Amazon Transcribe now supports specifying up to 29 PII entity types in the ContentRedaction configuration of a StartTranscriptionJob request, allowing all supported entity types to be redacted in a single batch transcription job.
* **Transfer**: AWS Transfer Family SFTP Connectors now support specifying an ordered list of AWS Secrets Manager version stages for secret retrieval. This enables seamless credential rotation workflows where external partners may take time to update their systems with new credentials.
* **drs**: AWS Elastic Disaster Recovery now includes source server architecture in SourceProperties to identify x86 and ARM64 systems.
* **evs**: Amazon EVS now allows users to set, update, and retrieve values for parameters that apply across all EVS Environments in their account at a regional level, such as the VCF License portability core count.

# 1.11.885 (2026-09-02)

## SDK Highlights
* **Bug Fix**: Fix dropped endpoint built-in parameters and signer name
* **Bug Fix**: Pass service name to Smithy endpoint providers

## Service Updates
* **AppIntegrations**: This release adds a force parameter to DeleteApplication and a ConflictException to UpdateApplication, letting customers delete applications with existing associations in one call and get a clear error when an update conflicts with the application's current state.
* **Bedrock AgentCore**: Batch evaluation now supports up to 10 CloudWatch log groups per CloudWatchLogsSource
* **EC2**: This release adds support to retain interruptible Capacity Reservations in an active state when all capacity is reclaimed.
* **MWAA**: Enabled customers to clear optional S3 paths (plugins, requirements, and startup script) for their Amazon MWAA environments by accepting empty strings for the associated fields in UpdateEnvironment requests.
* **MediaLive**: AWS Elemental MediaLive now supports AB forensic video watermarking
* **SageMaker FeatureStore Runtime**: Amazon SageMaker Feature Store now supports the UpdateRecord API, enabling partial updates to individual feature values in an existing Online Store record without rewriting the entire record. This reduces write payloads and latency for high-frequency feature-level writes .
* **SageMaker**: Amazon SageMaker Feature Store now supports the Standard V2 online store type, which enables feature-level writes to feature groups. You can select Standard V2 when creating a feature group, and update the storage type of an existing feature group via UpdateFeatureGroup.
* **mgn**: AWS Transform for migrations adds a second network migration option - apply your source security posture to existing VPCs. Upload a source network file with firewall rules, tag the in-scope VPCs, and AWS Transform matches source subnets to them by CIDR and generates the security groups.
* **odb**: Adds the ListFlexComponents API for listing the flex components available for a given DB system shape.

# 1.11.884 (2026-09-01)

## Service Updates
* **Bedrock AgentCore Control**: Online evaluation configurations now support up to 25 evaluators. CloudWatch Logs data sources for online evaluation now support up to 10 log groups.
* **EC2**: Update UserData and UploadPolicy shapes to use SecureBlob
* **GuardDuty**: Amazon GuardDuty now supports custom detection rules, including APIs to manage rule associations and organization-level configurations.
* **IoTSiteWise**: AWS IoT SiteWise Scenario Discovery now supports mounting Amazon S3 data directly into pipeline task containers via S3 Access Points, and configuring additional ephemeral storage per task. Mount configurations can be overridden at execution time. See the API guide for details.
* **Kinesis**: Amazon Kinesis Data Streams now supports a dry run feature for data-plane APIs to validate the permissions and request parameters. If all checks complete successfully, the API returns a 'DryRunOperationException', confirming the request would have succeeded without the 'DryRun' parameter.
* **Lambda**: AWS Lambda now provides configurable control over S3 direct access, allowing you to explicitly enable or disable how functions stream file reads directly from S3 buckets. This gives you flexibility to tune data access behavior based on your workload requirements, independent of memory size.
* **Lightsail**: This release adds support for the Amazon Lightsail GetProfile API, which returns the profile for the specified account.
* **Marketplace Agreement**: This release adds renewal support for AWS Marketplace private offers. Agreements report whether they renew and, if not, why. Renewal terms add price increases, renewal limits, renewal decision deadlines, and payment schedule templates. SearchAgreements adds filters.
* **Marketplace Discovery**: GetOfferTerms now returns renewalTerm for offers with pre-authorized renewals, exposing maxRenewals, lockoutPeriod, adjustmentDeadline, priceIncrease (fixed percentage or percentage range), and termTemplates (renewal payment schedules). Enables buyers to view renewal pricing and terms.
* **MediaConvert**: Adds support for AAC passthrough. Adds ManifestCues option to support HLS manifest Cue marker passthrough. Adds playback device compatibility mode for DASH H.265 outputs. Adds TTML caption styling options. Adds interlace mode support for XAVC HD Intra CBG profile.
* **SESv2**: Added support for managing SMIME signing certificates for email identities, including associating, listing, and disassociating certificates. Added the UpdateConfigurationSet operation to configure message security options such as signing scheme.
* **TaxSettings**: France and Monaco Additional Info changes

# 1.11.883 (2026-08-31)

## Service Updates
* **Agent Registry**: Release HTTP and AGUI descriptors to the dataplane model

# 1.11.882 (2026-08-31)

## SDK Highlights
* **Documentation**: removes errant backtick in android documentation
* **Feature**: Add clock skew header that adjusts request signing timestamps to match the service clock

## Service Updates
* **Agent Registry Control**: AWS Agent Registry becomes Generally Available
* **Agent Registry**: AWS Agent Registry becomes Generally Available
* **Connect**: Added support for global routing on Amazon Connect Global Resiliency instances. New APIs GetCrossRegionRouting and UpdateCrossRegionRouting allow you to view and control cross-region contact routing between linked instances, so both Regions are active at all times.
* **ControlTower**: Updated the descriptions for the AWS Control Tower ListEnabledControls API parameters to make them more accurate and intuitive.
* **Customer Profiles**: This release introduces new APIs for segment membership events allowing segment definition membership events to be exported to a kinesis stream for downstream processing. Additionally, includes new calculated attribute statistic and 2 new segment dimension types.
* **DevOps Agent**: Adds support for Slack bidirectional communication configuration in AWS DevOps Agent agent spaces.
* **KafkaConnect**: Amazon MSK Connect now supports restarting newly created connectors via the asynchronous RestartConnector API. Restart all tasks or only failed tasks, while preserving configuration and committed offsets. This returns a connector operation ARN that you can track with DescribeConnectorOperation.
* **Kinesis**: Adds support for data delivery to Amazon S3 Tables (Apache Iceberg) and general purpose Amazon S3 buckets with new CreateChannel, UpdateChannel, DeleteChannel, DescribeChannel, and ListChannels APIs for Amazon Kinesis Data Streams.
* **Pinpoint SMS Voice V2**: AWS End User Messaging SMS now returns ConditionalBehavior on DescribeRegistrationFieldDefinitions, allowing you to programmatically discover which registration fields are required, optional, or disallowed based on the values of other fields in the same form.
* **QuickSight**: This release adds support for managing apps in Amazon QuickSight with ListApps, SearchApps, DescribeApp, DescribeAppPermissions, UpdateAppPermissions, and DeleteApp
* **SageMaker**: Amazon SageMaker Batch Transform now supports G6e instances, powered by NVIDIA L40S Tensor Core GPUs. G6e instances are the most cost-efficient GPU instances for deploying generative AI models and the highest-performance GPU instances for spatial computing workloads.
* **Support**: AWS Support now allows up to 10 attachments (150 MB each) per case correspondence, up from 3 at 5 MB. Customers can share large diagnostic logs, heap dumps, and packet captures directly in cases to reduce back-and-forth and speed up resolution. Available in US East, US West, and Europe (Ireland).
* **Workspaces Instances**: Amazon WorkSpaces Core managed instances now support nested virtualization. Customers can enable nested virtualization with supported instance types at launch via CpuOptions.NestedVirtualization in CreateWorkspaceInstance to run hypervisors and virtual machines inside their WorkSpaces Instance.

# 1.11.881 (2026-08-28)

## SDK Highlights
* **Dependency Update**: Remove pipx invocation, use clang-format on build system
* **Documentation**: fix redirect in docs website

## Service Updates
* **Bedrock Agent**: Adds an optional syncSchedule field to CreateDataSource and UpdateDataSource for Managed Knowledge Bases data source connectors, so a data source can sync automatically on a daily, weekly, or monthly schedule.
* **Bedrock AgentCore**: AgentCore Memory now supports direct ingestion into long-term memory via IngestData API
* **Cognito Identity Provider**: Adds two new operations - GetClientToken which allows M2M auth through the SDK, and DescribeTermsByClient to find which Terms are associated with a user-pool client without knowing the Terms resource id.
* **ECS**: Amazon Elastic Container Service - This release adds support for early success criteria on ECS rolling deployments, letting deployment complete once a configurable percentage of tasks are healthy, with configurable BLOCKING (required) or DEFERRED (asynchronous) cleanup of previous service revisions.
* **HealthLake**: New HealthLake API, RestoreFHIRDatastore, providing the capability to restore active datastores to a point in time within the last 30 days or recover a deleted datastore from the delete snapshot.
* **PartnerCentral Selling**: Releasing PARC, new APN Program that lets sellers add solftware revenue details to aws opportunity summary

# 1.11.880 (2026-08-27)

## SDK Highlights
* **Bug Fix**: Compare generated protocol-test requests semantically instead of byte-for-byte: XML bodies are compared canonically via tinyxml2, form-urlencoded bodies and URI query strings are compared as unordered parameter sets, body assertions are skipped for test vectors with no body, and generated timestamp values are fixed.

## Service Updates
* **CloudWatch Logs**: Added resultCount to QueryStatistics in GetQueryResults. This field returns the total number of output rows in the final result set, helping customers programmatically determine whether a query produced results after all operations including post-aggregation filters.
* **CodeDeploy**: Added a deploymentMode parameter to CreateDeployment. Set it to RESTART to restart an EC2 and on-premises fleet, using the last successful revision, honoring Deployment Configuration.
* **Cognito Identity Provider**: Adds the AdminDeleteSoftwareToken API operation, enabling administrators to remove a user's registered TOTP (software token) MFA configuration from a user pool.
* **DataZone**: Add cascadeDelete to DeleteDomain. When specified, DataZone recursively deletes all projects, environments, subscriptions, and their underlying AWS resources before removing the domain. Deletion progress is reported via deleteProgress and resource failures via failureReasons on GetDomain.
* **EC2**: EC2 allows AMI owners to define compatible instance types on their AMIs, blocking RunInstances calls automatically for launches on non-permitted instance types.
* **Lambda Microvms**: Added InsufficientCapacityException to RunMicrovm for capacity-related failures. Added lifecycle status field (AVAILABLE, DEPRECATED) to ListManagedMicrovmImageVersions. Added ConflictException to CreateMicrovmAuthToken and CreateMicrovmShellAuthToken for unregistered MicroVMs.
* **OpenSearch**: Updating SDK and CLI documentation for AttachDataSource API.
* **RDS**: Adding support for the full snapshot size, in bytes, of DB instance snapshots.

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
