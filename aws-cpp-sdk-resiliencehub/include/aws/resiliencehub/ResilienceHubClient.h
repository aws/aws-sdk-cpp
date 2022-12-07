/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehub/ResilienceHubServiceClientModel.h>

namespace Aws
{
namespace ResilienceHub
{
  /**
   * <p>AWS Resilience Hub helps you proactively prepare and protect your Amazon Web
   * Services applications from disruptions. Resilience Hub offers continuous
   * resiliency assessment and validation that integrates into your software
   * development lifecycle. This enables you to uncover resiliency weaknesses, ensure
   * recovery time objective (RTO) and recovery point objective (RPO) targets for
   * your applications are met, and resolve issues before they are released into
   * production. </p>
   */
  class AWS_RESILIENCEHUB_API ResilienceHubClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ResilienceHubClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::ResilienceHub::ResilienceHubClientConfiguration& clientConfiguration = Aws::ResilienceHub::ResilienceHubClientConfiguration(),
                            std::shared_ptr<ResilienceHubEndpointProviderBase> endpointProvider = Aws::MakeShared<ResilienceHubEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ResilienceHubEndpointProviderBase> endpointProvider = Aws::MakeShared<ResilienceHubEndpointProvider>(ALLOCATION_TAG),
                            const Aws::ResilienceHub::ResilienceHubClientConfiguration& clientConfiguration = Aws::ResilienceHub::ResilienceHubClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResilienceHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ResilienceHubEndpointProviderBase> endpointProvider = Aws::MakeShared<ResilienceHubEndpointProvider>(ALLOCATION_TAG),
                            const Aws::ResilienceHub::ResilienceHubClientConfiguration& clientConfiguration = Aws::ResilienceHub::ResilienceHubClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ResilienceHubClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ResilienceHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * five–CloudFormation stacks, and an appropriate resiliency policy.</p> <p>After
         * you create a Resilience Hub application, you publish it so that you can run a
         * resiliency assessment on it. You can then use recommendations from the
         * assessment to improve resiliency by running another assessment, comparing
         * results, and then iterating the process until you achieve your goals for
         * recovery time objective (RTO) and recovery point objective (RPO).</p><p><h3>See
         * Also:</h3>   <a
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
      std::shared_ptr<ResilienceHubEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ResilienceHubClient>;
      void init(const ResilienceHubClientConfiguration& clientConfiguration);

      ResilienceHubClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ResilienceHubEndpointProviderBase> m_endpointProvider;
  };

} // namespace ResilienceHub
} // namespace Aws
