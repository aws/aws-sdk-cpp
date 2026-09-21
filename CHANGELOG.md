# 1.11.897 (2026-09-21)

## Service Updates
* **Bedrock AgentCore Control**: Amazon Bedrock AgentCore Harness now supports lifecycle hooks for invocations and tool calls, with Lambda, SNS, and EventBridge targets. This release also adds apiBase for custom OpenAI-compatible endpoints
* **Bedrock AgentCore**: Amazon Bedrock AgentCore Harness now supports lifecycle hooks for invocations and tool calls, with Lambda, SNS, and EventBridge targets. This release also adds apiBase for custom OpenAI-compatible endpoints.
* **DocDB**: Add support for CopyTagsToSnapshot field in CreateDbCluster, ModifyDbCluster, RestoreDbClusterFromSnapshot and RestoreDbClusterToPointInTime for DocumentDB.
* **SageMaker**: Add support for r6i, m8i, c8i, r8i instance types in Training and Processing
* **billingconductor**: Launching Auto Billing Transfer Billing Group Creation Preference feature

# 1.11.896 (2026-09-18)

## SDK Highlights
* **Bug Fix**: Fixed bug where non-expiry would fail to return true on IsExpired

## Service Updates
* **AppIntegrations**: This release adds support for A2A servers via the ApplicationType and AuthConfig fields, allowing customers to register their agent-to-agent servers with API key authentication.
* **Connect**: This release adds the ListSecurityProfileAIAgents API and updates the CreateSecurityProfile and UpdateSecurityProfile APIs to support the AllowedAIAgents field on security profiles, allowing customers to manage the 3P AI agents associated with a security profile for Agent-to-Agent interactions.
* **DataZone**: Adds support for specifying Notebook type
* **EC2**: This release adds documentation for the T8i instance family to the EC2 ModifyDefaultCreditSpecification and GetDefaultCreditSpecification APIs.
* **Glue**: Introducing AWS Glue Data Quality advanced rule recommendations for faster recommendations. This capability uses Amazon Athena to analyze a sample of table data and Amazon Bedrock to recommend DQDL rules.
* **IVS RealTime**: GetParticipant, ListParticipantEvents, ListParticipantReplicas, StartParticipantReplication, and StopParticipantReplication now accept participant IDs containing underscores.
* **QConnect**: Amazon Connect AI Agents now support multi-agent orchestration and structured JSON input and output messaging for orchestration agents.
* **SageMaker**: Adds support for the hub content resource in SageMaker Search.
* **Transcribe**: Amazon Transcribe now lets you encrypt your custom vocabularies, custom vocabulary filters, and custom language models with a customer managed AWS KMS key instead of an AWS owned key, and adds a new UpdateLanguageModel operation to transition CLM encryption to a different KMS key.

# 1.11.895 (2026-09-17)

## Service Updates
* **Bedrock AgentCore**: Batch evaluation now supports evaluating specific traces within a session. Each session can specify up to 100 trace IDs to evaluate.
* **Connect**: Made the replicaAlias attribute optional in the ReplicateInstance API to support Global routing for Amazon Connect Global Resiliency (ACGR) instances. This change maintains backward compatibility. When onboarding to ACGR without Global routing, you must specify a custom replicaAlias in your API call
* **EC2**: Adding support for "Tunnel" VPC Endpoint
* **GuardDuty**: This change surfaces AI Protection resources on existing public IAM attack sequences. Customers will now see which model was accessed and whether a guardrail intervened as part of the credential-compromise sequence.
* **IoT Wireless**: Adds Multi-frame GNSS support to the AWS IoT Core Device Location GetPositionEstimate API. The new GnssMultiFrame measurement type improves location accuracy by combining multiple GNSS signal captures (2, 4, 8, 16, or 32) from the same device to estimate its position.
* **Notifications**: Added support for attachments on managed notification events. Added support to access and subscribe sensitive managed notification events.
* **SESv2**: Added support to query the tenant name for BatchGetMetricData and CreateExportJob APIs to filter metrics and messages at the tenant level.
* **SNS**: SNS API reference documentation update
* **SocialMessaging**: Add support for WhatsApp Calling APIs.
* **VPC Lattice**: Adding support for CIDR Resource Configuration

# 1.11.894 (2026-09-16)

## SDK Highlights
* **Feature**: Smithy based codegen for shapes part 4. Gated on --use-smithy-models (default off)

## Service Updates
* **Bedrock AgentCore Control**: Adds support for a new DELETE FAILED status for Bedrock AgentCore Runtimes and Bedrock AgentCore Runtime Endpoints.
* **Connect**: Adds support for ContactAnalysis via ListContactReferences.
* **Customer Profiles**: This release introduces the SearchRecommendations API, which retrieves recommendations for a profile identified by a search key.
* **EC2**: Releasing new EC2 R9g and R9gd memory-optimized instances powered by AWS Graviton5 processors, with up to 25 percent better compute performance than R8g instances, faster DDR5 memory, and up to 100 Gbps network and 72 Gbps EBS bandwidth. R9gd instances additionally provide local NVMe SSD storage.
* **Elastic Beanstalk**: Adds support to create and manage Elastic Beanstalk Cluster Environments.
* **Marketplace Catalog**: This release enhances the ListEntities API to support issuerAccountId and SourceAuthorization filter for ResaleAuthorization entity.
* **resiliencehubv2**: Next Gen Resilience Hub now supports dependency insights (LLM-based insights about customer's service dependencies) and organization-level policy sharing (provision to share policy with member accounts for an organization)

# 1.11.893 (2026-09-15)

## Service Updates
* **Bedrock AgentCore Control**: Amazon Bedrock AgentCore Runtime now supports specifying the platform version of an agent runtime through the new platformVersion field on CreateAgentRuntime, UpdateAgentRuntime, and GetAgentRuntime.
* **Direct Connect**: AWS Direct Connect is introducing flat-rate pricing, a simplified billing model that gives you a fixed monthly price for dedicated connectivity with no per-gigabyte data transfer out charges within the selected pricing tier.
* **Transfer**: AWS Transfer Family now preserves the original source IP address using Proxy Protocol v2 when you place a Network Load Balancer in front of your server for SFTP connections.
* **WorkSpaces**: Added support for 4 new graphics-optimized compute types - Graphics.g7 (2xlarge, 4xlarge, 8xlarge, 12xlarge).

# 1.11.892 (2026-09-14)

## Service Updates
* **Billing**: Increased the maximum number of services returned in the supportEligibleSpendByService field of ListEnterpriseSupportLinkedAccountCharges
* **CodeDeploy**: AWS CodeDeploy now returns the deployment mode on GetDeployment and BatchGetDeployments. The new deploymentMode field on DeploymentInfo indicates whether a deployment used the standard deployment process or restarted the application using a previously installed revision (RESTART mode).
* **Glue**: Amazon Glue releasing the new API ListIntegrationTableProperties and adding IntegrationArn to TargetTableConfig
* **STS**: Increases the maximum session token size to 4,096 bytes and removes the packed policy size limit. Adds SessionTokenSize and SessionTokenUtilization fields and a new MinimumSessionTokenSize parameter. PackedPolicySize is deprecated.
* **billingconductor**: This release adds support for custom volume tiering. You can now define custom tiers on a pricing rule's tiering configuration, where each tier specifies a usage range and the rate applied to usage in that range.
* **imagebuilder**: This release adds a dryRun option to Image Builder create APIs (except CreateImage), structured failure context on failed images including component and distribution failure details, and step retry attempt tracking.

# 1.11.891 (2026-09-11)

## SDK Highlights
* **Bug Fix**: Fix JSON number parsing: avoid crash when printing large integer literals, saturate out-of-range double-to-int64 conversions instead of relying on undefined behavior, and correctly decode scientific-notation integers

## Service Updates
* **Batch**: Added new bulk job APIs (CancelJobs, TerminateJobs, TerminateServiceJobs) and new fields on ListJobs and ListServiceJobs responses. This allows customers to cancel or terminate multiple jobs in a single request. ListJobs and ListServiceJobs responses now include isCancelled and isTerminated fields.
* **ECS**: This feature adds support for setting the cpu architecture type that should be used to launch tasks for an Express Gateway Service.
* **Invoicing**: Add ListProcurementPortals and ListProcurementPortalSuppliers APIs to retrieve AWS-supported 3rd party procurement portals and their suppliers for e-invoice delivery and purchase order retrieval.
* **Lightsail**: Amazon Lightsail now lets you serve website content from a private Lightsail bucket through a Lightsail distribution. This release adds enablePrivateOriginAccess to the CreateDistribution and UpdateDistribution actions, plus new defaultRootObject and customErrorResponses options.
* **MediaConvert**: Adds Dolby Vision metadata to Probe results, including profile, level, and presence of the RPU, base layer, and enhancement layer. Adds video sample and display aspect ratios. Adds the UnprocessableEntityException (HTTP 422) error to Probe for recognized but malformed or corrupt inputs.
* **S3**: Updated S3 Object Lock Default Retention documentation.

# 1.11.890 (2026-09-10)

## SDK Highlights
* **Bug Fix**: Release the CRT connection when a bidirectional stream completes to fix a hang on client shutdown. Fix transcribe streaming to honor low speed limit instead of timeout for total request.

## Service Updates
* **Bedrock Agent**: TwelveLabs Marengo 3.0 is now an embedding model option in Amazon Bedrock Managed Knowledge Base. Create multimodal embeddings for video, audio, and image content that capture visual scenes, speech, and video cues, not just transcribed text.
* **EC2**: The CreateImage API now supports a BootModeOverride parameter to explicitly set UEFI boot mode on a new AMI, overriding the source instance's inherited boot mode.
* **Outposts**: Added fields to identify Outpost generation and rack scaling configuration on Outpost and CatalogItem resources.
* **RTBFabric**: AWS RTB Fabric now lets you control how traffic is routed to your responder gateway across Availability Zones. Set the new clientRoutingPolicy parameter  to keep traffic within the same Availability Zone or distribute traffic across all Availability Zones.
* **SageMaker**: This release adds the ability for customers to attach customer owned Elastic Network Interfaces (ENIs) to HyperPod cluster nodes.
* **resiliencehubv2**: This release adds the ListTestRunSourceEvents and ListTestRunDependencies APIs, which return the alarm state changes during a test run and the dependencies the run blocked.

# 1.11.889 (2026-09-09)

## SDK Highlights
* **Feature**: create async http api

## Service Updates
* **Connect**: Add metric configuration field to evaluation forms and ListEvaluationFormAIVersions API for retrieving AI-generated evaluation form versions
* **EC2**: This release adds support for sharing Amazon EBS volumes across AWS accounts using AWS Resource Access Manager (RAM). Consuming accounts can view shared volume metadata and create copies of shared volumes within the same Availability Zone, with optional re-encryption using their own KMS key.
* **ElementalInference**: This release adds contextual metadata, a feed output type that generates a descriptive summary of your media content along with IAB taxonomy and GARM suitability classifications. It also adds feed resource policies for granting cross-account access to a feed.
* **Lambda**: Updates documentation for lambda function timeout.
* **MediaLive**: MediaLive now supports Manual Style Control for vertical caption positioning in TTML, WebVTT, and Embedded captions, Contextual Metadata Enrichment via Elemental Inference, and an Output Usage field on MediaPackage v2 for Dynamic Multiview validation.
* **MediaPackageV2**: Dynamic Multiview enables viewers to watch multiple live video streams in a single combined output. Viewers can select from 6 preset tiled layouts. Create MediaPackage channels with Input Type MULTIVIEW and configure Available Layouts and Available Sources. See the API Documentation for details.
* **MediaTailor**: Added the AWS Service Request function type for MediaTailor Functions, enabling authenticated requests to AWS Elemental Inference for contextual ad targeting during ad insertion.
* **PCS**: This release adds support for custom Gres.conf configuration and Slurm version 26.05 in AWS PCS. Customers can now specify generic resource (GRES) settings to control how GPUs and other resources are configured and shared on their compute node groups.

# 1.11.888 (2026-09-08)

## Service Updates
* **Appflow**: Amazon AppFlow now supports key pair (RSA private key) authentication for the Snowflake connector. You can provide a privateKey in SnowflakeConnectorProfileCredentials, and password is no longer required. This is a non-breaking, additive change available via the AWS SDK and CLI.
* **CloudTrail**: Adds support for the RecursiveLogging trail setting, which suppresses recursive events generated when CloudTrail delivers logs to a trail's destinations.
* **Connect**: Releasing workload types feature. A proper launch announcement or details will follow up.
* **EC2**: Adds the InterfaceTypes field to NetworkCardInfo in the DescribeInstanceTypes response. This field identifies the network interface types supported by each network card.
* **Omics**: Added support for session policies in AWS HealthOmics Workflows, allowing customers to scope down IAM permissions for individual workflow runs without modifying the service role.
* **Pinpoint SMS Voice V2**: This feature will allow customers to specify an area-code when requesting a 10DLC number. Why it matters- Customers can now select a number that matches where their business is located.
* **S3 Control**: Adds support for Amazon S3 Object Lock variable retention.  Existing S3 APIs that support S3 Object Lock parameters now support two new parameters EventHold and EventHoldDuration at the object level, and DefaultEventHoldDuration at the bucket level.
* **S3**: Adds support for Amazon S3 Object Lock variable retention.  Existing S3 APIs that support S3 Object Lock parameters now support two new parameters EventHold and EventHoldDuration at the object level, and DefaultEventHoldDuration at the bucket level.
* **SageMaker**: Add support for InstancePreferences list for multiple instance type input support on SageMaker Training and Processing
* **mgn**: This release adds support for configuring the EBS volume initialization rate and delete on termination behavior in launch configuration template

# 1.11.887 (2026-09-04)

## SDK Highlights
* **Feature**: Add clock skew correction: the SDK adjusts request signing timestamps by the observed client-to-service skew and retries signature errors caused by skew, so requests keep working when the client clock is off. Disable with AWS_DISABLE_CLOCK_SKEW_CORRECTION.

## Service Updates
* **Bedrock**: New AWS REVIEW mode as supported data retention mode for Bedrock models
* **EC2**: Adds support for ValidateSecurityGroupQuotasForInterface, an API that specifically authorized AWS services use to validate security group rule quotas before creating an elastic network interface.
* **MediaTailor**: Elemental MediaTailor now supports two new Monetization Functions lifecycle hooks, Post Ads Response and Pre Manifest Insertion, and a VAST Request function type that calls a VAST or VMAP ad server. This release also adds Yield Optimization with demand from Amazon Publisher Services.
* **Service Quotas**: Service Quotas adds the AdjustableAtLevel property to QuotaContext, indicating whether a quota is adjustable at the account or resource level.

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
