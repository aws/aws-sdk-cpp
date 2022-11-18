/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mq/MQServiceClientModel.h>
#include <aws/mq/MQLegacyAsyncMacros.h>

namespace Aws
{
namespace MQ
{
  /**
   * <p>Amazon MQ is a managed message broker service for Apache ActiveMQ and
   * RabbitMQ that makes it easy to set up and operate message brokers in the cloud.
   * A message broker allows software applications and components to communicate
   * using various programming languages, operating systems, and formal messaging
   * protocols.</p>
   */
  class AWS_MQ_API MQClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::MQ::MQClientConfiguration& clientConfiguration = Aws::MQ::MQClientConfiguration(),
                 std::shared_ptr<MQEndpointProviderBase> endpointProvider = Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::Auth::AWSCredentials& credentials,
                 std::shared_ptr<MQEndpointProviderBase> endpointProvider = Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG),
                 const Aws::MQ::MQClientConfiguration& clientConfiguration = Aws::MQ::MQClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MQClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 std::shared_ptr<MQEndpointProviderBase> endpointProvider = Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG),
                 const Aws::MQ::MQClientConfiguration& clientConfiguration = Aws::MQ::MQClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::Auth::AWSCredentials& credentials,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MQClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MQClient();


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
         * <p>Creates a broker. Note: This API is asynchronous.</p> <p>To create a broker,
         * you must either use the AmazonMQFullAccess IAM policy or include the following
         * EC2 permissions in your IAM policy.</p>
         * <ul><li><p>ec2:CreateNetworkInterface</p> <p>This permission is required to
         * allow Amazon MQ to create an elastic network interface (ENI) on behalf of your
         * account.</p></li> <li><p>ec2:CreateNetworkInterfacePermission</p> <p>This
         * permission is required to attach the ENI to the broker instance.</p></li>
         * <li><p>ec2:DeleteNetworkInterface</p></li>
         * <li><p>ec2:DeleteNetworkInterfacePermission</p></li>
         * <li><p>ec2:DetachNetworkInterface</p></li>
         * <li><p>ec2:DescribeInternetGateways</p></li>
         * <li><p>ec2:DescribeNetworkInterfaces</p></li>
         * <li><p>ec2:DescribeNetworkInterfacePermissions</p></li>
         * <li><p>ec2:DescribeRouteTables</p></li>
         * <li><p>ec2:DescribeSecurityGroups</p></li> <li><p>ec2:DescribeSubnets</p></li>
         * <li><p>ec2:DescribeVpcs</p></li></ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/amazon-mq-setting-up.html#create-iam-user">Create
         * an IAM User and Get Your AWS Credentials</a> and <a
         * href="https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/connecting-to-amazon-mq.html#never-modify-delete-elastic-network-interface">Never
         * Modify or Delete the Amazon MQ Elastic Network Interface</a> in the <i>Amazon MQ
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateBroker">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateBrokerOutcome CreateBroker(const Model::CreateBrokerRequest& request) const;


        /**
         * <p>Creates a new configuration for the specified configuration name. Amazon MQ
         * uses the default configuration (the engine type and version).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationOutcome CreateConfiguration(const Model::CreateConfigurationRequest& request) const;


        /**
         * <p>Add a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateTags">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;


        /**
         * <p>Creates an ActiveMQ user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;


        /**
         * <p>Deletes a broker. Note: This API is asynchronous.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBrokerOutcome DeleteBroker(const Model::DeleteBrokerRequest& request) const;


        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteTags">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;


        /**
         * <p>Deletes an ActiveMQ user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteUser">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Returns information about the specified broker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBrokerOutcome DescribeBroker(const Model::DescribeBrokerRequest& request) const;


        /**
         * <p>Describe available engine types and versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerEngineTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBrokerEngineTypesOutcome DescribeBrokerEngineTypes(const Model::DescribeBrokerEngineTypesRequest& request) const;


        /**
         * <p>Describe available broker instance options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerInstanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBrokerInstanceOptionsOutcome DescribeBrokerInstanceOptions(const Model::DescribeBrokerInstanceOptionsRequest& request) const;


        /**
         * <p>Returns information about the specified configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationOutcome DescribeConfiguration(const Model::DescribeConfigurationRequest& request) const;


        /**
         * <p>Returns the specified configuration revision for the specified
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRevisionOutcome DescribeConfigurationRevision(const Model::DescribeConfigurationRevisionRequest& request) const;


        /**
         * <p>Returns information about an ActiveMQ user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeUser">AWS API
         * Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;


        /**
         * <p>Returns a list of all brokers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListBrokers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListBrokersOutcome ListBrokers(const Model::ListBrokersRequest& request) const;


        /**
         * <p>Returns a list of all revisions for the specified
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurationRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationRevisionsOutcome ListConfigurationRevisions(const Model::ListConfigurationRevisionsRequest& request) const;


        /**
         * <p>Returns a list of all configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationsOutcome ListConfigurations(const Model::ListConfigurationsRequest& request) const;


        /**
         * <p>Lists tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;


        /**
         * <p>Returns a list of all ActiveMQ users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListUsers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;


        /**
         * <p>Reboots a broker. Note: This API is asynchronous.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/RebootBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootBrokerOutcome RebootBroker(const Model::RebootBrokerRequest& request) const;


        /**
         * <p>Adds a pending configuration change to a broker.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrokerOutcome UpdateBroker(const Model::UpdateBrokerRequest& request) const;


        /**
         * <p>Updates the specified configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationOutcome UpdateConfiguration(const Model::UpdateConfigurationRequest& request) const;


        /**
         * <p>Updates the information for an ActiveMQ user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MQEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MQClientConfiguration& clientConfiguration);

      MQClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MQEndpointProviderBase> m_endpointProvider;
  };

} // namespace MQ
} // namespace Aws
