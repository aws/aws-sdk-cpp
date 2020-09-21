/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resourcegroupstaggingapi/model/DescribeReportCreationResult.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryResult.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesResult.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysResult.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesResult.h>
#include <aws/resourcegroupstaggingapi/model/StartReportCreationResult.h>
#include <aws/resourcegroupstaggingapi/model/TagResourcesResult.h>
#include <aws/resourcegroupstaggingapi/model/UntagResourcesResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ResourceGroupsTaggingAPI
{

namespace Model
{
        class DescribeReportCreationRequest;
        class GetComplianceSummaryRequest;
        class GetResourcesRequest;
        class GetTagKeysRequest;
        class GetTagValuesRequest;
        class StartReportCreationRequest;
        class TagResourcesRequest;
        class UntagResourcesRequest;

        typedef Aws::Utils::Outcome<DescribeReportCreationResult, ResourceGroupsTaggingAPIError> DescribeReportCreationOutcome;
        typedef Aws::Utils::Outcome<GetComplianceSummaryResult, ResourceGroupsTaggingAPIError> GetComplianceSummaryOutcome;
        typedef Aws::Utils::Outcome<GetResourcesResult, ResourceGroupsTaggingAPIError> GetResourcesOutcome;
        typedef Aws::Utils::Outcome<GetTagKeysResult, ResourceGroupsTaggingAPIError> GetTagKeysOutcome;
        typedef Aws::Utils::Outcome<GetTagValuesResult, ResourceGroupsTaggingAPIError> GetTagValuesOutcome;
        typedef Aws::Utils::Outcome<StartReportCreationResult, ResourceGroupsTaggingAPIError> StartReportCreationOutcome;
        typedef Aws::Utils::Outcome<TagResourcesResult, ResourceGroupsTaggingAPIError> TagResourcesOutcome;
        typedef Aws::Utils::Outcome<UntagResourcesResult, ResourceGroupsTaggingAPIError> UntagResourcesOutcome;

        typedef std::future<DescribeReportCreationOutcome> DescribeReportCreationOutcomeCallable;
        typedef std::future<GetComplianceSummaryOutcome> GetComplianceSummaryOutcomeCallable;
        typedef std::future<GetResourcesOutcome> GetResourcesOutcomeCallable;
        typedef std::future<GetTagKeysOutcome> GetTagKeysOutcomeCallable;
        typedef std::future<GetTagValuesOutcome> GetTagValuesOutcomeCallable;
        typedef std::future<StartReportCreationOutcome> StartReportCreationOutcomeCallable;
        typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
        typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
} // namespace Model

  class ResourceGroupsTaggingAPIClient;

    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::DescribeReportCreationRequest&, const Model::DescribeReportCreationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReportCreationResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetComplianceSummaryRequest&, const Model::GetComplianceSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceSummaryResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetResourcesRequest&, const Model::GetResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetTagKeysRequest&, const Model::GetTagKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagKeysResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetTagValuesRequest&, const Model::GetTagValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagValuesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::StartReportCreationRequest&, const Model::StartReportCreationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReportCreationResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::TagResourcesRequest&, const Model::TagResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::UntagResourcesRequest&, const Model::UntagResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourcesResponseReceivedHandler;

  /**
   * <fullname>Resource Groups Tagging API</fullname> <p>This guide describes the API
   * operations for the resource groups tagging.</p> <p>A tag is a label that you
   * assign to an AWS resource. A tag consists of a key and a value, both of which
   * you define. For example, if you have two Amazon EC2 instances, you might assign
   * both a tag key of "Stack." But the value of "Stack" might be "Testing" for one
   * and "Production" for the other.</p>  <p>Do not store personally
   * identifiable information (PII) or other confidential or sensitive information in
   * tags. We use tags to provide you with billing and administration services. Tags
   * are not intended to be used for private or sensitive data.</p> 
   * <p>Tagging can help you organize your resources and enables you to simplify
   * resource management, access management and cost allocation. </p> <p>You can use
   * the resource groups tagging API operations to complete the following tasks:</p>
   * <ul> <li> <p>Tag and untag supported resources located in the specified Region
   * for the AWS account.</p> </li> <li> <p>Use tag-based filters to search for
   * resources located in the specified Region for the AWS account.</p> </li> <li>
   * <p>List all existing tag keys in the specified Region for the AWS account.</p>
   * </li> <li> <p>List all existing values for the specified key in the specified
   * Region for the AWS account.</p> </li> </ul> <p>To use resource groups tagging
   * API operations, you must add the following permissions to your IAM policy:</p>
   * <ul> <li> <p> <code>tag:GetResources</code> </p> </li> <li> <p>
   * <code>tag:TagResources</code> </p> </li> <li> <p>
   * <code>tag:UntagResources</code> </p> </li> <li> <p> <code>tag:GetTagKeys</code>
   * </p> </li> <li> <p> <code>tag:GetTagValues</code> </p> </li> </ul> <p>You'll
   * also need permissions to access the resources of individual services so that you
   * can tag and untag those resources.</p> <p>For more information on IAM policies,
   * see <a
   * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage.html">Managing
   * IAM Policies</a> in the <i>IAM User Guide</i>.</p> <p> <i> <b>Services that
   * support the Resource Groups Tagging API</b> </i> </p> <p>You can use the
   * Resource Groups Tagging API to tag resources for the following AWS services.</p>
   * <ul> <li> <p> <a href="https://docs.aws.amazon.com/a4b">Alexa for Business
   * (a4b)</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/apigateway">API Gateway</a> </p> </li> <li>
   * <p> <a href="https://docs.aws.amazon.com/appstream2">Amazon AppStream</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/appsync">AWS AppSync</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/app-mesh">AWS App
   * Mesh</a> </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/athena">Amazon
   * Athena</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide">Amazon
   * Aurora</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/aws-backup">AWS Backup</a> </p> </li> <li> <p>
   * <a href="https://docs.aws.amazon.com/acm">AWS Certificate Manager</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/acm">AWS Certificate Manager
   * Private CA</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/clouddirectory">Amazon Cloud Directory</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/cloud-map">AWS Cloud
   * Map</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/cloudformation">AWS CloudFormation</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/cloudfront">Amazon
   * CloudFront</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/cloudhsm">AWS CloudHSM</a> </p> </li> <li> <p>
   * <a href="https://docs.aws.amazon.com/cloudtrail">AWS CloudTrail</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/cloudwatch">Amazon CloudWatch
   * (alarms only)</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/cloudwatch/?id=docs_gateway#amazon-cloudwatch-events">Amazon
   * CloudWatch Events</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/cloudwatch/?id=docs_gateway#amazon-cloudwatch-logs">Amazon
   * CloudWatch Logs</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/cloudwatch">Amazon Cloudwatch Synthetics</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/codebuild">AWS
   * CodeBuild</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/codecommit">AWS CodeCommit</a> </p> </li> <li>
   * <p> <a href="https://docs.aws.amazon.com/codeguru/latest/profiler-ug/">AWS
   * CodeGuru Profiler</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/codepipeline">AWS CodePipeline</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/codestar">AWS CodeStar</a> </p>
   * </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/codestar-connections/latest/APIReference/">AWS
   * CodeStar Connections</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/cognito">Amazon Cognito Identity</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/cognito">Amazon Cognito User
   * Pools</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/comprehend">Amazon Comprehend</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/config">AWS Config</a> </p> </li>
   * <li> <p> <a
   * href="http://aws.amazon.com/connect/resources/?whats-new-cards#Documentation">Amazon
   * Connect</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/data-exchange">AWS Data Exchange</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/data-pipeline">AWS Data
   * Pipeline</a> </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/dms">AWS
   * Database Migration Service</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/datasync">AWS DataSync</a> </p> </li> <li> <p>
   * <a href="https://docs.aws.amazon.com/devicefarm">AWS Device Farm</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/directconnect">AWS Direct
   * Connect</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/directory-service">AWS Directory Service</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/dynamodb">Amazon
   * DynamoDB</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/ebs">Amazon EBS</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/ec2">Amazon EC2</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/imagebuilder">EC2 Image Builder</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/ecr">Amazon ECR</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/ecs">Amazon ECS</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/eks">Amazon EKS</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/elastic-beanstalk">AWS Elastic
   * Beanstalk</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/efs">Amazon Elastic File System</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/elasticloadbalancing">Elastic Load
   * Balancing</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/elastic-inference">Amazon Elastic
   * Inference</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/elasticache">Amazon ElastiCache</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/elasticsearch-service">Amazon
   * Elasticsearch Service</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/medialive">AWS Elemental MediaLive</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/mediapackage">AWS Elemental
   * MediaPackage</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mediapackage">AWS Elemental MediaPackage
   * VoD</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mediatailor">AWS Elemental MediaTailor</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/emr">Amazon EMR</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/eventbridge">Amazon
   * EventBridge Schema</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/firewall-manager">AWS Firewall Manager</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/forecast">Amazon
   * Forecast</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/frauddetector">Amazon Fraud Detector</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/fsx">Amazon FSx</a> </p>
   * </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/s3/?id=docs_gateway#amazon-s3-glacier">Amazon
   * S3 Glacier</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/global-accelerator">AWS Global Accelerator</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/ground-station">AWS
   * Ground Station</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/glue">AWS Glue</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/guardduty">Amazon GuardDuty</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/inspector">Amazon Inspector</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/ivs">Amazon Interactive
   * Video Service</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/iotanalytics">AWS IoT Analytics</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/iot">AWS IoT Core</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/iot-device-defender">AWS IoT
   * Device Defender</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/iot-device-management">AWS IoT Device
   * Management</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/iotevents">AWS IoT Events</a> </p> </li> <li>
   * <p> <a href="https://docs.aws.amazon.com/greengrass">AWS IoT Greengrass</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/iot-1-click">AWS IoT
   * 1-Click</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/iot-sitewise">AWS IoT Sitewise</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/thingsgraph">AWS IoT Things
   * Graph</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/kendra">Amazon Kendra</a> </p> </li> <li> <p>
   * <a href="https://docs.aws.amazon.com/kms">AWS Key Management Service</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/kinesis">Amazon Kinesis</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/kinesis/?id=docs_gateway#amazon-kinesis-data-analytics">Amazon
   * Kinesis Data Analytics</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/kinesis/?id=docs_gateway#amazon-kinesis-data-firehose">Amazon
   * Kinesis Data Firehose</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/lambda">AWS Lambda</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/lex">Amazon Lex</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/license-manager">AWS License Manager</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/lightsail">Amazon
   * Lightsail</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/macie">Amazon Macie</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/machine-learning">Amazon Machine Learning</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/amazon-mq">Amazon
   * MQ</a> </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/msk">Amazon
   * MSK</a> </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/msk">Amazon
   * MSK</a> </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/neptune">Amazon
   * Neptune</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/vpc/latest/tgw/what-is-network-manager.html">AWS
   * Network Manager</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/opsworks">AWS OpsWorks</a> </p> </li> <li> <p>
   * <a href="https://docs.aws.amazon.com/opsworks">AWS OpsWorks CM</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/organizations">AWS
   * Organizations</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/pinpoint">Amazon Pinpoint</a> </p> </li> <li>
   * <p> <a href="https://docs.aws.amazon.com/qldb">Amazon Quantum Ledger Database
   * (QLDB)</a> </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/rds">Amazon
   * RDS</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/redshift">Amazon Redshift</a> </p> </li> <li>
   * <p> <a href="https://docs.aws.amazon.com/ram">AWS Resource Access Manager</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/ARG">AWS Resource
   * Groups</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/robomaker">AWS RoboMaker</a> </p> </li> <li>
   * <p> <a href="https://docs.aws.amazon.com/route53">Amazon Route 53</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/route53">Amazon Route 53
   * Resolver</a> </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/s3">Amazon
   * S3 (buckets only)</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker">Amazon SageMaker</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/savingsplans">Savings Plans</a>
   * </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/secretsmanager">AWS
   * Secrets Manager</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/securityhub">AWS Security Hub</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/servicecatalog">AWS Service
   * Catalog</a> </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/ses">Amazon
   * Simple Email Service (SES)</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sns">Amazon Simple Notification Service
   * (SNS)</a> </p> </li> <li> <p> <a href="https://docs.aws.amazon.com/sqs">Amazon
   * Simple Queue Service (SQS)</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/swf">Amazon Simple Workflow Service</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/step-functions">AWS Step
   * Functions</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/storagegateway">AWS Storage Gateway</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/systems-manager">AWS Systems
   * Manager</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/transfer">AWS Transfer for SFTP</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/vpc">Amazon VPC</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/waf">AWS WAF</a> </p> </li> <li>
   * <p> <a href="https://docs.aws.amazon.com/waf">AWS WAF Regional</a> </p> </li>
   * <li> <p> <a href="https://docs.aws.amazon.com/worklink">Amazon WorkLink</a> </p>
   * </li> <li> <p> <a href="https://docs.aws.amazon.com/workspaces">Amazon
   * WorkSpaces</a> </p> </li> </ul>
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceGroupsTaggingAPIClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsTaggingAPIClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResourceGroupsTaggingAPIClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResourceGroupsTaggingAPIClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ResourceGroupsTaggingAPIClient();


        /**
         * <p>Describes the status of the <code>StartReportCreation</code> operation. </p>
         * <p>You can call this operation only from the organization's master account and
         * from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/DescribeReportCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportCreationOutcome DescribeReportCreation(const Model::DescribeReportCreationRequest& request) const;

        /**
         * <p>Describes the status of the <code>StartReportCreation</code> operation. </p>
         * <p>You can call this operation only from the organization's master account and
         * from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/DescribeReportCreation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReportCreationOutcomeCallable DescribeReportCreationCallable(const Model::DescribeReportCreationRequest& request) const;

        /**
         * <p>Describes the status of the <code>StartReportCreation</code> operation. </p>
         * <p>You can call this operation only from the organization's master account and
         * from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/DescribeReportCreation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReportCreationAsync(const Model::DescribeReportCreationRequest& request, const DescribeReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a table that shows counts of resources that are noncompliant with
         * their tag policies.</p> <p>For more information on tag policies, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> <p>You can call
         * this operation only from the organization's master account and from the
         * us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetComplianceSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceSummaryOutcome GetComplianceSummary(const Model::GetComplianceSummaryRequest& request) const;

        /**
         * <p>Returns a table that shows counts of resources that are noncompliant with
         * their tag policies.</p> <p>For more information on tag policies, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> <p>You can call
         * this operation only from the organization's master account and from the
         * us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetComplianceSummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceSummaryOutcomeCallable GetComplianceSummaryCallable(const Model::GetComplianceSummaryRequest& request) const;

        /**
         * <p>Returns a table that shows counts of resources that are noncompliant with
         * their tag policies.</p> <p>For more information on tag policies, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> <p>You can call
         * this operation only from the organization's master account and from the
         * us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetComplianceSummary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceSummaryAsync(const Model::GetComplianceSummaryRequest& request, const GetComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all the tagged or previously tagged resources that are located in the
         * specified Region for the AWS account.</p> <p>Depending on what information you
         * want returned, you can also specify the following:</p> <ul> <li> <p>
         * <i>Filters</i> that specify what tags and resource types you want returned. The
         * response includes all tags that are associated with the requested resources.</p>
         * </li> <li> <p>Information about compliance with the account's effective tag
         * policy. For more information on tag policies, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul> 
         * <p>You can check the <code>PaginationToken</code> response parameter to
         * determine if a query is complete. Queries occasionally return fewer results on a
         * page than allowed. The <code>PaginationToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcesOutcome GetResources(const Model::GetResourcesRequest& request) const;

        /**
         * <p>Returns all the tagged or previously tagged resources that are located in the
         * specified Region for the AWS account.</p> <p>Depending on what information you
         * want returned, you can also specify the following:</p> <ul> <li> <p>
         * <i>Filters</i> that specify what tags and resource types you want returned. The
         * response includes all tags that are associated with the requested resources.</p>
         * </li> <li> <p>Information about compliance with the account's effective tag
         * policy. For more information on tag policies, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul> 
         * <p>You can check the <code>PaginationToken</code> response parameter to
         * determine if a query is complete. Queries occasionally return fewer results on a
         * page than allowed. The <code>PaginationToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcesOutcomeCallable GetResourcesCallable(const Model::GetResourcesRequest& request) const;

        /**
         * <p>Returns all the tagged or previously tagged resources that are located in the
         * specified Region for the AWS account.</p> <p>Depending on what information you
         * want returned, you can also specify the following:</p> <ul> <li> <p>
         * <i>Filters</i> that specify what tags and resource types you want returned. The
         * response includes all tags that are associated with the requested resources.</p>
         * </li> <li> <p>Information about compliance with the account's effective tag
         * policy. For more information on tag policies, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul> 
         * <p>You can check the <code>PaginationToken</code> response parameter to
         * determine if a query is complete. Queries occasionally return fewer results on a
         * page than allowed. The <code>PaginationToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcesAsync(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all tag keys in the specified Region for the AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagKeysOutcome GetTagKeys(const Model::GetTagKeysRequest& request) const;

        /**
         * <p>Returns all tag keys in the specified Region for the AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagKeysOutcomeCallable GetTagKeysCallable(const Model::GetTagKeysRequest& request) const;

        /**
         * <p>Returns all tag keys in the specified Region for the AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagKeysAsync(const Model::GetTagKeysRequest& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all tag values for the specified key in the specified Region for the
         * AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagValuesOutcome GetTagValues(const Model::GetTagValuesRequest& request) const;

        /**
         * <p>Returns all tag values for the specified key in the specified Region for the
         * AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagValuesOutcomeCallable GetTagValuesCallable(const Model::GetTagValuesRequest& request) const;

        /**
         * <p>Returns all tag values for the specified key in the specified Region for the
         * AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagValuesAsync(const Model::GetTagValuesRequest& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a report that lists all tagged resources in accounts across your
         * organization and tells whether each resource is compliant with the effective tag
         * policy. Compliance data is refreshed daily. </p> <p>The generated report is
         * saved to the following location:</p> <p>
         * <code>s3://example-bucket/AwsTagPolicies/o-exampleorgid/YYYY-MM-ddTHH:mm:ssZ/report.csv</code>
         * </p> <p>You can call this operation only from the organization's master account
         * and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/StartReportCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReportCreationOutcome StartReportCreation(const Model::StartReportCreationRequest& request) const;

        /**
         * <p>Generates a report that lists all tagged resources in accounts across your
         * organization and tells whether each resource is compliant with the effective tag
         * policy. Compliance data is refreshed daily. </p> <p>The generated report is
         * saved to the following location:</p> <p>
         * <code>s3://example-bucket/AwsTagPolicies/o-exampleorgid/YYYY-MM-ddTHH:mm:ssZ/report.csv</code>
         * </p> <p>You can call this operation only from the organization's master account
         * and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/StartReportCreation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReportCreationOutcomeCallable StartReportCreationCallable(const Model::StartReportCreationRequest& request) const;

        /**
         * <p>Generates a report that lists all tagged resources in accounts across your
         * organization and tells whether each resource is compliant with the effective tag
         * policy. Compliance data is refreshed daily. </p> <p>The generated report is
         * saved to the following location:</p> <p>
         * <code>s3://example-bucket/AwsTagPolicies/o-exampleorgid/YYYY-MM-ddTHH:mm:ssZ/report.csv</code>
         * </p> <p>You can call this operation only from the organization's master account
         * and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/StartReportCreation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReportCreationAsync(const Model::StartReportCreationRequest& request, const StartReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of services that
         * support tagging, see <a
         * href="http://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/Welcome.html">this
         * list</a>.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
         * limits, see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
         * Naming and Usage Conventions</a> in the <i>AWS General Reference.</i> </p> </li>
         * <li> <p>You can only tag resources that are located in the specified Region for
         * the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
         * necessary permissions for the service that the resource belongs to as well as
         * permissions for adding tags. For more information, see <a
         * href="http://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/Welcome.html">this
         * list</a>.</p> </li> </ul>  <p>Do not store personally identifiable
         * information (PII) or other confidential or sensitive information in tags. We use
         * tags to provide you with billing and administration services. Tags are not
         * intended to be used for private or sensitive data.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagResources">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourcesOutcome TagResources(const Model::TagResourcesRequest& request) const;

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of services that
         * support tagging, see <a
         * href="http://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/Welcome.html">this
         * list</a>.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
         * limits, see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
         * Naming and Usage Conventions</a> in the <i>AWS General Reference.</i> </p> </li>
         * <li> <p>You can only tag resources that are located in the specified Region for
         * the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
         * necessary permissions for the service that the resource belongs to as well as
         * permissions for adding tags. For more information, see <a
         * href="http://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/Welcome.html">this
         * list</a>.</p> </li> </ul>  <p>Do not store personally identifiable
         * information (PII) or other confidential or sensitive information in tags. We use
         * tags to provide you with billing and administration services. Tags are not
         * intended to be used for private or sensitive data.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourcesOutcomeCallable TagResourcesCallable(const Model::TagResourcesRequest& request) const;

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of services that
         * support tagging, see <a
         * href="http://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/Welcome.html">this
         * list</a>.</p> </li> <li> <p>Each resource can have up to 50 tags. For other
         * limits, see <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
         * Naming and Usage Conventions</a> in the <i>AWS General Reference.</i> </p> </li>
         * <li> <p>You can only tag resources that are located in the specified Region for
         * the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
         * necessary permissions for the service that the resource belongs to as well as
         * permissions for adding tags. For more information, see <a
         * href="http://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/Welcome.html">this
         * list</a>.</p> </li> </ul>  <p>Do not store personally identifiable
         * information (PII) or other confidential or sensitive information in tags. We use
         * tags to provide you with billing and administration services. Tags are not
         * intended to be used for private or sensitive data.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified tags from the specified resources. When you specify a
         * tag key, the action removes both that key and its associated value. The
         * operation succeeds even if you attempt to remove tags from a resource that were
         * already removed. Note the following:</p> <ul> <li> <p>To remove tags from a
         * resource, you need the necessary permissions for the service that the resource
         * belongs to as well as permissions for removing tags. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/Welcome.html">this
         * list</a>.</p> </li> <li> <p>You can only tag resources that are located in the
         * specified Region for the AWS account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/UntagResources">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourcesOutcome UntagResources(const Model::UntagResourcesRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resources. When you specify a
         * tag key, the action removes both that key and its associated value. The
         * operation succeeds even if you attempt to remove tags from a resource that were
         * already removed. Note the following:</p> <ul> <li> <p>To remove tags from a
         * resource, you need the necessary permissions for the service that the resource
         * belongs to as well as permissions for removing tags. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/Welcome.html">this
         * list</a>.</p> </li> <li> <p>You can only tag resources that are located in the
         * specified Region for the AWS account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/UntagResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourcesOutcomeCallable UntagResourcesCallable(const Model::UntagResourcesRequest& request) const;

        /**
         * <p>Removes the specified tags from the specified resources. When you specify a
         * tag key, the action removes both that key and its associated value. The
         * operation succeeds even if you attempt to remove tags from a resource that were
         * already removed. Note the following:</p> <ul> <li> <p>To remove tags from a
         * resource, you need the necessary permissions for the service that the resource
         * belongs to as well as permissions for removing tags. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/Welcome.html">this
         * list</a>.</p> </li> <li> <p>You can only tag resources that are located in the
         * specified Region for the AWS account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/UntagResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DescribeReportCreationAsyncHelper(const Model::DescribeReportCreationRequest& request, const DescribeReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComplianceSummaryAsyncHelper(const Model::GetComplianceSummaryRequest& request, const GetComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcesAsyncHelper(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagKeysAsyncHelper(const Model::GetTagKeysRequest& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagValuesAsyncHelper(const Model::GetTagValuesRequest& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartReportCreationAsyncHelper(const Model::StartReportCreationRequest& request, const StartReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourcesAsyncHelper(const Model::TagResourcesRequest& request, const TagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourcesAsyncHelper(const Model::UntagResourcesRequest& request, const UntagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
