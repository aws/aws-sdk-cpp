/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize-runtime/PersonalizeRuntimeServiceClientModel.h>

namespace Aws
{
namespace PersonalizeRuntime
{
  /**
   * <p/>
   */
  class AWS_PERSONALIZERUNTIME_API PersonalizeRuntimeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PersonalizeRuntimeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeRuntimeClient(const Aws::PersonalizeRuntime::PersonalizeRuntimeClientConfiguration& clientConfiguration = Aws::PersonalizeRuntime::PersonalizeRuntimeClientConfiguration(),
                                 std::shared_ptr<PersonalizeRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<PersonalizeRuntimeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<PersonalizeRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<PersonalizeRuntimeEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::PersonalizeRuntime::PersonalizeRuntimeClientConfiguration& clientConfiguration = Aws::PersonalizeRuntime::PersonalizeRuntimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<PersonalizeRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<PersonalizeRuntimeEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::PersonalizeRuntime::PersonalizeRuntimeClientConfiguration& clientConfiguration = Aws::PersonalizeRuntime::PersonalizeRuntimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PersonalizeRuntimeClient();

        /**
         * <p>Re-ranks a list of recommended items for the given user. The first item in
         * the list is deemed the most likely item to be of interest to the user.</p>
         *  <p>The solution backing the campaign must have been created using a
         * recipe of type PERSONALIZED_RANKING.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-runtime-2018-05-22/GetPersonalizedRanking">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPersonalizedRankingOutcome GetPersonalizedRanking(const Model::GetPersonalizedRankingRequest& request) const;

        /**
         * A Callable wrapper for GetPersonalizedRanking that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPersonalizedRankingOutcomeCallable GetPersonalizedRankingCallable(const Model::GetPersonalizedRankingRequest& request) const;

        /**
         * An Async wrapper for GetPersonalizedRanking that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPersonalizedRankingAsync(const Model::GetPersonalizedRankingRequest& request, const GetPersonalizedRankingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of recommended items. For campaigns, the campaign's Amazon
         * Resource Name (ARN) is required and the required user and item input depends on
         * the recipe type used to create the solution backing the campaign as follows:</p>
         * <ul> <li> <p>USER_PERSONALIZATION - <code>userId</code> required,
         * <code>itemId</code> not used</p> </li> <li> <p>RELATED_ITEMS -
         * <code>itemId</code> required, <code>userId</code> not used</p> </li> </ul>
         *  <p>Campaigns that are backed by a solution created using a recipe of type
         * PERSONALIZED_RANKING use the API.</p>  <p> For recommenders, the
         * recommender's ARN is required and the required item and user input depends on
         * the use case (domain-based recipe) backing the recommender. For information on
         * use case requirements see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
         * recommender use cases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-runtime-2018-05-22/GetRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationsOutcome GetRecommendations(const Model::GetRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommendationsOutcomeCallable GetRecommendationsCallable(const Model::GetRecommendationsRequest& request) const;

        /**
         * An Async wrapper for GetRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommendationsAsync(const Model::GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PersonalizeRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PersonalizeRuntimeClient>;
      void init(const PersonalizeRuntimeClientConfiguration& clientConfiguration);

      PersonalizeRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PersonalizeRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace PersonalizeRuntime
} // namespace Aws
