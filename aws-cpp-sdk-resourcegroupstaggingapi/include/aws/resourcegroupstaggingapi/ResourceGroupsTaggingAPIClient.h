/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        typedef Aws::Utils::Outcome<DescribeReportCreationResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> DescribeReportCreationOutcome;
        typedef Aws::Utils::Outcome<GetComplianceSummaryResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> GetComplianceSummaryOutcome;
        typedef Aws::Utils::Outcome<GetResourcesResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> GetResourcesOutcome;
        typedef Aws::Utils::Outcome<GetTagKeysResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> GetTagKeysOutcome;
        typedef Aws::Utils::Outcome<GetTagValuesResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> GetTagValuesOutcome;
        typedef Aws::Utils::Outcome<StartReportCreationResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> StartReportCreationOutcome;
        typedef Aws::Utils::Outcome<TagResourcesResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> TagResourcesOutcome;
        typedef Aws::Utils::Outcome<UntagResourcesResult, Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>> UntagResourcesOutcome;

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
   * and "Production" for the other.</p> <p>Tagging can help you organize your
   * resources and enables you to simplify resource management, access management and
   * cost allocation. </p> <p>You can use the resource groups tagging API operations
   * to complete the following tasks:</p> <ul> <li> <p>Tag and untag supported
   * resources located in the specified Region for the AWS account.</p> </li> <li>
   * <p>Use tag-based filters to search for resources located in the specified Region
   * for the AWS account.</p> </li> <li> <p>List all existing tag keys in the
   * specified Region for the AWS account.</p> </li> <li> <p>List all existing values
   * for the specified key in the specified Region for the AWS account.</p> </li>
   * </ul> <p>To use resource groups tagging API operations, you must add the
   * following permissions to your IAM policy:</p> <ul> <li> <p>
   * <code>tag:GetResources</code> </p> </li> <li> <p> <code>tag:TagResources</code>
   * </p> </li> <li> <p> <code>tag:UntagResources</code> </p> </li> <li> <p>
   * <code>tag:GetTagKeys</code> </p> </li> <li> <p> <code>tag:GetTagValues</code>
   * </p> </li> </ul> <p>You'll also need permissions to access the resources of
   * individual services so that you can tag and untag those resources.</p> <p>For
   * more information on IAM policies, see <a
   * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_manage.html">Managing
   * IAM Policies</a> in the <i>IAM User Guide</i>.</p> <p>You can use the Resource
   * Groups Tagging API to tag resources for the following AWS services.</p> <ul>
   * <li> <p>Alexa for Business (a4b)</p> </li> <li> <p>API Gateway</p> </li> <li>
   * <p>Amazon AppStream</p> </li> <li> <p>AWS AppSync</p> </li> <li> <p>AWS App
   * Mesh</p> </li> <li> <p>Amazon Athena</p> </li> <li> <p>Amazon Aurora</p> </li>
   * <li> <p>AWS Backup</p> </li> <li> <p>AWS Certificate Manager</p> </li> <li>
   * <p>AWS Certificate Manager Private CA</p> </li> <li> <p>Amazon Cloud
   * Directory</p> </li> <li> <p>AWS CloudFormation</p> </li> <li> <p>Amazon
   * CloudFront</p> </li> <li> <p>AWS CloudHSM</p> </li> <li> <p>AWS CloudTrail</p>
   * </li> <li> <p>Amazon CloudWatch (alarms only)</p> </li> <li> <p>Amazon
   * CloudWatch Events</p> </li> <li> <p>Amazon CloudWatch Logs</p> </li> <li> <p>AWS
   * CodeBuild</p> </li> <li> <p>AWS CodeCommit</p> </li> <li> <p>AWS
   * CodePipeline</p> </li> <li> <p>AWS CodeStar</p> </li> <li> <p>Amazon Cognito
   * Identity</p> </li> <li> <p>Amazon Cognito User Pools</p> </li> <li> <p>Amazon
   * Comprehend</p> </li> <li> <p>AWS Config</p> </li> <li> <p>AWS Data Exchange</p>
   * </li> <li> <p>AWS Data Pipeline</p> </li> <li> <p>AWS Database Migration
   * Service</p> </li> <li> <p>AWS DataSync</p> </li> <li> <p>AWS Device Farm</p>
   * </li> <li> <p>AWS Direct Connect</p> </li> <li> <p>AWS Directory Service</p>
   * </li> <li> <p>Amazon DynamoDB</p> </li> <li> <p>Amazon EBS</p> </li> <li>
   * <p>Amazon EC2</p> </li> <li> <p>Amazon ECR</p> </li> <li> <p>Amazon ECS</p>
   * </li> <li> <p>Amazon EKS</p> </li> <li> <p>AWS Elastic Beanstalk</p> </li> <li>
   * <p>Amazon Elastic File System</p> </li> <li> <p>Elastic Load Balancing</p> </li>
   * <li> <p>Amazon ElastiCache</p> </li> <li> <p>Amazon Elasticsearch Service</p>
   * </li> <li> <p>AWS Elemental MediaLive</p> </li> <li> <p>AWS Elemental
   * MediaPackage</p> </li> <li> <p>AWS Elemental MediaTailor</p> </li> <li>
   * <p>Amazon EMR</p> </li> <li> <p>Amazon FSx</p> </li> <li> <p>Amazon S3
   * Glacier</p> </li> <li> <p>AWS Glue</p> </li> <li> <p>Amazon GuardDuty</p> </li>
   * <li> <p>Amazon Inspector</p> </li> <li> <p>AWS IoT Analytics</p> </li> <li>
   * <p>AWS IoT Core</p> </li> <li> <p>AWS IoT Device Defender</p> </li> <li> <p>AWS
   * IoT Device Management</p> </li> <li> <p>AWS IoT Events</p> </li> <li> <p>AWS IoT
   * Greengrass</p> </li> <li> <p>AWS IoT 1-Click</p> </li> <li> <p>AWS Key
   * Management Service</p> </li> <li> <p>Amazon Kinesis</p> </li> <li> <p>Amazon
   * Kinesis Data Analytics</p> </li> <li> <p>Amazon Kinesis Data Firehose</p> </li>
   * <li> <p>AWS Lambda</p> </li> <li> <p>AWS License Manager</p> </li> <li>
   * <p>Amazon Machine Learning</p> </li> <li> <p>Amazon MQ</p> </li> <li> <p>Amazon
   * MSK</p> </li> <li> <p>Amazon Neptune</p> </li> <li> <p>AWS OpsWorks</p> </li>
   * <li> <p>AWS Organizations</p> </li> <li> <p>Amazon Quantum Ledger Database
   * (QLDB)</p> </li> <li> <p>Amazon RDS</p> </li> <li> <p>Amazon Redshift</p> </li>
   * <li> <p>AWS Resource Access Manager</p> </li> <li> <p>AWS Resource Groups</p>
   * </li> <li> <p>AWS RoboMaker</p> </li> <li> <p>Amazon Route 53</p> </li> <li>
   * <p>Amazon Route 53 Resolver</p> </li> <li> <p>Amazon S3 (buckets only)</p> </li>
   * <li> <p>Amazon SageMaker</p> </li> <li> <p>AWS Secrets Manager</p> </li> <li>
   * <p>AWS Security Hub</p> </li> <li> <p>AWS Service Catalog</p> </li> <li>
   * <p>Amazon Simple Notification Service (SNS)</p> </li> <li> <p>Amazon Simple
   * Queue Service (SQS)</p> </li> <li> <p>Amazon Simple Workflow Service</p> </li>
   * <li> <p>AWS Step Functions</p> </li> <li> <p>AWS Storage Gateway</p> </li> <li>
   * <p>AWS Systems Manager</p> </li> <li> <p>AWS Transfer for SFTP</p> </li> <li>
   * <p>Amazon VPC</p> </li> <li> <p>Amazon WorkSpaces</p> </li> </ul>
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

        inline virtual const char* GetServiceClientName() const override { return "Resource Groups Tagging API"; }


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
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul> <note>
         * <p>You can check the <code>PaginationToken</code> response parameter to
         * determine if a query is complete. Queries occasionally return fewer results on a
         * page than allowed. The <code>PaginationToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display. </p>
         * </note><p><h3>See Also:</h3>   <a
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
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul> <note>
         * <p>You can check the <code>PaginationToken</code> response parameter to
         * determine if a query is complete. Queries occasionally return fewer results on a
         * page than allowed. The <code>PaginationToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display. </p>
         * </note><p><h3>See Also:</h3>   <a
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
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul> <note>
         * <p>You can check the <code>PaginationToken</code> response parameter to
         * determine if a query is complete. Queries occasionally return fewer results on a
         * page than allowed. The <code>PaginationToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display. </p>
         * </note><p><h3>See Also:</h3>   <a
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
         * list</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * list</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * list</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
