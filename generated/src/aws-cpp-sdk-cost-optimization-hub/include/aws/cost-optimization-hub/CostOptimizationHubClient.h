/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cost-optimization-hub/CostOptimizationHubServiceClientModel.h>

namespace Aws
{
namespace CostOptimizationHub
{
  /**
   * <p>You can use the Cost Optimization Hub API to programmatically identify,
   * filter, aggregate, and quantify savings for your cost optimization
   * recommendations across multiple Amazon Web Services Regions and Amazon Web
   * Services accounts in your organization.</p> <p>The Cost Optimization Hub API
   * provides the following endpoint:</p> <ul> <li> <p>
   * https://cost-optimization-hub.us-east-1.amazonaws.com </p> </li> </ul>
   */
  class AWS_COSTOPTIMIZATIONHUB_API CostOptimizationHubClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CostOptimizationHubClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CostOptimizationHubClientConfiguration ClientConfigurationType;
      typedef CostOptimizationHubEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostOptimizationHubClient(const Aws::CostOptimizationHub::CostOptimizationHubClientConfiguration& clientConfiguration = Aws::CostOptimizationHub::CostOptimizationHubClientConfiguration(),
                                  std::shared_ptr<CostOptimizationHubEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostOptimizationHubClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<CostOptimizationHubEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::CostOptimizationHub::CostOptimizationHubClientConfiguration& clientConfiguration = Aws::CostOptimizationHub::CostOptimizationHubClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostOptimizationHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<CostOptimizationHubEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::CostOptimizationHub::CostOptimizationHubClientConfiguration& clientConfiguration = Aws::CostOptimizationHub::CostOptimizationHubClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostOptimizationHubClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CostOptimizationHubClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CostOptimizationHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CostOptimizationHubClient();

        /**
         * <p>Returns a set of preferences for an account in order to add account-specific
         * preferences into the service. These preferences impact how the savings
         * associated with recommendations are presented—estimated savings after discounts
         * or estimated savings before discounts, for example.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/GetPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPreferencesOutcome GetPreferences(const Model::GetPreferencesRequest& request) const;

        /**
         * A Callable wrapper for GetPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPreferencesRequestT = Model::GetPreferencesRequest>
        Model::GetPreferencesOutcomeCallable GetPreferencesCallable(const GetPreferencesRequestT& request) const
        {
            return SubmitCallable(&CostOptimizationHubClient::GetPreferences, request);
        }

        /**
         * An Async wrapper for GetPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPreferencesRequestT = Model::GetPreferencesRequest>
        void GetPreferencesAsync(const GetPreferencesRequestT& request, const GetPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostOptimizationHubClient::GetPreferences, request, handler, context);
        }

        /**
         * <p>Returns both the current and recommended resource configuration and the
         * estimated cost impact for a recommendation.</p> <p>The
         * <code>recommendationId</code> is only valid for up to a maximum of 24 hours as
         * recommendations are refreshed daily. To retrieve the
         * <code>recommendationId</code>, use the <code>ListRecommendations</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/GetRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationOutcome GetRecommendation(const Model::GetRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecommendationRequestT = Model::GetRecommendationRequest>
        Model::GetRecommendationOutcomeCallable GetRecommendationCallable(const GetRecommendationRequestT& request) const
        {
            return SubmitCallable(&CostOptimizationHubClient::GetRecommendation, request);
        }

        /**
         * An Async wrapper for GetRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecommendationRequestT = Model::GetRecommendationRequest>
        void GetRecommendationAsync(const GetRecommendationRequestT& request, const GetRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostOptimizationHubClient::GetRecommendation, request, handler, context);
        }

        /**
         * <p>Retrieves the enrollment status for an account. It can also return the list
         * of accounts that are enrolled under the organization.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ListEnrollmentStatuses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnrollmentStatusesOutcome ListEnrollmentStatuses(const Model::ListEnrollmentStatusesRequest& request) const;

        /**
         * A Callable wrapper for ListEnrollmentStatuses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnrollmentStatusesRequestT = Model::ListEnrollmentStatusesRequest>
        Model::ListEnrollmentStatusesOutcomeCallable ListEnrollmentStatusesCallable(const ListEnrollmentStatusesRequestT& request) const
        {
            return SubmitCallable(&CostOptimizationHubClient::ListEnrollmentStatuses, request);
        }

        /**
         * An Async wrapper for ListEnrollmentStatuses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnrollmentStatusesRequestT = Model::ListEnrollmentStatusesRequest>
        void ListEnrollmentStatusesAsync(const ListEnrollmentStatusesRequestT& request, const ListEnrollmentStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostOptimizationHubClient::ListEnrollmentStatuses, request, handler, context);
        }

        /**
         * <p>Returns a concise representation of savings estimates for resources. Also
         * returns de-duped savings across different types of recommendations.</p> 
         * <p>The following filters are not supported for this API:
         * <code>recommendationIds</code>, <code>resourceArns</code>, and
         * <code>resourceIds</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ListRecommendationSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationSummariesOutcome ListRecommendationSummaries(const Model::ListRecommendationSummariesRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendationSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendationSummariesRequestT = Model::ListRecommendationSummariesRequest>
        Model::ListRecommendationSummariesOutcomeCallable ListRecommendationSummariesCallable(const ListRecommendationSummariesRequestT& request) const
        {
            return SubmitCallable(&CostOptimizationHubClient::ListRecommendationSummaries, request);
        }

        /**
         * An Async wrapper for ListRecommendationSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendationSummariesRequestT = Model::ListRecommendationSummariesRequest>
        void ListRecommendationSummariesAsync(const ListRecommendationSummariesRequestT& request, const ListRecommendationSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostOptimizationHubClient::ListRecommendationSummaries, request, handler, context);
        }

        /**
         * <p>Returns a list of recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const ListRecommendationsRequestT& request) const
        {
            return SubmitCallable(&CostOptimizationHubClient::ListRecommendations, request);
        }

        /**
         * An Async wrapper for ListRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        void ListRecommendationsAsync(const ListRecommendationsRequestT& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostOptimizationHubClient::ListRecommendations, request, handler, context);
        }

        /**
         * <p>Updates the enrollment (opt in and opt out) status of an account to the Cost
         * Optimization Hub service.</p> <p>If the account is a management account of an
         * organization, this action can also be used to enroll member accounts of the
         * organization.</p> <p>You must have the appropriate permissions to opt in to Cost
         * Optimization Hub and to view its recommendations. When you opt in, Cost
         * Optimization Hub automatically creates a service-linked role in your account to
         * access its data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/UpdateEnrollmentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnrollmentStatusOutcome UpdateEnrollmentStatus(const Model::UpdateEnrollmentStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnrollmentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnrollmentStatusRequestT = Model::UpdateEnrollmentStatusRequest>
        Model::UpdateEnrollmentStatusOutcomeCallable UpdateEnrollmentStatusCallable(const UpdateEnrollmentStatusRequestT& request) const
        {
            return SubmitCallable(&CostOptimizationHubClient::UpdateEnrollmentStatus, request);
        }

        /**
         * An Async wrapper for UpdateEnrollmentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnrollmentStatusRequestT = Model::UpdateEnrollmentStatusRequest>
        void UpdateEnrollmentStatusAsync(const UpdateEnrollmentStatusRequestT& request, const UpdateEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostOptimizationHubClient::UpdateEnrollmentStatus, request, handler, context);
        }

        /**
         * <p>Updates a set of preferences for an account in order to add account-specific
         * preferences into the service. These preferences impact how the savings
         * associated with recommendations are presented.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/UpdatePreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePreferencesOutcome UpdatePreferences(const Model::UpdatePreferencesRequest& request) const;

        /**
         * A Callable wrapper for UpdatePreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePreferencesRequestT = Model::UpdatePreferencesRequest>
        Model::UpdatePreferencesOutcomeCallable UpdatePreferencesCallable(const UpdatePreferencesRequestT& request) const
        {
            return SubmitCallable(&CostOptimizationHubClient::UpdatePreferences, request);
        }

        /**
         * An Async wrapper for UpdatePreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePreferencesRequestT = Model::UpdatePreferencesRequest>
        void UpdatePreferencesAsync(const UpdatePreferencesRequestT& request, const UpdatePreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CostOptimizationHubClient::UpdatePreferences, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CostOptimizationHubEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CostOptimizationHubClient>;
      void init(const CostOptimizationHubClientConfiguration& clientConfiguration);

      CostOptimizationHubClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CostOptimizationHubEndpointProviderBase> m_endpointProvider;
  };

} // namespace CostOptimizationHub
} // namespace Aws
