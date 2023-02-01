/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/evidently/CloudWatchEvidentlyErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/evidently/CloudWatchEvidentlyEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudWatchEvidentlyClient header */
#include <aws/evidently/model/BatchEvaluateFeatureResult.h>
#include <aws/evidently/model/CreateExperimentResult.h>
#include <aws/evidently/model/CreateFeatureResult.h>
#include <aws/evidently/model/CreateLaunchResult.h>
#include <aws/evidently/model/CreateProjectResult.h>
#include <aws/evidently/model/CreateSegmentResult.h>
#include <aws/evidently/model/DeleteExperimentResult.h>
#include <aws/evidently/model/DeleteFeatureResult.h>
#include <aws/evidently/model/DeleteLaunchResult.h>
#include <aws/evidently/model/DeleteProjectResult.h>
#include <aws/evidently/model/DeleteSegmentResult.h>
#include <aws/evidently/model/EvaluateFeatureResult.h>
#include <aws/evidently/model/GetExperimentResult.h>
#include <aws/evidently/model/GetExperimentResultsResult.h>
#include <aws/evidently/model/GetFeatureResult.h>
#include <aws/evidently/model/GetLaunchResult.h>
#include <aws/evidently/model/GetProjectResult.h>
#include <aws/evidently/model/GetSegmentResult.h>
#include <aws/evidently/model/ListExperimentsResult.h>
#include <aws/evidently/model/ListFeaturesResult.h>
#include <aws/evidently/model/ListLaunchesResult.h>
#include <aws/evidently/model/ListProjectsResult.h>
#include <aws/evidently/model/ListSegmentReferencesResult.h>
#include <aws/evidently/model/ListSegmentsResult.h>
#include <aws/evidently/model/ListTagsForResourceResult.h>
#include <aws/evidently/model/PutProjectEventsResult.h>
#include <aws/evidently/model/StartExperimentResult.h>
#include <aws/evidently/model/StartLaunchResult.h>
#include <aws/evidently/model/StopExperimentResult.h>
#include <aws/evidently/model/StopLaunchResult.h>
#include <aws/evidently/model/TagResourceResult.h>
#include <aws/evidently/model/TestSegmentPatternResult.h>
#include <aws/evidently/model/UntagResourceResult.h>
#include <aws/evidently/model/UpdateExperimentResult.h>
#include <aws/evidently/model/UpdateFeatureResult.h>
#include <aws/evidently/model/UpdateLaunchResult.h>
#include <aws/evidently/model/UpdateProjectResult.h>
#include <aws/evidently/model/UpdateProjectDataDeliveryResult.h>
/* End of service model headers required in CloudWatchEvidentlyClient header */

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

  namespace CloudWatchEvidently
  {
    using CloudWatchEvidentlyClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudWatchEvidentlyEndpointProviderBase = Aws::CloudWatchEvidently::Endpoint::CloudWatchEvidentlyEndpointProviderBase;
    using CloudWatchEvidentlyEndpointProvider = Aws::CloudWatchEvidently::Endpoint::CloudWatchEvidentlyEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudWatchEvidentlyClient header */
      class BatchEvaluateFeatureRequest;
      class CreateExperimentRequest;
      class CreateFeatureRequest;
      class CreateLaunchRequest;
      class CreateProjectRequest;
      class CreateSegmentRequest;
      class DeleteExperimentRequest;
      class DeleteFeatureRequest;
      class DeleteLaunchRequest;
      class DeleteProjectRequest;
      class DeleteSegmentRequest;
      class EvaluateFeatureRequest;
      class GetExperimentRequest;
      class GetExperimentResultsRequest;
      class GetFeatureRequest;
      class GetLaunchRequest;
      class GetProjectRequest;
      class GetSegmentRequest;
      class ListExperimentsRequest;
      class ListFeaturesRequest;
      class ListLaunchesRequest;
      class ListProjectsRequest;
      class ListSegmentReferencesRequest;
      class ListSegmentsRequest;
      class ListTagsForResourceRequest;
      class PutProjectEventsRequest;
      class StartExperimentRequest;
      class StartLaunchRequest;
      class StopExperimentRequest;
      class StopLaunchRequest;
      class TagResourceRequest;
      class TestSegmentPatternRequest;
      class UntagResourceRequest;
      class UpdateExperimentRequest;
      class UpdateFeatureRequest;
      class UpdateLaunchRequest;
      class UpdateProjectRequest;
      class UpdateProjectDataDeliveryRequest;
      /* End of service model forward declarations required in CloudWatchEvidentlyClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchEvaluateFeatureResult, CloudWatchEvidentlyError> BatchEvaluateFeatureOutcome;
      typedef Aws::Utils::Outcome<CreateExperimentResult, CloudWatchEvidentlyError> CreateExperimentOutcome;
      typedef Aws::Utils::Outcome<CreateFeatureResult, CloudWatchEvidentlyError> CreateFeatureOutcome;
      typedef Aws::Utils::Outcome<CreateLaunchResult, CloudWatchEvidentlyError> CreateLaunchOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, CloudWatchEvidentlyError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<CreateSegmentResult, CloudWatchEvidentlyError> CreateSegmentOutcome;
      typedef Aws::Utils::Outcome<DeleteExperimentResult, CloudWatchEvidentlyError> DeleteExperimentOutcome;
      typedef Aws::Utils::Outcome<DeleteFeatureResult, CloudWatchEvidentlyError> DeleteFeatureOutcome;
      typedef Aws::Utils::Outcome<DeleteLaunchResult, CloudWatchEvidentlyError> DeleteLaunchOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, CloudWatchEvidentlyError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteSegmentResult, CloudWatchEvidentlyError> DeleteSegmentOutcome;
      typedef Aws::Utils::Outcome<EvaluateFeatureResult, CloudWatchEvidentlyError> EvaluateFeatureOutcome;
      typedef Aws::Utils::Outcome<GetExperimentResult, CloudWatchEvidentlyError> GetExperimentOutcome;
      typedef Aws::Utils::Outcome<GetExperimentResultsResult, CloudWatchEvidentlyError> GetExperimentResultsOutcome;
      typedef Aws::Utils::Outcome<GetFeatureResult, CloudWatchEvidentlyError> GetFeatureOutcome;
      typedef Aws::Utils::Outcome<GetLaunchResult, CloudWatchEvidentlyError> GetLaunchOutcome;
      typedef Aws::Utils::Outcome<GetProjectResult, CloudWatchEvidentlyError> GetProjectOutcome;
      typedef Aws::Utils::Outcome<GetSegmentResult, CloudWatchEvidentlyError> GetSegmentOutcome;
      typedef Aws::Utils::Outcome<ListExperimentsResult, CloudWatchEvidentlyError> ListExperimentsOutcome;
      typedef Aws::Utils::Outcome<ListFeaturesResult, CloudWatchEvidentlyError> ListFeaturesOutcome;
      typedef Aws::Utils::Outcome<ListLaunchesResult, CloudWatchEvidentlyError> ListLaunchesOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, CloudWatchEvidentlyError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListSegmentReferencesResult, CloudWatchEvidentlyError> ListSegmentReferencesOutcome;
      typedef Aws::Utils::Outcome<ListSegmentsResult, CloudWatchEvidentlyError> ListSegmentsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CloudWatchEvidentlyError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutProjectEventsResult, CloudWatchEvidentlyError> PutProjectEventsOutcome;
      typedef Aws::Utils::Outcome<StartExperimentResult, CloudWatchEvidentlyError> StartExperimentOutcome;
      typedef Aws::Utils::Outcome<StartLaunchResult, CloudWatchEvidentlyError> StartLaunchOutcome;
      typedef Aws::Utils::Outcome<StopExperimentResult, CloudWatchEvidentlyError> StopExperimentOutcome;
      typedef Aws::Utils::Outcome<StopLaunchResult, CloudWatchEvidentlyError> StopLaunchOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CloudWatchEvidentlyError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestSegmentPatternResult, CloudWatchEvidentlyError> TestSegmentPatternOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CloudWatchEvidentlyError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateExperimentResult, CloudWatchEvidentlyError> UpdateExperimentOutcome;
      typedef Aws::Utils::Outcome<UpdateFeatureResult, CloudWatchEvidentlyError> UpdateFeatureOutcome;
      typedef Aws::Utils::Outcome<UpdateLaunchResult, CloudWatchEvidentlyError> UpdateLaunchOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectResult, CloudWatchEvidentlyError> UpdateProjectOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectDataDeliveryResult, CloudWatchEvidentlyError> UpdateProjectDataDeliveryOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchEvaluateFeatureOutcome> BatchEvaluateFeatureOutcomeCallable;
      typedef std::future<CreateExperimentOutcome> CreateExperimentOutcomeCallable;
      typedef std::future<CreateFeatureOutcome> CreateFeatureOutcomeCallable;
      typedef std::future<CreateLaunchOutcome> CreateLaunchOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<CreateSegmentOutcome> CreateSegmentOutcomeCallable;
      typedef std::future<DeleteExperimentOutcome> DeleteExperimentOutcomeCallable;
      typedef std::future<DeleteFeatureOutcome> DeleteFeatureOutcomeCallable;
      typedef std::future<DeleteLaunchOutcome> DeleteLaunchOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DeleteSegmentOutcome> DeleteSegmentOutcomeCallable;
      typedef std::future<EvaluateFeatureOutcome> EvaluateFeatureOutcomeCallable;
      typedef std::future<GetExperimentOutcome> GetExperimentOutcomeCallable;
      typedef std::future<GetExperimentResultsOutcome> GetExperimentResultsOutcomeCallable;
      typedef std::future<GetFeatureOutcome> GetFeatureOutcomeCallable;
      typedef std::future<GetLaunchOutcome> GetLaunchOutcomeCallable;
      typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
      typedef std::future<GetSegmentOutcome> GetSegmentOutcomeCallable;
      typedef std::future<ListExperimentsOutcome> ListExperimentsOutcomeCallable;
      typedef std::future<ListFeaturesOutcome> ListFeaturesOutcomeCallable;
      typedef std::future<ListLaunchesOutcome> ListLaunchesOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListSegmentReferencesOutcome> ListSegmentReferencesOutcomeCallable;
      typedef std::future<ListSegmentsOutcome> ListSegmentsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutProjectEventsOutcome> PutProjectEventsOutcomeCallable;
      typedef std::future<StartExperimentOutcome> StartExperimentOutcomeCallable;
      typedef std::future<StartLaunchOutcome> StartLaunchOutcomeCallable;
      typedef std::future<StopExperimentOutcome> StopExperimentOutcomeCallable;
      typedef std::future<StopLaunchOutcome> StopLaunchOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestSegmentPatternOutcome> TestSegmentPatternOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateExperimentOutcome> UpdateExperimentOutcomeCallable;
      typedef std::future<UpdateFeatureOutcome> UpdateFeatureOutcomeCallable;
      typedef std::future<UpdateLaunchOutcome> UpdateLaunchOutcomeCallable;
      typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
      typedef std::future<UpdateProjectDataDeliveryOutcome> UpdateProjectDataDeliveryOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudWatchEvidentlyClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::BatchEvaluateFeatureRequest&, const Model::BatchEvaluateFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchEvaluateFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::CreateExperimentRequest&, const Model::CreateExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::CreateFeatureRequest&, const Model::CreateFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::CreateLaunchRequest&, const Model::CreateLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::CreateSegmentRequest&, const Model::CreateSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSegmentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::DeleteExperimentRequest&, const Model::DeleteExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::DeleteFeatureRequest&, const Model::DeleteFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::DeleteLaunchRequest&, const Model::DeleteLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::DeleteSegmentRequest&, const Model::DeleteSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSegmentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::EvaluateFeatureRequest&, const Model::EvaluateFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EvaluateFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetExperimentRequest&, const Model::GetExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetExperimentResultsRequest&, const Model::GetExperimentResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExperimentResultsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetFeatureRequest&, const Model::GetFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetLaunchRequest&, const Model::GetLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetProjectRequest&, const Model::GetProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProjectResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::GetSegmentRequest&, const Model::GetSegmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSegmentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListExperimentsRequest&, const Model::ListExperimentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperimentsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListFeaturesRequest&, const Model::ListFeaturesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFeaturesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListLaunchesRequest&, const Model::ListLaunchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListSegmentReferencesRequest&, const Model::ListSegmentReferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSegmentReferencesResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListSegmentsRequest&, const Model::ListSegmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSegmentsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::PutProjectEventsRequest&, const Model::PutProjectEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProjectEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::StartExperimentRequest&, const Model::StartExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::StartLaunchRequest&, const Model::StartLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::StopExperimentRequest&, const Model::StopExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::StopLaunchRequest&, const Model::StopLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::TestSegmentPatternRequest&, const Model::TestSegmentPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestSegmentPatternResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateExperimentRequest&, const Model::UpdateExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExperimentResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateFeatureRequest&, const Model::UpdateFeatureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFeatureResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateLaunchRequest&, const Model::UpdateLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const CloudWatchEvidentlyClient*, const Model::UpdateProjectDataDeliveryRequest&, const Model::UpdateProjectDataDeliveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectDataDeliveryResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudWatchEvidently
} // namespace Aws
