﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/greengrassv2/GreengrassV2ServiceClientModel.h>

namespace Aws
{
namespace GreengrassV2
{
  /**
   * <p>IoT Greengrass brings local compute, messaging, data management, sync, and ML
   * inference capabilities to edge devices. This enables devices to collect and
   * analyze data closer to the source of information, react autonomously to local
   * events, and communicate securely with each other on local networks. Local
   * devices can also communicate securely with Amazon Web Services IoT Core and
   * export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can
   * use Lambda functions and components to create and deploy applications to fleets
   * of edge devices for local operation.</p> <p>IoT Greengrass Version 2 provides a
   * new major version of the IoT Greengrass Core software, new APIs, and a new
   * console. Use this API reference to learn how to use the IoT Greengrass V2 API
   * operations to manage components, manage deployments, and core devices.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What
   * is IoT Greengrass?</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
   */
  class AWS_GREENGRASSV2_API GreengrassV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GreengrassV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassV2Client(const Aws::GreengrassV2::GreengrassV2ClientConfiguration& clientConfiguration = Aws::GreengrassV2::GreengrassV2ClientConfiguration(),
                           std::shared_ptr<GreengrassV2EndpointProviderBase> endpointProvider = Aws::MakeShared<GreengrassV2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassV2Client(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<GreengrassV2EndpointProviderBase> endpointProvider = Aws::MakeShared<GreengrassV2EndpointProvider>(ALLOCATION_TAG),
                           const Aws::GreengrassV2::GreengrassV2ClientConfiguration& clientConfiguration = Aws::GreengrassV2::GreengrassV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GreengrassV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<GreengrassV2EndpointProviderBase> endpointProvider = Aws::MakeShared<GreengrassV2EndpointProvider>(ALLOCATION_TAG),
                           const Aws::GreengrassV2::GreengrassV2ClientConfiguration& clientConfiguration = Aws::GreengrassV2::GreengrassV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassV2Client(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GreengrassV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GreengrassV2Client();

        /**
         * <p>Associates a Greengrass service role with IoT Greengrass for your Amazon Web
         * Services account in this Amazon Web Services Region. IoT Greengrass uses this
         * role to verify the identity of client devices and manage core device
         * connectivity information. The role must include the <a
         * href="https://console.aws.amazon.com/iam/home#/policies/arn:awsiam::aws:policy/service-role/AWSGreengrassResourceAccessRolePolicy">AWSGreengrassResourceAccessRolePolicy</a>
         * managed policy or a custom policy that defines equivalent permissions for the
         * IoT Greengrass features that you use. For more information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-service-role.html">Greengrass
         * service role</a> in the <i>IoT Greengrass Version 2 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/AssociateServiceRoleToAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateServiceRoleToAccountOutcome AssociateServiceRoleToAccount(const Model::AssociateServiceRoleToAccountRequest& request) const;

        /**
         * A Callable wrapper for AssociateServiceRoleToAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateServiceRoleToAccountRequestT = Model::AssociateServiceRoleToAccountRequest>
        Model::AssociateServiceRoleToAccountOutcomeCallable AssociateServiceRoleToAccountCallable(const AssociateServiceRoleToAccountRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::AssociateServiceRoleToAccount, request);
        }

        /**
         * An Async wrapper for AssociateServiceRoleToAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateServiceRoleToAccountRequestT = Model::AssociateServiceRoleToAccountRequest>
        void AssociateServiceRoleToAccountAsync(const AssociateServiceRoleToAccountRequestT& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::AssociateServiceRoleToAccount, request, handler, context);
        }

        /**
         * <p>Associates a list of client devices with a core device. Use this API
         * operation to specify which client devices can discover a core device through
         * cloud discovery. With cloud discovery, client devices connect to IoT Greengrass
         * to retrieve associated core devices' connectivity information and certificates.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-cloud-discovery.html">Configure
         * cloud discovery</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p> 
         * <p>Client devices are local IoT devices that connect to and communicate with an
         * IoT Greengrass core device over MQTT. You can connect client devices to a core
         * device to sync MQTT messages and data to Amazon Web Services IoT Core and
         * interact with client devices in Greengrass components. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/interact-with-local-iot-devices.html">Interact
         * with local IoT devices</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/BatchAssociateClientDeviceWithCoreDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateClientDeviceWithCoreDeviceOutcome BatchAssociateClientDeviceWithCoreDevice(const Model::BatchAssociateClientDeviceWithCoreDeviceRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateClientDeviceWithCoreDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchAssociateClientDeviceWithCoreDeviceRequestT = Model::BatchAssociateClientDeviceWithCoreDeviceRequest>
        Model::BatchAssociateClientDeviceWithCoreDeviceOutcomeCallable BatchAssociateClientDeviceWithCoreDeviceCallable(const BatchAssociateClientDeviceWithCoreDeviceRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::BatchAssociateClientDeviceWithCoreDevice, request);
        }

        /**
         * An Async wrapper for BatchAssociateClientDeviceWithCoreDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchAssociateClientDeviceWithCoreDeviceRequestT = Model::BatchAssociateClientDeviceWithCoreDeviceRequest>
        void BatchAssociateClientDeviceWithCoreDeviceAsync(const BatchAssociateClientDeviceWithCoreDeviceRequestT& request, const BatchAssociateClientDeviceWithCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::BatchAssociateClientDeviceWithCoreDevice, request, handler, context);
        }

        /**
         * <p>Disassociates a list of client devices from a core device. After you
         * disassociate a client device from a core device, the client device won't be able
         * to use cloud discovery to retrieve the core device's connectivity information
         * and certificates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/BatchDisassociateClientDeviceFromCoreDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateClientDeviceFromCoreDeviceOutcome BatchDisassociateClientDeviceFromCoreDevice(const Model::BatchDisassociateClientDeviceFromCoreDeviceRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateClientDeviceFromCoreDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDisassociateClientDeviceFromCoreDeviceRequestT = Model::BatchDisassociateClientDeviceFromCoreDeviceRequest>
        Model::BatchDisassociateClientDeviceFromCoreDeviceOutcomeCallable BatchDisassociateClientDeviceFromCoreDeviceCallable(const BatchDisassociateClientDeviceFromCoreDeviceRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::BatchDisassociateClientDeviceFromCoreDevice, request);
        }

        /**
         * An Async wrapper for BatchDisassociateClientDeviceFromCoreDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisassociateClientDeviceFromCoreDeviceRequestT = Model::BatchDisassociateClientDeviceFromCoreDeviceRequest>
        void BatchDisassociateClientDeviceFromCoreDeviceAsync(const BatchDisassociateClientDeviceFromCoreDeviceRequestT& request, const BatchDisassociateClientDeviceFromCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::BatchDisassociateClientDeviceFromCoreDevice, request, handler, context);
        }

        /**
         * <p>Cancels a deployment. This operation cancels the deployment for devices that
         * haven't yet received it. If a device already received the deployment, this
         * operation doesn't change anything for that device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CancelDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDeploymentOutcome CancelDeployment(const Model::CancelDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CancelDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelDeploymentRequestT = Model::CancelDeploymentRequest>
        Model::CancelDeploymentOutcomeCallable CancelDeploymentCallable(const CancelDeploymentRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::CancelDeployment, request);
        }

        /**
         * An Async wrapper for CancelDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelDeploymentRequestT = Model::CancelDeploymentRequest>
        void CancelDeploymentAsync(const CancelDeploymentRequestT& request, const CancelDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::CancelDeployment, request, handler, context);
        }

        /**
         * <p>Creates a component. Components are software that run on Greengrass core
         * devices. After you develop and test a component on your core device, you can use
         * this operation to upload your component to IoT Greengrass. Then, you can deploy
         * the component to other core devices.</p> <p>You can use this operation to do the
         * following:</p> <ul> <li> <p> <b>Create components from recipes</b> </p>
         * <p>Create a component from a recipe, which is a file that defines the
         * component's metadata, parameters, dependencies, lifecycle, artifacts, and
         * platform capability. For more information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/component-recipe-reference.html">IoT
         * Greengrass component recipe reference</a> in the <i>IoT Greengrass V2 Developer
         * Guide</i>.</p> <p>To create a component from a recipe, specify
         * <code>inlineRecipe</code> when you call this operation.</p> </li> <li> <p>
         * <b>Create components from Lambda functions</b> </p> <p>Create a component from
         * an Lambda function that runs on IoT Greengrass. This creates a recipe and
         * artifacts from the Lambda function's deployment package. You can use this
         * operation to migrate Lambda functions from IoT Greengrass V1 to IoT Greengrass
         * V2.</p> <p>This function only accepts Lambda functions that use the following
         * runtimes:</p> <ul> <li> <p>Python 2.7 – <code>python2.7</code> </p> </li> <li>
         * <p>Python 3.7 – <code>python3.7</code> </p> </li> <li> <p>Python 3.8 –
         * <code>python3.8</code> </p> </li> <li> <p>Python 3.9 – <code>python3.9</code>
         * </p> </li> <li> <p>Java 8 – <code>java8</code> </p> </li> <li> <p>Java 11 –
         * <code>java11</code> </p> </li> <li> <p>Node.js 10 – <code>nodejs10.x</code> </p>
         * </li> <li> <p>Node.js 12 – <code>nodejs12.x</code> </p> </li> <li> <p>Node.js 14
         * – <code>nodejs14.x</code> </p> </li> </ul> <p>To create a component from a
         * Lambda function, specify <code>lambdaFunction</code> when you call this
         * operation.</p>  <p>IoT Greengrass currently supports Lambda functions on
         * only Linux core devices.</p>  </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CreateComponentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentVersionOutcome CreateComponentVersion(const Model::CreateComponentVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateComponentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateComponentVersionRequestT = Model::CreateComponentVersionRequest>
        Model::CreateComponentVersionOutcomeCallable CreateComponentVersionCallable(const CreateComponentVersionRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::CreateComponentVersion, request);
        }

        /**
         * An Async wrapper for CreateComponentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateComponentVersionRequestT = Model::CreateComponentVersionRequest>
        void CreateComponentVersionAsync(const CreateComponentVersionRequestT& request, const CreateComponentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::CreateComponentVersion, request, handler, context);
        }

        /**
         * <p>Creates a continuous deployment for a target, which is a Greengrass core
         * device or group of core devices. When you add a new core device to a group of
         * core devices that has a deployment, IoT Greengrass deploys that group's
         * deployment to the new device.</p> <p>You can define one deployment for each
         * target. When you create a new deployment for a target that has an existing
         * deployment, you replace the previous deployment. IoT Greengrass applies the new
         * deployment to the target devices.</p> <p>Every deployment has a revision number
         * that indicates how many deployment revisions you define for a target. Use this
         * operation to create a new revision of an existing deployment.</p> <p>For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/create-deployments.html">Create
         * deployments</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const CreateDeploymentRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::CreateDeployment, request);
        }

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
        void CreateDeploymentAsync(const CreateDeploymentRequestT& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::CreateDeployment, request, handler, context);
        }

        /**
         * <p>Deletes a version of a component from IoT Greengrass.</p>  <p>This
         * operation deletes the component's recipe and artifacts. As a result, deployments
         * that refer to this component version will fail. If you have deployments that use
         * this component version, you can remove the component from the deployment or
         * update the deployment to use a valid version.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteComponentRequestT = Model::DeleteComponentRequest>
        Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const DeleteComponentRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::DeleteComponent, request);
        }

        /**
         * An Async wrapper for DeleteComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteComponentRequestT = Model::DeleteComponentRequest>
        void DeleteComponentAsync(const DeleteComponentRequestT& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::DeleteComponent, request, handler, context);
        }

        /**
         * <p>Deletes a Greengrass core device, which is an IoT thing. This operation
         * removes the core device from the list of core devices. This operation doesn't
         * delete the IoT thing. For more information about how to delete the IoT thing,
         * see <a
         * href="https://docs.aws.amazon.com/iot/latest/apireference/API_DeleteThing.html">DeleteThing</a>
         * in the <i>IoT API Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeleteCoreDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreDeviceOutcome DeleteCoreDevice(const Model::DeleteCoreDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteCoreDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCoreDeviceRequestT = Model::DeleteCoreDeviceRequest>
        Model::DeleteCoreDeviceOutcomeCallable DeleteCoreDeviceCallable(const DeleteCoreDeviceRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::DeleteCoreDevice, request);
        }

        /**
         * An Async wrapper for DeleteCoreDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCoreDeviceRequestT = Model::DeleteCoreDeviceRequest>
        void DeleteCoreDeviceAsync(const DeleteCoreDeviceRequestT& request, const DeleteCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::DeleteCoreDevice, request, handler, context);
        }

        /**
         * <p>Deletes a deployment. To delete an active deployment, you must first cancel
         * it. For more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CancelDeployment.html">CancelDeployment</a>.</p>
         * <p>Deleting a deployment doesn't affect core devices that run that deployment,
         * because core devices store the deployment's configuration on the device.
         * Additionally, core devices can roll back to a previous deployment that has been
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeleteDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentOutcome DeleteDeployment(const Model::DeleteDeploymentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
        Model::DeleteDeploymentOutcomeCallable DeleteDeploymentCallable(const DeleteDeploymentRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::DeleteDeployment, request);
        }

        /**
         * An Async wrapper for DeleteDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
        void DeleteDeploymentAsync(const DeleteDeploymentRequestT& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::DeleteDeployment, request, handler, context);
        }

        /**
         * <p>Retrieves metadata for a version of a component.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DescribeComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentOutcome DescribeComponent(const Model::DescribeComponentRequest& request) const;

        /**
         * A Callable wrapper for DescribeComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeComponentRequestT = Model::DescribeComponentRequest>
        Model::DescribeComponentOutcomeCallable DescribeComponentCallable(const DescribeComponentRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::DescribeComponent, request);
        }

        /**
         * An Async wrapper for DescribeComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeComponentRequestT = Model::DescribeComponentRequest>
        void DescribeComponentAsync(const DescribeComponentRequestT& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::DescribeComponent, request, handler, context);
        }

        /**
         * <p>Disassociates the Greengrass service role from IoT Greengrass for your Amazon
         * Web Services account in this Amazon Web Services Region. Without a service role,
         * IoT Greengrass can't verify the identity of client devices or manage core device
         * connectivity information. For more information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-service-role.html">Greengrass
         * service role</a> in the <i>IoT Greengrass Version 2 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DisassociateServiceRoleFromAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceRoleFromAccountOutcome DisassociateServiceRoleFromAccount(const Model::DisassociateServiceRoleFromAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateServiceRoleFromAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateServiceRoleFromAccountRequestT = Model::DisassociateServiceRoleFromAccountRequest>
        Model::DisassociateServiceRoleFromAccountOutcomeCallable DisassociateServiceRoleFromAccountCallable(const DisassociateServiceRoleFromAccountRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::DisassociateServiceRoleFromAccount, request);
        }

        /**
         * An Async wrapper for DisassociateServiceRoleFromAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateServiceRoleFromAccountRequestT = Model::DisassociateServiceRoleFromAccountRequest>
        void DisassociateServiceRoleFromAccountAsync(const DisassociateServiceRoleFromAccountRequestT& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::DisassociateServiceRoleFromAccount, request, handler, context);
        }

        /**
         * <p>Gets the recipe for a version of a component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;

        /**
         * A Callable wrapper for GetComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComponentRequestT = Model::GetComponentRequest>
        Model::GetComponentOutcomeCallable GetComponentCallable(const GetComponentRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::GetComponent, request);
        }

        /**
         * An Async wrapper for GetComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComponentRequestT = Model::GetComponentRequest>
        void GetComponentAsync(const GetComponentRequestT& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::GetComponent, request, handler, context);
        }

        /**
         * <p>Gets the pre-signed URL to download a public or a Lambda component artifact.
         * Core devices call this operation to identify the URL that they can use to
         * download an artifact to install.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetComponentVersionArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentVersionArtifactOutcome GetComponentVersionArtifact(const Model::GetComponentVersionArtifactRequest& request) const;

        /**
         * A Callable wrapper for GetComponentVersionArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComponentVersionArtifactRequestT = Model::GetComponentVersionArtifactRequest>
        Model::GetComponentVersionArtifactOutcomeCallable GetComponentVersionArtifactCallable(const GetComponentVersionArtifactRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::GetComponentVersionArtifact, request);
        }

        /**
         * An Async wrapper for GetComponentVersionArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComponentVersionArtifactRequestT = Model::GetComponentVersionArtifactRequest>
        void GetComponentVersionArtifactAsync(const GetComponentVersionArtifactRequestT& request, const GetComponentVersionArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::GetComponentVersionArtifact, request, handler, context);
        }

        /**
         * <p>Retrieves connectivity information for a Greengrass core device.</p>
         * <p>Connectivity information includes endpoints and ports where client devices
         * can connect to an MQTT broker on the core device. When a client device calls the
         * <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-discover-api.html">IoT
         * Greengrass discovery API</a>, IoT Greengrass returns connectivity information
         * for all of the core devices where the client device can connect. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/connect-client-devices.html">Connect
         * client devices to core devices</a> in the <i>IoT Greengrass Version 2 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetConnectivityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectivityInfoOutcome GetConnectivityInfo(const Model::GetConnectivityInfoRequest& request) const;

        /**
         * A Callable wrapper for GetConnectivityInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectivityInfoRequestT = Model::GetConnectivityInfoRequest>
        Model::GetConnectivityInfoOutcomeCallable GetConnectivityInfoCallable(const GetConnectivityInfoRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::GetConnectivityInfo, request);
        }

        /**
         * An Async wrapper for GetConnectivityInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectivityInfoRequestT = Model::GetConnectivityInfoRequest>
        void GetConnectivityInfoAsync(const GetConnectivityInfoRequestT& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::GetConnectivityInfo, request, handler, context);
        }

        /**
         * <p>Retrieves metadata for a Greengrass core device.</p>  <p>IoT Greengrass
         * relies on individual devices to send status updates to the Amazon Web Services
         * Cloud. If the IoT Greengrass Core software isn't running on the device, or if
         * device isn't connected to the Amazon Web Services Cloud, then the reported
         * status of that device might not reflect its current status. The status timestamp
         * indicates when the device status was last updated.</p> <p>Core devices send
         * status updates at the following times:</p> <ul> <li> <p>When the IoT Greengrass
         * Core software starts</p> </li> <li> <p>When the core device receives a
         * deployment from the Amazon Web Services Cloud</p> </li> <li> <p>When the status
         * of any component on the core device becomes <code>BROKEN</code> </p> </li> <li>
         * <p>At a <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html#greengrass-nucleus-component-configuration-fss">regular
         * interval that you can configure</a>, which defaults to 24 hours</p> </li> <li>
         * <p>For IoT Greengrass Core v2.7.0, the core device sends status updates upon
         * local deployment and cloud deployment</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetCoreDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDeviceOutcome GetCoreDevice(const Model::GetCoreDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetCoreDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCoreDeviceRequestT = Model::GetCoreDeviceRequest>
        Model::GetCoreDeviceOutcomeCallable GetCoreDeviceCallable(const GetCoreDeviceRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::GetCoreDevice, request);
        }

        /**
         * An Async wrapper for GetCoreDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCoreDeviceRequestT = Model::GetCoreDeviceRequest>
        void GetCoreDeviceAsync(const GetCoreDeviceRequestT& request, const GetCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::GetCoreDevice, request, handler, context);
        }

        /**
         * <p>Gets a deployment. Deployments define the components that run on Greengrass
         * core devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const GetDeploymentRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::GetDeployment, request);
        }

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        void GetDeploymentAsync(const GetDeploymentRequestT& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::GetDeployment, request, handler, context);
        }

        /**
         * <p>Gets the service role associated with IoT Greengrass for your Amazon Web
         * Services account in this Amazon Web Services Region. IoT Greengrass uses this
         * role to verify the identity of client devices and manage core device
         * connectivity information. For more information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-service-role.html">Greengrass
         * service role</a> in the <i>IoT Greengrass Version 2 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/GetServiceRoleForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceRoleForAccountOutcome GetServiceRoleForAccount(const Model::GetServiceRoleForAccountRequest& request) const;

        /**
         * A Callable wrapper for GetServiceRoleForAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceRoleForAccountRequestT = Model::GetServiceRoleForAccountRequest>
        Model::GetServiceRoleForAccountOutcomeCallable GetServiceRoleForAccountCallable(const GetServiceRoleForAccountRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::GetServiceRoleForAccount, request);
        }

        /**
         * An Async wrapper for GetServiceRoleForAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceRoleForAccountRequestT = Model::GetServiceRoleForAccountRequest>
        void GetServiceRoleForAccountAsync(const GetServiceRoleForAccountRequestT& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::GetServiceRoleForAccount, request, handler, context);
        }

        /**
         * <p>Retrieves a paginated list of client devices that are associated with a core
         * device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListClientDevicesAssociatedWithCoreDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClientDevicesAssociatedWithCoreDeviceOutcome ListClientDevicesAssociatedWithCoreDevice(const Model::ListClientDevicesAssociatedWithCoreDeviceRequest& request) const;

        /**
         * A Callable wrapper for ListClientDevicesAssociatedWithCoreDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClientDevicesAssociatedWithCoreDeviceRequestT = Model::ListClientDevicesAssociatedWithCoreDeviceRequest>
        Model::ListClientDevicesAssociatedWithCoreDeviceOutcomeCallable ListClientDevicesAssociatedWithCoreDeviceCallable(const ListClientDevicesAssociatedWithCoreDeviceRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::ListClientDevicesAssociatedWithCoreDevice, request);
        }

        /**
         * An Async wrapper for ListClientDevicesAssociatedWithCoreDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClientDevicesAssociatedWithCoreDeviceRequestT = Model::ListClientDevicesAssociatedWithCoreDeviceRequest>
        void ListClientDevicesAssociatedWithCoreDeviceAsync(const ListClientDevicesAssociatedWithCoreDeviceRequestT& request, const ListClientDevicesAssociatedWithCoreDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::ListClientDevicesAssociatedWithCoreDevice, request, handler, context);
        }

        /**
         * <p>Retrieves a paginated list of all versions for a component. Greater versions
         * are listed first.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListComponentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentVersionsOutcome ListComponentVersions(const Model::ListComponentVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListComponentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComponentVersionsRequestT = Model::ListComponentVersionsRequest>
        Model::ListComponentVersionsOutcomeCallable ListComponentVersionsCallable(const ListComponentVersionsRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::ListComponentVersions, request);
        }

        /**
         * An Async wrapper for ListComponentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComponentVersionsRequestT = Model::ListComponentVersionsRequest>
        void ListComponentVersionsAsync(const ListComponentVersionsRequestT& request, const ListComponentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::ListComponentVersions, request, handler, context);
        }

        /**
         * <p>Retrieves a paginated list of component summaries. This list includes
         * components that you have permission to view.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        Model::ListComponentsOutcomeCallable ListComponentsCallable(const ListComponentsRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::ListComponents, request);
        }

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        void ListComponentsAsync(const ListComponentsRequestT& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::ListComponents, request, handler, context);
        }

        /**
         * <p>Retrieves a paginated list of Greengrass core devices.</p>  <p>IoT
         * Greengrass relies on individual devices to send status updates to the Amazon Web
         * Services Cloud. If the IoT Greengrass Core software isn't running on the device,
         * or if device isn't connected to the Amazon Web Services Cloud, then the reported
         * status of that device might not reflect its current status. The status timestamp
         * indicates when the device status was last updated.</p> <p>Core devices send
         * status updates at the following times:</p> <ul> <li> <p>When the IoT Greengrass
         * Core software starts</p> </li> <li> <p>When the core device receives a
         * deployment from the Amazon Web Services Cloud</p> </li> <li> <p>When the status
         * of any component on the core device becomes <code>BROKEN</code> </p> </li> <li>
         * <p>At a <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html#greengrass-nucleus-component-configuration-fss">regular
         * interval that you can configure</a>, which defaults to 24 hours</p> </li> <li>
         * <p>For IoT Greengrass Core v2.7.0, the core device sends status updates upon
         * local deployment and cloud deployment</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListCoreDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDevicesOutcome ListCoreDevices(const Model::ListCoreDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListCoreDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCoreDevicesRequestT = Model::ListCoreDevicesRequest>
        Model::ListCoreDevicesOutcomeCallable ListCoreDevicesCallable(const ListCoreDevicesRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::ListCoreDevices, request);
        }

        /**
         * An Async wrapper for ListCoreDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCoreDevicesRequestT = Model::ListCoreDevicesRequest>
        void ListCoreDevicesAsync(const ListCoreDevicesRequestT& request, const ListCoreDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::ListCoreDevices, request, handler, context);
        }

        /**
         * <p>Retrieves a paginated list of deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const ListDeploymentsRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::ListDeployments, request);
        }

        /**
         * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        void ListDeploymentsAsync(const ListDeploymentsRequestT& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::ListDeployments, request, handler, context);
        }

        /**
         * <p>Retrieves a paginated list of deployment jobs that IoT Greengrass sends to
         * Greengrass core devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListEffectiveDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEffectiveDeploymentsOutcome ListEffectiveDeployments(const Model::ListEffectiveDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListEffectiveDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEffectiveDeploymentsRequestT = Model::ListEffectiveDeploymentsRequest>
        Model::ListEffectiveDeploymentsOutcomeCallable ListEffectiveDeploymentsCallable(const ListEffectiveDeploymentsRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::ListEffectiveDeployments, request);
        }

        /**
         * An Async wrapper for ListEffectiveDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEffectiveDeploymentsRequestT = Model::ListEffectiveDeploymentsRequest>
        void ListEffectiveDeploymentsAsync(const ListEffectiveDeploymentsRequestT& request, const ListEffectiveDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::ListEffectiveDeployments, request, handler, context);
        }

        /**
         * <p>Retrieves a paginated list of the components that a Greengrass core device
         * runs. By default, this list doesn't include components that are deployed as
         * dependencies of other components. To include dependencies in the response, set
         * the <code>topologyFilter</code> parameter to <code>ALL</code>.</p>  <p>IoT
         * Greengrass relies on individual devices to send status updates to the Amazon Web
         * Services Cloud. If the IoT Greengrass Core software isn't running on the device,
         * or if device isn't connected to the Amazon Web Services Cloud, then the reported
         * status of that device might not reflect its current status. The status timestamp
         * indicates when the device status was last updated.</p> <p>Core devices send
         * status updates at the following times:</p> <ul> <li> <p>When the IoT Greengrass
         * Core software starts</p> </li> <li> <p>When the core device receives a
         * deployment from the Amazon Web Services Cloud</p> </li> <li> <p>When the status
         * of any component on the core device becomes <code>BROKEN</code> </p> </li> <li>
         * <p>At a <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-nucleus-component.html#greengrass-nucleus-component-configuration-fss">regular
         * interval that you can configure</a>, which defaults to 24 hours</p> </li> <li>
         * <p>For IoT Greengrass Core v2.7.0, the core device sends status updates upon
         * local deployment and cloud deployment</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListInstalledComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstalledComponentsOutcome ListInstalledComponents(const Model::ListInstalledComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListInstalledComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstalledComponentsRequestT = Model::ListInstalledComponentsRequest>
        Model::ListInstalledComponentsOutcomeCallable ListInstalledComponentsCallable(const ListInstalledComponentsRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::ListInstalledComponents, request);
        }

        /**
         * An Async wrapper for ListInstalledComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstalledComponentsRequestT = Model::ListInstalledComponentsRequest>
        void ListInstalledComponentsAsync(const ListInstalledComponentsRequestT& request, const ListInstalledComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::ListInstalledComponents, request, handler, context);
        }

        /**
         * <p>Retrieves the list of tags for an IoT Greengrass resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Retrieves a list of components that meet the component, version, and platform
         * requirements of a deployment. Greengrass core devices call this operation when
         * they receive a deployment to identify the components to install.</p> <p>This
         * operation identifies components that meet all dependency requirements for a
         * deployment. If the requirements conflict, then this operation returns an error
         * and the deployment fails. For example, this occurs if component <code>A</code>
         * requires version <code>&gt;2.0.0</code> and component <code>B</code> requires
         * version <code>&lt;2.0.0</code> of a component dependency.</p> <p>When you
         * specify the component candidates to resolve, IoT Greengrass compares each
         * component's digest from the core device with the component's digest in the
         * Amazon Web Services Cloud. If the digests don't match, then IoT Greengrass
         * specifies to use the version from the Amazon Web Services Cloud.</p> 
         * <p>To use this operation, you must use the data plane API endpoint and
         * authenticate with an IoT device certificate. For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/greengrass.html">IoT
         * Greengrass endpoints and quotas</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ResolveComponentCandidates">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveComponentCandidatesOutcome ResolveComponentCandidates(const Model::ResolveComponentCandidatesRequest& request) const;

        /**
         * A Callable wrapper for ResolveComponentCandidates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResolveComponentCandidatesRequestT = Model::ResolveComponentCandidatesRequest>
        Model::ResolveComponentCandidatesOutcomeCallable ResolveComponentCandidatesCallable(const ResolveComponentCandidatesRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::ResolveComponentCandidates, request);
        }

        /**
         * An Async wrapper for ResolveComponentCandidates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResolveComponentCandidatesRequestT = Model::ResolveComponentCandidatesRequest>
        void ResolveComponentCandidatesAsync(const ResolveComponentCandidatesRequestT& request, const ResolveComponentCandidatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::ResolveComponentCandidates, request, handler, context);
        }

        /**
         * <p>Adds tags to an IoT Greengrass resource. If a tag already exists for the
         * resource, this operation updates the tag's value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from an IoT Greengrass resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates connectivity information for a Greengrass core device.</p>
         * <p>Connectivity information includes endpoints and ports where client devices
         * can connect to an MQTT broker on the core device. When a client device calls the
         * <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/greengrass-discover-api.html">IoT
         * Greengrass discovery API</a>, IoT Greengrass returns connectivity information
         * for all of the core devices where the client device can connect. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/connect-client-devices.html">Connect
         * client devices to core devices</a> in the <i>IoT Greengrass Version 2 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/UpdateConnectivityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectivityInfoOutcome UpdateConnectivityInfo(const Model::UpdateConnectivityInfoRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectivityInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectivityInfoRequestT = Model::UpdateConnectivityInfoRequest>
        Model::UpdateConnectivityInfoOutcomeCallable UpdateConnectivityInfoCallable(const UpdateConnectivityInfoRequestT& request) const
        {
            return SubmitCallable(&GreengrassV2Client::UpdateConnectivityInfo, request);
        }

        /**
         * An Async wrapper for UpdateConnectivityInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectivityInfoRequestT = Model::UpdateConnectivityInfoRequest>
        void UpdateConnectivityInfoAsync(const UpdateConnectivityInfoRequestT& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GreengrassV2Client::UpdateConnectivityInfo, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GreengrassV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GreengrassV2Client>;
      void init(const GreengrassV2ClientConfiguration& clientConfiguration);

      GreengrassV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GreengrassV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace GreengrassV2
} // namespace Aws
