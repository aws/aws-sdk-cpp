/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/greengrass/GreengrassServiceClientModel.h>

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
  class AWS_GREENGRASS_API GreengrassClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GreengrassClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GreengrassClientConfiguration ClientConfigurationType;
      typedef GreengrassEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassClient(const Aws::Greengrass::GreengrassClientConfiguration& clientConfiguration = Aws::Greengrass::GreengrassClientConfiguration(),
                         std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::Greengrass::GreengrassClientConfiguration& clientConfiguration = Aws::Greengrass::GreengrassClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GreengrassClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<GreengrassEndpointProviderBase> endpointProvider = nullptr,
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

        /**
         * Associates a role with a group. Your Greengrass core will use the role to access
         * AWS cloud services. The role's permissions should allow Greengrass core Lambda
         * functions to perform actions against the cloud.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/AssociateRoleToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRoleToGroupOutcome AssociateRoleToGroup(const Model::AssociateRoleToGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociateRoleToGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateRoleToGroupRequestT = Model::AssociateRoleToGroupRequest>
        Model::AssociateRoleToGroupOutcomeCallable AssociateRoleToGroupCallable(const AssociateRoleToGroupRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::AssociateRoleToGroup, request);
        }

        /**
         * An Async wrapper for AssociateRoleToGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateRoleToGroupRequestT = Model::AssociateRoleToGroupRequest>
        void AssociateRoleToGroupAsync(const AssociateRoleToGroupRequestT& request, const AssociateRoleToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::AssociateRoleToGroup, request, handler, context);
        }

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
         * A Callable wrapper for AssociateServiceRoleToAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateServiceRoleToAccountRequestT = Model::AssociateServiceRoleToAccountRequest>
        Model::AssociateServiceRoleToAccountOutcomeCallable AssociateServiceRoleToAccountCallable(const AssociateServiceRoleToAccountRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::AssociateServiceRoleToAccount, request);
        }

        /**
         * An Async wrapper for AssociateServiceRoleToAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateServiceRoleToAccountRequestT = Model::AssociateServiceRoleToAccountRequest>
        void AssociateServiceRoleToAccountAsync(const AssociateServiceRoleToAccountRequestT& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::AssociateServiceRoleToAccount, request, handler, context);
        }

        /**
         * Creates a connector definition. You may provide the initial version of the
         * connector definition now or use ''CreateConnectorDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorDefinitionOutcome CreateConnectorDefinition(const Model::CreateConnectorDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectorDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectorDefinitionRequestT = Model::CreateConnectorDefinitionRequest>
        Model::CreateConnectorDefinitionOutcomeCallable CreateConnectorDefinitionCallable(const CreateConnectorDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateConnectorDefinition, request);
        }

        /**
         * An Async wrapper for CreateConnectorDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectorDefinitionRequestT = Model::CreateConnectorDefinitionRequest>
        void CreateConnectorDefinitionAsync(const CreateConnectorDefinitionRequestT& request, const CreateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateConnectorDefinition, request, handler, context);
        }

        /**
         * Creates a version of a connector definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorDefinitionVersionOutcome CreateConnectorDefinitionVersion(const Model::CreateConnectorDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectorDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectorDefinitionVersionRequestT = Model::CreateConnectorDefinitionVersionRequest>
        Model::CreateConnectorDefinitionVersionOutcomeCallable CreateConnectorDefinitionVersionCallable(const CreateConnectorDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateConnectorDefinitionVersion, request);
        }

        /**
         * An Async wrapper for CreateConnectorDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectorDefinitionVersionRequestT = Model::CreateConnectorDefinitionVersionRequest>
        void CreateConnectorDefinitionVersionAsync(const CreateConnectorDefinitionVersionRequestT& request, const CreateConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateConnectorDefinitionVersion, request, handler, context);
        }

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
         * A Callable wrapper for CreateCoreDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCoreDefinitionRequestT = Model::CreateCoreDefinitionRequest>
        Model::CreateCoreDefinitionOutcomeCallable CreateCoreDefinitionCallable(const CreateCoreDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateCoreDefinition, request);
        }

        /**
         * An Async wrapper for CreateCoreDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCoreDefinitionRequestT = Model::CreateCoreDefinitionRequest>
        void CreateCoreDefinitionAsync(const CreateCoreDefinitionRequestT& request, const CreateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateCoreDefinition, request, handler, context);
        }

        /**
         * Creates a version of a core definition that has already been defined. Greengrass
         * groups must each contain exactly one Greengrass core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoreDefinitionVersionOutcome CreateCoreDefinitionVersion(const Model::CreateCoreDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateCoreDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCoreDefinitionVersionRequestT = Model::CreateCoreDefinitionVersionRequest>
        Model::CreateCoreDefinitionVersionOutcomeCallable CreateCoreDefinitionVersionCallable(const CreateCoreDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateCoreDefinitionVersion, request);
        }

        /**
         * An Async wrapper for CreateCoreDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCoreDefinitionVersionRequestT = Model::CreateCoreDefinitionVersionRequest>
        void CreateCoreDefinitionVersionAsync(const CreateCoreDefinitionVersionRequestT& request, const CreateCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateCoreDefinitionVersion, request, handler, context);
        }

        /**
         * Creates a deployment. ''CreateDeployment'' requests are idempotent with respect
         * to the ''X-Amzn-Client-Token'' token and the request parameters.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const CreateDeploymentRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateDeployment, request);
        }

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        void CreateDeploymentAsync(const CreateDeploymentRequestT& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateDeployment, request, handler, context);
        }

        /**
         * Creates a device definition. You may provide the initial version of the device
         * definition now or use ''CreateDeviceDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceDefinitionOutcome CreateDeviceDefinition(const Model::CreateDeviceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateDeviceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeviceDefinitionRequestT = Model::CreateDeviceDefinitionRequest>
        Model::CreateDeviceDefinitionOutcomeCallable CreateDeviceDefinitionCallable(const CreateDeviceDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateDeviceDefinition, request);
        }

        /**
         * An Async wrapper for CreateDeviceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeviceDefinitionRequestT = Model::CreateDeviceDefinitionRequest>
        void CreateDeviceDefinitionAsync(const CreateDeviceDefinitionRequestT& request, const CreateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateDeviceDefinition, request, handler, context);
        }

        /**
         * Creates a version of a device definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceDefinitionVersionOutcome CreateDeviceDefinitionVersion(const Model::CreateDeviceDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateDeviceDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeviceDefinitionVersionRequestT = Model::CreateDeviceDefinitionVersionRequest>
        Model::CreateDeviceDefinitionVersionOutcomeCallable CreateDeviceDefinitionVersionCallable(const CreateDeviceDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateDeviceDefinitionVersion, request);
        }

        /**
         * An Async wrapper for CreateDeviceDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeviceDefinitionVersionRequestT = Model::CreateDeviceDefinitionVersionRequest>
        void CreateDeviceDefinitionVersionAsync(const CreateDeviceDefinitionVersionRequestT& request, const CreateDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateDeviceDefinitionVersion, request, handler, context);
        }

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
         * A Callable wrapper for CreateFunctionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFunctionDefinitionRequestT = Model::CreateFunctionDefinitionRequest>
        Model::CreateFunctionDefinitionOutcomeCallable CreateFunctionDefinitionCallable(const CreateFunctionDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateFunctionDefinition, request);
        }

        /**
         * An Async wrapper for CreateFunctionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFunctionDefinitionRequestT = Model::CreateFunctionDefinitionRequest>
        void CreateFunctionDefinitionAsync(const CreateFunctionDefinitionRequestT& request, const CreateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateFunctionDefinition, request, handler, context);
        }

        /**
         * Creates a version of a Lambda function definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionDefinitionVersionOutcome CreateFunctionDefinitionVersion(const Model::CreateFunctionDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateFunctionDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFunctionDefinitionVersionRequestT = Model::CreateFunctionDefinitionVersionRequest>
        Model::CreateFunctionDefinitionVersionOutcomeCallable CreateFunctionDefinitionVersionCallable(const CreateFunctionDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateFunctionDefinitionVersion, request);
        }

        /**
         * An Async wrapper for CreateFunctionDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFunctionDefinitionVersionRequestT = Model::CreateFunctionDefinitionVersionRequest>
        void CreateFunctionDefinitionVersionAsync(const CreateFunctionDefinitionVersionRequestT& request, const CreateFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateFunctionDefinitionVersion, request, handler, context);
        }

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
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        Model::CreateGroupOutcomeCallable CreateGroupCallable(const CreateGroupRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateGroup, request);
        }

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        void CreateGroupAsync(const CreateGroupRequestT& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateGroup, request, handler, context);
        }

        /**
         * Creates a CA for the group. If a CA already exists, it will rotate the existing
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupCertificateAuthorityOutcome CreateGroupCertificateAuthority(const Model::CreateGroupCertificateAuthorityRequest& request) const;

        /**
         * A Callable wrapper for CreateGroupCertificateAuthority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupCertificateAuthorityRequestT = Model::CreateGroupCertificateAuthorityRequest>
        Model::CreateGroupCertificateAuthorityOutcomeCallable CreateGroupCertificateAuthorityCallable(const CreateGroupCertificateAuthorityRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateGroupCertificateAuthority, request);
        }

        /**
         * An Async wrapper for CreateGroupCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupCertificateAuthorityRequestT = Model::CreateGroupCertificateAuthorityRequest>
        void CreateGroupCertificateAuthorityAsync(const CreateGroupCertificateAuthorityRequestT& request, const CreateGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateGroupCertificateAuthority, request, handler, context);
        }

        /**
         * Creates a version of a group which has already been defined.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupVersionOutcome CreateGroupVersion(const Model::CreateGroupVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateGroupVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupVersionRequestT = Model::CreateGroupVersionRequest>
        Model::CreateGroupVersionOutcomeCallable CreateGroupVersionCallable(const CreateGroupVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateGroupVersion, request);
        }

        /**
         * An Async wrapper for CreateGroupVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupVersionRequestT = Model::CreateGroupVersionRequest>
        void CreateGroupVersionAsync(const CreateGroupVersionRequestT& request, const CreateGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateGroupVersion, request, handler, context);
        }

        /**
         * Creates a logger definition. You may provide the initial version of the logger
         * definition now or use ''CreateLoggerDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggerDefinitionOutcome CreateLoggerDefinition(const Model::CreateLoggerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateLoggerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLoggerDefinitionRequestT = Model::CreateLoggerDefinitionRequest>
        Model::CreateLoggerDefinitionOutcomeCallable CreateLoggerDefinitionCallable(const CreateLoggerDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateLoggerDefinition, request);
        }

        /**
         * An Async wrapper for CreateLoggerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLoggerDefinitionRequestT = Model::CreateLoggerDefinitionRequest>
        void CreateLoggerDefinitionAsync(const CreateLoggerDefinitionRequestT& request, const CreateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateLoggerDefinition, request, handler, context);
        }

        /**
         * Creates a version of a logger definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggerDefinitionVersionOutcome CreateLoggerDefinitionVersion(const Model::CreateLoggerDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateLoggerDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLoggerDefinitionVersionRequestT = Model::CreateLoggerDefinitionVersionRequest>
        Model::CreateLoggerDefinitionVersionOutcomeCallable CreateLoggerDefinitionVersionCallable(const CreateLoggerDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateLoggerDefinitionVersion, request);
        }

        /**
         * An Async wrapper for CreateLoggerDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLoggerDefinitionVersionRequestT = Model::CreateLoggerDefinitionVersionRequest>
        void CreateLoggerDefinitionVersionAsync(const CreateLoggerDefinitionVersionRequestT& request, const CreateLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateLoggerDefinitionVersion, request, handler, context);
        }

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
         * A Callable wrapper for CreateResourceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceDefinitionRequestT = Model::CreateResourceDefinitionRequest>
        Model::CreateResourceDefinitionOutcomeCallable CreateResourceDefinitionCallable(const CreateResourceDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateResourceDefinition, request);
        }

        /**
         * An Async wrapper for CreateResourceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceDefinitionRequestT = Model::CreateResourceDefinitionRequest>
        void CreateResourceDefinitionAsync(const CreateResourceDefinitionRequestT& request, const CreateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateResourceDefinition, request, handler, context);
        }

        /**
         * Creates a version of a resource definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateResourceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceDefinitionVersionOutcome CreateResourceDefinitionVersion(const Model::CreateResourceDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateResourceDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceDefinitionVersionRequestT = Model::CreateResourceDefinitionVersionRequest>
        Model::CreateResourceDefinitionVersionOutcomeCallable CreateResourceDefinitionVersionCallable(const CreateResourceDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateResourceDefinitionVersion, request);
        }

        /**
         * An Async wrapper for CreateResourceDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceDefinitionVersionRequestT = Model::CreateResourceDefinitionVersionRequest>
        void CreateResourceDefinitionVersionAsync(const CreateResourceDefinitionVersionRequestT& request, const CreateResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateResourceDefinitionVersion, request, handler, context);
        }

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
         * A Callable wrapper for CreateSoftwareUpdateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSoftwareUpdateJobRequestT = Model::CreateSoftwareUpdateJobRequest>
        Model::CreateSoftwareUpdateJobOutcomeCallable CreateSoftwareUpdateJobCallable(const CreateSoftwareUpdateJobRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateSoftwareUpdateJob, request);
        }

        /**
         * An Async wrapper for CreateSoftwareUpdateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSoftwareUpdateJobRequestT = Model::CreateSoftwareUpdateJobRequest>
        void CreateSoftwareUpdateJobAsync(const CreateSoftwareUpdateJobRequestT& request, const CreateSoftwareUpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateSoftwareUpdateJob, request, handler, context);
        }

        /**
         * Creates a subscription definition. You may provide the initial version of the
         * subscription definition now or use ''CreateSubscriptionDefinitionVersion'' at a
         * later time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionDefinitionOutcome CreateSubscriptionDefinition(const Model::CreateSubscriptionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriptionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriptionDefinitionRequestT = Model::CreateSubscriptionDefinitionRequest>
        Model::CreateSubscriptionDefinitionOutcomeCallable CreateSubscriptionDefinitionCallable(const CreateSubscriptionDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateSubscriptionDefinition, request);
        }

        /**
         * An Async wrapper for CreateSubscriptionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriptionDefinitionRequestT = Model::CreateSubscriptionDefinitionRequest>
        void CreateSubscriptionDefinitionAsync(const CreateSubscriptionDefinitionRequestT& request, const CreateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateSubscriptionDefinition, request, handler, context);
        }

        /**
         * Creates a version of a subscription definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionDefinitionVersionOutcome CreateSubscriptionDefinitionVersion(const Model::CreateSubscriptionDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriptionDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriptionDefinitionVersionRequestT = Model::CreateSubscriptionDefinitionVersionRequest>
        Model::CreateSubscriptionDefinitionVersionOutcomeCallable CreateSubscriptionDefinitionVersionCallable(const CreateSubscriptionDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::CreateSubscriptionDefinitionVersion, request);
        }

        /**
         * An Async wrapper for CreateSubscriptionDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriptionDefinitionVersionRequestT = Model::CreateSubscriptionDefinitionVersionRequest>
        void CreateSubscriptionDefinitionVersionAsync(const CreateSubscriptionDefinitionVersionRequestT& request, const CreateSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::CreateSubscriptionDefinitionVersion, request, handler, context);
        }

        /**
         * Deletes a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorDefinitionOutcome DeleteConnectorDefinition(const Model::DeleteConnectorDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectorDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectorDefinitionRequestT = Model::DeleteConnectorDefinitionRequest>
        Model::DeleteConnectorDefinitionOutcomeCallable DeleteConnectorDefinitionCallable(const DeleteConnectorDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DeleteConnectorDefinition, request);
        }

        /**
         * An Async wrapper for DeleteConnectorDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectorDefinitionRequestT = Model::DeleteConnectorDefinitionRequest>
        void DeleteConnectorDefinitionAsync(const DeleteConnectorDefinitionRequestT& request, const DeleteConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DeleteConnectorDefinition, request, handler, context);
        }

        /**
         * Deletes a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreDefinitionOutcome DeleteCoreDefinition(const Model::DeleteCoreDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCoreDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCoreDefinitionRequestT = Model::DeleteCoreDefinitionRequest>
        Model::DeleteCoreDefinitionOutcomeCallable DeleteCoreDefinitionCallable(const DeleteCoreDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DeleteCoreDefinition, request);
        }

        /**
         * An Async wrapper for DeleteCoreDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCoreDefinitionRequestT = Model::DeleteCoreDefinitionRequest>
        void DeleteCoreDefinitionAsync(const DeleteCoreDefinitionRequestT& request, const DeleteCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DeleteCoreDefinition, request, handler, context);
        }

        /**
         * Deletes a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceDefinitionOutcome DeleteDeviceDefinition(const Model::DeleteDeviceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeviceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeviceDefinitionRequestT = Model::DeleteDeviceDefinitionRequest>
        Model::DeleteDeviceDefinitionOutcomeCallable DeleteDeviceDefinitionCallable(const DeleteDeviceDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DeleteDeviceDefinition, request);
        }

        /**
         * An Async wrapper for DeleteDeviceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeviceDefinitionRequestT = Model::DeleteDeviceDefinitionRequest>
        void DeleteDeviceDefinitionAsync(const DeleteDeviceDefinitionRequestT& request, const DeleteDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DeleteDeviceDefinition, request, handler, context);
        }

        /**
         * Deletes a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionDefinitionOutcome DeleteFunctionDefinition(const Model::DeleteFunctionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteFunctionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFunctionDefinitionRequestT = Model::DeleteFunctionDefinitionRequest>
        Model::DeleteFunctionDefinitionOutcomeCallable DeleteFunctionDefinitionCallable(const DeleteFunctionDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DeleteFunctionDefinition, request);
        }

        /**
         * An Async wrapper for DeleteFunctionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFunctionDefinitionRequestT = Model::DeleteFunctionDefinitionRequest>
        void DeleteFunctionDefinitionAsync(const DeleteFunctionDefinitionRequestT& request, const DeleteFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DeleteFunctionDefinition, request, handler, context);
        }

        /**
         * Deletes a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const DeleteGroupRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DeleteGroup, request);
        }

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        void DeleteGroupAsync(const DeleteGroupRequestT& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DeleteGroup, request, handler, context);
        }

        /**
         * Deletes a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggerDefinitionOutcome DeleteLoggerDefinition(const Model::DeleteLoggerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoggerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLoggerDefinitionRequestT = Model::DeleteLoggerDefinitionRequest>
        Model::DeleteLoggerDefinitionOutcomeCallable DeleteLoggerDefinitionCallable(const DeleteLoggerDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DeleteLoggerDefinition, request);
        }

        /**
         * An Async wrapper for DeleteLoggerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLoggerDefinitionRequestT = Model::DeleteLoggerDefinitionRequest>
        void DeleteLoggerDefinitionAsync(const DeleteLoggerDefinitionRequestT& request, const DeleteLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DeleteLoggerDefinition, request, handler, context);
        }

        /**
         * Deletes a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceDefinitionOutcome DeleteResourceDefinition(const Model::DeleteResourceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceDefinitionRequestT = Model::DeleteResourceDefinitionRequest>
        Model::DeleteResourceDefinitionOutcomeCallable DeleteResourceDefinitionCallable(const DeleteResourceDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DeleteResourceDefinition, request);
        }

        /**
         * An Async wrapper for DeleteResourceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceDefinitionRequestT = Model::DeleteResourceDefinitionRequest>
        void DeleteResourceDefinitionAsync(const DeleteResourceDefinitionRequestT& request, const DeleteResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DeleteResourceDefinition, request, handler, context);
        }

        /**
         * Deletes a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionDefinitionOutcome DeleteSubscriptionDefinition(const Model::DeleteSubscriptionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriptionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSubscriptionDefinitionRequestT = Model::DeleteSubscriptionDefinitionRequest>
        Model::DeleteSubscriptionDefinitionOutcomeCallable DeleteSubscriptionDefinitionCallable(const DeleteSubscriptionDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DeleteSubscriptionDefinition, request);
        }

        /**
         * An Async wrapper for DeleteSubscriptionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSubscriptionDefinitionRequestT = Model::DeleteSubscriptionDefinitionRequest>
        void DeleteSubscriptionDefinitionAsync(const DeleteSubscriptionDefinitionRequestT& request, const DeleteSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DeleteSubscriptionDefinition, request, handler, context);
        }

        /**
         * Disassociates the role from a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateRoleFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRoleFromGroupOutcome DisassociateRoleFromGroup(const Model::DisassociateRoleFromGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateRoleFromGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateRoleFromGroupRequestT = Model::DisassociateRoleFromGroupRequest>
        Model::DisassociateRoleFromGroupOutcomeCallable DisassociateRoleFromGroupCallable(const DisassociateRoleFromGroupRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DisassociateRoleFromGroup, request);
        }

        /**
         * An Async wrapper for DisassociateRoleFromGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateRoleFromGroupRequestT = Model::DisassociateRoleFromGroupRequest>
        void DisassociateRoleFromGroupAsync(const DisassociateRoleFromGroupRequestT& request, const DisassociateRoleFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DisassociateRoleFromGroup, request, handler, context);
        }

        /**
         * Disassociates the service role from your account. Without a service role,
         * deployments will not work.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateServiceRoleFromAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceRoleFromAccountOutcome DisassociateServiceRoleFromAccount(const Model::DisassociateServiceRoleFromAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateServiceRoleFromAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateServiceRoleFromAccountRequestT = Model::DisassociateServiceRoleFromAccountRequest>
        Model::DisassociateServiceRoleFromAccountOutcomeCallable DisassociateServiceRoleFromAccountCallable(const DisassociateServiceRoleFromAccountRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::DisassociateServiceRoleFromAccount, request);
        }

        /**
         * An Async wrapper for DisassociateServiceRoleFromAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateServiceRoleFromAccountRequestT = Model::DisassociateServiceRoleFromAccountRequest>
        void DisassociateServiceRoleFromAccountAsync(const DisassociateServiceRoleFromAccountRequestT& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::DisassociateServiceRoleFromAccount, request, handler, context);
        }

        /**
         * Retrieves the role associated with a particular group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetAssociatedRole">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociatedRoleOutcome GetAssociatedRole(const Model::GetAssociatedRoleRequest& request) const;

        /**
         * A Callable wrapper for GetAssociatedRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssociatedRoleRequestT = Model::GetAssociatedRoleRequest>
        Model::GetAssociatedRoleOutcomeCallable GetAssociatedRoleCallable(const GetAssociatedRoleRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetAssociatedRole, request);
        }

        /**
         * An Async wrapper for GetAssociatedRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssociatedRoleRequestT = Model::GetAssociatedRoleRequest>
        void GetAssociatedRoleAsync(const GetAssociatedRoleRequestT& request, const GetAssociatedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetAssociatedRole, request, handler, context);
        }

        /**
         * Returns the status of a bulk deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetBulkDeploymentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBulkDeploymentStatusOutcome GetBulkDeploymentStatus(const Model::GetBulkDeploymentStatusRequest& request) const;

        /**
         * A Callable wrapper for GetBulkDeploymentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBulkDeploymentStatusRequestT = Model::GetBulkDeploymentStatusRequest>
        Model::GetBulkDeploymentStatusOutcomeCallable GetBulkDeploymentStatusCallable(const GetBulkDeploymentStatusRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetBulkDeploymentStatus, request);
        }

        /**
         * An Async wrapper for GetBulkDeploymentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBulkDeploymentStatusRequestT = Model::GetBulkDeploymentStatusRequest>
        void GetBulkDeploymentStatusAsync(const GetBulkDeploymentStatusRequestT& request, const GetBulkDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetBulkDeploymentStatus, request, handler, context);
        }

        /**
         * Retrieves the connectivity information for a core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectivityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectivityInfoOutcome GetConnectivityInfo(const Model::GetConnectivityInfoRequest& request) const;

        /**
         * A Callable wrapper for GetConnectivityInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectivityInfoRequestT = Model::GetConnectivityInfoRequest>
        Model::GetConnectivityInfoOutcomeCallable GetConnectivityInfoCallable(const GetConnectivityInfoRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetConnectivityInfo, request);
        }

        /**
         * An Async wrapper for GetConnectivityInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectivityInfoRequestT = Model::GetConnectivityInfoRequest>
        void GetConnectivityInfoAsync(const GetConnectivityInfoRequestT& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetConnectivityInfo, request, handler, context);
        }

        /**
         * Retrieves information about a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorDefinitionOutcome GetConnectorDefinition(const Model::GetConnectorDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetConnectorDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectorDefinitionRequestT = Model::GetConnectorDefinitionRequest>
        Model::GetConnectorDefinitionOutcomeCallable GetConnectorDefinitionCallable(const GetConnectorDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetConnectorDefinition, request);
        }

        /**
         * An Async wrapper for GetConnectorDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectorDefinitionRequestT = Model::GetConnectorDefinitionRequest>
        void GetConnectorDefinitionAsync(const GetConnectorDefinitionRequestT& request, const GetConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetConnectorDefinition, request, handler, context);
        }

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
         * A Callable wrapper for GetConnectorDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectorDefinitionVersionRequestT = Model::GetConnectorDefinitionVersionRequest>
        Model::GetConnectorDefinitionVersionOutcomeCallable GetConnectorDefinitionVersionCallable(const GetConnectorDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetConnectorDefinitionVersion, request);
        }

        /**
         * An Async wrapper for GetConnectorDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectorDefinitionVersionRequestT = Model::GetConnectorDefinitionVersionRequest>
        void GetConnectorDefinitionVersionAsync(const GetConnectorDefinitionVersionRequestT& request, const GetConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetConnectorDefinitionVersion, request, handler, context);
        }

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDefinitionOutcome GetCoreDefinition(const Model::GetCoreDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetCoreDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCoreDefinitionRequestT = Model::GetCoreDefinitionRequest>
        Model::GetCoreDefinitionOutcomeCallable GetCoreDefinitionCallable(const GetCoreDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetCoreDefinition, request);
        }

        /**
         * An Async wrapper for GetCoreDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCoreDefinitionRequestT = Model::GetCoreDefinitionRequest>
        void GetCoreDefinitionAsync(const GetCoreDefinitionRequestT& request, const GetCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetCoreDefinition, request, handler, context);
        }

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDefinitionVersionOutcome GetCoreDefinitionVersion(const Model::GetCoreDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for GetCoreDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCoreDefinitionVersionRequestT = Model::GetCoreDefinitionVersionRequest>
        Model::GetCoreDefinitionVersionOutcomeCallable GetCoreDefinitionVersionCallable(const GetCoreDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetCoreDefinitionVersion, request);
        }

        /**
         * An Async wrapper for GetCoreDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCoreDefinitionVersionRequestT = Model::GetCoreDefinitionVersionRequest>
        void GetCoreDefinitionVersionAsync(const GetCoreDefinitionVersionRequestT& request, const GetCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetCoreDefinitionVersion, request, handler, context);
        }

        /**
         * Returns the status of a deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeploymentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentStatusOutcome GetDeploymentStatus(const Model::GetDeploymentStatusRequest& request) const;

        /**
         * A Callable wrapper for GetDeploymentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentStatusRequestT = Model::GetDeploymentStatusRequest>
        Model::GetDeploymentStatusOutcomeCallable GetDeploymentStatusCallable(const GetDeploymentStatusRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetDeploymentStatus, request);
        }

        /**
         * An Async wrapper for GetDeploymentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentStatusRequestT = Model::GetDeploymentStatusRequest>
        void GetDeploymentStatusAsync(const GetDeploymentStatusRequestT& request, const GetDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetDeploymentStatus, request, handler, context);
        }

        /**
         * Retrieves information about a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceDefinitionOutcome GetDeviceDefinition(const Model::GetDeviceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceDefinitionRequestT = Model::GetDeviceDefinitionRequest>
        Model::GetDeviceDefinitionOutcomeCallable GetDeviceDefinitionCallable(const GetDeviceDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetDeviceDefinition, request);
        }

        /**
         * An Async wrapper for GetDeviceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceDefinitionRequestT = Model::GetDeviceDefinitionRequest>
        void GetDeviceDefinitionAsync(const GetDeviceDefinitionRequestT& request, const GetDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetDeviceDefinition, request, handler, context);
        }

        /**
         * Retrieves information about a device definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceDefinitionVersionOutcome GetDeviceDefinitionVersion(const Model::GetDeviceDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceDefinitionVersionRequestT = Model::GetDeviceDefinitionVersionRequest>
        Model::GetDeviceDefinitionVersionOutcomeCallable GetDeviceDefinitionVersionCallable(const GetDeviceDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetDeviceDefinitionVersion, request);
        }

        /**
         * An Async wrapper for GetDeviceDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceDefinitionVersionRequestT = Model::GetDeviceDefinitionVersionRequest>
        void GetDeviceDefinitionVersionAsync(const GetDeviceDefinitionVersionRequestT& request, const GetDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetDeviceDefinitionVersion, request, handler, context);
        }

        /**
         * Retrieves information about a Lambda function definition, including its creation
         * time and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionDefinitionOutcome GetFunctionDefinition(const Model::GetFunctionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetFunctionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFunctionDefinitionRequestT = Model::GetFunctionDefinitionRequest>
        Model::GetFunctionDefinitionOutcomeCallable GetFunctionDefinitionCallable(const GetFunctionDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetFunctionDefinition, request);
        }

        /**
         * An Async wrapper for GetFunctionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFunctionDefinitionRequestT = Model::GetFunctionDefinitionRequest>
        void GetFunctionDefinitionAsync(const GetFunctionDefinitionRequestT& request, const GetFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetFunctionDefinition, request, handler, context);
        }

        /**
         * Retrieves information about a Lambda function definition version, including
         * which Lambda functions are included in the version and their
         * configurations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionDefinitionVersionOutcome GetFunctionDefinitionVersion(const Model::GetFunctionDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for GetFunctionDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFunctionDefinitionVersionRequestT = Model::GetFunctionDefinitionVersionRequest>
        Model::GetFunctionDefinitionVersionOutcomeCallable GetFunctionDefinitionVersionCallable(const GetFunctionDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetFunctionDefinitionVersion, request);
        }

        /**
         * An Async wrapper for GetFunctionDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFunctionDefinitionVersionRequestT = Model::GetFunctionDefinitionVersionRequest>
        void GetFunctionDefinitionVersionAsync(const GetFunctionDefinitionVersionRequestT& request, const GetFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetFunctionDefinitionVersion, request, handler, context);
        }

        /**
         * Retrieves information about a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        Model::GetGroupOutcomeCallable GetGroupCallable(const GetGroupRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetGroup, request);
        }

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        void GetGroupAsync(const GetGroupRequestT& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetGroup, request, handler, context);
        }

        /**
         * Retreives the CA associated with a group. Returns the public key of the
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupCertificateAuthorityOutcome GetGroupCertificateAuthority(const Model::GetGroupCertificateAuthorityRequest& request) const;

        /**
         * A Callable wrapper for GetGroupCertificateAuthority that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupCertificateAuthorityRequestT = Model::GetGroupCertificateAuthorityRequest>
        Model::GetGroupCertificateAuthorityOutcomeCallable GetGroupCertificateAuthorityCallable(const GetGroupCertificateAuthorityRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetGroupCertificateAuthority, request);
        }

        /**
         * An Async wrapper for GetGroupCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupCertificateAuthorityRequestT = Model::GetGroupCertificateAuthorityRequest>
        void GetGroupCertificateAuthorityAsync(const GetGroupCertificateAuthorityRequestT& request, const GetGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetGroupCertificateAuthority, request, handler, context);
        }

        /**
         * Retrieves the current configuration for the CA used by the group.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupCertificateConfigurationOutcome GetGroupCertificateConfiguration(const Model::GetGroupCertificateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetGroupCertificateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupCertificateConfigurationRequestT = Model::GetGroupCertificateConfigurationRequest>
        Model::GetGroupCertificateConfigurationOutcomeCallable GetGroupCertificateConfigurationCallable(const GetGroupCertificateConfigurationRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetGroupCertificateConfiguration, request);
        }

        /**
         * An Async wrapper for GetGroupCertificateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupCertificateConfigurationRequestT = Model::GetGroupCertificateConfigurationRequest>
        void GetGroupCertificateConfigurationAsync(const GetGroupCertificateConfigurationRequestT& request, const GetGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetGroupCertificateConfiguration, request, handler, context);
        }

        /**
         * Retrieves information about a group version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupVersionOutcome GetGroupVersion(const Model::GetGroupVersionRequest& request) const;

        /**
         * A Callable wrapper for GetGroupVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupVersionRequestT = Model::GetGroupVersionRequest>
        Model::GetGroupVersionOutcomeCallable GetGroupVersionCallable(const GetGroupVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetGroupVersion, request);
        }

        /**
         * An Async wrapper for GetGroupVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupVersionRequestT = Model::GetGroupVersionRequest>
        void GetGroupVersionAsync(const GetGroupVersionRequestT& request, const GetGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetGroupVersion, request, handler, context);
        }

        /**
         * Retrieves information about a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggerDefinitionOutcome GetLoggerDefinition(const Model::GetLoggerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetLoggerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoggerDefinitionRequestT = Model::GetLoggerDefinitionRequest>
        Model::GetLoggerDefinitionOutcomeCallable GetLoggerDefinitionCallable(const GetLoggerDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetLoggerDefinition, request);
        }

        /**
         * An Async wrapper for GetLoggerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoggerDefinitionRequestT = Model::GetLoggerDefinitionRequest>
        void GetLoggerDefinitionAsync(const GetLoggerDefinitionRequestT& request, const GetLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetLoggerDefinition, request, handler, context);
        }

        /**
         * Retrieves information about a logger definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggerDefinitionVersionOutcome GetLoggerDefinitionVersion(const Model::GetLoggerDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for GetLoggerDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoggerDefinitionVersionRequestT = Model::GetLoggerDefinitionVersionRequest>
        Model::GetLoggerDefinitionVersionOutcomeCallable GetLoggerDefinitionVersionCallable(const GetLoggerDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetLoggerDefinitionVersion, request);
        }

        /**
         * An Async wrapper for GetLoggerDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoggerDefinitionVersionRequestT = Model::GetLoggerDefinitionVersionRequest>
        void GetLoggerDefinitionVersionAsync(const GetLoggerDefinitionVersionRequestT& request, const GetLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetLoggerDefinitionVersion, request, handler, context);
        }

        /**
         * Retrieves information about a resource definition, including its creation time
         * and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceDefinitionOutcome GetResourceDefinition(const Model::GetResourceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetResourceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceDefinitionRequestT = Model::GetResourceDefinitionRequest>
        Model::GetResourceDefinitionOutcomeCallable GetResourceDefinitionCallable(const GetResourceDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetResourceDefinition, request);
        }

        /**
         * An Async wrapper for GetResourceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceDefinitionRequestT = Model::GetResourceDefinitionRequest>
        void GetResourceDefinitionAsync(const GetResourceDefinitionRequestT& request, const GetResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetResourceDefinition, request, handler, context);
        }

        /**
         * Retrieves information about a resource definition version, including which
         * resources are included in the version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceDefinitionVersionOutcome GetResourceDefinitionVersion(const Model::GetResourceDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for GetResourceDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceDefinitionVersionRequestT = Model::GetResourceDefinitionVersionRequest>
        Model::GetResourceDefinitionVersionOutcomeCallable GetResourceDefinitionVersionCallable(const GetResourceDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetResourceDefinitionVersion, request);
        }

        /**
         * An Async wrapper for GetResourceDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceDefinitionVersionRequestT = Model::GetResourceDefinitionVersionRequest>
        void GetResourceDefinitionVersionAsync(const GetResourceDefinitionVersionRequestT& request, const GetResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetResourceDefinitionVersion, request, handler, context);
        }

        /**
         * Retrieves the service role that is attached to your account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetServiceRoleForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceRoleForAccountOutcome GetServiceRoleForAccount(const Model::GetServiceRoleForAccountRequest& request) const;

        /**
         * A Callable wrapper for GetServiceRoleForAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceRoleForAccountRequestT = Model::GetServiceRoleForAccountRequest>
        Model::GetServiceRoleForAccountOutcomeCallable GetServiceRoleForAccountCallable(const GetServiceRoleForAccountRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetServiceRoleForAccount, request);
        }

        /**
         * An Async wrapper for GetServiceRoleForAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceRoleForAccountRequestT = Model::GetServiceRoleForAccountRequest>
        void GetServiceRoleForAccountAsync(const GetServiceRoleForAccountRequestT& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetServiceRoleForAccount, request, handler, context);
        }

        /**
         * Retrieves information about a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionDefinitionOutcome GetSubscriptionDefinition(const Model::GetSubscriptionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriptionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriptionDefinitionRequestT = Model::GetSubscriptionDefinitionRequest>
        Model::GetSubscriptionDefinitionOutcomeCallable GetSubscriptionDefinitionCallable(const GetSubscriptionDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetSubscriptionDefinition, request);
        }

        /**
         * An Async wrapper for GetSubscriptionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriptionDefinitionRequestT = Model::GetSubscriptionDefinitionRequest>
        void GetSubscriptionDefinitionAsync(const GetSubscriptionDefinitionRequestT& request, const GetSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetSubscriptionDefinition, request, handler, context);
        }

        /**
         * Retrieves information about a subscription definition version.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionDefinitionVersionOutcome GetSubscriptionDefinitionVersion(const Model::GetSubscriptionDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriptionDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriptionDefinitionVersionRequestT = Model::GetSubscriptionDefinitionVersionRequest>
        Model::GetSubscriptionDefinitionVersionOutcomeCallable GetSubscriptionDefinitionVersionCallable(const GetSubscriptionDefinitionVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetSubscriptionDefinitionVersion, request);
        }

        /**
         * An Async wrapper for GetSubscriptionDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriptionDefinitionVersionRequestT = Model::GetSubscriptionDefinitionVersionRequest>
        void GetSubscriptionDefinitionVersionAsync(const GetSubscriptionDefinitionVersionRequestT& request, const GetSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetSubscriptionDefinitionVersion, request, handler, context);
        }

        /**
         * Get the runtime configuration of a thing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetThingRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThingRuntimeConfigurationOutcome GetThingRuntimeConfiguration(const Model::GetThingRuntimeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetThingRuntimeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetThingRuntimeConfigurationRequestT = Model::GetThingRuntimeConfigurationRequest>
        Model::GetThingRuntimeConfigurationOutcomeCallable GetThingRuntimeConfigurationCallable(const GetThingRuntimeConfigurationRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::GetThingRuntimeConfiguration, request);
        }

        /**
         * An Async wrapper for GetThingRuntimeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetThingRuntimeConfigurationRequestT = Model::GetThingRuntimeConfigurationRequest>
        void GetThingRuntimeConfigurationAsync(const GetThingRuntimeConfigurationRequestT& request, const GetThingRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::GetThingRuntimeConfiguration, request, handler, context);
        }

        /**
         * Gets a paginated list of the deployments that have been started in a bulk
         * deployment operation, and their current deployment status.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeploymentDetailedReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBulkDeploymentDetailedReportsOutcome ListBulkDeploymentDetailedReports(const Model::ListBulkDeploymentDetailedReportsRequest& request) const;

        /**
         * A Callable wrapper for ListBulkDeploymentDetailedReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBulkDeploymentDetailedReportsRequestT = Model::ListBulkDeploymentDetailedReportsRequest>
        Model::ListBulkDeploymentDetailedReportsOutcomeCallable ListBulkDeploymentDetailedReportsCallable(const ListBulkDeploymentDetailedReportsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListBulkDeploymentDetailedReports, request);
        }

        /**
         * An Async wrapper for ListBulkDeploymentDetailedReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBulkDeploymentDetailedReportsRequestT = Model::ListBulkDeploymentDetailedReportsRequest>
        void ListBulkDeploymentDetailedReportsAsync(const ListBulkDeploymentDetailedReportsRequestT& request, const ListBulkDeploymentDetailedReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListBulkDeploymentDetailedReports, request, handler, context);
        }

        /**
         * Returns a list of bulk deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBulkDeploymentsOutcome ListBulkDeployments(const Model::ListBulkDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListBulkDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBulkDeploymentsRequestT = Model::ListBulkDeploymentsRequest>
        Model::ListBulkDeploymentsOutcomeCallable ListBulkDeploymentsCallable(const ListBulkDeploymentsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListBulkDeployments, request);
        }

        /**
         * An Async wrapper for ListBulkDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBulkDeploymentsRequestT = Model::ListBulkDeploymentsRequest>
        void ListBulkDeploymentsAsync(const ListBulkDeploymentsRequestT& request, const ListBulkDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListBulkDeployments, request, handler, context);
        }

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
         * A Callable wrapper for ListConnectorDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectorDefinitionVersionsRequestT = Model::ListConnectorDefinitionVersionsRequest>
        Model::ListConnectorDefinitionVersionsOutcomeCallable ListConnectorDefinitionVersionsCallable(const ListConnectorDefinitionVersionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListConnectorDefinitionVersions, request);
        }

        /**
         * An Async wrapper for ListConnectorDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectorDefinitionVersionsRequestT = Model::ListConnectorDefinitionVersionsRequest>
        void ListConnectorDefinitionVersionsAsync(const ListConnectorDefinitionVersionsRequestT& request, const ListConnectorDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListConnectorDefinitionVersions, request, handler, context);
        }

        /**
         * Retrieves a list of connector definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorDefinitionsOutcome ListConnectorDefinitions(const Model::ListConnectorDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListConnectorDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectorDefinitionsRequestT = Model::ListConnectorDefinitionsRequest>
        Model::ListConnectorDefinitionsOutcomeCallable ListConnectorDefinitionsCallable(const ListConnectorDefinitionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListConnectorDefinitions, request);
        }

        /**
         * An Async wrapper for ListConnectorDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectorDefinitionsRequestT = Model::ListConnectorDefinitionsRequest>
        void ListConnectorDefinitionsAsync(const ListConnectorDefinitionsRequestT& request, const ListConnectorDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListConnectorDefinitions, request, handler, context);
        }

        /**
         * Lists the versions of a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDefinitionVersionsOutcome ListCoreDefinitionVersions(const Model::ListCoreDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListCoreDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCoreDefinitionVersionsRequestT = Model::ListCoreDefinitionVersionsRequest>
        Model::ListCoreDefinitionVersionsOutcomeCallable ListCoreDefinitionVersionsCallable(const ListCoreDefinitionVersionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListCoreDefinitionVersions, request);
        }

        /**
         * An Async wrapper for ListCoreDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCoreDefinitionVersionsRequestT = Model::ListCoreDefinitionVersionsRequest>
        void ListCoreDefinitionVersionsAsync(const ListCoreDefinitionVersionsRequestT& request, const ListCoreDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListCoreDefinitionVersions, request, handler, context);
        }

        /**
         * Retrieves a list of core definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDefinitionsOutcome ListCoreDefinitions(const Model::ListCoreDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListCoreDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCoreDefinitionsRequestT = Model::ListCoreDefinitionsRequest>
        Model::ListCoreDefinitionsOutcomeCallable ListCoreDefinitionsCallable(const ListCoreDefinitionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListCoreDefinitions, request);
        }

        /**
         * An Async wrapper for ListCoreDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCoreDefinitionsRequestT = Model::ListCoreDefinitionsRequest>
        void ListCoreDefinitionsAsync(const ListCoreDefinitionsRequestT& request, const ListCoreDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListCoreDefinitions, request, handler, context);
        }

        /**
         * Returns a history of deployments for the group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const ListDeploymentsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListDeployments, request);
        }

        /**
         * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        void ListDeploymentsAsync(const ListDeploymentsRequestT& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListDeployments, request, handler, context);
        }

        /**
         * Lists the versions of a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceDefinitionVersionsOutcome ListDeviceDefinitionVersions(const Model::ListDeviceDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeviceDefinitionVersionsRequestT = Model::ListDeviceDefinitionVersionsRequest>
        Model::ListDeviceDefinitionVersionsOutcomeCallable ListDeviceDefinitionVersionsCallable(const ListDeviceDefinitionVersionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListDeviceDefinitionVersions, request);
        }

        /**
         * An Async wrapper for ListDeviceDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeviceDefinitionVersionsRequestT = Model::ListDeviceDefinitionVersionsRequest>
        void ListDeviceDefinitionVersionsAsync(const ListDeviceDefinitionVersionsRequestT& request, const ListDeviceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListDeviceDefinitionVersions, request, handler, context);
        }

        /**
         * Retrieves a list of device definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceDefinitionsOutcome ListDeviceDefinitions(const Model::ListDeviceDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeviceDefinitionsRequestT = Model::ListDeviceDefinitionsRequest>
        Model::ListDeviceDefinitionsOutcomeCallable ListDeviceDefinitionsCallable(const ListDeviceDefinitionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListDeviceDefinitions, request);
        }

        /**
         * An Async wrapper for ListDeviceDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeviceDefinitionsRequestT = Model::ListDeviceDefinitionsRequest>
        void ListDeviceDefinitionsAsync(const ListDeviceDefinitionsRequestT& request, const ListDeviceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListDeviceDefinitions, request, handler, context);
        }

        /**
         * Lists the versions of a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionDefinitionVersionsOutcome ListFunctionDefinitionVersions(const Model::ListFunctionDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListFunctionDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFunctionDefinitionVersionsRequestT = Model::ListFunctionDefinitionVersionsRequest>
        Model::ListFunctionDefinitionVersionsOutcomeCallable ListFunctionDefinitionVersionsCallable(const ListFunctionDefinitionVersionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListFunctionDefinitionVersions, request);
        }

        /**
         * An Async wrapper for ListFunctionDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFunctionDefinitionVersionsRequestT = Model::ListFunctionDefinitionVersionsRequest>
        void ListFunctionDefinitionVersionsAsync(const ListFunctionDefinitionVersionsRequestT& request, const ListFunctionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListFunctionDefinitionVersions, request, handler, context);
        }

        /**
         * Retrieves a list of Lambda function definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionDefinitionsOutcome ListFunctionDefinitions(const Model::ListFunctionDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListFunctionDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFunctionDefinitionsRequestT = Model::ListFunctionDefinitionsRequest>
        Model::ListFunctionDefinitionsOutcomeCallable ListFunctionDefinitionsCallable(const ListFunctionDefinitionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListFunctionDefinitions, request);
        }

        /**
         * An Async wrapper for ListFunctionDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFunctionDefinitionsRequestT = Model::ListFunctionDefinitionsRequest>
        void ListFunctionDefinitionsAsync(const ListFunctionDefinitionsRequestT& request, const ListFunctionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListFunctionDefinitions, request, handler, context);
        }

        /**
         * Retrieves the current CAs for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupCertificateAuthorities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupCertificateAuthoritiesOutcome ListGroupCertificateAuthorities(const Model::ListGroupCertificateAuthoritiesRequest& request) const;

        /**
         * A Callable wrapper for ListGroupCertificateAuthorities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupCertificateAuthoritiesRequestT = Model::ListGroupCertificateAuthoritiesRequest>
        Model::ListGroupCertificateAuthoritiesOutcomeCallable ListGroupCertificateAuthoritiesCallable(const ListGroupCertificateAuthoritiesRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListGroupCertificateAuthorities, request);
        }

        /**
         * An Async wrapper for ListGroupCertificateAuthorities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupCertificateAuthoritiesRequestT = Model::ListGroupCertificateAuthoritiesRequest>
        void ListGroupCertificateAuthoritiesAsync(const ListGroupCertificateAuthoritiesRequestT& request, const ListGroupCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListGroupCertificateAuthorities, request, handler, context);
        }

        /**
         * Lists the versions of a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupVersionsOutcome ListGroupVersions(const Model::ListGroupVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListGroupVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupVersionsRequestT = Model::ListGroupVersionsRequest>
        Model::ListGroupVersionsOutcomeCallable ListGroupVersionsCallable(const ListGroupVersionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListGroupVersions, request);
        }

        /**
         * An Async wrapper for ListGroupVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupVersionsRequestT = Model::ListGroupVersionsRequest>
        void ListGroupVersionsAsync(const ListGroupVersionsRequestT& request, const ListGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListGroupVersions, request, handler, context);
        }

        /**
         * Retrieves a list of groups.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        Model::ListGroupsOutcomeCallable ListGroupsCallable(const ListGroupsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListGroups, request);
        }

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        void ListGroupsAsync(const ListGroupsRequestT& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListGroups, request, handler, context);
        }

        /**
         * Lists the versions of a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggerDefinitionVersionsOutcome ListLoggerDefinitionVersions(const Model::ListLoggerDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListLoggerDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLoggerDefinitionVersionsRequestT = Model::ListLoggerDefinitionVersionsRequest>
        Model::ListLoggerDefinitionVersionsOutcomeCallable ListLoggerDefinitionVersionsCallable(const ListLoggerDefinitionVersionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListLoggerDefinitionVersions, request);
        }

        /**
         * An Async wrapper for ListLoggerDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLoggerDefinitionVersionsRequestT = Model::ListLoggerDefinitionVersionsRequest>
        void ListLoggerDefinitionVersionsAsync(const ListLoggerDefinitionVersionsRequestT& request, const ListLoggerDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListLoggerDefinitionVersions, request, handler, context);
        }

        /**
         * Retrieves a list of logger definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggerDefinitionsOutcome ListLoggerDefinitions(const Model::ListLoggerDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListLoggerDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLoggerDefinitionsRequestT = Model::ListLoggerDefinitionsRequest>
        Model::ListLoggerDefinitionsOutcomeCallable ListLoggerDefinitionsCallable(const ListLoggerDefinitionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListLoggerDefinitions, request);
        }

        /**
         * An Async wrapper for ListLoggerDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLoggerDefinitionsRequestT = Model::ListLoggerDefinitionsRequest>
        void ListLoggerDefinitionsAsync(const ListLoggerDefinitionsRequestT& request, const ListLoggerDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListLoggerDefinitions, request, handler, context);
        }

        /**
         * Lists the versions of a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDefinitionVersionsOutcome ListResourceDefinitionVersions(const Model::ListResourceDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceDefinitionVersionsRequestT = Model::ListResourceDefinitionVersionsRequest>
        Model::ListResourceDefinitionVersionsOutcomeCallable ListResourceDefinitionVersionsCallable(const ListResourceDefinitionVersionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListResourceDefinitionVersions, request);
        }

        /**
         * An Async wrapper for ListResourceDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceDefinitionVersionsRequestT = Model::ListResourceDefinitionVersionsRequest>
        void ListResourceDefinitionVersionsAsync(const ListResourceDefinitionVersionsRequestT& request, const ListResourceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListResourceDefinitionVersions, request, handler, context);
        }

        /**
         * Retrieves a list of resource definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDefinitionsOutcome ListResourceDefinitions(const Model::ListResourceDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceDefinitionsRequestT = Model::ListResourceDefinitionsRequest>
        Model::ListResourceDefinitionsOutcomeCallable ListResourceDefinitionsCallable(const ListResourceDefinitionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListResourceDefinitions, request);
        }

        /**
         * An Async wrapper for ListResourceDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceDefinitionsRequestT = Model::ListResourceDefinitionsRequest>
        void ListResourceDefinitionsAsync(const ListResourceDefinitionsRequestT& request, const ListResourceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListResourceDefinitions, request, handler, context);
        }

        /**
         * Lists the versions of a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionDefinitionVersionsOutcome ListSubscriptionDefinitionVersions(const Model::ListSubscriptionDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptionDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscriptionDefinitionVersionsRequestT = Model::ListSubscriptionDefinitionVersionsRequest>
        Model::ListSubscriptionDefinitionVersionsOutcomeCallable ListSubscriptionDefinitionVersionsCallable(const ListSubscriptionDefinitionVersionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListSubscriptionDefinitionVersions, request);
        }

        /**
         * An Async wrapper for ListSubscriptionDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscriptionDefinitionVersionsRequestT = Model::ListSubscriptionDefinitionVersionsRequest>
        void ListSubscriptionDefinitionVersionsAsync(const ListSubscriptionDefinitionVersionsRequestT& request, const ListSubscriptionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListSubscriptionDefinitionVersions, request, handler, context);
        }

        /**
         * Retrieves a list of subscription definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionDefinitionsOutcome ListSubscriptionDefinitions(const Model::ListSubscriptionDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptionDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscriptionDefinitionsRequestT = Model::ListSubscriptionDefinitionsRequest>
        Model::ListSubscriptionDefinitionsOutcomeCallable ListSubscriptionDefinitionsCallable(const ListSubscriptionDefinitionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListSubscriptionDefinitions, request);
        }

        /**
         * An Async wrapper for ListSubscriptionDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscriptionDefinitionsRequestT = Model::ListSubscriptionDefinitionsRequest>
        void ListSubscriptionDefinitionsAsync(const ListSubscriptionDefinitionsRequestT& request, const ListSubscriptionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListSubscriptionDefinitions, request, handler, context);
        }

        /**
         * Retrieves a list of resource tags for a resource arn.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ListTagsForResource, request, handler, context);
        }

        /**
         * Resets a group's deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDeploymentsOutcome ResetDeployments(const Model::ResetDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ResetDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetDeploymentsRequestT = Model::ResetDeploymentsRequest>
        Model::ResetDeploymentsOutcomeCallable ResetDeploymentsCallable(const ResetDeploymentsRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::ResetDeployments, request);
        }

        /**
         * An Async wrapper for ResetDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetDeploymentsRequestT = Model::ResetDeploymentsRequest>
        void ResetDeploymentsAsync(const ResetDeploymentsRequestT& request, const ResetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::ResetDeployments, request, handler, context);
        }

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
         * A Callable wrapper for StartBulkDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartBulkDeploymentRequestT = Model::StartBulkDeploymentRequest>
        Model::StartBulkDeploymentOutcomeCallable StartBulkDeploymentCallable(const StartBulkDeploymentRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::StartBulkDeployment, request);
        }

        /**
         * An Async wrapper for StartBulkDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBulkDeploymentRequestT = Model::StartBulkDeploymentRequest>
        void StartBulkDeploymentAsync(const StartBulkDeploymentRequestT& request, const StartBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::StartBulkDeployment, request, handler, context);
        }

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
         * A Callable wrapper for StopBulkDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopBulkDeploymentRequestT = Model::StopBulkDeploymentRequest>
        Model::StopBulkDeploymentOutcomeCallable StopBulkDeploymentCallable(const StopBulkDeploymentRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::StopBulkDeployment, request);
        }

        /**
         * An Async wrapper for StopBulkDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopBulkDeploymentRequestT = Model::StopBulkDeploymentRequest>
        void StopBulkDeploymentAsync(const StopBulkDeploymentRequestT& request, const StopBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::StopBulkDeployment, request, handler, context);
        }

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::TagResource, request, handler, context);
        }

        /**
         * Remove resource tags from a Greengrass Resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UntagResource, request, handler, context);
        }

        /**
         * Updates the connectivity information for the core. Any devices that belong to
         * the group which has this core will receive this information in order to find the
         * location of the core and connect to it.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectivityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectivityInfoOutcome UpdateConnectivityInfo(const Model::UpdateConnectivityInfoRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectivityInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectivityInfoRequestT = Model::UpdateConnectivityInfoRequest>
        Model::UpdateConnectivityInfoOutcomeCallable UpdateConnectivityInfoCallable(const UpdateConnectivityInfoRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateConnectivityInfo, request);
        }

        /**
         * An Async wrapper for UpdateConnectivityInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectivityInfoRequestT = Model::UpdateConnectivityInfoRequest>
        void UpdateConnectivityInfoAsync(const UpdateConnectivityInfoRequestT& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateConnectivityInfo, request, handler, context);
        }

        /**
         * Updates a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorDefinitionOutcome UpdateConnectorDefinition(const Model::UpdateConnectorDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectorDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectorDefinitionRequestT = Model::UpdateConnectorDefinitionRequest>
        Model::UpdateConnectorDefinitionOutcomeCallable UpdateConnectorDefinitionCallable(const UpdateConnectorDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateConnectorDefinition, request);
        }

        /**
         * An Async wrapper for UpdateConnectorDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectorDefinitionRequestT = Model::UpdateConnectorDefinitionRequest>
        void UpdateConnectorDefinitionAsync(const UpdateConnectorDefinitionRequestT& request, const UpdateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateConnectorDefinition, request, handler, context);
        }

        /**
         * Updates a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCoreDefinitionOutcome UpdateCoreDefinition(const Model::UpdateCoreDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateCoreDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCoreDefinitionRequestT = Model::UpdateCoreDefinitionRequest>
        Model::UpdateCoreDefinitionOutcomeCallable UpdateCoreDefinitionCallable(const UpdateCoreDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateCoreDefinition, request);
        }

        /**
         * An Async wrapper for UpdateCoreDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCoreDefinitionRequestT = Model::UpdateCoreDefinitionRequest>
        void UpdateCoreDefinitionAsync(const UpdateCoreDefinitionRequestT& request, const UpdateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateCoreDefinition, request, handler, context);
        }

        /**
         * Updates a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceDefinitionOutcome UpdateDeviceDefinition(const Model::UpdateDeviceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeviceDefinitionRequestT = Model::UpdateDeviceDefinitionRequest>
        Model::UpdateDeviceDefinitionOutcomeCallable UpdateDeviceDefinitionCallable(const UpdateDeviceDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateDeviceDefinition, request);
        }

        /**
         * An Async wrapper for UpdateDeviceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeviceDefinitionRequestT = Model::UpdateDeviceDefinitionRequest>
        void UpdateDeviceDefinitionAsync(const UpdateDeviceDefinitionRequestT& request, const UpdateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateDeviceDefinition, request, handler, context);
        }

        /**
         * Updates a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionDefinitionOutcome UpdateFunctionDefinition(const Model::UpdateFunctionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFunctionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFunctionDefinitionRequestT = Model::UpdateFunctionDefinitionRequest>
        Model::UpdateFunctionDefinitionOutcomeCallable UpdateFunctionDefinitionCallable(const UpdateFunctionDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateFunctionDefinition, request);
        }

        /**
         * An Async wrapper for UpdateFunctionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFunctionDefinitionRequestT = Model::UpdateFunctionDefinitionRequest>
        void UpdateFunctionDefinitionAsync(const UpdateFunctionDefinitionRequestT& request, const UpdateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateFunctionDefinition, request, handler, context);
        }

        /**
         * Updates a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const UpdateGroupRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateGroup, request);
        }

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        void UpdateGroupAsync(const UpdateGroupRequestT& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateGroup, request, handler, context);
        }

        /**
         * Updates the Certificate expiry time for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupCertificateConfigurationOutcome UpdateGroupCertificateConfiguration(const Model::UpdateGroupCertificateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroupCertificateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupCertificateConfigurationRequestT = Model::UpdateGroupCertificateConfigurationRequest>
        Model::UpdateGroupCertificateConfigurationOutcomeCallable UpdateGroupCertificateConfigurationCallable(const UpdateGroupCertificateConfigurationRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateGroupCertificateConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateGroupCertificateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupCertificateConfigurationRequestT = Model::UpdateGroupCertificateConfigurationRequest>
        void UpdateGroupCertificateConfigurationAsync(const UpdateGroupCertificateConfigurationRequestT& request, const UpdateGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateGroupCertificateConfiguration, request, handler, context);
        }

        /**
         * Updates a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggerDefinitionOutcome UpdateLoggerDefinition(const Model::UpdateLoggerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoggerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLoggerDefinitionRequestT = Model::UpdateLoggerDefinitionRequest>
        Model::UpdateLoggerDefinitionOutcomeCallable UpdateLoggerDefinitionCallable(const UpdateLoggerDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateLoggerDefinition, request);
        }

        /**
         * An Async wrapper for UpdateLoggerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLoggerDefinitionRequestT = Model::UpdateLoggerDefinitionRequest>
        void UpdateLoggerDefinitionAsync(const UpdateLoggerDefinitionRequestT& request, const UpdateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateLoggerDefinition, request, handler, context);
        }

        /**
         * Updates a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceDefinitionOutcome UpdateResourceDefinition(const Model::UpdateResourceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourceDefinitionRequestT = Model::UpdateResourceDefinitionRequest>
        Model::UpdateResourceDefinitionOutcomeCallable UpdateResourceDefinitionCallable(const UpdateResourceDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateResourceDefinition, request);
        }

        /**
         * An Async wrapper for UpdateResourceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceDefinitionRequestT = Model::UpdateResourceDefinitionRequest>
        void UpdateResourceDefinitionAsync(const UpdateResourceDefinitionRequestT& request, const UpdateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateResourceDefinition, request, handler, context);
        }

        /**
         * Updates a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionDefinitionOutcome UpdateSubscriptionDefinition(const Model::UpdateSubscriptionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriptionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubscriptionDefinitionRequestT = Model::UpdateSubscriptionDefinitionRequest>
        Model::UpdateSubscriptionDefinitionOutcomeCallable UpdateSubscriptionDefinitionCallable(const UpdateSubscriptionDefinitionRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateSubscriptionDefinition, request);
        }

        /**
         * An Async wrapper for UpdateSubscriptionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriptionDefinitionRequestT = Model::UpdateSubscriptionDefinitionRequest>
        void UpdateSubscriptionDefinitionAsync(const UpdateSubscriptionDefinitionRequestT& request, const UpdateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateSubscriptionDefinition, request, handler, context);
        }

        /**
         * Updates the runtime configuration of a thing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateThingRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThingRuntimeConfigurationOutcome UpdateThingRuntimeConfiguration(const Model::UpdateThingRuntimeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateThingRuntimeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateThingRuntimeConfigurationRequestT = Model::UpdateThingRuntimeConfigurationRequest>
        Model::UpdateThingRuntimeConfigurationOutcomeCallable UpdateThingRuntimeConfigurationCallable(const UpdateThingRuntimeConfigurationRequestT& request) const
        {
            return SubmitCallable(&GreengrassClient::UpdateThingRuntimeConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateThingRuntimeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThingRuntimeConfigurationRequestT = Model::UpdateThingRuntimeConfigurationRequest>
        void UpdateThingRuntimeConfigurationAsync(const UpdateThingRuntimeConfigurationRequestT& request, const UpdateThingRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassClient::UpdateThingRuntimeConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GreengrassEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GreengrassClient>;
      void init(const GreengrassClientConfiguration& clientConfiguration);

      GreengrassClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GreengrassEndpointProviderBase> m_endpointProvider;
  };

} // namespace Greengrass
} // namespace Aws
