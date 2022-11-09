/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ResourceGroupsTaggingAPIClient header */
#include <aws/resourcegroupstaggingapi/model/DescribeReportCreationResult.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryResult.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesResult.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysResult.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesResult.h>
#include <aws/resourcegroupstaggingapi/model/StartReportCreationResult.h>
#include <aws/resourcegroupstaggingapi/model/TagResourcesResult.h>
#include <aws/resourcegroupstaggingapi/model/UntagResourcesResult.h>
/* End of service model headers required in ResourceGroupsTaggingAPIClient header */

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
    using ResourceGroupsTaggingAPIClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ResourceGroupsTaggingAPIEndpointProviderBase = Aws::ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIEndpointProviderBase;
    using ResourceGroupsTaggingAPIEndpointProvider = Aws::ResourceGroupsTaggingAPI::Endpoint::ResourceGroupsTaggingAPIEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ResourceGroupsTaggingAPIClient header */
      class DescribeReportCreationRequest;
      class GetComplianceSummaryRequest;
      class GetResourcesRequest;
      class GetTagKeysRequest;
      class GetTagValuesRequest;
      class StartReportCreationRequest;
      class TagResourcesRequest;
      class UntagResourcesRequest;
      /* End of service model forward declarations required in ResourceGroupsTaggingAPIClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DescribeReportCreationResult, ResourceGroupsTaggingAPIError> DescribeReportCreationOutcome;
      typedef Aws::Utils::Outcome<GetComplianceSummaryResult, ResourceGroupsTaggingAPIError> GetComplianceSummaryOutcome;
      typedef Aws::Utils::Outcome<GetResourcesResult, ResourceGroupsTaggingAPIError> GetResourcesOutcome;
      typedef Aws::Utils::Outcome<GetTagKeysResult, ResourceGroupsTaggingAPIError> GetTagKeysOutcome;
      typedef Aws::Utils::Outcome<GetTagValuesResult, ResourceGroupsTaggingAPIError> GetTagValuesOutcome;
      typedef Aws::Utils::Outcome<StartReportCreationResult, ResourceGroupsTaggingAPIError> StartReportCreationOutcome;
      typedef Aws::Utils::Outcome<TagResourcesResult, ResourceGroupsTaggingAPIError> TagResourcesOutcome;
      typedef Aws::Utils::Outcome<UntagResourcesResult, ResourceGroupsTaggingAPIError> UntagResourcesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DescribeReportCreationOutcome> DescribeReportCreationOutcomeCallable;
      typedef std::future<GetComplianceSummaryOutcome> GetComplianceSummaryOutcomeCallable;
      typedef std::future<GetResourcesOutcome> GetResourcesOutcomeCallable;
      typedef std::future<GetTagKeysOutcome> GetTagKeysOutcomeCallable;
      typedef std::future<GetTagValuesOutcome> GetTagValuesOutcomeCallable;
      typedef std::future<StartReportCreationOutcome> StartReportCreationOutcomeCallable;
      typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
      typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ResourceGroupsTaggingAPIClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::DescribeReportCreationRequest&, const Model::DescribeReportCreationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReportCreationResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetComplianceSummaryRequest&, const Model::GetComplianceSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComplianceSummaryResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetResourcesRequest&, const Model::GetResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetTagKeysRequest&, const Model::GetTagKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagKeysResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::GetTagValuesRequest&, const Model::GetTagValuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagValuesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::StartReportCreationRequest&, const Model::StartReportCreationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReportCreationResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::TagResourcesRequest&, const Model::TagResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourcesResponseReceivedHandler;
    typedef std::function<void(const ResourceGroupsTaggingAPIClient*, const Model::UntagResourcesRequest&, const Model::UntagResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourcesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ResourceGroupsTaggingAPI
} // namespace Aws
