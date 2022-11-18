/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectServiceClientModel.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectLegacyAsyncMacros.h>

namespace Aws
{
namespace EC2InstanceConnect
{
  /**
   * <p>Amazon EC2 Instance Connect enables system administrators to publish one-time
   * use SSH public keys to EC2, providing users a simple and secure way to connect
   * to their instances.</p>
   */
  class AWS_EC2INSTANCECONNECT_API EC2InstanceConnectClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration = Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration(),
                                 std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration = Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EC2InstanceConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<EC2InstanceConnectEndpointProviderBase> endpointProvider = Aws::MakeShared<EC2InstanceConnectEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration& clientConfiguration = Aws::EC2InstanceConnect::EC2InstanceConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EC2InstanceConnectClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EC2InstanceConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EC2InstanceConnectClient();


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EC2InstanceConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const EC2InstanceConnectClientConfiguration& clientConfiguration);

      EC2InstanceConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<EC2InstanceConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace EC2InstanceConnect
} // namespace Aws
