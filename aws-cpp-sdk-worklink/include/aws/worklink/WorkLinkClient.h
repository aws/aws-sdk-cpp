/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/worklink/WorkLinkServiceClientModel.h>
#include <aws/worklink/WorkLinkLegacyAsyncMacros.h>

namespace Aws
{
namespace WorkLink
{
  /**
   * <p>Amazon WorkLink is a cloud-based service that provides secure access to
   * internal websites and web apps from iOS and Android phones. In a single step,
   * your users, such as employees, can access internal websites as efficiently as
   * they access any other public website. They enter a URL in their web browser, or
   * choose a link to an internal website in an email. Amazon WorkLink authenticates
   * the user's access and securely renders authorized internal web content in a
   * secure rendering service in the AWS cloud. Amazon WorkLink doesn't download or
   * store any internal web content on mobile devices.</p>
   */
  class AWS_WORKLINK_API WorkLinkClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkLinkClient(const Aws::WorkLink::WorkLinkClientConfiguration& clientConfiguration = Aws::WorkLink::WorkLinkClientConfiguration(),
                       std::shared_ptr<WorkLinkEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkLinkEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkLinkClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<WorkLinkEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkLinkEndpointProvider>(ALLOCATION_TAG),
                       const Aws::WorkLink::WorkLinkClientConfiguration& clientConfiguration = Aws::WorkLink::WorkLinkClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkLinkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<WorkLinkEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkLinkEndpointProvider>(ALLOCATION_TAG),
                       const Aws::WorkLink::WorkLinkClientConfiguration& clientConfiguration = Aws::WorkLink::WorkLinkClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkLinkClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkLinkClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkLinkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkLinkClient();


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkLinkEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const WorkLinkClientConfiguration& clientConfiguration);

      WorkLinkClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkLinkEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkLink
} // namespace Aws
