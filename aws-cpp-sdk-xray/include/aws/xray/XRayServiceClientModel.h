/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/xray/XRayErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/xray/XRayEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in XRayClient header */
#include <aws/xray/model/BatchGetTracesResult.h>
#include <aws/xray/model/CreateGroupResult.h>
#include <aws/xray/model/CreateSamplingRuleResult.h>
#include <aws/xray/model/DeleteGroupResult.h>
#include <aws/xray/model/DeleteResourcePolicyResult.h>
#include <aws/xray/model/DeleteSamplingRuleResult.h>
#include <aws/xray/model/GetEncryptionConfigResult.h>
#include <aws/xray/model/GetGroupResult.h>
#include <aws/xray/model/GetGroupsResult.h>
#include <aws/xray/model/GetInsightResult.h>
#include <aws/xray/model/GetInsightEventsResult.h>
#include <aws/xray/model/GetInsightImpactGraphResult.h>
#include <aws/xray/model/GetInsightSummariesResult.h>
#include <aws/xray/model/GetSamplingRulesResult.h>
#include <aws/xray/model/GetSamplingStatisticSummariesResult.h>
#include <aws/xray/model/GetSamplingTargetsResult.h>
#include <aws/xray/model/GetServiceGraphResult.h>
#include <aws/xray/model/GetTimeSeriesServiceStatisticsResult.h>
#include <aws/xray/model/GetTraceGraphResult.h>
#include <aws/xray/model/GetTraceSummariesResult.h>
#include <aws/xray/model/ListResourcePoliciesResult.h>
#include <aws/xray/model/ListTagsForResourceResult.h>
#include <aws/xray/model/PutEncryptionConfigResult.h>
#include <aws/xray/model/PutResourcePolicyResult.h>
#include <aws/xray/model/PutTelemetryRecordsResult.h>
#include <aws/xray/model/PutTraceSegmentsResult.h>
#include <aws/xray/model/TagResourceResult.h>
#include <aws/xray/model/UntagResourceResult.h>
#include <aws/xray/model/UpdateGroupResult.h>
#include <aws/xray/model/UpdateSamplingRuleResult.h>
/* End of service model headers required in XRayClient header */

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

  namespace XRay
  {
    using XRayClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using XRayEndpointProviderBase = Aws::XRay::Endpoint::XRayEndpointProviderBase;
    using XRayEndpointProvider = Aws::XRay::Endpoint::XRayEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in XRayClient header */
      class BatchGetTracesRequest;
      class CreateGroupRequest;
      class CreateSamplingRuleRequest;
      class DeleteGroupRequest;
      class DeleteResourcePolicyRequest;
      class DeleteSamplingRuleRequest;
      class GetEncryptionConfigRequest;
      class GetGroupRequest;
      class GetGroupsRequest;
      class GetInsightRequest;
      class GetInsightEventsRequest;
      class GetInsightImpactGraphRequest;
      class GetInsightSummariesRequest;
      class GetSamplingRulesRequest;
      class GetSamplingStatisticSummariesRequest;
      class GetSamplingTargetsRequest;
      class GetServiceGraphRequest;
      class GetTimeSeriesServiceStatisticsRequest;
      class GetTraceGraphRequest;
      class GetTraceSummariesRequest;
      class ListResourcePoliciesRequest;
      class ListTagsForResourceRequest;
      class PutEncryptionConfigRequest;
      class PutResourcePolicyRequest;
      class PutTelemetryRecordsRequest;
      class PutTraceSegmentsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateGroupRequest;
      class UpdateSamplingRuleRequest;
      /* End of service model forward declarations required in XRayClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetTracesResult, XRayError> BatchGetTracesOutcome;
      typedef Aws::Utils::Outcome<CreateGroupResult, XRayError> CreateGroupOutcome;
      typedef Aws::Utils::Outcome<CreateSamplingRuleResult, XRayError> CreateSamplingRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupResult, XRayError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, XRayError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteSamplingRuleResult, XRayError> DeleteSamplingRuleOutcome;
      typedef Aws::Utils::Outcome<GetEncryptionConfigResult, XRayError> GetEncryptionConfigOutcome;
      typedef Aws::Utils::Outcome<GetGroupResult, XRayError> GetGroupOutcome;
      typedef Aws::Utils::Outcome<GetGroupsResult, XRayError> GetGroupsOutcome;
      typedef Aws::Utils::Outcome<GetInsightResult, XRayError> GetInsightOutcome;
      typedef Aws::Utils::Outcome<GetInsightEventsResult, XRayError> GetInsightEventsOutcome;
      typedef Aws::Utils::Outcome<GetInsightImpactGraphResult, XRayError> GetInsightImpactGraphOutcome;
      typedef Aws::Utils::Outcome<GetInsightSummariesResult, XRayError> GetInsightSummariesOutcome;
      typedef Aws::Utils::Outcome<GetSamplingRulesResult, XRayError> GetSamplingRulesOutcome;
      typedef Aws::Utils::Outcome<GetSamplingStatisticSummariesResult, XRayError> GetSamplingStatisticSummariesOutcome;
      typedef Aws::Utils::Outcome<GetSamplingTargetsResult, XRayError> GetSamplingTargetsOutcome;
      typedef Aws::Utils::Outcome<GetServiceGraphResult, XRayError> GetServiceGraphOutcome;
      typedef Aws::Utils::Outcome<GetTimeSeriesServiceStatisticsResult, XRayError> GetTimeSeriesServiceStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetTraceGraphResult, XRayError> GetTraceGraphOutcome;
      typedef Aws::Utils::Outcome<GetTraceSummariesResult, XRayError> GetTraceSummariesOutcome;
      typedef Aws::Utils::Outcome<ListResourcePoliciesResult, XRayError> ListResourcePoliciesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, XRayError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutEncryptionConfigResult, XRayError> PutEncryptionConfigOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, XRayError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<PutTelemetryRecordsResult, XRayError> PutTelemetryRecordsOutcome;
      typedef Aws::Utils::Outcome<PutTraceSegmentsResult, XRayError> PutTraceSegmentsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, XRayError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, XRayError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupResult, XRayError> UpdateGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateSamplingRuleResult, XRayError> UpdateSamplingRuleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetTracesOutcome> BatchGetTracesOutcomeCallable;
      typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
      typedef std::future<CreateSamplingRuleOutcome> CreateSamplingRuleOutcomeCallable;
      typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteSamplingRuleOutcome> DeleteSamplingRuleOutcomeCallable;
      typedef std::future<GetEncryptionConfigOutcome> GetEncryptionConfigOutcomeCallable;
      typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
      typedef std::future<GetGroupsOutcome> GetGroupsOutcomeCallable;
      typedef std::future<GetInsightOutcome> GetInsightOutcomeCallable;
      typedef std::future<GetInsightEventsOutcome> GetInsightEventsOutcomeCallable;
      typedef std::future<GetInsightImpactGraphOutcome> GetInsightImpactGraphOutcomeCallable;
      typedef std::future<GetInsightSummariesOutcome> GetInsightSummariesOutcomeCallable;
      typedef std::future<GetSamplingRulesOutcome> GetSamplingRulesOutcomeCallable;
      typedef std::future<GetSamplingStatisticSummariesOutcome> GetSamplingStatisticSummariesOutcomeCallable;
      typedef std::future<GetSamplingTargetsOutcome> GetSamplingTargetsOutcomeCallable;
      typedef std::future<GetServiceGraphOutcome> GetServiceGraphOutcomeCallable;
      typedef std::future<GetTimeSeriesServiceStatisticsOutcome> GetTimeSeriesServiceStatisticsOutcomeCallable;
      typedef std::future<GetTraceGraphOutcome> GetTraceGraphOutcomeCallable;
      typedef std::future<GetTraceSummariesOutcome> GetTraceSummariesOutcomeCallable;
      typedef std::future<ListResourcePoliciesOutcome> ListResourcePoliciesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutEncryptionConfigOutcome> PutEncryptionConfigOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<PutTelemetryRecordsOutcome> PutTelemetryRecordsOutcomeCallable;
      typedef std::future<PutTraceSegmentsOutcome> PutTraceSegmentsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
      typedef std::future<UpdateSamplingRuleOutcome> UpdateSamplingRuleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class XRayClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const XRayClient*, const Model::BatchGetTracesRequest&, const Model::BatchGetTracesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetTracesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::CreateSamplingRuleRequest&, const Model::CreateSamplingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSamplingRuleResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::DeleteSamplingRuleRequest&, const Model::DeleteSamplingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSamplingRuleResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetEncryptionConfigRequest&, const Model::GetEncryptionConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEncryptionConfigResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetGroupsRequest&, const Model::GetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetInsightRequest&, const Model::GetInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetInsightEventsRequest&, const Model::GetInsightEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightEventsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetInsightImpactGraphRequest&, const Model::GetInsightImpactGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightImpactGraphResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetInsightSummariesRequest&, const Model::GetInsightSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInsightSummariesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetSamplingRulesRequest&, const Model::GetSamplingRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSamplingRulesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetSamplingStatisticSummariesRequest&, const Model::GetSamplingStatisticSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSamplingStatisticSummariesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetSamplingTargetsRequest&, const Model::GetSamplingTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSamplingTargetsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetServiceGraphRequest&, const Model::GetServiceGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceGraphResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetTimeSeriesServiceStatisticsRequest&, const Model::GetTimeSeriesServiceStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTimeSeriesServiceStatisticsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetTraceGraphRequest&, const Model::GetTraceGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTraceGraphResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::GetTraceSummariesRequest&, const Model::GetTraceSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTraceSummariesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::ListResourcePoliciesRequest&, const Model::ListResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::PutEncryptionConfigRequest&, const Model::PutEncryptionConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEncryptionConfigResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::PutTelemetryRecordsRequest&, const Model::PutTelemetryRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTelemetryRecordsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::PutTraceSegmentsRequest&, const Model::PutTraceSegmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTraceSegmentsResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const XRayClient*, const Model::UpdateSamplingRuleRequest&, const Model::UpdateSamplingRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSamplingRuleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace XRay
} // namespace Aws
