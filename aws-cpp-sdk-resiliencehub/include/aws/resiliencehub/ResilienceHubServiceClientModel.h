/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/resiliencehub/ResilienceHubErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/resiliencehub/ResilienceHubEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ResilienceHubClient header */
#include <aws/resiliencehub/model/AddDraftAppVersionResourceMappingsResult.h>
#include <aws/resiliencehub/model/CreateAppResult.h>
#include <aws/resiliencehub/model/CreateRecommendationTemplateResult.h>
#include <aws/resiliencehub/model/CreateResiliencyPolicyResult.h>
#include <aws/resiliencehub/model/DeleteAppResult.h>
#include <aws/resiliencehub/model/DeleteAppAssessmentResult.h>
#include <aws/resiliencehub/model/DeleteRecommendationTemplateResult.h>
#include <aws/resiliencehub/model/DeleteResiliencyPolicyResult.h>
#include <aws/resiliencehub/model/DescribeAppResult.h>
#include <aws/resiliencehub/model/DescribeAppAssessmentResult.h>
#include <aws/resiliencehub/model/DescribeAppVersionResourcesResolutionStatusResult.h>
#include <aws/resiliencehub/model/DescribeAppVersionTemplateResult.h>
#include <aws/resiliencehub/model/DescribeDraftAppVersionResourcesImportStatusResult.h>
#include <aws/resiliencehub/model/DescribeResiliencyPolicyResult.h>
#include <aws/resiliencehub/model/ImportResourcesToDraftAppVersionResult.h>
#include <aws/resiliencehub/model/ListAlarmRecommendationsResult.h>
#include <aws/resiliencehub/model/ListAppAssessmentsResult.h>
#include <aws/resiliencehub/model/ListAppComponentCompliancesResult.h>
#include <aws/resiliencehub/model/ListAppComponentRecommendationsResult.h>
#include <aws/resiliencehub/model/ListAppVersionResourceMappingsResult.h>
#include <aws/resiliencehub/model/ListAppVersionResourcesResult.h>
#include <aws/resiliencehub/model/ListAppVersionsResult.h>
#include <aws/resiliencehub/model/ListAppsResult.h>
#include <aws/resiliencehub/model/ListRecommendationTemplatesResult.h>
#include <aws/resiliencehub/model/ListResiliencyPoliciesResult.h>
#include <aws/resiliencehub/model/ListSopRecommendationsResult.h>
#include <aws/resiliencehub/model/ListSuggestedResiliencyPoliciesResult.h>
#include <aws/resiliencehub/model/ListTagsForResourceResult.h>
#include <aws/resiliencehub/model/ListTestRecommendationsResult.h>
#include <aws/resiliencehub/model/ListUnsupportedAppVersionResourcesResult.h>
#include <aws/resiliencehub/model/PublishAppVersionResult.h>
#include <aws/resiliencehub/model/PutDraftAppVersionTemplateResult.h>
#include <aws/resiliencehub/model/RemoveDraftAppVersionResourceMappingsResult.h>
#include <aws/resiliencehub/model/ResolveAppVersionResourcesResult.h>
#include <aws/resiliencehub/model/StartAppAssessmentResult.h>
#include <aws/resiliencehub/model/TagResourceResult.h>
#include <aws/resiliencehub/model/UntagResourceResult.h>
#include <aws/resiliencehub/model/UpdateAppResult.h>
#include <aws/resiliencehub/model/UpdateResiliencyPolicyResult.h>
/* End of service model headers required in ResilienceHubClient header */

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

  namespace ResilienceHub
  {
    using ResilienceHubClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ResilienceHubEndpointProviderBase = Aws::ResilienceHub::Endpoint::ResilienceHubEndpointProviderBase;
    using ResilienceHubEndpointProvider = Aws::ResilienceHub::Endpoint::ResilienceHubEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ResilienceHubClient header */
      class AddDraftAppVersionResourceMappingsRequest;
      class CreateAppRequest;
      class CreateRecommendationTemplateRequest;
      class CreateResiliencyPolicyRequest;
      class DeleteAppRequest;
      class DeleteAppAssessmentRequest;
      class DeleteRecommendationTemplateRequest;
      class DeleteResiliencyPolicyRequest;
      class DescribeAppRequest;
      class DescribeAppAssessmentRequest;
      class DescribeAppVersionResourcesResolutionStatusRequest;
      class DescribeAppVersionTemplateRequest;
      class DescribeDraftAppVersionResourcesImportStatusRequest;
      class DescribeResiliencyPolicyRequest;
      class ImportResourcesToDraftAppVersionRequest;
      class ListAlarmRecommendationsRequest;
      class ListAppAssessmentsRequest;
      class ListAppComponentCompliancesRequest;
      class ListAppComponentRecommendationsRequest;
      class ListAppVersionResourceMappingsRequest;
      class ListAppVersionResourcesRequest;
      class ListAppVersionsRequest;
      class ListAppsRequest;
      class ListRecommendationTemplatesRequest;
      class ListResiliencyPoliciesRequest;
      class ListSopRecommendationsRequest;
      class ListSuggestedResiliencyPoliciesRequest;
      class ListTagsForResourceRequest;
      class ListTestRecommendationsRequest;
      class ListUnsupportedAppVersionResourcesRequest;
      class PublishAppVersionRequest;
      class PutDraftAppVersionTemplateRequest;
      class RemoveDraftAppVersionResourceMappingsRequest;
      class ResolveAppVersionResourcesRequest;
      class StartAppAssessmentRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAppRequest;
      class UpdateResiliencyPolicyRequest;
      /* End of service model forward declarations required in ResilienceHubClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddDraftAppVersionResourceMappingsResult, ResilienceHubError> AddDraftAppVersionResourceMappingsOutcome;
      typedef Aws::Utils::Outcome<CreateAppResult, ResilienceHubError> CreateAppOutcome;
      typedef Aws::Utils::Outcome<CreateRecommendationTemplateResult, ResilienceHubError> CreateRecommendationTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateResiliencyPolicyResult, ResilienceHubError> CreateResiliencyPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteAppResult, ResilienceHubError> DeleteAppOutcome;
      typedef Aws::Utils::Outcome<DeleteAppAssessmentResult, ResilienceHubError> DeleteAppAssessmentOutcome;
      typedef Aws::Utils::Outcome<DeleteRecommendationTemplateResult, ResilienceHubError> DeleteRecommendationTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteResiliencyPolicyResult, ResilienceHubError> DeleteResiliencyPolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeAppResult, ResilienceHubError> DescribeAppOutcome;
      typedef Aws::Utils::Outcome<DescribeAppAssessmentResult, ResilienceHubError> DescribeAppAssessmentOutcome;
      typedef Aws::Utils::Outcome<DescribeAppVersionResourcesResolutionStatusResult, ResilienceHubError> DescribeAppVersionResourcesResolutionStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeAppVersionTemplateResult, ResilienceHubError> DescribeAppVersionTemplateOutcome;
      typedef Aws::Utils::Outcome<DescribeDraftAppVersionResourcesImportStatusResult, ResilienceHubError> DescribeDraftAppVersionResourcesImportStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeResiliencyPolicyResult, ResilienceHubError> DescribeResiliencyPolicyOutcome;
      typedef Aws::Utils::Outcome<ImportResourcesToDraftAppVersionResult, ResilienceHubError> ImportResourcesToDraftAppVersionOutcome;
      typedef Aws::Utils::Outcome<ListAlarmRecommendationsResult, ResilienceHubError> ListAlarmRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ListAppAssessmentsResult, ResilienceHubError> ListAppAssessmentsOutcome;
      typedef Aws::Utils::Outcome<ListAppComponentCompliancesResult, ResilienceHubError> ListAppComponentCompliancesOutcome;
      typedef Aws::Utils::Outcome<ListAppComponentRecommendationsResult, ResilienceHubError> ListAppComponentRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ListAppVersionResourceMappingsResult, ResilienceHubError> ListAppVersionResourceMappingsOutcome;
      typedef Aws::Utils::Outcome<ListAppVersionResourcesResult, ResilienceHubError> ListAppVersionResourcesOutcome;
      typedef Aws::Utils::Outcome<ListAppVersionsResult, ResilienceHubError> ListAppVersionsOutcome;
      typedef Aws::Utils::Outcome<ListAppsResult, ResilienceHubError> ListAppsOutcome;
      typedef Aws::Utils::Outcome<ListRecommendationTemplatesResult, ResilienceHubError> ListRecommendationTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListResiliencyPoliciesResult, ResilienceHubError> ListResiliencyPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListSopRecommendationsResult, ResilienceHubError> ListSopRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ListSuggestedResiliencyPoliciesResult, ResilienceHubError> ListSuggestedResiliencyPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ResilienceHubError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTestRecommendationsResult, ResilienceHubError> ListTestRecommendationsOutcome;
      typedef Aws::Utils::Outcome<ListUnsupportedAppVersionResourcesResult, ResilienceHubError> ListUnsupportedAppVersionResourcesOutcome;
      typedef Aws::Utils::Outcome<PublishAppVersionResult, ResilienceHubError> PublishAppVersionOutcome;
      typedef Aws::Utils::Outcome<PutDraftAppVersionTemplateResult, ResilienceHubError> PutDraftAppVersionTemplateOutcome;
      typedef Aws::Utils::Outcome<RemoveDraftAppVersionResourceMappingsResult, ResilienceHubError> RemoveDraftAppVersionResourceMappingsOutcome;
      typedef Aws::Utils::Outcome<ResolveAppVersionResourcesResult, ResilienceHubError> ResolveAppVersionResourcesOutcome;
      typedef Aws::Utils::Outcome<StartAppAssessmentResult, ResilienceHubError> StartAppAssessmentOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ResilienceHubError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ResilienceHubError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAppResult, ResilienceHubError> UpdateAppOutcome;
      typedef Aws::Utils::Outcome<UpdateResiliencyPolicyResult, ResilienceHubError> UpdateResiliencyPolicyOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddDraftAppVersionResourceMappingsOutcome> AddDraftAppVersionResourceMappingsOutcomeCallable;
      typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
      typedef std::future<CreateRecommendationTemplateOutcome> CreateRecommendationTemplateOutcomeCallable;
      typedef std::future<CreateResiliencyPolicyOutcome> CreateResiliencyPolicyOutcomeCallable;
      typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
      typedef std::future<DeleteAppAssessmentOutcome> DeleteAppAssessmentOutcomeCallable;
      typedef std::future<DeleteRecommendationTemplateOutcome> DeleteRecommendationTemplateOutcomeCallable;
      typedef std::future<DeleteResiliencyPolicyOutcome> DeleteResiliencyPolicyOutcomeCallable;
      typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
      typedef std::future<DescribeAppAssessmentOutcome> DescribeAppAssessmentOutcomeCallable;
      typedef std::future<DescribeAppVersionResourcesResolutionStatusOutcome> DescribeAppVersionResourcesResolutionStatusOutcomeCallable;
      typedef std::future<DescribeAppVersionTemplateOutcome> DescribeAppVersionTemplateOutcomeCallable;
      typedef std::future<DescribeDraftAppVersionResourcesImportStatusOutcome> DescribeDraftAppVersionResourcesImportStatusOutcomeCallable;
      typedef std::future<DescribeResiliencyPolicyOutcome> DescribeResiliencyPolicyOutcomeCallable;
      typedef std::future<ImportResourcesToDraftAppVersionOutcome> ImportResourcesToDraftAppVersionOutcomeCallable;
      typedef std::future<ListAlarmRecommendationsOutcome> ListAlarmRecommendationsOutcomeCallable;
      typedef std::future<ListAppAssessmentsOutcome> ListAppAssessmentsOutcomeCallable;
      typedef std::future<ListAppComponentCompliancesOutcome> ListAppComponentCompliancesOutcomeCallable;
      typedef std::future<ListAppComponentRecommendationsOutcome> ListAppComponentRecommendationsOutcomeCallable;
      typedef std::future<ListAppVersionResourceMappingsOutcome> ListAppVersionResourceMappingsOutcomeCallable;
      typedef std::future<ListAppVersionResourcesOutcome> ListAppVersionResourcesOutcomeCallable;
      typedef std::future<ListAppVersionsOutcome> ListAppVersionsOutcomeCallable;
      typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
      typedef std::future<ListRecommendationTemplatesOutcome> ListRecommendationTemplatesOutcomeCallable;
      typedef std::future<ListResiliencyPoliciesOutcome> ListResiliencyPoliciesOutcomeCallable;
      typedef std::future<ListSopRecommendationsOutcome> ListSopRecommendationsOutcomeCallable;
      typedef std::future<ListSuggestedResiliencyPoliciesOutcome> ListSuggestedResiliencyPoliciesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTestRecommendationsOutcome> ListTestRecommendationsOutcomeCallable;
      typedef std::future<ListUnsupportedAppVersionResourcesOutcome> ListUnsupportedAppVersionResourcesOutcomeCallable;
      typedef std::future<PublishAppVersionOutcome> PublishAppVersionOutcomeCallable;
      typedef std::future<PutDraftAppVersionTemplateOutcome> PutDraftAppVersionTemplateOutcomeCallable;
      typedef std::future<RemoveDraftAppVersionResourceMappingsOutcome> RemoveDraftAppVersionResourceMappingsOutcomeCallable;
      typedef std::future<ResolveAppVersionResourcesOutcome> ResolveAppVersionResourcesOutcomeCallable;
      typedef std::future<StartAppAssessmentOutcome> StartAppAssessmentOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
      typedef std::future<UpdateResiliencyPolicyOutcome> UpdateResiliencyPolicyOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ResilienceHubClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ResilienceHubClient*, const Model::AddDraftAppVersionResourceMappingsRequest&, const Model::AddDraftAppVersionResourceMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddDraftAppVersionResourceMappingsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::CreateRecommendationTemplateRequest&, const Model::CreateRecommendationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRecommendationTemplateResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::CreateResiliencyPolicyRequest&, const Model::CreateResiliencyPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResiliencyPolicyResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DeleteAppAssessmentRequest&, const Model::DeleteAppAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppAssessmentResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DeleteRecommendationTemplateRequest&, const Model::DeleteRecommendationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecommendationTemplateResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DeleteResiliencyPolicyRequest&, const Model::DeleteResiliencyPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResiliencyPolicyResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DescribeAppRequest&, const Model::DescribeAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DescribeAppAssessmentRequest&, const Model::DescribeAppAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppAssessmentResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DescribeAppVersionResourcesResolutionStatusRequest&, const Model::DescribeAppVersionResourcesResolutionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppVersionResourcesResolutionStatusResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DescribeAppVersionTemplateRequest&, const Model::DescribeAppVersionTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppVersionTemplateResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DescribeDraftAppVersionResourcesImportStatusRequest&, const Model::DescribeDraftAppVersionResourcesImportStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDraftAppVersionResourcesImportStatusResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::DescribeResiliencyPolicyRequest&, const Model::DescribeResiliencyPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResiliencyPolicyResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ImportResourcesToDraftAppVersionRequest&, const Model::ImportResourcesToDraftAppVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportResourcesToDraftAppVersionResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListAlarmRecommendationsRequest&, const Model::ListAlarmRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlarmRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListAppAssessmentsRequest&, const Model::ListAppAssessmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppAssessmentsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListAppComponentCompliancesRequest&, const Model::ListAppComponentCompliancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppComponentCompliancesResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListAppComponentRecommendationsRequest&, const Model::ListAppComponentRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppComponentRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListAppVersionResourceMappingsRequest&, const Model::ListAppVersionResourceMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppVersionResourceMappingsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListAppVersionResourcesRequest&, const Model::ListAppVersionResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppVersionResourcesResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListAppVersionsRequest&, const Model::ListAppVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppVersionsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListAppsRequest&, const Model::ListAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListRecommendationTemplatesRequest&, const Model::ListRecommendationTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationTemplatesResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListResiliencyPoliciesRequest&, const Model::ListResiliencyPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResiliencyPoliciesResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListSopRecommendationsRequest&, const Model::ListSopRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSopRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListSuggestedResiliencyPoliciesRequest&, const Model::ListSuggestedResiliencyPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSuggestedResiliencyPoliciesResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListTestRecommendationsRequest&, const Model::ListTestRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestRecommendationsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ListUnsupportedAppVersionResourcesRequest&, const Model::ListUnsupportedAppVersionResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUnsupportedAppVersionResourcesResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::PublishAppVersionRequest&, const Model::PublishAppVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishAppVersionResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::PutDraftAppVersionTemplateRequest&, const Model::PutDraftAppVersionTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDraftAppVersionTemplateResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::RemoveDraftAppVersionResourceMappingsRequest&, const Model::RemoveDraftAppVersionResourceMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveDraftAppVersionResourceMappingsResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::ResolveAppVersionResourcesRequest&, const Model::ResolveAppVersionResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResolveAppVersionResourcesResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::StartAppAssessmentRequest&, const Model::StartAppAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAppAssessmentResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::UpdateAppRequest&, const Model::UpdateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppResponseReceivedHandler;
    typedef std::function<void(const ResilienceHubClient*, const Model::UpdateResiliencyPolicyRequest&, const Model::UpdateResiliencyPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResiliencyPolicyResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ResilienceHub
} // namespace Aws
