/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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

namespace ResilienceHub
{

namespace Model
{
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
} // namespace Model

  class ResilienceHubClient;

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

  /**
   * <p>AWS Resilience Hub helps you proactively prepare and protect your Amazon Web
   * Services applications from disruptions. Resilience Hub offers continuous
   * resiliency assessment and validation that integrates into your software
   * development lifecycle. This enables you to uncover resiliency weaknesses, ensure
   * recovery time objective (RTO) and recovery point objective (RPO) targets for
   * your applications are met, and resolve issues before they are released into
   * production. </p>
   */
  class AWS_RESILIENCEHUB_API ResilienceHubClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResilienceHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ResilienceHubClient();


        /**
         * <p>Adds the resource mapping for the draft application version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AddDraftAppVersionResourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::AddDraftAppVersionResourceMappingsOutcome AddDraftAppVersionResourceMappings(const Model::AddDraftAppVersionResourceMappingsRequest& request) const;

        /**
         * A Callable wrapper for AddDraftAppVersionResourceMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddDraftAppVersionResourceMappingsOutcomeCallable AddDraftAppVersionResourceMappingsCallable(const Model::AddDraftAppVersionResourceMappingsRequest& request) const;

        /**
         * An Async wrapper for AddDraftAppVersionResourceMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddDraftAppVersionResourceMappingsAsync(const Model::AddDraftAppVersionResourceMappingsRequest& request, const AddDraftAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Resilience Hub application. A Resilience Hub application is a
         * collection of Amazon Web Services resources structured to prevent and recover
         * Amazon Web Services application disruptions. To describe a Resilience Hub
         * application, you provide an application name, resources from one or more–up to
         * five–CloudFormation stacks, and an appropriate resiliency policy.</p>
         * <pre><code> &lt;p&gt;After you create a Resilience Hub application, you publish
         * it so that you can run a resiliency assessment on it. You can then use
         * recommendations from the assessment to improve resiliency by running another
         * assessment, comparing results, and then iterating the process until you achieve
         * your goals for recovery time objective (RTO) and recovery point objective
         * (RPO).&lt;/p&gt; </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new recommendation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateRecommendationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecommendationTemplateOutcome CreateRecommendationTemplate(const Model::CreateRecommendationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateRecommendationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRecommendationTemplateOutcomeCallable CreateRecommendationTemplateCallable(const Model::CreateRecommendationTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateRecommendationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRecommendationTemplateAsync(const Model::CreateRecommendationTemplateRequest& request, const CreateRecommendationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a resiliency policy for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResiliencyPolicyOutcome CreateResiliencyPolicy(const Model::CreateResiliencyPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateResiliencyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResiliencyPolicyOutcomeCallable CreateResiliencyPolicyCallable(const Model::CreateResiliencyPolicyRequest& request) const;

        /**
         * An Async wrapper for CreateResiliencyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResiliencyPolicyAsync(const Model::CreateResiliencyPolicyRequest& request, const CreateResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Resilience Hub application. This is a destructive action that
         * can't be undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Resilience Hub application assessment. This is a destructive
         * action that can't be undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteAppAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppAssessmentOutcome DeleteAppAssessment(const Model::DeleteAppAssessmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppAssessmentOutcomeCallable DeleteAppAssessmentCallable(const Model::DeleteAppAssessmentRequest& request) const;

        /**
         * An Async wrapper for DeleteAppAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAssessmentAsync(const Model::DeleteAppAssessmentRequest& request, const DeleteAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a recommendation template. This is a destructive action that can't be
         * undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteRecommendationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecommendationTemplateOutcome DeleteRecommendationTemplate(const Model::DeleteRecommendationTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecommendationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecommendationTemplateOutcomeCallable DeleteRecommendationTemplateCallable(const Model::DeleteRecommendationTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteRecommendationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecommendationTemplateAsync(const Model::DeleteRecommendationTemplateRequest& request, const DeleteRecommendationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a resiliency policy. This is a destructive action that can't be
         * undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResiliencyPolicyOutcome DeleteResiliencyPolicy(const Model::DeleteResiliencyPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResiliencyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResiliencyPolicyOutcomeCallable DeleteResiliencyPolicyCallable(const Model::DeleteResiliencyPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResiliencyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResiliencyPolicyAsync(const Model::DeleteResiliencyPolicyRequest& request, const DeleteResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an AWS Resilience Hub application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest& request) const;

        /**
         * A Callable wrapper for DescribeApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request) const;

        /**
         * An Async wrapper for DescribeApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an assessment for an AWS Resilience Hub application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppAssessmentOutcome DescribeAppAssessment(const Model::DescribeAppAssessmentRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppAssessmentOutcomeCallable DescribeAppAssessmentCallable(const Model::DescribeAppAssessmentRequest& request) const;

        /**
         * An Async wrapper for DescribeAppAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppAssessmentAsync(const Model::DescribeAppAssessmentRequest& request, const DescribeAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the resolution status for the specified resolution identifier for an
         * application version. If <code>resolutionId</code> is not specified, the current
         * resolution status is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppVersionResourcesResolutionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppVersionResourcesResolutionStatusOutcome DescribeAppVersionResourcesResolutionStatus(const Model::DescribeAppVersionResourcesResolutionStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppVersionResourcesResolutionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppVersionResourcesResolutionStatusOutcomeCallable DescribeAppVersionResourcesResolutionStatusCallable(const Model::DescribeAppVersionResourcesResolutionStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeAppVersionResourcesResolutionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppVersionResourcesResolutionStatusAsync(const Model::DescribeAppVersionResourcesResolutionStatusRequest& request, const DescribeAppVersionResourcesResolutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes details about an AWS Resilience Hub </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppVersionTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppVersionTemplateOutcome DescribeAppVersionTemplate(const Model::DescribeAppVersionTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeAppVersionTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppVersionTemplateOutcomeCallable DescribeAppVersionTemplateCallable(const Model::DescribeAppVersionTemplateRequest& request) const;

        /**
         * An Async wrapper for DescribeAppVersionTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppVersionTemplateAsync(const Model::DescribeAppVersionTemplateRequest& request, const DescribeAppVersionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the status of importing resources to an application
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeDraftAppVersionResourcesImportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDraftAppVersionResourcesImportStatusOutcome DescribeDraftAppVersionResourcesImportStatus(const Model::DescribeDraftAppVersionResourcesImportStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeDraftAppVersionResourcesImportStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDraftAppVersionResourcesImportStatusOutcomeCallable DescribeDraftAppVersionResourcesImportStatusCallable(const Model::DescribeDraftAppVersionResourcesImportStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeDraftAppVersionResourcesImportStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDraftAppVersionResourcesImportStatusAsync(const Model::DescribeDraftAppVersionResourcesImportStatusRequest& request, const DescribeDraftAppVersionResourcesImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a specified resiliency policy for an AWS Resilience Hub
         * application. The returned policy object includes creation time, data location
         * constraints, the Amazon Resource Name (ARN) for the policy, tags, tier, and
         * more.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResiliencyPolicyOutcome DescribeResiliencyPolicy(const Model::DescribeResiliencyPolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeResiliencyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResiliencyPolicyOutcomeCallable DescribeResiliencyPolicyCallable(const Model::DescribeResiliencyPolicyRequest& request) const;

        /**
         * An Async wrapper for DescribeResiliencyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResiliencyPolicyAsync(const Model::DescribeResiliencyPolicyRequest& request, const DescribeResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports resources from sources such as a CloudFormation stack,
         * resource-groups, or application registry app to a draft application
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ImportResourcesToDraftAppVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportResourcesToDraftAppVersionOutcome ImportResourcesToDraftAppVersion(const Model::ImportResourcesToDraftAppVersionRequest& request) const;

        /**
         * A Callable wrapper for ImportResourcesToDraftAppVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportResourcesToDraftAppVersionOutcomeCallable ImportResourcesToDraftAppVersionCallable(const Model::ImportResourcesToDraftAppVersionRequest& request) const;

        /**
         * An Async wrapper for ImportResourcesToDraftAppVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportResourcesToDraftAppVersionAsync(const Model::ImportResourcesToDraftAppVersionRequest& request, const ImportResourcesToDraftAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the alarm recommendations for a AWS Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAlarmRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlarmRecommendationsOutcome ListAlarmRecommendations(const Model::ListAlarmRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListAlarmRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAlarmRecommendationsOutcomeCallable ListAlarmRecommendationsCallable(const Model::ListAlarmRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ListAlarmRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAlarmRecommendationsAsync(const Model::ListAlarmRecommendationsRequest& request, const ListAlarmRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the assessments for an AWS Resilience Hub application. You can use
         * request parameters to refine the results for the response object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppAssessments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppAssessmentsOutcome ListAppAssessments(const Model::ListAppAssessmentsRequest& request) const;

        /**
         * A Callable wrapper for ListAppAssessments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppAssessmentsOutcomeCallable ListAppAssessmentsCallable(const Model::ListAppAssessmentsRequest& request) const;

        /**
         * An Async wrapper for ListAppAssessments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppAssessmentsAsync(const Model::ListAppAssessmentsRequest& request, const ListAppAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the compliances for an AWS Resilience Hub component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppComponentCompliances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppComponentCompliancesOutcome ListAppComponentCompliances(const Model::ListAppComponentCompliancesRequest& request) const;

        /**
         * A Callable wrapper for ListAppComponentCompliances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppComponentCompliancesOutcomeCallable ListAppComponentCompliancesCallable(const Model::ListAppComponentCompliancesRequest& request) const;

        /**
         * An Async wrapper for ListAppComponentCompliances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppComponentCompliancesAsync(const Model::ListAppComponentCompliancesRequest& request, const ListAppComponentCompliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the recommendations for an AWS Resilience Hub component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppComponentRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppComponentRecommendationsOutcome ListAppComponentRecommendations(const Model::ListAppComponentRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListAppComponentRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppComponentRecommendationsOutcomeCallable ListAppComponentRecommendationsCallable(const Model::ListAppComponentRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ListAppComponentRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppComponentRecommendationsAsync(const Model::ListAppComponentRecommendationsRequest& request, const ListAppComponentRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists how the resources in an application version are mapped/sourced from.
         * Mappings can be physical resource identifiers, CloudFormation stacks,
         * resource-groups, or an application registry app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersionResourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionResourceMappingsOutcome ListAppVersionResourceMappings(const Model::ListAppVersionResourceMappingsRequest& request) const;

        /**
         * A Callable wrapper for ListAppVersionResourceMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppVersionResourceMappingsOutcomeCallable ListAppVersionResourceMappingsCallable(const Model::ListAppVersionResourceMappingsRequest& request) const;

        /**
         * An Async wrapper for ListAppVersionResourceMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppVersionResourceMappingsAsync(const Model::ListAppVersionResourceMappingsRequest& request, const ListAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the resources in an application version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersionResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionResourcesOutcome ListAppVersionResources(const Model::ListAppVersionResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListAppVersionResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppVersionResourcesOutcomeCallable ListAppVersionResourcesCallable(const Model::ListAppVersionResourcesRequest& request) const;

        /**
         * An Async wrapper for ListAppVersionResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppVersionResourcesAsync(const Model::ListAppVersionResourcesRequest& request, const ListAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the different versions for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionsOutcome ListAppVersions(const Model::ListAppVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAppVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppVersionsOutcomeCallable ListAppVersionsCallable(const Model::ListAppVersionsRequest& request) const;

        /**
         * An Async wrapper for ListAppVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppVersionsAsync(const Model::ListAppVersionsRequest& request, const ListAppVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your Resilience Hub applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppsOutcomeCallable ListAppsCallable(const Model::ListAppsRequest& request) const;

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppsAsync(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the recommendation templates for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListRecommendationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationTemplatesOutcome ListRecommendationTemplates(const Model::ListRecommendationTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendationTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecommendationTemplatesOutcomeCallable ListRecommendationTemplatesCallable(const Model::ListRecommendationTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListRecommendationTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecommendationTemplatesAsync(const Model::ListRecommendationTemplatesRequest& request, const ListRecommendationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resiliency policies for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListResiliencyPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResiliencyPoliciesOutcome ListResiliencyPolicies(const Model::ListResiliencyPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListResiliencyPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResiliencyPoliciesOutcomeCallable ListResiliencyPoliciesCallable(const Model::ListResiliencyPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListResiliencyPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResiliencyPoliciesAsync(const Model::ListResiliencyPoliciesRequest& request, const ListResiliencyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the standard operating procedure (SOP) recommendations for the
         * Resilience Hub applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListSopRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSopRecommendationsOutcome ListSopRecommendations(const Model::ListSopRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListSopRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSopRecommendationsOutcomeCallable ListSopRecommendationsCallable(const Model::ListSopRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ListSopRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSopRecommendationsAsync(const Model::ListSopRecommendationsRequest& request, const ListSopRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the suggested resiliency policies for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListSuggestedResiliencyPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuggestedResiliencyPoliciesOutcome ListSuggestedResiliencyPolicies(const Model::ListSuggestedResiliencyPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListSuggestedResiliencyPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSuggestedResiliencyPoliciesOutcomeCallable ListSuggestedResiliencyPoliciesCallable(const Model::ListSuggestedResiliencyPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListSuggestedResiliencyPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuggestedResiliencyPoliciesAsync(const Model::ListSuggestedResiliencyPoliciesRequest& request, const ListSuggestedResiliencyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for your resources in your Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the test recommendations for the Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListTestRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestRecommendationsOutcome ListTestRecommendations(const Model::ListTestRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListTestRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTestRecommendationsOutcomeCallable ListTestRecommendationsCallable(const Model::ListTestRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ListTestRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestRecommendationsAsync(const Model::ListTestRecommendationsRequest& request, const ListTestRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resources that are not currently supported in AWS Resilience Hub.
         * An unsupported resource is a resource that exists in the object that was used to
         * create an app, but is not supported by Resilience Hub.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListUnsupportedAppVersionResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUnsupportedAppVersionResourcesOutcome ListUnsupportedAppVersionResources(const Model::ListUnsupportedAppVersionResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListUnsupportedAppVersionResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUnsupportedAppVersionResourcesOutcomeCallable ListUnsupportedAppVersionResourcesCallable(const Model::ListUnsupportedAppVersionResourcesRequest& request) const;

        /**
         * An Async wrapper for ListUnsupportedAppVersionResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUnsupportedAppVersionResourcesAsync(const Model::ListUnsupportedAppVersionResourcesRequest& request, const ListUnsupportedAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Publishes a new version of a specific Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PublishAppVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishAppVersionOutcome PublishAppVersion(const Model::PublishAppVersionRequest& request) const;

        /**
         * A Callable wrapper for PublishAppVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishAppVersionOutcomeCallable PublishAppVersionCallable(const Model::PublishAppVersionRequest& request) const;

        /**
         * An Async wrapper for PublishAppVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishAppVersionAsync(const Model::PublishAppVersionRequest& request, const PublishAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates the app template for a draft version of a Resilience Hub
         * app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PutDraftAppVersionTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDraftAppVersionTemplateOutcome PutDraftAppVersionTemplate(const Model::PutDraftAppVersionTemplateRequest& request) const;

        /**
         * A Callable wrapper for PutDraftAppVersionTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDraftAppVersionTemplateOutcomeCallable PutDraftAppVersionTemplateCallable(const Model::PutDraftAppVersionTemplateRequest& request) const;

        /**
         * An Async wrapper for PutDraftAppVersionTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDraftAppVersionTemplateAsync(const Model::PutDraftAppVersionTemplateRequest& request, const PutDraftAppVersionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes resource mappings from a draft application version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/RemoveDraftAppVersionResourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveDraftAppVersionResourceMappingsOutcome RemoveDraftAppVersionResourceMappings(const Model::RemoveDraftAppVersionResourceMappingsRequest& request) const;

        /**
         * A Callable wrapper for RemoveDraftAppVersionResourceMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveDraftAppVersionResourceMappingsOutcomeCallable RemoveDraftAppVersionResourceMappingsCallable(const Model::RemoveDraftAppVersionResourceMappingsRequest& request) const;

        /**
         * An Async wrapper for RemoveDraftAppVersionResourceMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveDraftAppVersionResourceMappingsAsync(const Model::RemoveDraftAppVersionResourceMappingsRequest& request, const RemoveDraftAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resolves the resources for an application version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResolveAppVersionResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveAppVersionResourcesOutcome ResolveAppVersionResources(const Model::ResolveAppVersionResourcesRequest& request) const;

        /**
         * A Callable wrapper for ResolveAppVersionResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveAppVersionResourcesOutcomeCallable ResolveAppVersionResourcesCallable(const Model::ResolveAppVersionResourcesRequest& request) const;

        /**
         * An Async wrapper for ResolveAppVersionResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveAppVersionResourcesAsync(const Model::ResolveAppVersionResourcesRequest& request, const ResolveAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new application assessment for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/StartAppAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAppAssessmentOutcome StartAppAssessment(const Model::StartAppAssessmentRequest& request) const;

        /**
         * A Callable wrapper for StartAppAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAppAssessmentOutcomeCallable StartAppAssessmentCallable(const Model::StartAppAssessmentRequest& request) const;

        /**
         * An Async wrapper for StartAppAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAppAssessmentAsync(const Model::StartAppAssessmentRequest& request, const StartAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * A Callable wrapper for UpdateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppOutcomeCallable UpdateAppCallable(const Model::UpdateAppRequest& request) const;

        /**
         * An Async wrapper for UpdateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a resiliency policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResiliencyPolicyOutcome UpdateResiliencyPolicy(const Model::UpdateResiliencyPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateResiliencyPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResiliencyPolicyOutcomeCallable UpdateResiliencyPolicyCallable(const Model::UpdateResiliencyPolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateResiliencyPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResiliencyPolicyAsync(const Model::UpdateResiliencyPolicyRequest& request, const UpdateResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddDraftAppVersionResourceMappingsAsyncHelper(const Model::AddDraftAppVersionResourceMappingsRequest& request, const AddDraftAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppAsyncHelper(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRecommendationTemplateAsyncHelper(const Model::CreateRecommendationTemplateRequest& request, const CreateRecommendationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResiliencyPolicyAsyncHelper(const Model::CreateResiliencyPolicyRequest& request, const CreateResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppAsyncHelper(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppAssessmentAsyncHelper(const Model::DeleteAppAssessmentRequest& request, const DeleteAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRecommendationTemplateAsyncHelper(const Model::DeleteRecommendationTemplateRequest& request, const DeleteRecommendationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResiliencyPolicyAsyncHelper(const Model::DeleteResiliencyPolicyRequest& request, const DeleteResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppAsyncHelper(const Model::DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppAssessmentAsyncHelper(const Model::DescribeAppAssessmentRequest& request, const DescribeAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppVersionResourcesResolutionStatusAsyncHelper(const Model::DescribeAppVersionResourcesResolutionStatusRequest& request, const DescribeAppVersionResourcesResolutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppVersionTemplateAsyncHelper(const Model::DescribeAppVersionTemplateRequest& request, const DescribeAppVersionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDraftAppVersionResourcesImportStatusAsyncHelper(const Model::DescribeDraftAppVersionResourcesImportStatusRequest& request, const DescribeDraftAppVersionResourcesImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResiliencyPolicyAsyncHelper(const Model::DescribeResiliencyPolicyRequest& request, const DescribeResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportResourcesToDraftAppVersionAsyncHelper(const Model::ImportResourcesToDraftAppVersionRequest& request, const ImportResourcesToDraftAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAlarmRecommendationsAsyncHelper(const Model::ListAlarmRecommendationsRequest& request, const ListAlarmRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppAssessmentsAsyncHelper(const Model::ListAppAssessmentsRequest& request, const ListAppAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppComponentCompliancesAsyncHelper(const Model::ListAppComponentCompliancesRequest& request, const ListAppComponentCompliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppComponentRecommendationsAsyncHelper(const Model::ListAppComponentRecommendationsRequest& request, const ListAppComponentRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppVersionResourceMappingsAsyncHelper(const Model::ListAppVersionResourceMappingsRequest& request, const ListAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppVersionResourcesAsyncHelper(const Model::ListAppVersionResourcesRequest& request, const ListAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppVersionsAsyncHelper(const Model::ListAppVersionsRequest& request, const ListAppVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppsAsyncHelper(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecommendationTemplatesAsyncHelper(const Model::ListRecommendationTemplatesRequest& request, const ListRecommendationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResiliencyPoliciesAsyncHelper(const Model::ListResiliencyPoliciesRequest& request, const ListResiliencyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSopRecommendationsAsyncHelper(const Model::ListSopRecommendationsRequest& request, const ListSopRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSuggestedResiliencyPoliciesAsyncHelper(const Model::ListSuggestedResiliencyPoliciesRequest& request, const ListSuggestedResiliencyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTestRecommendationsAsyncHelper(const Model::ListTestRecommendationsRequest& request, const ListTestRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUnsupportedAppVersionResourcesAsyncHelper(const Model::ListUnsupportedAppVersionResourcesRequest& request, const ListUnsupportedAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishAppVersionAsyncHelper(const Model::PublishAppVersionRequest& request, const PublishAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDraftAppVersionTemplateAsyncHelper(const Model::PutDraftAppVersionTemplateRequest& request, const PutDraftAppVersionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveDraftAppVersionResourceMappingsAsyncHelper(const Model::RemoveDraftAppVersionResourceMappingsRequest& request, const RemoveDraftAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResolveAppVersionResourcesAsyncHelper(const Model::ResolveAppVersionResourcesRequest& request, const ResolveAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartAppAssessmentAsyncHelper(const Model::StartAppAssessmentRequest& request, const StartAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppAsyncHelper(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResiliencyPolicyAsyncHelper(const Model::UpdateResiliencyPolicyRequest& request, const UpdateResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ResilienceHub
} // namespace Aws
