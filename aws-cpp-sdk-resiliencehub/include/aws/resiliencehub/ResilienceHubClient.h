/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehub/ResilienceHubServiceClientModel.h>
#include <aws/resiliencehub/ResilienceHubLegacyAsyncMacros.h>

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
  class AWS_RESILIENCEHUB_API ResilienceHubClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Adds the resource mapping for the draft application version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AddDraftAppVersionResourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::AddDraftAppVersionResourceMappingsOutcome AddDraftAppVersionResourceMappings(const Model::AddDraftAppVersionResourceMappingsRequest& request) const;


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
         * <p>Creates a new recommendation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateRecommendationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecommendationTemplateOutcome CreateRecommendationTemplate(const Model::CreateRecommendationTemplateRequest& request) const;


        /**
         * <p>Creates a resiliency policy for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/CreateResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResiliencyPolicyOutcome CreateResiliencyPolicy(const Model::CreateResiliencyPolicyRequest& request) const;


        /**
         * <p>Deletes an AWS Resilience Hub application. This is a destructive action that
         * can't be undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;


        /**
         * <p>Deletes an AWS Resilience Hub application assessment. This is a destructive
         * action that can't be undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteAppAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppAssessmentOutcome DeleteAppAssessment(const Model::DeleteAppAssessmentRequest& request) const;


        /**
         * <p>Deletes a recommendation template. This is a destructive action that can't be
         * undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteRecommendationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecommendationTemplateOutcome DeleteRecommendationTemplate(const Model::DeleteRecommendationTemplateRequest& request) const;


        /**
         * <p>Deletes a resiliency policy. This is a destructive action that can't be
         * undone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DeleteResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResiliencyPolicyOutcome DeleteResiliencyPolicy(const Model::DeleteResiliencyPolicyRequest& request) const;


        /**
         * <p>Describes an AWS Resilience Hub application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest& request) const;


        /**
         * <p>Describes an assessment for an AWS Resilience Hub application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppAssessmentOutcome DescribeAppAssessment(const Model::DescribeAppAssessmentRequest& request) const;


        /**
         * <p>Returns the resolution status for the specified resolution identifier for an
         * application version. If <code>resolutionId</code> is not specified, the current
         * resolution status is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppVersionResourcesResolutionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppVersionResourcesResolutionStatusOutcome DescribeAppVersionResourcesResolutionStatus(const Model::DescribeAppVersionResourcesResolutionStatusRequest& request) const;


        /**
         * <p>Describes details about an AWS Resilience Hub </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeAppVersionTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppVersionTemplateOutcome DescribeAppVersionTemplate(const Model::DescribeAppVersionTemplateRequest& request) const;


        /**
         * <p>Describes the status of importing resources to an application
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/DescribeDraftAppVersionResourcesImportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDraftAppVersionResourcesImportStatusOutcome DescribeDraftAppVersionResourcesImportStatus(const Model::DescribeDraftAppVersionResourcesImportStatusRequest& request) const;


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
         * <p>Imports resources from sources such as a CloudFormation stack,
         * resource-groups, or application registry app to a draft application
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ImportResourcesToDraftAppVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportResourcesToDraftAppVersionOutcome ImportResourcesToDraftAppVersion(const Model::ImportResourcesToDraftAppVersionRequest& request) const;


        /**
         * <p>Lists the alarm recommendations for a AWS Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAlarmRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlarmRecommendationsOutcome ListAlarmRecommendations(const Model::ListAlarmRecommendationsRequest& request) const;


        /**
         * <p>Lists the assessments for an AWS Resilience Hub application. You can use
         * request parameters to refine the results for the response object.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppAssessments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppAssessmentsOutcome ListAppAssessments(const Model::ListAppAssessmentsRequest& request) const;


        /**
         * <p>Lists the compliances for an AWS Resilience Hub component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppComponentCompliances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppComponentCompliancesOutcome ListAppComponentCompliances(const Model::ListAppComponentCompliancesRequest& request) const;


        /**
         * <p>Lists the recommendations for an AWS Resilience Hub component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppComponentRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppComponentRecommendationsOutcome ListAppComponentRecommendations(const Model::ListAppComponentRecommendationsRequest& request) const;


        /**
         * <p>Lists how the resources in an application version are mapped/sourced from.
         * Mappings can be physical resource identifiers, CloudFormation stacks,
         * resource-groups, or an application registry app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersionResourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionResourceMappingsOutcome ListAppVersionResourceMappings(const Model::ListAppVersionResourceMappingsRequest& request) const;


        /**
         * <p>Lists all the resources in an application version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersionResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionResourcesOutcome ListAppVersionResources(const Model::ListAppVersionResourcesRequest& request) const;


        /**
         * <p>Lists the different versions for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListAppVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppVersionsOutcome ListAppVersions(const Model::ListAppVersionsRequest& request) const;


        /**
         * <p>Lists your Resilience Hub applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;


        /**
         * <p>Lists the recommendation templates for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListRecommendationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationTemplatesOutcome ListRecommendationTemplates(const Model::ListRecommendationTemplatesRequest& request) const;


        /**
         * <p>Lists the resiliency policies for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListResiliencyPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResiliencyPoliciesOutcome ListResiliencyPolicies(const Model::ListResiliencyPoliciesRequest& request) const;


        /**
         * <p>Lists the standard operating procedure (SOP) recommendations for the
         * Resilience Hub applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListSopRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSopRecommendationsOutcome ListSopRecommendations(const Model::ListSopRecommendationsRequest& request) const;


        /**
         * <p>Lists the suggested resiliency policies for the Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListSuggestedResiliencyPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuggestedResiliencyPoliciesOutcome ListSuggestedResiliencyPolicies(const Model::ListSuggestedResiliencyPoliciesRequest& request) const;


        /**
         * <p>Lists the tags for your resources in your Resilience Hub
         * applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists the test recommendations for the Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ListTestRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestRecommendationsOutcome ListTestRecommendations(const Model::ListTestRecommendationsRequest& request) const;


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
         * <p>Publishes a new version of a specific Resilience Hub
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PublishAppVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishAppVersionOutcome PublishAppVersion(const Model::PublishAppVersionRequest& request) const;


        /**
         * <p>Adds or updates the app template for a draft version of a Resilience Hub
         * app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PutDraftAppVersionTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDraftAppVersionTemplateOutcome PutDraftAppVersionTemplate(const Model::PutDraftAppVersionTemplateRequest& request) const;


        /**
         * <p>Removes resource mappings from a draft application version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/RemoveDraftAppVersionResourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveDraftAppVersionResourceMappingsOutcome RemoveDraftAppVersionResourceMappings(const Model::RemoveDraftAppVersionResourceMappingsRequest& request) const;


        /**
         * <p>Resolves the resources for an application version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResolveAppVersionResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveAppVersionResourcesOutcome ResolveAppVersionResources(const Model::ResolveAppVersionResourcesRequest& request) const;


        /**
         * <p>Creates a new application assessment for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/StartAppAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAppAssessmentOutcome StartAppAssessment(const Model::StartAppAssessmentRequest& request) const;


        /**
         * <p>Applies one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;


        /**
         * <p>Updates a resiliency policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateResiliencyPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResiliencyPolicyOutcome UpdateResiliencyPolicy(const Model::UpdateResiliencyPolicyRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ResilienceHubEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ResilienceHubClientConfiguration& clientConfiguration);

      ResilienceHubClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ResilienceHubEndpointProviderBase> m_endpointProvider;
  };

} // namespace ResilienceHub
} // namespace Aws
