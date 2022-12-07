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
        virtual Model::AssociateRoleToGroupOutcomeCallable AssociateRoleToGroupCallable(const Model::AssociateRoleToGroupRequest& request) const;

        /**
         * An Async wrapper for AssociateRoleToGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateRoleToGroupAsync(const Model::AssociateRoleToGroupRequest& request, const AssociateRoleToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AssociateServiceRoleToAccountOutcomeCallable AssociateServiceRoleToAccountCallable(const Model::AssociateServiceRoleToAccountRequest& request) const;

        /**
         * An Async wrapper for AssociateServiceRoleToAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateServiceRoleToAccountAsync(const Model::AssociateServiceRoleToAccountRequest& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateConnectorDefinitionOutcomeCallable CreateConnectorDefinitionCallable(const Model::CreateConnectorDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateConnectorDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectorDefinitionAsync(const Model::CreateConnectorDefinitionRequest& request, const CreateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateConnectorDefinitionVersionOutcomeCallable CreateConnectorDefinitionVersionCallable(const Model::CreateConnectorDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for CreateConnectorDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectorDefinitionVersionAsync(const Model::CreateConnectorDefinitionVersionRequest& request, const CreateConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateCoreDefinitionOutcomeCallable CreateCoreDefinitionCallable(const Model::CreateCoreDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateCoreDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCoreDefinitionAsync(const Model::CreateCoreDefinitionRequest& request, const CreateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateCoreDefinitionVersionOutcomeCallable CreateCoreDefinitionVersionCallable(const Model::CreateCoreDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for CreateCoreDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCoreDefinitionVersionAsync(const Model::CreateCoreDefinitionVersionRequest& request, const CreateCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDeviceDefinitionOutcomeCallable CreateDeviceDefinitionCallable(const Model::CreateDeviceDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateDeviceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeviceDefinitionAsync(const Model::CreateDeviceDefinitionRequest& request, const CreateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDeviceDefinitionVersionOutcomeCallable CreateDeviceDefinitionVersionCallable(const Model::CreateDeviceDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for CreateDeviceDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeviceDefinitionVersionAsync(const Model::CreateDeviceDefinitionVersionRequest& request, const CreateDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateFunctionDefinitionOutcomeCallable CreateFunctionDefinitionCallable(const Model::CreateFunctionDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateFunctionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionDefinitionAsync(const Model::CreateFunctionDefinitionRequest& request, const CreateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateFunctionDefinitionVersionOutcomeCallable CreateFunctionDefinitionVersionCallable(const Model::CreateFunctionDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for CreateFunctionDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionDefinitionVersionAsync(const Model::CreateFunctionDefinitionVersionRequest& request, const CreateFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateGroupCertificateAuthorityOutcomeCallable CreateGroupCertificateAuthorityCallable(const Model::CreateGroupCertificateAuthorityRequest& request) const;

        /**
         * An Async wrapper for CreateGroupCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupCertificateAuthorityAsync(const Model::CreateGroupCertificateAuthorityRequest& request, const CreateGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateGroupVersionOutcomeCallable CreateGroupVersionCallable(const Model::CreateGroupVersionRequest& request) const;

        /**
         * An Async wrapper for CreateGroupVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupVersionAsync(const Model::CreateGroupVersionRequest& request, const CreateGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLoggerDefinitionOutcomeCallable CreateLoggerDefinitionCallable(const Model::CreateLoggerDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateLoggerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoggerDefinitionAsync(const Model::CreateLoggerDefinitionRequest& request, const CreateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateLoggerDefinitionVersionOutcomeCallable CreateLoggerDefinitionVersionCallable(const Model::CreateLoggerDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for CreateLoggerDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoggerDefinitionVersionAsync(const Model::CreateLoggerDefinitionVersionRequest& request, const CreateLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateResourceDefinitionOutcomeCallable CreateResourceDefinitionCallable(const Model::CreateResourceDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateResourceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceDefinitionAsync(const Model::CreateResourceDefinitionRequest& request, const CreateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateResourceDefinitionVersionOutcomeCallable CreateResourceDefinitionVersionCallable(const Model::CreateResourceDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for CreateResourceDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceDefinitionVersionAsync(const Model::CreateResourceDefinitionVersionRequest& request, const CreateResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSoftwareUpdateJobOutcomeCallable CreateSoftwareUpdateJobCallable(const Model::CreateSoftwareUpdateJobRequest& request) const;

        /**
         * An Async wrapper for CreateSoftwareUpdateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSoftwareUpdateJobAsync(const Model::CreateSoftwareUpdateJobRequest& request, const CreateSoftwareUpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSubscriptionDefinitionOutcomeCallable CreateSubscriptionDefinitionCallable(const Model::CreateSubscriptionDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateSubscriptionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriptionDefinitionAsync(const Model::CreateSubscriptionDefinitionRequest& request, const CreateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSubscriptionDefinitionVersionOutcomeCallable CreateSubscriptionDefinitionVersionCallable(const Model::CreateSubscriptionDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for CreateSubscriptionDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriptionDefinitionVersionAsync(const Model::CreateSubscriptionDefinitionVersionRequest& request, const CreateSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorDefinitionOutcome DeleteConnectorDefinition(const Model::DeleteConnectorDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectorDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectorDefinitionOutcomeCallable DeleteConnectorDefinitionCallable(const Model::DeleteConnectorDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteConnectorDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectorDefinitionAsync(const Model::DeleteConnectorDefinitionRequest& request, const DeleteConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreDefinitionOutcome DeleteCoreDefinition(const Model::DeleteCoreDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCoreDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCoreDefinitionOutcomeCallable DeleteCoreDefinitionCallable(const Model::DeleteCoreDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteCoreDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCoreDefinitionAsync(const Model::DeleteCoreDefinitionRequest& request, const DeleteCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceDefinitionOutcome DeleteDeviceDefinition(const Model::DeleteDeviceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeviceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceDefinitionOutcomeCallable DeleteDeviceDefinitionCallable(const Model::DeleteDeviceDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteDeviceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceDefinitionAsync(const Model::DeleteDeviceDefinitionRequest& request, const DeleteDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionDefinitionOutcome DeleteFunctionDefinition(const Model::DeleteFunctionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteFunctionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionDefinitionOutcomeCallable DeleteFunctionDefinitionCallable(const Model::DeleteFunctionDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteFunctionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionDefinitionAsync(const Model::DeleteFunctionDefinitionRequest& request, const DeleteFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggerDefinitionOutcome DeleteLoggerDefinition(const Model::DeleteLoggerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoggerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoggerDefinitionOutcomeCallable DeleteLoggerDefinitionCallable(const Model::DeleteLoggerDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteLoggerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoggerDefinitionAsync(const Model::DeleteLoggerDefinitionRequest& request, const DeleteLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceDefinitionOutcome DeleteResourceDefinition(const Model::DeleteResourceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceDefinitionOutcomeCallable DeleteResourceDefinitionCallable(const Model::DeleteResourceDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteResourceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceDefinitionAsync(const Model::DeleteResourceDefinitionRequest& request, const DeleteResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionDefinitionOutcome DeleteSubscriptionDefinition(const Model::DeleteSubscriptionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriptionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubscriptionDefinitionOutcomeCallable DeleteSubscriptionDefinitionCallable(const Model::DeleteSubscriptionDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteSubscriptionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubscriptionDefinitionAsync(const Model::DeleteSubscriptionDefinitionRequest& request, const DeleteSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Disassociates the role from a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateRoleFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRoleFromGroupOutcome DisassociateRoleFromGroup(const Model::DisassociateRoleFromGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateRoleFromGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRoleFromGroupOutcomeCallable DisassociateRoleFromGroupCallable(const Model::DisassociateRoleFromGroupRequest& request) const;

        /**
         * An Async wrapper for DisassociateRoleFromGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRoleFromGroupAsync(const Model::DisassociateRoleFromGroupRequest& request, const DisassociateRoleFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociateServiceRoleFromAccountOutcomeCallable DisassociateServiceRoleFromAccountCallable(const Model::DisassociateServiceRoleFromAccountRequest& request) const;

        /**
         * An Async wrapper for DisassociateServiceRoleFromAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateServiceRoleFromAccountAsync(const Model::DisassociateServiceRoleFromAccountRequest& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the role associated with a particular group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetAssociatedRole">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociatedRoleOutcome GetAssociatedRole(const Model::GetAssociatedRoleRequest& request) const;

        /**
         * A Callable wrapper for GetAssociatedRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssociatedRoleOutcomeCallable GetAssociatedRoleCallable(const Model::GetAssociatedRoleRequest& request) const;

        /**
         * An Async wrapper for GetAssociatedRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssociatedRoleAsync(const Model::GetAssociatedRoleRequest& request, const GetAssociatedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the status of a bulk deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetBulkDeploymentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBulkDeploymentStatusOutcome GetBulkDeploymentStatus(const Model::GetBulkDeploymentStatusRequest& request) const;

        /**
         * A Callable wrapper for GetBulkDeploymentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBulkDeploymentStatusOutcomeCallable GetBulkDeploymentStatusCallable(const Model::GetBulkDeploymentStatusRequest& request) const;

        /**
         * An Async wrapper for GetBulkDeploymentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBulkDeploymentStatusAsync(const Model::GetBulkDeploymentStatusRequest& request, const GetBulkDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the connectivity information for a core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectivityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectivityInfoOutcome GetConnectivityInfo(const Model::GetConnectivityInfoRequest& request) const;

        /**
         * A Callable wrapper for GetConnectivityInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectivityInfoOutcomeCallable GetConnectivityInfoCallable(const Model::GetConnectivityInfoRequest& request) const;

        /**
         * An Async wrapper for GetConnectivityInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectivityInfoAsync(const Model::GetConnectivityInfoRequest& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorDefinitionOutcome GetConnectorDefinition(const Model::GetConnectorDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetConnectorDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectorDefinitionOutcomeCallable GetConnectorDefinitionCallable(const Model::GetConnectorDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetConnectorDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectorDefinitionAsync(const Model::GetConnectorDefinitionRequest& request, const GetConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetConnectorDefinitionVersionOutcomeCallable GetConnectorDefinitionVersionCallable(const Model::GetConnectorDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for GetConnectorDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectorDefinitionVersionAsync(const Model::GetConnectorDefinitionVersionRequest& request, const GetConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDefinitionOutcome GetCoreDefinition(const Model::GetCoreDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetCoreDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoreDefinitionOutcomeCallable GetCoreDefinitionCallable(const Model::GetCoreDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetCoreDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoreDefinitionAsync(const Model::GetCoreDefinitionRequest& request, const GetCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDefinitionVersionOutcome GetCoreDefinitionVersion(const Model::GetCoreDefinitionVersionRequest& request) const;

        /**
         * A Callable wrapper for GetCoreDefinitionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoreDefinitionVersionOutcomeCallable GetCoreDefinitionVersionCallable(const Model::GetCoreDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for GetCoreDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoreDefinitionVersionAsync(const Model::GetCoreDefinitionVersionRequest& request, const GetCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the status of a deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeploymentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentStatusOutcome GetDeploymentStatus(const Model::GetDeploymentStatusRequest& request) const;

        /**
         * A Callable wrapper for GetDeploymentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentStatusOutcomeCallable GetDeploymentStatusCallable(const Model::GetDeploymentStatusRequest& request) const;

        /**
         * An Async wrapper for GetDeploymentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentStatusAsync(const Model::GetDeploymentStatusRequest& request, const GetDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceDefinitionOutcome GetDeviceDefinition(const Model::GetDeviceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceDefinitionOutcomeCallable GetDeviceDefinitionCallable(const Model::GetDeviceDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetDeviceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceDefinitionAsync(const Model::GetDeviceDefinitionRequest& request, const GetDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDeviceDefinitionVersionOutcomeCallable GetDeviceDefinitionVersionCallable(const Model::GetDeviceDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for GetDeviceDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceDefinitionVersionAsync(const Model::GetDeviceDefinitionVersionRequest& request, const GetDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetFunctionDefinitionOutcomeCallable GetFunctionDefinitionCallable(const Model::GetFunctionDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetFunctionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionDefinitionAsync(const Model::GetFunctionDefinitionRequest& request, const GetFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetFunctionDefinitionVersionOutcomeCallable GetFunctionDefinitionVersionCallable(const Model::GetFunctionDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for GetFunctionDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionDefinitionVersionAsync(const Model::GetFunctionDefinitionVersionRequest& request, const GetFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetGroupCertificateAuthorityOutcomeCallable GetGroupCertificateAuthorityCallable(const Model::GetGroupCertificateAuthorityRequest& request) const;

        /**
         * An Async wrapper for GetGroupCertificateAuthority that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupCertificateAuthorityAsync(const Model::GetGroupCertificateAuthorityRequest& request, const GetGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetGroupCertificateConfigurationOutcomeCallable GetGroupCertificateConfigurationCallable(const Model::GetGroupCertificateConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetGroupCertificateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupCertificateConfigurationAsync(const Model::GetGroupCertificateConfigurationRequest& request, const GetGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a group version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupVersionOutcome GetGroupVersion(const Model::GetGroupVersionRequest& request) const;

        /**
         * A Callable wrapper for GetGroupVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupVersionOutcomeCallable GetGroupVersionCallable(const Model::GetGroupVersionRequest& request) const;

        /**
         * An Async wrapper for GetGroupVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupVersionAsync(const Model::GetGroupVersionRequest& request, const GetGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggerDefinitionOutcome GetLoggerDefinition(const Model::GetLoggerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetLoggerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggerDefinitionOutcomeCallable GetLoggerDefinitionCallable(const Model::GetLoggerDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetLoggerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggerDefinitionAsync(const Model::GetLoggerDefinitionRequest& request, const GetLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetLoggerDefinitionVersionOutcomeCallable GetLoggerDefinitionVersionCallable(const Model::GetLoggerDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for GetLoggerDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggerDefinitionVersionAsync(const Model::GetLoggerDefinitionVersionRequest& request, const GetLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetResourceDefinitionOutcomeCallable GetResourceDefinitionCallable(const Model::GetResourceDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetResourceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceDefinitionAsync(const Model::GetResourceDefinitionRequest& request, const GetResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetResourceDefinitionVersionOutcomeCallable GetResourceDefinitionVersionCallable(const Model::GetResourceDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for GetResourceDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceDefinitionVersionAsync(const Model::GetResourceDefinitionVersionRequest& request, const GetResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetServiceRoleForAccountOutcomeCallable GetServiceRoleForAccountCallable(const Model::GetServiceRoleForAccountRequest& request) const;

        /**
         * An Async wrapper for GetServiceRoleForAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceRoleForAccountAsync(const Model::GetServiceRoleForAccountRequest& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionDefinitionOutcome GetSubscriptionDefinition(const Model::GetSubscriptionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriptionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubscriptionDefinitionOutcomeCallable GetSubscriptionDefinitionCallable(const Model::GetSubscriptionDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetSubscriptionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubscriptionDefinitionAsync(const Model::GetSubscriptionDefinitionRequest& request, const GetSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSubscriptionDefinitionVersionOutcomeCallable GetSubscriptionDefinitionVersionCallable(const Model::GetSubscriptionDefinitionVersionRequest& request) const;

        /**
         * An Async wrapper for GetSubscriptionDefinitionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubscriptionDefinitionVersionAsync(const Model::GetSubscriptionDefinitionVersionRequest& request, const GetSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get the runtime configuration of a thing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetThingRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThingRuntimeConfigurationOutcome GetThingRuntimeConfiguration(const Model::GetThingRuntimeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetThingRuntimeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetThingRuntimeConfigurationOutcomeCallable GetThingRuntimeConfigurationCallable(const Model::GetThingRuntimeConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetThingRuntimeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetThingRuntimeConfigurationAsync(const Model::GetThingRuntimeConfigurationRequest& request, const GetThingRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListBulkDeploymentDetailedReportsOutcomeCallable ListBulkDeploymentDetailedReportsCallable(const Model::ListBulkDeploymentDetailedReportsRequest& request) const;

        /**
         * An Async wrapper for ListBulkDeploymentDetailedReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBulkDeploymentDetailedReportsAsync(const Model::ListBulkDeploymentDetailedReportsRequest& request, const ListBulkDeploymentDetailedReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of bulk deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBulkDeploymentsOutcome ListBulkDeployments(const Model::ListBulkDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListBulkDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBulkDeploymentsOutcomeCallable ListBulkDeploymentsCallable(const Model::ListBulkDeploymentsRequest& request) const;

        /**
         * An Async wrapper for ListBulkDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBulkDeploymentsAsync(const Model::ListBulkDeploymentsRequest& request, const ListBulkDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListConnectorDefinitionVersionsOutcomeCallable ListConnectorDefinitionVersionsCallable(const Model::ListConnectorDefinitionVersionsRequest& request) const;

        /**
         * An Async wrapper for ListConnectorDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectorDefinitionVersionsAsync(const Model::ListConnectorDefinitionVersionsRequest& request, const ListConnectorDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of connector definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorDefinitionsOutcome ListConnectorDefinitions(const Model::ListConnectorDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListConnectorDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConnectorDefinitionsOutcomeCallable ListConnectorDefinitionsCallable(const Model::ListConnectorDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListConnectorDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectorDefinitionsAsync(const Model::ListConnectorDefinitionsRequest& request, const ListConnectorDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDefinitionVersionsOutcome ListCoreDefinitionVersions(const Model::ListCoreDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListCoreDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCoreDefinitionVersionsOutcomeCallable ListCoreDefinitionVersionsCallable(const Model::ListCoreDefinitionVersionsRequest& request) const;

        /**
         * An Async wrapper for ListCoreDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCoreDefinitionVersionsAsync(const Model::ListCoreDefinitionVersionsRequest& request, const ListCoreDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of core definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDefinitionsOutcome ListCoreDefinitions(const Model::ListCoreDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListCoreDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCoreDefinitionsOutcomeCallable ListCoreDefinitionsCallable(const Model::ListCoreDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListCoreDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCoreDefinitionsAsync(const Model::ListCoreDefinitionsRequest& request, const ListCoreDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a history of deployments for the group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

        /**
         * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceDefinitionVersionsOutcome ListDeviceDefinitionVersions(const Model::ListDeviceDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceDefinitionVersionsOutcomeCallable ListDeviceDefinitionVersionsCallable(const Model::ListDeviceDefinitionVersionsRequest& request) const;

        /**
         * An Async wrapper for ListDeviceDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceDefinitionVersionsAsync(const Model::ListDeviceDefinitionVersionsRequest& request, const ListDeviceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of device definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceDefinitionsOutcome ListDeviceDefinitions(const Model::ListDeviceDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceDefinitionsOutcomeCallable ListDeviceDefinitionsCallable(const Model::ListDeviceDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListDeviceDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceDefinitionsAsync(const Model::ListDeviceDefinitionsRequest& request, const ListDeviceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionDefinitionVersionsOutcome ListFunctionDefinitionVersions(const Model::ListFunctionDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListFunctionDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionDefinitionVersionsOutcomeCallable ListFunctionDefinitionVersionsCallable(const Model::ListFunctionDefinitionVersionsRequest& request) const;

        /**
         * An Async wrapper for ListFunctionDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionDefinitionVersionsAsync(const Model::ListFunctionDefinitionVersionsRequest& request, const ListFunctionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of Lambda function definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionDefinitionsOutcome ListFunctionDefinitions(const Model::ListFunctionDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListFunctionDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionDefinitionsOutcomeCallable ListFunctionDefinitionsCallable(const Model::ListFunctionDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListFunctionDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionDefinitionsAsync(const Model::ListFunctionDefinitionsRequest& request, const ListFunctionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the current CAs for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupCertificateAuthorities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupCertificateAuthoritiesOutcome ListGroupCertificateAuthorities(const Model::ListGroupCertificateAuthoritiesRequest& request) const;

        /**
         * A Callable wrapper for ListGroupCertificateAuthorities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupCertificateAuthoritiesOutcomeCallable ListGroupCertificateAuthoritiesCallable(const Model::ListGroupCertificateAuthoritiesRequest& request) const;

        /**
         * An Async wrapper for ListGroupCertificateAuthorities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupCertificateAuthoritiesAsync(const Model::ListGroupCertificateAuthoritiesRequest& request, const ListGroupCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupVersionsOutcome ListGroupVersions(const Model::ListGroupVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListGroupVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupVersionsOutcomeCallable ListGroupVersionsCallable(const Model::ListGroupVersionsRequest& request) const;

        /**
         * An Async wrapper for ListGroupVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupVersionsAsync(const Model::ListGroupVersionsRequest& request, const ListGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of groups.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggerDefinitionVersionsOutcome ListLoggerDefinitionVersions(const Model::ListLoggerDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListLoggerDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLoggerDefinitionVersionsOutcomeCallable ListLoggerDefinitionVersionsCallable(const Model::ListLoggerDefinitionVersionsRequest& request) const;

        /**
         * An Async wrapper for ListLoggerDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLoggerDefinitionVersionsAsync(const Model::ListLoggerDefinitionVersionsRequest& request, const ListLoggerDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of logger definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggerDefinitionsOutcome ListLoggerDefinitions(const Model::ListLoggerDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListLoggerDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLoggerDefinitionsOutcomeCallable ListLoggerDefinitionsCallable(const Model::ListLoggerDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListLoggerDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLoggerDefinitionsAsync(const Model::ListLoggerDefinitionsRequest& request, const ListLoggerDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDefinitionVersionsOutcome ListResourceDefinitionVersions(const Model::ListResourceDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceDefinitionVersionsOutcomeCallable ListResourceDefinitionVersionsCallable(const Model::ListResourceDefinitionVersionsRequest& request) const;

        /**
         * An Async wrapper for ListResourceDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceDefinitionVersionsAsync(const Model::ListResourceDefinitionVersionsRequest& request, const ListResourceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of resource definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDefinitionsOutcome ListResourceDefinitions(const Model::ListResourceDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceDefinitionsOutcomeCallable ListResourceDefinitionsCallable(const Model::ListResourceDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListResourceDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceDefinitionsAsync(const Model::ListResourceDefinitionsRequest& request, const ListResourceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionDefinitionVersionsOutcome ListSubscriptionDefinitionVersions(const Model::ListSubscriptionDefinitionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptionDefinitionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscriptionDefinitionVersionsOutcomeCallable ListSubscriptionDefinitionVersionsCallable(const Model::ListSubscriptionDefinitionVersionsRequest& request) const;

        /**
         * An Async wrapper for ListSubscriptionDefinitionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscriptionDefinitionVersionsAsync(const Model::ListSubscriptionDefinitionVersionsRequest& request, const ListSubscriptionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of subscription definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionDefinitionsOutcome ListSubscriptionDefinitions(const Model::ListSubscriptionDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptionDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscriptionDefinitionsOutcomeCallable ListSubscriptionDefinitionsCallable(const Model::ListSubscriptionDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListSubscriptionDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscriptionDefinitionsAsync(const Model::ListSubscriptionDefinitionsRequest& request, const ListSubscriptionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of resource tags for a resource arn.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Resets a group's deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDeploymentsOutcome ResetDeployments(const Model::ResetDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ResetDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetDeploymentsOutcomeCallable ResetDeploymentsCallable(const Model::ResetDeploymentsRequest& request) const;

        /**
         * An Async wrapper for ResetDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDeploymentsAsync(const Model::ResetDeploymentsRequest& request, const ResetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartBulkDeploymentOutcomeCallable StartBulkDeploymentCallable(const Model::StartBulkDeploymentRequest& request) const;

        /**
         * An Async wrapper for StartBulkDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBulkDeploymentAsync(const Model::StartBulkDeploymentRequest& request, const StartBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopBulkDeploymentOutcomeCallable StopBulkDeploymentCallable(const Model::StopBulkDeploymentRequest& request) const;

        /**
         * An Async wrapper for StopBulkDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopBulkDeploymentAsync(const Model::StopBulkDeploymentRequest& request, const StopBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Remove resource tags from a Greengrass Resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateConnectivityInfoOutcomeCallable UpdateConnectivityInfoCallable(const Model::UpdateConnectivityInfoRequest& request) const;

        /**
         * An Async wrapper for UpdateConnectivityInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectivityInfoAsync(const Model::UpdateConnectivityInfoRequest& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorDefinitionOutcome UpdateConnectorDefinition(const Model::UpdateConnectorDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectorDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectorDefinitionOutcomeCallable UpdateConnectorDefinitionCallable(const Model::UpdateConnectorDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateConnectorDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectorDefinitionAsync(const Model::UpdateConnectorDefinitionRequest& request, const UpdateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCoreDefinitionOutcome UpdateCoreDefinition(const Model::UpdateCoreDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateCoreDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCoreDefinitionOutcomeCallable UpdateCoreDefinitionCallable(const Model::UpdateCoreDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateCoreDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCoreDefinitionAsync(const Model::UpdateCoreDefinitionRequest& request, const UpdateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceDefinitionOutcome UpdateDeviceDefinition(const Model::UpdateDeviceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceDefinitionOutcomeCallable UpdateDeviceDefinitionCallable(const Model::UpdateDeviceDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateDeviceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceDefinitionAsync(const Model::UpdateDeviceDefinitionRequest& request, const UpdateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionDefinitionOutcome UpdateFunctionDefinition(const Model::UpdateFunctionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFunctionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionDefinitionOutcomeCallable UpdateFunctionDefinitionCallable(const Model::UpdateFunctionDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateFunctionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionDefinitionAsync(const Model::UpdateFunctionDefinitionRequest& request, const UpdateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the Certificate expiry time for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupCertificateConfigurationOutcome UpdateGroupCertificateConfiguration(const Model::UpdateGroupCertificateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroupCertificateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupCertificateConfigurationOutcomeCallable UpdateGroupCertificateConfigurationCallable(const Model::UpdateGroupCertificateConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateGroupCertificateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupCertificateConfigurationAsync(const Model::UpdateGroupCertificateConfigurationRequest& request, const UpdateGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggerDefinitionOutcome UpdateLoggerDefinition(const Model::UpdateLoggerDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoggerDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoggerDefinitionOutcomeCallable UpdateLoggerDefinitionCallable(const Model::UpdateLoggerDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateLoggerDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoggerDefinitionAsync(const Model::UpdateLoggerDefinitionRequest& request, const UpdateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceDefinitionOutcome UpdateResourceDefinition(const Model::UpdateResourceDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceDefinitionOutcomeCallable UpdateResourceDefinitionCallable(const Model::UpdateResourceDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateResourceDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceDefinitionAsync(const Model::UpdateResourceDefinitionRequest& request, const UpdateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionDefinitionOutcome UpdateSubscriptionDefinition(const Model::UpdateSubscriptionDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriptionDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriptionDefinitionOutcomeCallable UpdateSubscriptionDefinitionCallable(const Model::UpdateSubscriptionDefinitionRequest& request) const;

        /**
         * An Async wrapper for UpdateSubscriptionDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriptionDefinitionAsync(const Model::UpdateSubscriptionDefinitionRequest& request, const UpdateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the runtime configuration of a thing.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateThingRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThingRuntimeConfigurationOutcome UpdateThingRuntimeConfiguration(const Model::UpdateThingRuntimeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateThingRuntimeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThingRuntimeConfigurationOutcomeCallable UpdateThingRuntimeConfigurationCallable(const Model::UpdateThingRuntimeConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateThingRuntimeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThingRuntimeConfigurationAsync(const Model::UpdateThingRuntimeConfigurationRequest& request, const UpdateThingRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
