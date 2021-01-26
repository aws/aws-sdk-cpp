/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/personalize-events/PersonalizeEventsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/NoResult.h>
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

namespace PersonalizeEvents
{

namespace Model
{
        class PutEventsRequest;
        class PutItemsRequest;
        class PutUsersRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeEventsError> PutEventsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeEventsError> PutItemsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeEventsError> PutUsersOutcome;

        typedef std::future<PutEventsOutcome> PutEventsOutcomeCallable;
        typedef std::future<PutItemsOutcome> PutItemsOutcomeCallable;
        typedef std::future<PutUsersOutcome> PutUsersOutcomeCallable;
} // namespace Model

  class PersonalizeEventsClient;

    typedef std::function<void(const PersonalizeEventsClient*, const Model::PutEventsRequest&, const Model::PutEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeEventsClient*, const Model::PutItemsRequest&, const Model::PutItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutItemsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeEventsClient*, const Model::PutUsersRequest&, const Model::PutUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutUsersResponseReceivedHandler;

  /**
   * <p>Amazon Personalize can consume real-time user event data, such as
   * <i>stream</i> or <i>click</i> data, and use it for model training either alone
   * or combined with historical data. For more information see
   * <a>recording-events</a>.</p>
   */
  class AWS_PERSONALIZEEVENTS_API PersonalizeEventsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PersonalizeEventsClient();


        /**
         * <p>Records user interaction event data. For more information see
         * <a>event-record-api</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * <p>Records user interaction event data. For more information see
         * <a>event-record-api</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * <p>Records user interaction event data. For more information see
         * <a>event-record-api</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more items to an Items dataset. For more information see
         * <a>importing-items</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutItems">AWS
         * API Reference</a></p>
         */
        virtual Model::PutItemsOutcome PutItems(const Model::PutItemsRequest& request) const;

        /**
         * <p>Adds one or more items to an Items dataset. For more information see
         * <a>importing-items</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutItemsOutcomeCallable PutItemsCallable(const Model::PutItemsRequest& request) const;

        /**
         * <p>Adds one or more items to an Items dataset. For more information see
         * <a>importing-items</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutItems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutItemsAsync(const Model::PutItemsRequest& request, const PutItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more users to a Users dataset. For more information see
         * <a>importing-users</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUsersOutcome PutUsers(const Model::PutUsersRequest& request) const;

        /**
         * <p>Adds one or more users to a Users dataset. For more information see
         * <a>importing-users</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutUsersOutcomeCallable PutUsersCallable(const Model::PutUsersRequest& request) const;

        /**
         * <p>Adds one or more users to a Users dataset. For more information see
         * <a>importing-users</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutUsersAsync(const Model::PutUsersRequest& request, const PutUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void PutEventsAsyncHelper(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutItemsAsyncHelper(const Model::PutItemsRequest& request, const PutItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutUsersAsyncHelper(const Model::PutUsersRequest& request, const PutUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace PersonalizeEvents
} // namespace Aws
