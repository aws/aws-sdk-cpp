/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/greengrass/GreengrassServiceClientModel.h>
#include <aws/greengrass/GreengrassLegacyAsyncMacros.h>

namespace Aws
{
namespace Greengrass
{
  /**
   * AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act
   * locally on the data they generate, while still using the cloud for management,
   * analytics, and durable storage. AWS IoT Greengrass ensures your devices can
   * respond quickly to local events and operate with intermittent connectivity. AWS
   * IoT Greengrass minimizes the cost of transmitting data to the cloud by allowing
   * you to author AWS Lambda functions that execute locally.
   */
  class AWS_GREENGRASS_API GreengrassClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassClient(const Aws::Greengrass::GreengrassClientConfiguration& clientConfiguration = Aws::Greengrass::GreengrassClientConfiguration(),
                         std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider = Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider = Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG),
                         const Aws::Greengrass::GreengrassClientConfiguration& clientConfiguration = Aws::Greengrass::GreengrassClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GreengrassClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider = Aws::MakeShared<GreengrassEndpointProvider>(ALLOCATION_TAG),
                         const Aws::Greengrass::GreengrassClientConfiguration& clientConfiguration = Aws::Greengrass::GreengrassClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GreengrassClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GreengrassClient();


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
         * Associates a role with a group. Your Greengrass core will use the role to access
         * AWS cloud services. The role's permissions should allow Greengrass core Lambda
         * functions to perform actions against the cloud.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/AssociateRoleToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRoleToGroupOutcome AssociateRoleToGroup(const Model::AssociateRoleToGroupRequest& request) const;


        /**
         * Associates a role with your account. AWS IoT Greengrass will use the role to
         * access your Lambda functions and AWS IoT resources. This is necessary for
         * deployments to succeed. The role must have at least minimum permissions in the
         * policy ''AWSGreengrassResourceAccessRolePolicy''.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/AssociateServiceRoleToAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateServiceRoleToAccountOutcome AssociateServiceRoleToAccount(const Model::AssociateServiceRoleToAccountRequest& request) const;


        /**
         * Creates a connector definition. You may provide the initial version of the
         * connector definition now or use ''CreateConnectorDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorDefinitionOutcome CreateConnectorDefinition(const Model::CreateConnectorDefinitionRequest& request) const;


        /**
         * Creates a version of a connector definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorDefinitionVersionOutcome CreateConnectorDefinitionVersion(const Model::CreateConnectorDefinitionVersionRequest& request) const;


        /**
         * Creates a core definition. You may provide the initial version of the core
         * definition now or use ''CreateCoreDefinitionVersion'' at a later time.
         * Greengrass groups must each contain exactly one Greengrass core.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoreDefinitionOutcome CreateCoreDefinition(const Model::CreateCoreDefinitionRequest& request) const;


        /**
         * Creates a version of a core definition that has already been defined. Greengrass
         * groups must each contain exactly one Greengrass core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoreDefinitionVersionOutcome CreateCoreDefinitionVersion(const Model::CreateCoreDefinitionVersionRequest& request) const;


        /**
         * Creates a deployment. ''CreateDeployment'' requests are idempotent with respect
         * to the ''X-Amzn-Client-Token'' token and the request parameters.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;


        /**
         * Creates a device definition. You may provide the initial version of the device
         * definition now or use ''CreateDeviceDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceDefinitionOutcome CreateDeviceDefinition(const Model::CreateDeviceDefinitionRequest& request) const;


        /**
         * Creates a version of a device definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceDefinitionVersionOutcome CreateDeviceDefinitionVersion(const Model::CreateDeviceDefinitionVersionRequest& request) const;


        /**
         * Creates a Lambda function definition which contains a list of Lambda functions
         * and their configurations to be used in a group. You can create an initial
         * version of the definition by providing a list of Lambda functions and their
         * configurations now, or use ''CreateFunctionDefinitionVersion'' later.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionDefinitionOutcome CreateFunctionDefinition(const Model::CreateFunctionDefinitionRequest& request) const;


        /**
         * Creates a version of a Lambda function definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionDefinitionVersionOutcome CreateFunctionDefinitionVersion(const Model::CreateFunctionDefinitionVersionRequest& request) const;


        /**
         * Creates a group. You may provide the initial version of the group or use
         * ''CreateGroupVersion'' at a later time. Tip: You can use the ''gg_group_setup''
         * package (https://github.com/awslabs/aws-greengrass-group-setup) as a library or
         * command-line application to create and deploy Greengrass groups.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;


        /**
         * Creates a CA for the group. If a CA already exists, it will rotate the existing
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupCertificateAuthorityOutcome CreateGroupCertificateAuthority(const Model::CreateGroupCertificateAuthorityRequest& request) const;


        /**
         * Creates a version of a group which has already been defined.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupVersionOutcome CreateGroupVersion(const Model::CreateGroupVersionRequest& request) const;


        /**
         * Creates a logger definition. You may provide the initial version of the logger
         * definition now or use ''CreateLoggerDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggerDefinitionOutcome CreateLoggerDefinition(const Model::CreateLoggerDefinitionRequest& request) const;


        /**
         * Creates a version of a logger definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggerDefinitionVersionOutcome CreateLoggerDefinitionVersion(const Model::CreateLoggerDefinitionVersionRequest& request) const;


        /**
         * Creates a resource definition which contains a list of resources to be used in a
         * group. You can create an initial version of the definition by providing a list
         * of resources now, or use ''CreateResourceDefinitionVersion'' later.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceDefinitionOutcome CreateResourceDefinition(const Model::CreateResourceDefinitionRequest& request) const;


        /**
         * Creates a version of a resource definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateResourceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceDefinitionVersionOutcome CreateResourceDefinitionVersion(const Model::CreateResourceDefinitionVersionRequest& request) const;


        /**
         * Creates a software update for a core or group of cores (specified as an IoT
         * thing group.) Use this to update the OTA Agent as well as the Greengrass core
         * software. It makes use of the IoT Jobs feature which provides additional
         * commands to manage a Greengrass core software update job.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSoftwareUpdateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSoftwareUpdateJobOutcome CreateSoftwareUpdateJob(const Model::CreateSoftwareUpdateJobRequest& request) const;


        /**
         * Creates a subscription definition. You may provide the initial version of the
         * subscription definition now or use ''CreateSubscriptionDefinitionVersion'' at a
         * later time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionDefinitionOutcome CreateSubscriptionDefinition(const Model::CreateSubscriptionDefinitionRequest& request) const;


        /**
         * Creates a version of a subscription definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionDefinitionVersionOutcome CreateSubscriptionDefinitionVersion(const Model::CreateSubscriptionDefinitionVersionRequest& request) const;


        /**
         * Deletes a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorDefinitionOutcome DeleteConnectorDefinition(const Model::DeleteConnectorDefinitionRequest& request) const;


        /**
         * Deletes a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreDefinitionOutcome DeleteCoreDefinition(const Model::DeleteCoreDefinitionRequest& request) const;


        /**
         * Deletes a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceDefinitionOutcome DeleteDeviceDefinition(const Model::DeleteDeviceDefinitionRequest& request) const;


        /**
         * Deletes a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionDefinitionOutcome DeleteFunctionDefinition(const Model::DeleteFunctionDefinitionRequest& request) const;


        /**
         * Deletes a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;


        /**
         * Deletes a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggerDefinitionOutcome DeleteLoggerDefinition(const Model::DeleteLoggerDefinitionRequest& request) const;


        /**
         * Deletes a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceDefinitionOutcome DeleteResourceDefinition(const Model::DeleteResourceDefinitionRequest& request) const;


        /**
         * Deletes a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionDefinitionOutcome DeleteSubscriptionDefinition(const Model::DeleteSubscriptionDefinitionRequest& request) const;


        /**
         * Disassociates the role from a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateRoleFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRoleFromGroupOutcome DisassociateRoleFromGroup(const Model::DisassociateRoleFromGroupRequest& request) const;


        /**
         * Disassociates the service role from your account. Without a service role,
         * deployments will not work.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateServiceRoleFromAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceRoleFromAccountOutcome DisassociateServiceRoleFromAccount(const Model::DisassociateServiceRoleFromAccountRequest& request) const;


        /**
         * Retrieves the role associated with a particular group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetAssociatedRole">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociatedRoleOutcome GetAssociatedRole(const Model::GetAssociatedRoleRequest& request) const;


        /**
         * Returns the status of a bulk deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetBulkDeploymentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBulkDeploymentStatusOutcome GetBulkDeploymentStatus(const Model::GetBulkDeploymentStatusRequest& request) const;


        /**
         * Retrieves the connectivity information for a core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectivityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectivityInfoOutcome GetConnectivityInfo(const Model::GetConnectivityInfoRequest& request) const;


        /**
         * Retrieves information about a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorDefinitionOutcome GetConnectorDefinition(const Model::GetConnectorDefinitionRequest& request) const;


        /**
         * Retrieves information about a connector definition version, including the
         * connectors that the version contains. Connectors are prebuilt modules that
         * interact with local infrastructure, device protocols, AWS, and other cloud
         * services.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorDefinitionVersionOutcome GetConnectorDefinitionVersion(const Model::GetConnectorDefinitionVersionRequest& request) const;


        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDefinitionOutcome GetCoreDefinition(const Model::GetCoreDefinitionRequest& request) const;


        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDefinitionVersionOutcome GetCoreDefinitionVersion(const Model::GetCoreDefinitionVersionRequest& request) const;


        /**
         * Returns the status of a deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeploymentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentStatusOutcome GetDeploymentStatus(const Model::GetDeploymentStatusRequest& request) const;


        /**
         * Retrieves information about a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceDefinitionOutcome GetDeviceDefinition(const Model::GetDeviceDefinitionRequest& request) const;


        /**
         * Retrieves information about a device definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceDefinitionVersionOutcome GetDeviceDefinitionVersion(const Model::GetDeviceDefinitionVersionRequest& request) const;


        /**
         * Retrieves information about a Lambda function definition, including its creation
         * time and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionDefinitionOutcome GetFunctionDefinition(const Model::GetFunctionDefinitionRequest& request) const;


        /**
         * Retrieves information about a Lambda function definition version, including
         * which Lambda functions are included in the version and their
         * configurations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionDefinitionVersionOutcome GetFunctionDefinitionVersion(const Model::GetFunctionDefinitionVersionRequest& request) const;


        /**
         * Retrieves information about a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;


        /**
         * Retreives the CA associated with a group. Returns the public key of the
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupCertificateAuthorityOutcome GetGroupCertificateAuthority(const Model::GetGroupCertificateAuthorityRequest& request) const;


        /**
         * Retrieves the current configuration for the CA used by the group.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupCertificateConfigurationOutcome GetGroupCertificateConfiguration(const Model::GetGroupCertificateConfigurationRequest& request) const;


        /**
         * Retrieves information about a group version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupVersionOutcome GetGroupVersion(const Model::GetGroupVersionRequest& request) const;


        /**
         * Retrieves information about a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggerDefinitionOutcome GetLoggerDefinition(const Model::GetLoggerDefinitionRequest& request) const;


        /**
         * Retrieves information about a logger definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggerDefinitionVersionOutcome GetLoggerDefinitionVersion(const Model::GetLoggerDefinitionVersionRequest& request) const;


        /**
         * Retrieves information about a resource definition, including its creation time
         * and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceDefinitionOutcome GetResourceDefinition(const Model::GetResourceDefinitionRequest& request) const;


        /**
         * Retrieves information about a resource definition version, including which
         * resources are included in the version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceDefinitionVersionOutcome GetResourceDefinitionVersion(const Model::GetResourceDefinitionVersionRequest& request) const;


        /**
         * Retrieves the service role that is attached to your account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetServiceRoleForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceRoleForAccountOutcome GetServiceRoleForAccount(const Model::GetServiceRoleForAccountRequest& request) const;


        /**
         * Retrieves information about a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionDefinitionOutcome GetSubscriptionDefinition(const Model::GetSubscriptionDefinitionRequest& request) const;


        /**
         * Retrieves information about a subscription definition version.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionDefinitionVersionOutcome GetSubscriptionDefinitionVersion(const Model::GetSubscriptionDefinitionVersionRequest& request) const;


        /**
         * Get the runtime configuration of a thing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetThingRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThingRuntimeConfigurationOutcome GetThingRuntimeConfiguration(const Model::GetThingRuntimeConfigurationRequest& request) const;


        /**
         * Gets a paginated list of the deployments that have been started in a bulk
         * deployment operation, and their current deployment status.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeploymentDetailedReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBulkDeploymentDetailedReportsOutcome ListBulkDeploymentDetailedReports(const Model::ListBulkDeploymentDetailedReportsRequest& request) const;


        /**
         * Returns a list of bulk deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBulkDeploymentsOutcome ListBulkDeployments(const Model::ListBulkDeploymentsRequest& request) const;


        /**
         * Lists the versions of a connector definition, which are containers for
         * connectors. Connectors run on the Greengrass core and contain built-in
         * integration with local infrastructure, device protocols, AWS, and other cloud
         * services.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorDefinitionVersionsOutcome ListConnectorDefinitionVersions(const Model::ListConnectorDefinitionVersionsRequest& request) const;


        /**
         * Retrieves a list of connector definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorDefinitionsOutcome ListConnectorDefinitions(const Model::ListConnectorDefinitionsRequest& request) const;


        /**
         * Lists the versions of a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDefinitionVersionsOutcome ListCoreDefinitionVersions(const Model::ListCoreDefinitionVersionsRequest& request) const;


        /**
         * Retrieves a list of core definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDefinitionsOutcome ListCoreDefinitions(const Model::ListCoreDefinitionsRequest& request) const;


        /**
         * Returns a history of deployments for the group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;


        /**
         * Lists the versions of a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceDefinitionVersionsOutcome ListDeviceDefinitionVersions(const Model::ListDeviceDefinitionVersionsRequest& request) const;


        /**
         * Retrieves a list of device definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceDefinitionsOutcome ListDeviceDefinitions(const Model::ListDeviceDefinitionsRequest& request) const;


        /**
         * Lists the versions of a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionDefinitionVersionsOutcome ListFunctionDefinitionVersions(const Model::ListFunctionDefinitionVersionsRequest& request) const;


        /**
         * Retrieves a list of Lambda function definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionDefinitionsOutcome ListFunctionDefinitions(const Model::ListFunctionDefinitionsRequest& request) const;


        /**
         * Retrieves the current CAs for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupCertificateAuthorities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupCertificateAuthoritiesOutcome ListGroupCertificateAuthorities(const Model::ListGroupCertificateAuthoritiesRequest& request) const;


        /**
         * Lists the versions of a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupVersionsOutcome ListGroupVersions(const Model::ListGroupVersionsRequest& request) const;


        /**
         * Retrieves a list of groups.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;


        /**
         * Lists the versions of a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggerDefinitionVersionsOutcome ListLoggerDefinitionVersions(const Model::ListLoggerDefinitionVersionsRequest& request) const;


        /**
         * Retrieves a list of logger definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggerDefinitionsOutcome ListLoggerDefinitions(const Model::ListLoggerDefinitionsRequest& request) const;


        /**
         * Lists the versions of a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDefinitionVersionsOutcome ListResourceDefinitionVersions(const Model::ListResourceDefinitionVersionsRequest& request) const;


        /**
         * Retrieves a list of resource definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDefinitionsOutcome ListResourceDefinitions(const Model::ListResourceDefinitionsRequest& request) const;


        /**
         * Lists the versions of a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionDefinitionVersionsOutcome ListSubscriptionDefinitionVersions(const Model::ListSubscriptionDefinitionVersionsRequest& request) const;


        /**
         * Retrieves a list of subscription definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionDefinitionsOutcome ListSubscriptionDefinitions(const Model::ListSubscriptionDefinitionsRequest& request) const;


        /**
         * Retrieves a list of resource tags for a resource arn.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * Resets a group's deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDeploymentsOutcome ResetDeployments(const Model::ResetDeploymentsRequest& request) const;


        /**
         * Deploys multiple groups in one operation. This action starts the bulk deployment
         * of a specified set of group versions. Each group version deployment will be
         * triggered with an adaptive rate that has a fixed upper limit. We recommend that
         * you include an ''X-Amzn-Client-Token'' token in every ''StartBulkDeployment''
         * request. These requests are idempotent with respect to the token and the request
         * parameters.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/StartBulkDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBulkDeploymentOutcome StartBulkDeployment(const Model::StartBulkDeploymentRequest& request) const;


        /**
         * Stops the execution of a bulk deployment. This action returns a status of
         * ''Stopping'' until the deployment is stopped. You cannot start a new bulk
         * deployment while a previous deployment is in the ''Stopping'' state. This action
         * doesn't rollback completed deployments or cancel pending deployments.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/StopBulkDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBulkDeploymentOutcome StopBulkDeployment(const Model::StopBulkDeploymentRequest& request) const;


        /**
         * Adds tags to a Greengrass resource. Valid resources are 'Group',
         * 'ConnectorDefinition', 'CoreDefinition', 'DeviceDefinition',
         * 'FunctionDefinition', 'LoggerDefinition', 'SubscriptionDefinition',
         * 'ResourceDefinition', and 'BulkDeployment'.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * Remove resource tags from a Greengrass Resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * Updates the connectivity information for the core. Any devices that belong to
         * the group which has this core will receive this information in order to find the
         * location of the core and connect to it.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectivityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectivityInfoOutcome UpdateConnectivityInfo(const Model::UpdateConnectivityInfoRequest& request) const;


        /**
         * Updates a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorDefinitionOutcome UpdateConnectorDefinition(const Model::UpdateConnectorDefinitionRequest& request) const;


        /**
         * Updates a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCoreDefinitionOutcome UpdateCoreDefinition(const Model::UpdateCoreDefinitionRequest& request) const;


        /**
         * Updates a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceDefinitionOutcome UpdateDeviceDefinition(const Model::UpdateDeviceDefinitionRequest& request) const;


        /**
         * Updates a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionDefinitionOutcome UpdateFunctionDefinition(const Model::UpdateFunctionDefinitionRequest& request) const;


        /**
         * Updates a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;


        /**
         * Updates the Certificate expiry time for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupCertificateConfigurationOutcome UpdateGroupCertificateConfiguration(const Model::UpdateGroupCertificateConfigurationRequest& request) const;


        /**
         * Updates a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggerDefinitionOutcome UpdateLoggerDefinition(const Model::UpdateLoggerDefinitionRequest& request) const;


        /**
         * Updates a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceDefinitionOutcome UpdateResourceDefinition(const Model::UpdateResourceDefinitionRequest& request) const;


        /**
         * Updates a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionDefinitionOutcome UpdateSubscriptionDefinition(const Model::UpdateSubscriptionDefinitionRequest& request) const;


        /**
         * Updates the runtime configuration of a thing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateThingRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThingRuntimeConfigurationOutcome UpdateThingRuntimeConfiguration(const Model::UpdateThingRuntimeConfigurationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GreengrassEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const GreengrassClientConfiguration& clientConfiguration);

      GreengrassClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GreengrassEndpointProviderBase> m_endpointProvider;
  };

} // namespace Greengrass
} // namespace Aws
