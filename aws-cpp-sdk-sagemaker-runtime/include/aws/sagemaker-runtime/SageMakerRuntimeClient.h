/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeServiceClientModel.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeLegacyAsyncMacros.h>

namespace Aws
{
namespace SageMakerRuntime
{
  /**
   * <p> The Amazon SageMaker runtime API. </p>
   */
  class AWS_SAGEMAKERRUNTIME_API SageMakerRuntimeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerRuntimeClient(const Aws::SageMakerRuntime::SageMakerRuntimeClientConfiguration& clientConfiguration = Aws::SageMakerRuntime::SageMakerRuntimeClientConfiguration(),
                               std::shared_ptr<SageMakerRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<SageMakerRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG),
                               const Aws::SageMakerRuntime::SageMakerRuntimeClientConfiguration& clientConfiguration = Aws::SageMakerRuntime::SageMakerRuntimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<SageMakerRuntimeEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG),
                               const Aws::SageMakerRuntime::SageMakerRuntimeClientConfiguration& clientConfiguration = Aws::SageMakerRuntime::SageMakerRuntimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerRuntimeClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SageMakerRuntimeClient();


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
         * <p>After you deploy a model into production using Amazon SageMaker hosting
         * services, your client applications use this API to get inferences from the model
         * hosted at the specified endpoint. </p> <p>For an overview of Amazon SageMaker,
         * see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p> <p>Amazon SageMaker strips all POST headers except those
         * supported by the API. Amazon SageMaker might add additional headers. You should
         * not rely on the behavior of headers outside those enumerated in the request
         * syntax. </p> <p>Calls to <code>InvokeEndpoint</code> are authenticated by using
         * Amazon Web Services Signature Version 4. For information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
         * Requests (Amazon Web Services Signature Version 4)</a> in the <i>Amazon S3 API
         * Reference</i>.</p> <p>A customer's model containers must respond to requests
         * within 60 seconds. The model itself can have a maximum processing time of 60
         * seconds before responding to invocations. If your model is going to take 50-60
         * seconds of processing time, the SDK socket timeout should be set to be 70
         * seconds.</p>  <p>Endpoints are scoped to an individual account, and are
         * not public. The URL does not contain the account ID, but Amazon SageMaker
         * determines the account ID from the authentication token that is supplied by the
         * caller.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.sagemaker-2017-05-13/InvokeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeEndpointOutcome InvokeEndpoint(const Model::InvokeEndpointRequest& request) const;


        /**
         * <p>After you deploy a model into production using Amazon SageMaker hosting
         * services, your client applications use this API to get inferences from the model
         * hosted at the specified endpoint in an asynchronous manner.</p> <p>Inference
         * requests sent to this API are enqueued for asynchronous processing. The
         * processing of the inference request may or may not complete before the you
         * receive a response from this API. The response from this API will not contain
         * the result of the inference request but contain information about where you can
         * locate it.</p> <p>Amazon SageMaker strips all <code>POST</code> headers except
         * those supported by the API. Amazon SageMaker might add additional headers. You
         * should not rely on the behavior of headers outside those enumerated in the
         * request syntax.</p> <p>Calls to <code>InvokeEndpointAsync</code> are
         * authenticated by using Amazon Web Services Signature Version 4. For information,
         * see <a
         * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
         * Requests (Amazon Web Services Signature Version 4)</a> in the <i>Amazon S3 API
         * Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.sagemaker-2017-05-13/InvokeEndpointAsync">AWS
         * API Reference</a></p>
         */
        virtual Model::InvokeEndpointAsyncOutcome InvokeEndpointAsync(const Model::InvokeEndpointAsyncRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SageMakerRuntimeEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SageMakerRuntimeClientConfiguration& clientConfiguration);

      SageMakerRuntimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SageMakerRuntimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace SageMakerRuntime
} // namespace Aws
