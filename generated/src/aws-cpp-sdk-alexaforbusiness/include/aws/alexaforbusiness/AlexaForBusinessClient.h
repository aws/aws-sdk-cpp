/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/alexaforbusiness/AlexaForBusinessServiceClientModel.h>

namespace Aws
{
namespace AlexaForBusiness
{
  /**
   * <p>Alexa for Business has been retired and is no longer supported.</p>
   */
  class AWS_ALEXAFORBUSINESS_API AlexaForBusinessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AlexaForBusinessClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AlexaForBusinessClientConfiguration ClientConfigurationType;
      typedef AlexaForBusinessEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration& clientConfiguration = Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration(),
                               std::shared_ptr<AlexaForBusinessEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<AlexaForBusinessEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration& clientConfiguration = Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AlexaForBusinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<AlexaForBusinessEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration& clientConfiguration = Aws::AlexaForBusiness::AlexaForBusinessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AlexaForBusinessClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AlexaForBusinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AlexaForBusinessClient();

        /**
         * <p>Triggers an asynchronous flow to send text, SSML, or audio announcements to
         * rooms that are identified by a search or filter. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/SendAnnouncement">AWS
         * API Reference</a></p>
         */
        virtual Model::SendAnnouncementOutcome SendAnnouncement(const Model::SendAnnouncementRequest& request) const;

        /**
         * A Callable wrapper for SendAnnouncement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendAnnouncementRequestT = Model::SendAnnouncementRequest>
        Model::SendAnnouncementOutcomeCallable SendAnnouncementCallable(const SendAnnouncementRequestT& request) const
        {
            return SubmitCallable(&AlexaForBusinessClient::SendAnnouncement, request);
        }

        /**
         * An Async wrapper for SendAnnouncement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendAnnouncementRequestT = Model::SendAnnouncementRequest>
        void SendAnnouncementAsync(const SendAnnouncementRequestT& request, const SendAnnouncementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AlexaForBusinessClient::SendAnnouncement, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AlexaForBusinessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AlexaForBusinessClient>;
      void init(const AlexaForBusinessClientConfiguration& clientConfiguration);

      AlexaForBusinessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AlexaForBusinessEndpointProviderBase> m_endpointProvider;
  };

} // namespace AlexaForBusiness
} // namespace Aws
