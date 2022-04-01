﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/personalize-runtime/PersonalizeRuntimeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize-runtime/model/GetPersonalizedRankingResult.h>
#include <aws/personalize-runtime/model/GetRecommendationsResult.h>
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

namespace PersonalizeRuntime
{

namespace Model
{
        class GetPersonalizedRankingRequest;
        class GetRecommendationsRequest;

        typedef Aws::Utils::Outcome<GetPersonalizedRankingResult, PersonalizeRuntimeError> GetPersonalizedRankingOutcome;
        typedef Aws::Utils::Outcome<GetRecommendationsResult, PersonalizeRuntimeError> GetRecommendationsOutcome;

        typedef std::future<GetPersonalizedRankingOutcome> GetPersonalizedRankingOutcomeCallable;
        typedef std::future<GetRecommendationsOutcome> GetRecommendationsOutcomeCallable;
} // namespace Model

  class PersonalizeRuntimeClient;

    typedef std::function<void(const PersonalizeRuntimeClient*, const Model::GetPersonalizedRankingRequest&, const Model::GetPersonalizedRankingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPersonalizedRankingResponseReceivedHandler;
    typedef std::function<void(const PersonalizeRuntimeClient*, const Model::GetRecommendationsRequest&, const Model::GetRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationsResponseReceivedHandler;

  /**
   * <p/>
   */
  class AWS_PERSONALIZERUNTIME_API PersonalizeRuntimeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeRuntimeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Re-ranks a list of recommended items for the given user. The first item in
         * the list is deemed the most likely item to be of interest to the user.</p>
         *  <p>The solution backing the campaign must have been created using a
         * recipe of type PERSONALIZED_RANKING.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-runtime-2018-05-22/GetPersonalizedRanking">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPersonalizedRankingOutcomeCallable GetPersonalizedRankingCallable(const Model::GetPersonalizedRankingRequest& request) const;

        /**
         * <p>Re-ranks a list of recommended items for the given user. The first item in
         * the list is deemed the most likely item to be of interest to the user.</p>
         *  <p>The solution backing the campaign must have been created using a
         * recipe of type PERSONALIZED_RANKING.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-runtime-2018-05-22/GetPersonalizedRanking">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecommendationsOutcomeCallable GetRecommendationsCallable(const Model::GetRecommendationsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecommendationsAsync(const Model::GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetPersonalizedRankingAsyncHelper(const Model::GetPersonalizedRankingRequest& request, const GetPersonalizedRankingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecommendationsAsyncHelper(const Model::GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace PersonalizeRuntime
} // namespace Aws
