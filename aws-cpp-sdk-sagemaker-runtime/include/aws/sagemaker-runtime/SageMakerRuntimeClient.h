/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointResult.h>
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

namespace SageMakerRuntime
{

namespace Model
{
        class InvokeEndpointRequest;

        typedef Aws::Utils::Outcome<InvokeEndpointResult, SageMakerRuntimeError> InvokeEndpointOutcome;

        typedef std::future<InvokeEndpointOutcome> InvokeEndpointOutcomeCallable;
} // namespace Model

  class SageMakerRuntimeClient;

    typedef std::function<void(const SageMakerRuntimeClient*, const Model::InvokeEndpointRequest&, Model::InvokeEndpointOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeEndpointResponseReceivedHandler;

  /**
   * <p> The Amazon SageMaker runtime API. </p>
   */
  class AWS_SAGEMAKERRUNTIME_API SageMakerRuntimeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerRuntimeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerRuntimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SageMakerRuntimeClient();


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
         * AWS Signature Version 4. For information, see <a
         * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
         * Requests (AWS Signature Version 4)</a> in the <i>Amazon S3 API
         * Reference</i>.</p> <p>A customer's model containers must respond to requests
         * within 60 seconds. The model itself can have a maximum processing time of 60
         * seconds before responding to the /invocations. If your model is going to take
         * 50-60 seconds of processing time, the SDK socket timeout should be set to be 70
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
         * hosted at the specified endpoint. </p> <p>For an overview of Amazon SageMaker,
         * see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p> <p>Amazon SageMaker strips all POST headers except those
         * supported by the API. Amazon SageMaker might add additional headers. You should
         * not rely on the behavior of headers outside those enumerated in the request
         * syntax. </p> <p>Calls to <code>InvokeEndpoint</code> are authenticated by using
         * AWS Signature Version 4. For information, see <a
         * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
         * Requests (AWS Signature Version 4)</a> in the <i>Amazon S3 API
         * Reference</i>.</p> <p>A customer's model containers must respond to requests
         * within 60 seconds. The model itself can have a maximum processing time of 60
         * seconds before responding to the /invocations. If your model is going to take
         * 50-60 seconds of processing time, the SDK socket timeout should be set to be 70
         * seconds.</p>  <p>Endpoints are scoped to an individual account, and are
         * not public. The URL does not contain the account ID, but Amazon SageMaker
         * determines the account ID from the authentication token that is supplied by the
         * caller.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.sagemaker-2017-05-13/InvokeEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeEndpointOutcomeCallable InvokeEndpointCallable(const Model::InvokeEndpointRequest& request) const;

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
         * AWS Signature Version 4. For information, see <a
         * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
         * Requests (AWS Signature Version 4)</a> in the <i>Amazon S3 API
         * Reference</i>.</p> <p>A customer's model containers must respond to requests
         * within 60 seconds. The model itself can have a maximum processing time of 60
         * seconds before responding to the /invocations. If your model is going to take
         * 50-60 seconds of processing time, the SDK socket timeout should be set to be 70
         * seconds.</p>  <p>Endpoints are scoped to an individual account, and are
         * not public. The URL does not contain the account ID, but Amazon SageMaker
         * determines the account ID from the authentication token that is supplied by the
         * caller.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.sagemaker-2017-05-13/InvokeEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InvokeEndpointAsync(const Model::InvokeEndpointRequest& request, const InvokeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void InvokeEndpointAsyncHelper(const Model::InvokeEndpointRequest& request, const InvokeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SageMakerRuntime
} // namespace Aws
