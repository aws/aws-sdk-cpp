/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connect-contact-lens/ConnectContactLensServiceClientModel.h>
#include <aws/connect-contact-lens/ConnectContactLensLegacyAsyncMacros.h>

namespace Aws
{
namespace ConnectContactLens
{
  /**
   * <p>Contact Lens for Amazon Connect enables you to analyze conversations between
   * customer and agents, by using speech transcription, natural language processing,
   * and intelligent search capabilities. It performs sentiment analysis, detects
   * issues, and enables you to automatically categorize contacts.</p> <p>Contact
   * Lens for Amazon Connect provides both real-time and post-call analytics of
   * customer-agent conversations. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/analyze-conversations.html">Analyze
   * conversations using Contact Lens</a> in the <i>Amazon Connect Administrator
   * Guide</i>. </p>
   */
  class AWS_CONNECTCONTACTLENS_API ConnectContactLensClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::ConnectContactLens::ConnectContactLensClientConfiguration& clientConfiguration = Aws::ConnectContactLens::ConnectContactLensClientConfiguration(),
                                 std::shared_ptr<ConnectContactLensEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectContactLensEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<ConnectContactLensEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectContactLensEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::ConnectContactLens::ConnectContactLensClientConfiguration& clientConfiguration = Aws::ConnectContactLens::ConnectContactLensClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectContactLensClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<ConnectContactLensEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectContactLensEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::ConnectContactLens::ConnectContactLensClientConfiguration& clientConfiguration = Aws::ConnectContactLens::ConnectContactLensClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectContactLensClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectContactLensClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectContactLensClient();


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
         * <p>Provides a list of analysis segments for a real-time analysis
         * session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-contact-lens-2020-08-21/ListRealtimeContactAnalysisSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRealtimeContactAnalysisSegmentsOutcome ListRealtimeContactAnalysisSegments(const Model::ListRealtimeContactAnalysisSegmentsRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectContactLensEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ConnectContactLensClientConfiguration& clientConfiguration);

      ConnectContactLensClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectContactLensEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectContactLens
} // namespace Aws
