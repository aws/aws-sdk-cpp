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
   * <fullname>Resource Groups Tagging API</fullname>
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
         * <p>You can call this operation only from the organization's management account
         * and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/DescribeReportCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReportCreationOutcome DescribeReportCreation(const Model::DescribeReportCreationRequest& request) const;

        /**
         * <p>Describes the status of the <code>StartReportCreation</code> operation. </p>
         * <p>You can call this operation only from the organization's management account
         * and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/DescribeReportCreation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReportCreationOutcomeCallable DescribeReportCreationCallable(const Model::DescribeReportCreationRequest& request) const;

        /**
         * <p>Describes the status of the <code>StartReportCreation</code> operation. </p>
         * <p>You can call this operation only from the organization's management account
         * and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/DescribeReportCreation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReportCreationAsync(const Model::DescribeReportCreationRequest& request, const DescribeReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a table that shows counts of resources that are noncompliant with
         * their tag policies.</p> <p>For more information on tag policies, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> <p>You can call
         * this operation only from the organization's management account and from the
         * us-east-1 Region.</p> <p>This operation supports pagination, where the response
         * can be sent in multiple pages. You should check the <code>PaginationToken</code>
         * response parameter to determine if there are additional results available to
         * return. Repeat the query, passing the <code>PaginationToken</code> response
         * parameter value as an input to the next request until you recieve a
         * <code>null</code> value. A null value for <code>PaginationToken</code> indicates
         * that there are no more results waiting to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetComplianceSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceSummaryOutcome GetComplianceSummary(const Model::GetComplianceSummaryRequest& request) const;

        /**
         * <p>Returns a table that shows counts of resources that are noncompliant with
         * their tag policies.</p> <p>For more information on tag policies, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> <p>You can call
         * this operation only from the organization's management account and from the
         * us-east-1 Region.</p> <p>This operation supports pagination, where the response
         * can be sent in multiple pages. You should check the <code>PaginationToken</code>
         * response parameter to determine if there are additional results available to
         * return. Repeat the query, passing the <code>PaginationToken</code> response
         * parameter value as an input to the next request until you recieve a
         * <code>null</code> value. A null value for <code>PaginationToken</code> indicates
         * that there are no more results waiting to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetComplianceSummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceSummaryOutcomeCallable GetComplianceSummaryCallable(const Model::GetComplianceSummaryRequest& request) const;

        /**
         * <p>Returns a table that shows counts of resources that are noncompliant with
         * their tag policies.</p> <p>For more information on tag policies, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> <p>You can call
         * this operation only from the organization's management account and from the
         * us-east-1 Region.</p> <p>This operation supports pagination, where the response
         * can be sent in multiple pages. You should check the <code>PaginationToken</code>
         * response parameter to determine if there are additional results available to
         * return. Repeat the query, passing the <code>PaginationToken</code> response
         * parameter value as an input to the next request until you recieve a
         * <code>null</code> value. A null value for <code>PaginationToken</code> indicates
         * that there are no more results waiting to be returned.</p><p><h3>See Also:</h3> 
         * <a
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
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul>
         * <p>This operation supports pagination, where the response can be sent in
         * multiple pages. You should check the <code>PaginationToken</code> response
         * parameter to determine if there are additional results available to return.
         * Repeat the query, passing the <code>PaginationToken</code> response parameter
         * value as an input to the next request until you recieve a <code>null</code>
         * value. A null value for <code>PaginationToken</code> indicates that there are no
         * more results waiting to be returned.</p><p><h3>See Also:</h3>   <a
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
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul>
         * <p>This operation supports pagination, where the response can be sent in
         * multiple pages. You should check the <code>PaginationToken</code> response
         * parameter to determine if there are additional results available to return.
         * Repeat the query, passing the <code>PaginationToken</code> response parameter
         * value as an input to the next request until you recieve a <code>null</code>
         * value. A null value for <code>PaginationToken</code> indicates that there are no
         * more results waiting to be returned.</p><p><h3>See Also:</h3>   <a
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
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">Tag
         * Policies</a> in the <i>AWS Organizations User Guide.</i> </p> </li> </ul>
         * <p>This operation supports pagination, where the response can be sent in
         * multiple pages. You should check the <code>PaginationToken</code> response
         * parameter to determine if there are additional results available to return.
         * Repeat the query, passing the <code>PaginationToken</code> response parameter
         * value as an input to the next request until you recieve a <code>null</code>
         * value. A null value for <code>PaginationToken</code> indicates that there are no
         * more results waiting to be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcesAsync(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all tag keys currently in use in the specified Region for the calling
         * AWS account.</p> <p>This operation supports pagination, where the response can
         * be sent in multiple pages. You should check the <code>PaginationToken</code>
         * response parameter to determine if there are additional results available to
         * return. Repeat the query, passing the <code>PaginationToken</code> response
         * parameter value as an input to the next request until you recieve a
         * <code>null</code> value. A null value for <code>PaginationToken</code> indicates
         * that there are no more results waiting to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagKeysOutcome GetTagKeys(const Model::GetTagKeysRequest& request) const;

        /**
         * <p>Returns all tag keys currently in use in the specified Region for the calling
         * AWS account.</p> <p>This operation supports pagination, where the response can
         * be sent in multiple pages. You should check the <code>PaginationToken</code>
         * response parameter to determine if there are additional results available to
         * return. Repeat the query, passing the <code>PaginationToken</code> response
         * parameter value as an input to the next request until you recieve a
         * <code>null</code> value. A null value for <code>PaginationToken</code> indicates
         * that there are no more results waiting to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagKeysOutcomeCallable GetTagKeysCallable(const Model::GetTagKeysRequest& request) const;

        /**
         * <p>Returns all tag keys currently in use in the specified Region for the calling
         * AWS account.</p> <p>This operation supports pagination, where the response can
         * be sent in multiple pages. You should check the <code>PaginationToken</code>
         * response parameter to determine if there are additional results available to
         * return. Repeat the query, passing the <code>PaginationToken</code> response
         * parameter value as an input to the next request until you recieve a
         * <code>null</code> value. A null value for <code>PaginationToken</code> indicates
         * that there are no more results waiting to be returned.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagKeysAsync(const Model::GetTagKeysRequest& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all tag values for the specified key that are used in the specified
         * AWS Region for the calling AWS account.</p> <p>This operation supports
         * pagination, where the response can be sent in multiple pages. You should check
         * the <code>PaginationToken</code> response parameter to determine if there are
         * additional results available to return. Repeat the query, passing the
         * <code>PaginationToken</code> response parameter value as an input to the next
         * request until you recieve a <code>null</code> value. A null value for
         * <code>PaginationToken</code> indicates that there are no more results waiting to
         * be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagValuesOutcome GetTagValues(const Model::GetTagValuesRequest& request) const;

        /**
         * <p>Returns all tag values for the specified key that are used in the specified
         * AWS Region for the calling AWS account.</p> <p>This operation supports
         * pagination, where the response can be sent in multiple pages. You should check
         * the <code>PaginationToken</code> response parameter to determine if there are
         * additional results available to return. Repeat the query, passing the
         * <code>PaginationToken</code> response parameter value as an input to the next
         * request until you recieve a <code>null</code> value. A null value for
         * <code>PaginationToken</code> indicates that there are no more results waiting to
         * be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagValuesOutcomeCallable GetTagValuesCallable(const Model::GetTagValuesRequest& request) const;

        /**
         * <p>Returns all tag values for the specified key that are used in the specified
         * AWS Region for the calling AWS account.</p> <p>This operation supports
         * pagination, where the response can be sent in multiple pages. You should check
         * the <code>PaginationToken</code> response parameter to determine if there are
         * additional results available to return. Repeat the query, passing the
         * <code>PaginationToken</code> response parameter value as an input to the next
         * request until you recieve a <code>null</code> value. A null value for
         * <code>PaginationToken</code> indicates that there are no more results waiting to
         * be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/GetTagValues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagValuesAsync(const Model::GetTagValuesRequest& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a report that lists all tagged resources in the accounts across
         * your organization and tells whether each resource is compliant with the
         * effective tag policy. Compliance data is refreshed daily. The report is
         * generated asynchronously.</p> <p>The generated report is saved to the following
         * location:</p> <p>
         * <code>s3://example-bucket/AwsTagPolicies/o-exampleorgid/YYYY-MM-ddTHH:mm:ssZ/report.csv</code>
         * </p> <p>You can call this operation only from the organization's management
         * account and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/StartReportCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReportCreationOutcome StartReportCreation(const Model::StartReportCreationRequest& request) const;

        /**
         * <p>Generates a report that lists all tagged resources in the accounts across
         * your organization and tells whether each resource is compliant with the
         * effective tag policy. Compliance data is refreshed daily. The report is
         * generated asynchronously.</p> <p>The generated report is saved to the following
         * location:</p> <p>
         * <code>s3://example-bucket/AwsTagPolicies/o-exampleorgid/YYYY-MM-ddTHH:mm:ssZ/report.csv</code>
         * </p> <p>You can call this operation only from the organization's management
         * account and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/StartReportCreation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReportCreationOutcomeCallable StartReportCreationCallable(const Model::StartReportCreationRequest& request) const;

        /**
         * <p>Generates a report that lists all tagged resources in the accounts across
         * your organization and tells whether each resource is compliant with the
         * effective tag policy. Compliance data is refreshed daily. The report is
         * generated asynchronously.</p> <p>The generated report is saved to the following
         * location:</p> <p>
         * <code>s3://example-bucket/AwsTagPolicies/o-exampleorgid/YYYY-MM-ddTHH:mm:ssZ/report.csv</code>
         * </p> <p>You can call this operation only from the organization's management
         * account and from the us-east-1 Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/StartReportCreation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReportCreationAsync(const Model::StartReportCreationRequest& request, const StartReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of services with
         * resources that support tagging using this operation, see <a
         * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
         * that support the Resource Groups Tagging API</a>.</p> </li> <li> <p>Each
         * resource can have up to 50 tags. For other limits, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
         * Naming and Usage Conventions</a> in the <i>AWS General Reference.</i> </p> </li>
         * <li> <p>You can only tag resources that are located in the specified AWS Region
         * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
         * necessary permissions for the service that the resource belongs to as well as
         * permissions for adding tags. For more information, see the documentation for
         * each service.</p> </li> </ul>  <p>Do not store personally
         * identifiable information (PII) or other confidential or sensitive information in
         * tags. We use tags to provide you with billing and administration services. Tags
         * are not intended to be used for private or sensitive data.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagResources">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourcesOutcome TagResources(const Model::TagResourcesRequest& request) const;

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of services with
         * resources that support tagging using this operation, see <a
         * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
         * that support the Resource Groups Tagging API</a>.</p> </li> <li> <p>Each
         * resource can have up to 50 tags. For other limits, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
         * Naming and Usage Conventions</a> in the <i>AWS General Reference.</i> </p> </li>
         * <li> <p>You can only tag resources that are located in the specified AWS Region
         * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
         * necessary permissions for the service that the resource belongs to as well as
         * permissions for adding tags. For more information, see the documentation for
         * each service.</p> </li> </ul>  <p>Do not store personally
         * identifiable information (PII) or other confidential or sensitive information in
         * tags. We use tags to provide you with billing and administration services. Tags
         * are not intended to be used for private or sensitive data.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourcesOutcomeCallable TagResourcesCallable(const Model::TagResourcesRequest& request) const;

        /**
         * <p>Applies one or more tags to the specified resources. Note the following:</p>
         * <ul> <li> <p>Not all resources can have tags. For a list of services with
         * resources that support tagging using this operation, see <a
         * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/supported-services.html">Services
         * that support the Resource Groups Tagging API</a>.</p> </li> <li> <p>Each
         * resource can have up to 50 tags. For other limits, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
         * Naming and Usage Conventions</a> in the <i>AWS General Reference.</i> </p> </li>
         * <li> <p>You can only tag resources that are located in the specified AWS Region
         * for the AWS account.</p> </li> <li> <p>To add tags to a resource, you need the
         * necessary permissions for the service that the resource belongs to as well as
         * permissions for adding tags. For more information, see the documentation for
         * each service.</p> </li> </ul>  <p>Do not store personally
         * identifiable information (PII) or other confidential or sensitive information in
         * tags. We use tags to provide you with billing and administration services. Tags
         * are not intended to be used for private or sensitive data.</p>
         * <p><h3>See Also:</h3>   <a
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
         * the documentation for the service whose resource you want to untag.</p> </li>
         * <li> <p>You can only tag resources that are located in the specified AWS Region
         * for the calling AWS account.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * the documentation for the service whose resource you want to untag.</p> </li>
         * <li> <p>You can only tag resources that are located in the specified AWS Region
         * for the calling AWS account.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
         * the documentation for the service whose resource you want to untag.</p> </li>
         * <li> <p>You can only tag resources that are located in the specified AWS Region
         * for the calling AWS account.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
