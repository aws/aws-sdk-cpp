/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codeguruprofiler/CodeGuruProfilerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codeguruprofiler/CodeGuruProfilerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeGuruProfilerClient header */
#include <aws/codeguruprofiler/model/AddNotificationChannelsResult.h>
#include <aws/codeguruprofiler/model/BatchGetFrameMetricDataResult.h>
#include <aws/codeguruprofiler/model/ConfigureAgentResult.h>
#include <aws/codeguruprofiler/model/CreateProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/DeleteProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/DescribeProfilingGroupResult.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryResult.h>
#include <aws/codeguruprofiler/model/GetNotificationConfigurationResult.h>
#include <aws/codeguruprofiler/model/GetPolicyResult.h>
#include <aws/codeguruprofiler/model/GetProfileResult.h>
#include <aws/codeguruprofiler/model/GetRecommendationsResult.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsResult.h>
#include <aws/codeguruprofiler/model/ListProfileTimesResult.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsResult.h>
#include <aws/codeguruprofiler/model/ListTagsForResourceResult.h>
#include <aws/codeguruprofiler/model/PostAgentProfileResult.h>
#include <aws/codeguruprofiler/model/PutPermissionResult.h>
#include <aws/codeguruprofiler/model/RemoveNotificationChannelResult.h>
#include <aws/codeguruprofiler/model/RemovePermissionResult.h>
#include <aws/codeguruprofiler/model/SubmitFeedbackResult.h>
#include <aws/codeguruprofiler/model/TagResourceResult.h>
#include <aws/codeguruprofiler/model/UntagResourceResult.h>
#include <aws/codeguruprofiler/model/UpdateProfilingGroupResult.h>
/* End of service model headers required in CodeGuruProfilerClient header */

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

  namespace CodeGuruProfiler
  {
    using CodeGuruProfilerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeGuruProfilerEndpointProviderBase = Aws::CodeGuruProfiler::Endpoint::CodeGuruProfilerEndpointProviderBase;
    using CodeGuruProfilerEndpointProvider = Aws::CodeGuruProfiler::Endpoint::CodeGuruProfilerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeGuruProfilerClient header */
      class AddNotificationChannelsRequest;
      class BatchGetFrameMetricDataRequest;
      class ConfigureAgentRequest;
      class CreateProfilingGroupRequest;
      class DeleteProfilingGroupRequest;
      class DescribeProfilingGroupRequest;
      class GetFindingsReportAccountSummaryRequest;
      class GetNotificationConfigurationRequest;
      class GetPolicyRequest;
      class GetProfileRequest;
      class GetRecommendationsRequest;
      class ListFindingsReportsRequest;
      class ListProfileTimesRequest;
      class ListProfilingGroupsRequest;
      class ListTagsForResourceRequest;
      class PostAgentProfileRequest;
      class PutPermissionRequest;
      class RemoveNotificationChannelRequest;
      class RemovePermissionRequest;
      class SubmitFeedbackRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateProfilingGroupRequest;
      /* End of service model forward declarations required in CodeGuruProfilerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddNotificationChannelsResult, CodeGuruProfilerError> AddNotificationChannelsOutcome;
      typedef Aws::Utils::Outcome<BatchGetFrameMetricDataResult, CodeGuruProfilerError> BatchGetFrameMetricDataOutcome;
      typedef Aws::Utils::Outcome<ConfigureAgentResult, CodeGuruProfilerError> ConfigureAgentOutcome;
      typedef Aws::Utils::Outcome<CreateProfilingGroupResult, CodeGuruProfilerError> CreateProfilingGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteProfilingGroupResult, CodeGuruProfilerError> DeleteProfilingGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeProfilingGroupResult, CodeGuruProfilerError> DescribeProfilingGroupOutcome;
      typedef Aws::Utils::Outcome<GetFindingsReportAccountSummaryResult, CodeGuruProfilerError> GetFindingsReportAccountSummaryOutcome;
      typedef Aws::Utils::Outcome<GetNotificationConfigurationResult, CodeGuruProfilerError> GetNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetPolicyResult, CodeGuruProfilerError> GetPolicyOutcome;
      typedef Aws::Utils::Outcome<GetProfileResult, CodeGuruProfilerError> GetProfileOutcome;
      typedef Aws::Utils::Outcome<GetRecommendationsResult, CodeGuruProfilerError> GetRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ListFindingsReportsResult, CodeGuruProfilerError> ListFindingsReportsOutcome;
      typedef Aws::Utils::Outcome<ListProfileTimesResult, CodeGuruProfilerError> ListProfileTimesOutcome;
      typedef Aws::Utils::Outcome<ListProfilingGroupsResult, CodeGuruProfilerError> ListProfilingGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeGuruProfilerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PostAgentProfileResult, CodeGuruProfilerError> PostAgentProfileOutcome;
      typedef Aws::Utils::Outcome<PutPermissionResult, CodeGuruProfilerError> PutPermissionOutcome;
      typedef Aws::Utils::Outcome<RemoveNotificationChannelResult, CodeGuruProfilerError> RemoveNotificationChannelOutcome;
      typedef Aws::Utils::Outcome<RemovePermissionResult, CodeGuruProfilerError> RemovePermissionOutcome;
      typedef Aws::Utils::Outcome<SubmitFeedbackResult, CodeGuruProfilerError> SubmitFeedbackOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CodeGuruProfilerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CodeGuruProfilerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateProfilingGroupResult, CodeGuruProfilerError> UpdateProfilingGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddNotificationChannelsOutcome> AddNotificationChannelsOutcomeCallable;
      typedef std::future<BatchGetFrameMetricDataOutcome> BatchGetFrameMetricDataOutcomeCallable;
      typedef std::future<ConfigureAgentOutcome> ConfigureAgentOutcomeCallable;
      typedef std::future<CreateProfilingGroupOutcome> CreateProfilingGroupOutcomeCallable;
      typedef std::future<DeleteProfilingGroupOutcome> DeleteProfilingGroupOutcomeCallable;
      typedef std::future<DescribeProfilingGroupOutcome> DescribeProfilingGroupOutcomeCallable;
      typedef std::future<GetFindingsReportAccountSummaryOutcome> GetFindingsReportAccountSummaryOutcomeCallable;
      typedef std::future<GetNotificationConfigurationOutcome> GetNotificationConfigurationOutcomeCallable;
      typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
      typedef std::future<GetProfileOutcome> GetProfileOutcomeCallable;
      typedef std::future<GetRecommendationsOutcome> GetRecommendationsOutcomeCallable;
      typedef std::future<ListFindingsReportsOutcome> ListFindingsReportsOutcomeCallable;
      typedef std::future<ListProfileTimesOutcome> ListProfileTimesOutcomeCallable;
      typedef std::future<ListProfilingGroupsOutcome> ListProfilingGroupsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PostAgentProfileOutcome> PostAgentProfileOutcomeCallable;
      typedef std::future<PutPermissionOutcome> PutPermissionOutcomeCallable;
      typedef std::future<RemoveNotificationChannelOutcome> RemoveNotificationChannelOutcomeCallable;
      typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
      typedef std::future<SubmitFeedbackOutcome> SubmitFeedbackOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateProfilingGroupOutcome> UpdateProfilingGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeGuruProfilerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::AddNotificationChannelsRequest&, const Model::AddNotificationChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddNotificationChannelsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::BatchGetFrameMetricDataRequest&, const Model::BatchGetFrameMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetFrameMetricDataResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ConfigureAgentRequest&, const Model::ConfigureAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureAgentResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::CreateProfilingGroupRequest&, const Model::CreateProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfilingGroupResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::DeleteProfilingGroupRequest&, const Model::DeleteProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfilingGroupResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::DescribeProfilingGroupRequest&, const Model::DescribeProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProfilingGroupResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetFindingsReportAccountSummaryRequest&, const Model::GetFindingsReportAccountSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingsReportAccountSummaryResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetNotificationConfigurationRequest&, const Model::GetNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetProfileRequest&, Model::GetProfileOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::GetRecommendationsRequest&, const Model::GetRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListFindingsReportsRequest&, const Model::ListFindingsReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsReportsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListProfileTimesRequest&, const Model::ListProfileTimesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileTimesResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListProfilingGroupsRequest&, const Model::ListProfilingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfilingGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::PostAgentProfileRequest&, const Model::PostAgentProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostAgentProfileResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::PutPermissionRequest&, const Model::PutPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::RemoveNotificationChannelRequest&, const Model::RemoveNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::SubmitFeedbackRequest&, const Model::SubmitFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitFeedbackResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruProfilerClient*, const Model::UpdateProfilingGroupRequest&, const Model::UpdateProfilingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfilingGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeGuruProfiler
} // namespace Aws
