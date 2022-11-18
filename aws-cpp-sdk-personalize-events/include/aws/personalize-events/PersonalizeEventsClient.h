/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize-events/PersonalizeEventsServiceClientModel.h>
#include <aws/personalize-events/PersonalizeEventsLegacyAsyncMacros.h>

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
        PersonalizeEventsClient(const Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration& clientConfiguration = Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration(),
                                std::shared_ptr<PersonalizeEventsEndpointProviderBase> endpointProvider = Aws::MakeShared<PersonalizeEventsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<PersonalizeEventsEndpointProviderBase> endpointProvider = Aws::MakeShared<PersonalizeEventsEndpointProvider>(ALLOCATION_TAG),
                                const Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration& clientConfiguration = Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<PersonalizeEventsEndpointProviderBase> endpointProvider = Aws::MakeShared<PersonalizeEventsEndpointProvider>(ALLOCATION_TAG),
                                const Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration& clientConfiguration = Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PersonalizeEventsClient();


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
         * <p>Records user interaction event data. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-events.html">Recording
         * Events</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;


        /**
         * <p>Adds one or more items to an Items dataset. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-items.html">Importing
         * Items Incrementally</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutItems">AWS
         * API Reference</a></p>
         */
        virtual Model::PutItemsOutcome PutItems(const Model::PutItemsRequest& request) const;


        /**
         * <p>Adds one or more users to a Users dataset. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-users.html">Importing
         * Users Incrementally</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUsersOutcome PutUsers(const Model::PutUsersRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PersonalizeEventsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const PersonalizeEventsClientConfiguration& clientConfiguration);

      PersonalizeEventsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PersonalizeEventsEndpointProviderBase> m_endpointProvider;
  };

} // namespace PersonalizeEvents
} // namespace Aws
