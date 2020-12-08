/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-edge/model/GetDeviceRegistrationResult.h>
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

namespace SagemakerEdgeManager
{

namespace Model
{
        class GetDeviceRegistrationRequest;
        class SendHeartbeatRequest;

        typedef Aws::Utils::Outcome<GetDeviceRegistrationResult, SagemakerEdgeManagerError> GetDeviceRegistrationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SagemakerEdgeManagerError> SendHeartbeatOutcome;

        typedef std::future<GetDeviceRegistrationOutcome> GetDeviceRegistrationOutcomeCallable;
        typedef std::future<SendHeartbeatOutcome> SendHeartbeatOutcomeCallable;
} // namespace Model

  class SagemakerEdgeManagerClient;

    typedef std::function<void(const SagemakerEdgeManagerClient*, const Model::GetDeviceRegistrationRequest&, const Model::GetDeviceRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceRegistrationResponseReceivedHandler;
    typedef std::function<void(const SagemakerEdgeManagerClient*, const Model::SendHeartbeatRequest&, const Model::SendHeartbeatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendHeartbeatResponseReceivedHandler;

  /**
   * <p>SageMaker Edge Manager dataplane service for communicating with active
   * agents.</p>
   */
  class AWS_SAGEMAKEREDGEMANAGER_API SagemakerEdgeManagerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SagemakerEdgeManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SagemakerEdgeManagerClient();


        /**
         * <p>Use to check if a device is registered with SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/GetDeviceRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceRegistrationOutcome GetDeviceRegistration(const Model::GetDeviceRegistrationRequest& request) const;

        /**
         * <p>Use to check if a device is registered with SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/GetDeviceRegistration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceRegistrationOutcomeCallable GetDeviceRegistrationCallable(const Model::GetDeviceRegistrationRequest& request) const;

        /**
         * <p>Use to check if a device is registered with SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/GetDeviceRegistration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceRegistrationAsync(const Model::GetDeviceRegistrationRequest& request, const GetDeviceRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use to get the current status of devices registered on SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/SendHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::SendHeartbeatOutcome SendHeartbeat(const Model::SendHeartbeatRequest& request) const;

        /**
         * <p>Use to get the current status of devices registered on SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/SendHeartbeat">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendHeartbeatOutcomeCallable SendHeartbeatCallable(const Model::SendHeartbeatRequest& request) const;

        /**
         * <p>Use to get the current status of devices registered on SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/SendHeartbeat">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendHeartbeatAsync(const Model::SendHeartbeatRequest& request, const SendHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetDeviceRegistrationAsyncHelper(const Model::GetDeviceRegistrationRequest& request, const GetDeviceRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendHeartbeatAsyncHelper(const Model::SendHeartbeatRequest& request, const SendHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SagemakerEdgeManager
} // namespace Aws
