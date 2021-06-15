/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/ec2-instance-connect/model/SendSerialConsoleSSHPublicKeyResult.h>
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
        class SendSerialConsoleSSHPublicKeyRequest;

        typedef Aws::Utils::Outcome<SendSSHPublicKeyResult, EC2InstanceConnectError> SendSSHPublicKeyOutcome;
        typedef Aws::Utils::Outcome<SendSerialConsoleSSHPublicKeyResult, EC2InstanceConnectError> SendSerialConsoleSSHPublicKeyOutcome;

        typedef std::future<SendSSHPublicKeyOutcome> SendSSHPublicKeyOutcomeCallable;
        typedef std::future<SendSerialConsoleSSHPublicKeyOutcome> SendSerialConsoleSSHPublicKeyOutcomeCallable;
} // namespace Model

  class EC2InstanceConnectClient;

    typedef std::function<void(const EC2InstanceConnectClient*, const Model::SendSSHPublicKeyRequest&, const Model::SendSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendSSHPublicKeyResponseReceivedHandler;
    typedef std::function<void(const EC2InstanceConnectClient*, const Model::SendSerialConsoleSSHPublicKeyRequest&, const Model::SendSerialConsoleSSHPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendSerialConsoleSSHPublicKeyResponseReceivedHandler;

  /**
   * <p>Amazon EC2 Instance Connect enables system administrators to publish one-time
   * use SSH public keys to EC2, providing users a simple and secure way to connect
   * to their instances.</p>
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


        /**
         * <p>Pushes an SSH public key to the specified EC2 instance for use by the
         * specified user. The key remains for 60 seconds. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Connect-using-EC2-Instance-Connect.html">Connect
         * to your Linux instance using EC2 Instance Connect</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::SendSSHPublicKeyOutcome SendSSHPublicKey(const Model::SendSSHPublicKeyRequest& request) const;

        /**
         * <p>Pushes an SSH public key to the specified EC2 instance for use by the
         * specified user. The key remains for 60 seconds. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Connect-using-EC2-Instance-Connect.html">Connect
         * to your Linux instance using EC2 Instance Connect</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendSSHPublicKeyOutcomeCallable SendSSHPublicKeyCallable(const Model::SendSSHPublicKeyRequest& request) const;

        /**
         * <p>Pushes an SSH public key to the specified EC2 instance for use by the
         * specified user. The key remains for 60 seconds. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Connect-using-EC2-Instance-Connect.html">Connect
         * to your Linux instance using EC2 Instance Connect</a> in the <i>Amazon EC2 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendSSHPublicKeyAsync(const Model::SendSSHPublicKeyRequest& request, const SendSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Pushes an SSH public key to the specified EC2 instance. The key remains for
         * 60 seconds, which gives you 60 seconds to establish a serial console connection
         * to the instance using SSH. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-serial-console.html">EC2
         * Serial Console</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSerialConsoleSSHPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::SendSerialConsoleSSHPublicKeyOutcome SendSerialConsoleSSHPublicKey(const Model::SendSerialConsoleSSHPublicKeyRequest& request) const;

        /**
         * <p>Pushes an SSH public key to the specified EC2 instance. The key remains for
         * 60 seconds, which gives you 60 seconds to establish a serial console connection
         * to the instance using SSH. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-serial-console.html">EC2
         * Serial Console</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSerialConsoleSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendSerialConsoleSSHPublicKeyOutcomeCallable SendSerialConsoleSSHPublicKeyCallable(const Model::SendSerialConsoleSSHPublicKeyRequest& request) const;

        /**
         * <p>Pushes an SSH public key to the specified EC2 instance. The key remains for
         * 60 seconds, which gives you 60 seconds to establish a serial console connection
         * to the instance using SSH. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-serial-console.html">EC2
         * Serial Console</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-instance-connect-2018-04-02/SendSerialConsoleSSHPublicKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendSerialConsoleSSHPublicKeyAsync(const Model::SendSerialConsoleSSHPublicKeyRequest& request, const SendSerialConsoleSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void SendSSHPublicKeyAsyncHelper(const Model::SendSSHPublicKeyRequest& request, const SendSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendSerialConsoleSSHPublicKeyAsyncHelper(const Model::SendSerialConsoleSSHPublicKeyRequest& request, const SendSerialConsoleSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EC2InstanceConnect
} // namespace Aws
