/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize-events/PersonalizeEventsServiceClientModel.h>

namespace Aws
{
namespace PersonalizeEvents
{
  /**
   * <p>Amazon Personalize can consume real-time user event data, such as
   * <i>stream</i> or <i>click</i> data, and use it for model training either alone
   * or combined with historical data. For more information see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
   * Events</a>.</p>
   */
  class AWS_PERSONALIZEEVENTS_API PersonalizeEventsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PersonalizeEventsClient();


        /**
         * <p>Records user interaction event data. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
         * Events</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * A Callable wrapper for PutEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsOutcomeCallable PutEventsCallable(const Model::PutEventsRequest& request) const;

        /**
         * An Async wrapper for PutEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsAsync(const Model::PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more items to an Items dataset. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-items.html">Importing
         * Items Incrementally</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutItems">AWS
         * API Reference</a></p>
         */
        virtual Model::PutItemsOutcome PutItems(const Model::PutItemsRequest& request) const;

        /**
         * A Callable wrapper for PutItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutItemsOutcomeCallable PutItemsCallable(const Model::PutItemsRequest& request) const;

        /**
         * An Async wrapper for PutItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutItemsAsync(const Model::PutItemsRequest& request, const PutItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more users to a Users dataset. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-users.html">Importing
         * Users Incrementally</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUsersOutcome PutUsers(const Model::PutUsersRequest& request) const;

        /**
         * A Callable wrapper for PutUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutUsersOutcomeCallable PutUsersCallable(const Model::PutUsersRequest& request) const;

        /**
         * An Async wrapper for PutUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutUsersAsync(const Model::PutUsersRequest& request, const PutUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace PersonalizeEvents
} // namespace Aws
