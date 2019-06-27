/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ec2-instance-connect/model/SendSSHPublicKeyResult.h>
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

namespace EC2InstanceConnect
{

namespace Model
{
        class SendSSHPublicKeyRequest;

        typedef Aws::Utils::Outcome<SendSSHPublicKeyResult, Aws::Client::AWSError<EC2InstanceConnectErrors>> SendSSHPublicKeyOutcome;

        typedef std::future<SendSSHPublicKeyOutcome> SendSSHPublicKeyOutcomeCallable;
} // namespace Model

  class EC2InstanceConnectClient;

    typedef std::function<void(const EC2InstanceConnectClient*, const Model::SendSSHPublicKeyRequest&, const Model::SendSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendSSHPublicKeyResponseReceivedHandler;

  /**
   * <p>AWS EC2 Connect Service is a service that enables system administrators to
   * publish temporary SSH keys to their EC2 instances in order to establish
   * connections to their instances without leaving a permanent authentication
   * option.</p>
   */
  class AWS_EC2INSTANCECONNECT_API EC2InstanceConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EC2InstanceConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~EC2InstanceConnectClient();

        inline virtual const char* GetServiceClientName() const override { return "EC2 Instance Connect"; }


        /**
         * <p>Pushes an SSH public key to a particular OS user on a given EC2 instance for
         * 60 seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::SendSSHPublicKeyOutcome SendSSHPublicKey(const Model::SendSSHPublicKeyRequest& request) const;

        /**
         * <p>Pushes an SSH public key to a particular OS user on a given EC2 instance for
         * 60 seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendSSHPublicKeyOutcomeCallable SendSSHPublicKeyCallable(const Model::SendSSHPublicKeyRequest& request) const;

        /**
         * <p>Pushes an SSH public key to a particular OS user on a given EC2 instance for
         * 60 seconds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendSSHPublicKeyAsync(const Model::SendSSHPublicKeyRequest& request, const SendSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void SendSSHPublicKeyAsyncHelper(const Model::SendSSHPublicKeyRequest& request, const SendSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EC2InstanceConnect
} // namespace Aws
