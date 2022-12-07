/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/IoTWirelessServiceClientModel.h>

namespace Aws
{
namespace IoTWireless
{
  /**
   * <p>AWS IoT Wireless provides bi-directional communication between
   * internet-connected wireless devices and the AWS Cloud. To onboard both LoRaWAN
   * and Sidewalk devices to AWS IoT, use the IoT Wireless API. These wireless
   * devices use the Low Power Wide Area Networking (LPWAN) communication protocol to
   * communicate with AWS IoT.</p> <p>Using the API, you can perform create, read,
   * update, and delete operations for your wireless devices, gateways, destinations,
   * and profiles. After onboarding your devices, you can use the API operations to
   * set log levels and monitor your devices with CloudWatch.</p> <p>You can also use
   * the API operations to create multicast groups and schedule a multicast session
   * for sending a downlink message to devices in the group. By using Firmware
   * Updates Over-The-Air (FUOTA) API operations, you can create a FUOTA task and
   * schedule a session to update the firmware of individual devices or an entire
   * group of devices in a multicast group.</p>
   */
  class AWS_IOTWIRELESS_API IoTWirelessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTWirelessClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTWirelessClient(const Aws::IoTWireless::IoTWirelessClientConfiguration& clientConfiguration = Aws::IoTWireless::IoTWirelessClientConfiguration(),
                          std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTWirelessClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG),
                          const Aws::IoTWireless::IoTWirelessClientConfiguration& clientConfiguration = Aws::IoTWireless::IoTWirelessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTWirelessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG),
                          const Aws::IoTWireless::IoTWirelessClientConfiguration& clientConfiguration = Aws::IoTWireless::IoTWirelessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTWirelessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTWirelessClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTWirelessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTWirelessClient();

        /**
         * <p>Associates a partner account with your AWS account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateAwsAccountWithPartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAwsAccountWithPartnerAccountOutcome AssociateAwsAccountWithPartnerAccount(const Model::AssociateAwsAccountWithPartnerAccountRequest& request) const;

        /**
         * A Callable wrapper for AssociateAwsAccountWithPartnerAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAwsAccountWithPartnerAccountOutcomeCallable AssociateAwsAccountWithPartnerAccountCallable(const Model::AssociateAwsAccountWithPartnerAccountRequest& request) const;

        /**
         * An Async wrapper for AssociateAwsAccountWithPartnerAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAwsAccountWithPartnerAccountAsync(const Model::AssociateAwsAccountWithPartnerAccountRequest& request, const AssociateAwsAccountWithPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associate a multicast group with a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateMulticastGroupWithFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMulticastGroupWithFuotaTaskOutcome AssociateMulticastGroupWithFuotaTask(const Model::AssociateMulticastGroupWithFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for AssociateMulticastGroupWithFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateMulticastGroupWithFuotaTaskOutcomeCallable AssociateMulticastGroupWithFuotaTaskCallable(const Model::AssociateMulticastGroupWithFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for AssociateMulticastGroupWithFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateMulticastGroupWithFuotaTaskAsync(const Model::AssociateMulticastGroupWithFuotaTaskRequest& request, const AssociateMulticastGroupWithFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associate a wireless device with a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessDeviceWithFuotaTaskOutcome AssociateWirelessDeviceWithFuotaTask(const Model::AssociateWirelessDeviceWithFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for AssociateWirelessDeviceWithFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWirelessDeviceWithFuotaTaskOutcomeCallable AssociateWirelessDeviceWithFuotaTaskCallable(const Model::AssociateWirelessDeviceWithFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for AssociateWirelessDeviceWithFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWirelessDeviceWithFuotaTaskAsync(const Model::AssociateWirelessDeviceWithFuotaTaskRequest& request, const AssociateWirelessDeviceWithFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a wireless device with a multicast group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessDeviceWithMulticastGroupOutcome AssociateWirelessDeviceWithMulticastGroup(const Model::AssociateWirelessDeviceWithMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociateWirelessDeviceWithMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWirelessDeviceWithMulticastGroupOutcomeCallable AssociateWirelessDeviceWithMulticastGroupCallable(const Model::AssociateWirelessDeviceWithMulticastGroupRequest& request) const;

        /**
         * An Async wrapper for AssociateWirelessDeviceWithMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWirelessDeviceWithMulticastGroupAsync(const Model::AssociateWirelessDeviceWithMulticastGroupRequest& request, const AssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a wireless device with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithThing">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessDeviceWithThingOutcome AssociateWirelessDeviceWithThing(const Model::AssociateWirelessDeviceWithThingRequest& request) const;

        /**
         * A Callable wrapper for AssociateWirelessDeviceWithThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWirelessDeviceWithThingOutcomeCallable AssociateWirelessDeviceWithThingCallable(const Model::AssociateWirelessDeviceWithThingRequest& request) const;

        /**
         * An Async wrapper for AssociateWirelessDeviceWithThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWirelessDeviceWithThingAsync(const Model::AssociateWirelessDeviceWithThingRequest& request, const AssociateWirelessDeviceWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a wireless gateway with a certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessGatewayWithCertificateOutcome AssociateWirelessGatewayWithCertificate(const Model::AssociateWirelessGatewayWithCertificateRequest& request) const;

        /**
         * A Callable wrapper for AssociateWirelessGatewayWithCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWirelessGatewayWithCertificateOutcomeCallable AssociateWirelessGatewayWithCertificateCallable(const Model::AssociateWirelessGatewayWithCertificateRequest& request) const;

        /**
         * An Async wrapper for AssociateWirelessGatewayWithCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWirelessGatewayWithCertificateAsync(const Model::AssociateWirelessGatewayWithCertificateRequest& request, const AssociateWirelessGatewayWithCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a wireless gateway with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithThing">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessGatewayWithThingOutcome AssociateWirelessGatewayWithThing(const Model::AssociateWirelessGatewayWithThingRequest& request) const;

        /**
         * A Callable wrapper for AssociateWirelessGatewayWithThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWirelessGatewayWithThingOutcomeCallable AssociateWirelessGatewayWithThingCallable(const Model::AssociateWirelessGatewayWithThingRequest& request) const;

        /**
         * An Async wrapper for AssociateWirelessGatewayWithThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWirelessGatewayWithThingAsync(const Model::AssociateWirelessGatewayWithThingRequest& request, const AssociateWirelessGatewayWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an existing multicast group session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CancelMulticastGroupSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMulticastGroupSessionOutcome CancelMulticastGroupSession(const Model::CancelMulticastGroupSessionRequest& request) const;

        /**
         * A Callable wrapper for CancelMulticastGroupSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelMulticastGroupSessionOutcomeCallable CancelMulticastGroupSessionCallable(const Model::CancelMulticastGroupSessionRequest& request) const;

        /**
         * An Async wrapper for CancelMulticastGroupSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelMulticastGroupSessionAsync(const Model::CancelMulticastGroupSessionRequest& request, const CancelMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new destination that maps a device message to an AWS IoT
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDestinationOutcome CreateDestination(const Model::CreateDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDestinationOutcomeCallable CreateDestinationCallable(const Model::CreateDestinationRequest& request) const;

        /**
         * An Async wrapper for CreateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDestinationAsync(const Model::CreateDestinationRequest& request, const CreateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceProfileOutcome CreateDeviceProfile(const Model::CreateDeviceProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateDeviceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeviceProfileOutcomeCallable CreateDeviceProfileCallable(const Model::CreateDeviceProfileRequest& request) const;

        /**
         * An Async wrapper for CreateDeviceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeviceProfileAsync(const Model::CreateDeviceProfileRequest& request, const CreateDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFuotaTaskOutcome CreateFuotaTask(const Model::CreateFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFuotaTaskOutcomeCallable CreateFuotaTaskCallable(const Model::CreateFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for CreateFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFuotaTaskAsync(const Model::CreateFuotaTaskRequest& request, const CreateFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMulticastGroupOutcome CreateMulticastGroup(const Model::CreateMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMulticastGroupOutcomeCallable CreateMulticastGroupCallable(const Model::CreateMulticastGroupRequest& request) const;

        /**
         * An Async wrapper for CreateMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMulticastGroupAsync(const Model::CreateMulticastGroupRequest& request, const CreateMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkAnalyzerConfigurationOutcome CreateNetworkAnalyzerConfiguration(const Model::CreateNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkAnalyzerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkAnalyzerConfigurationOutcomeCallable CreateNetworkAnalyzerConfigurationCallable(const Model::CreateNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkAnalyzerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkAnalyzerConfigurationAsync(const Model::CreateNetworkAnalyzerConfigurationRequest& request, const CreateNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceProfileOutcome CreateServiceProfile(const Model::CreateServiceProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceProfileOutcomeCallable CreateServiceProfileCallable(const Model::CreateServiceProfileRequest& request) const;

        /**
         * An Async wrapper for CreateServiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceProfileAsync(const Model::CreateServiceProfileRequest& request, const CreateServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessDeviceOutcome CreateWirelessDevice(const Model::CreateWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for CreateWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWirelessDeviceOutcomeCallable CreateWirelessDeviceCallable(const Model::CreateWirelessDeviceRequest& request) const;

        /**
         * An Async wrapper for CreateWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWirelessDeviceAsync(const Model::CreateWirelessDeviceRequest& request, const CreateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayOutcome CreateWirelessGateway(const Model::CreateWirelessGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateWirelessGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWirelessGatewayOutcomeCallable CreateWirelessGatewayCallable(const Model::CreateWirelessGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateWirelessGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWirelessGatewayAsync(const Model::CreateWirelessGatewayRequest& request, const CreateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a task for a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayTaskOutcome CreateWirelessGatewayTask(const Model::CreateWirelessGatewayTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateWirelessGatewayTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWirelessGatewayTaskOutcomeCallable CreateWirelessGatewayTaskCallable(const Model::CreateWirelessGatewayTaskRequest& request) const;

        /**
         * An Async wrapper for CreateWirelessGatewayTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWirelessGatewayTaskAsync(const Model::CreateWirelessGatewayTaskRequest& request, const CreateWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a gateway task definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayTaskDefinitionOutcome CreateWirelessGatewayTaskDefinition(const Model::CreateWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateWirelessGatewayTaskDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWirelessGatewayTaskDefinitionOutcomeCallable CreateWirelessGatewayTaskDefinitionCallable(const Model::CreateWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * An Async wrapper for CreateWirelessGatewayTaskDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWirelessGatewayTaskDefinitionAsync(const Model::CreateWirelessGatewayTaskDefinitionRequest& request, const CreateWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDestinationOutcome DeleteDestination(const Model::DeleteDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDestinationOutcomeCallable DeleteDestinationCallable(const Model::DeleteDestinationRequest& request) const;

        /**
         * An Async wrapper for DeleteDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDestinationAsync(const Model::DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceProfileOutcome DeleteDeviceProfile(const Model::DeleteDeviceProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeviceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceProfileOutcomeCallable DeleteDeviceProfileCallable(const Model::DeleteDeviceProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteDeviceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceProfileAsync(const Model::DeleteDeviceProfileRequest& request, const DeleteDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFuotaTaskOutcome DeleteFuotaTask(const Model::DeleteFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFuotaTaskOutcomeCallable DeleteFuotaTaskCallable(const Model::DeleteFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for DeleteFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFuotaTaskAsync(const Model::DeleteFuotaTaskRequest& request, const DeleteFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a multicast group if it is not in use by a fuota task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMulticastGroupOutcome DeleteMulticastGroup(const Model::DeleteMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMulticastGroupOutcomeCallable DeleteMulticastGroupCallable(const Model::DeleteMulticastGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMulticastGroupAsync(const Model::DeleteMulticastGroupRequest& request, const DeleteMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkAnalyzerConfigurationOutcome DeleteNetworkAnalyzerConfiguration(const Model::DeleteNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkAnalyzerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkAnalyzerConfigurationOutcomeCallable DeleteNetworkAnalyzerConfigurationCallable(const Model::DeleteNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkAnalyzerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkAnalyzerConfigurationAsync(const Model::DeleteNetworkAnalyzerConfigurationRequest& request, const DeleteNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove queued messages from the downlink queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteQueuedMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueuedMessagesOutcome DeleteQueuedMessages(const Model::DeleteQueuedMessagesRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueuedMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueuedMessagesOutcomeCallable DeleteQueuedMessagesCallable(const Model::DeleteQueuedMessagesRequest& request) const;

        /**
         * An Async wrapper for DeleteQueuedMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQueuedMessagesAsync(const Model::DeleteQueuedMessagesRequest& request, const DeleteQueuedMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceProfileOutcome DeleteServiceProfile(const Model::DeleteServiceProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceProfileOutcomeCallable DeleteServiceProfileCallable(const Model::DeleteServiceProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteServiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceProfileAsync(const Model::DeleteServiceProfileRequest& request, const DeleteServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessDeviceOutcome DeleteWirelessDevice(const Model::DeleteWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWirelessDeviceOutcomeCallable DeleteWirelessDeviceCallable(const Model::DeleteWirelessDeviceRequest& request) const;

        /**
         * An Async wrapper for DeleteWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWirelessDeviceAsync(const Model::DeleteWirelessDeviceRequest& request, const DeleteWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayOutcome DeleteWirelessGateway(const Model::DeleteWirelessGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteWirelessGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWirelessGatewayOutcomeCallable DeleteWirelessGatewayCallable(const Model::DeleteWirelessGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteWirelessGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWirelessGatewayAsync(const Model::DeleteWirelessGatewayRequest& request, const DeleteWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayTaskOutcome DeleteWirelessGatewayTask(const Model::DeleteWirelessGatewayTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteWirelessGatewayTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWirelessGatewayTaskOutcomeCallable DeleteWirelessGatewayTaskCallable(const Model::DeleteWirelessGatewayTaskRequest& request) const;

        /**
         * An Async wrapper for DeleteWirelessGatewayTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWirelessGatewayTaskAsync(const Model::DeleteWirelessGatewayTaskRequest& request, const DeleteWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a wireless gateway task definition. Deleting this task definition
         * does not affect tasks that are currently in progress.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayTaskDefinitionOutcome DeleteWirelessGatewayTaskDefinition(const Model::DeleteWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteWirelessGatewayTaskDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWirelessGatewayTaskDefinitionOutcomeCallable DeleteWirelessGatewayTaskDefinitionCallable(const Model::DeleteWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * An Async wrapper for DeleteWirelessGatewayTaskDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWirelessGatewayTaskDefinitionAsync(const Model::DeleteWirelessGatewayTaskDefinitionRequest& request, const DeleteWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates your AWS account from a partner account. If
         * <code>PartnerAccountId</code> and <code>PartnerType</code> are
         * <code>null</code>, disassociates your AWS account from all partner
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateAwsAccountFromPartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAwsAccountFromPartnerAccountOutcome DisassociateAwsAccountFromPartnerAccount(const Model::DisassociateAwsAccountFromPartnerAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAwsAccountFromPartnerAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAwsAccountFromPartnerAccountOutcomeCallable DisassociateAwsAccountFromPartnerAccountCallable(const Model::DisassociateAwsAccountFromPartnerAccountRequest& request) const;

        /**
         * An Async wrapper for DisassociateAwsAccountFromPartnerAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAwsAccountFromPartnerAccountAsync(const Model::DisassociateAwsAccountFromPartnerAccountRequest& request, const DisassociateAwsAccountFromPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a multicast group from a fuota task.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateMulticastGroupFromFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMulticastGroupFromFuotaTaskOutcome DisassociateMulticastGroupFromFuotaTask(const Model::DisassociateMulticastGroupFromFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMulticastGroupFromFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateMulticastGroupFromFuotaTaskOutcomeCallable DisassociateMulticastGroupFromFuotaTaskCallable(const Model::DisassociateMulticastGroupFromFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for DisassociateMulticastGroupFromFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateMulticastGroupFromFuotaTaskAsync(const Model::DisassociateMulticastGroupFromFuotaTaskRequest& request, const DisassociateMulticastGroupFromFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a wireless device from a FUOTA task.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessDeviceFromFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessDeviceFromFuotaTaskOutcome DisassociateWirelessDeviceFromFuotaTask(const Model::DisassociateWirelessDeviceFromFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for DisassociateWirelessDeviceFromFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWirelessDeviceFromFuotaTaskOutcomeCallable DisassociateWirelessDeviceFromFuotaTaskCallable(const Model::DisassociateWirelessDeviceFromFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for DisassociateWirelessDeviceFromFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWirelessDeviceFromFuotaTaskAsync(const Model::DisassociateWirelessDeviceFromFuotaTaskRequest& request, const DisassociateWirelessDeviceFromFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a wireless device from a multicast group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessDeviceFromMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessDeviceFromMulticastGroupOutcome DisassociateWirelessDeviceFromMulticastGroup(const Model::DisassociateWirelessDeviceFromMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateWirelessDeviceFromMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWirelessDeviceFromMulticastGroupOutcomeCallable DisassociateWirelessDeviceFromMulticastGroupCallable(const Model::DisassociateWirelessDeviceFromMulticastGroupRequest& request) const;

        /**
         * An Async wrapper for DisassociateWirelessDeviceFromMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWirelessDeviceFromMulticastGroupAsync(const Model::DisassociateWirelessDeviceFromMulticastGroupRequest& request, const DisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a wireless device from its currently associated
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessDeviceFromThing">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessDeviceFromThingOutcome DisassociateWirelessDeviceFromThing(const Model::DisassociateWirelessDeviceFromThingRequest& request) const;

        /**
         * A Callable wrapper for DisassociateWirelessDeviceFromThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWirelessDeviceFromThingOutcomeCallable DisassociateWirelessDeviceFromThingCallable(const Model::DisassociateWirelessDeviceFromThingRequest& request) const;

        /**
         * An Async wrapper for DisassociateWirelessDeviceFromThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWirelessDeviceFromThingAsync(const Model::DisassociateWirelessDeviceFromThingRequest& request, const DisassociateWirelessDeviceFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a wireless gateway from its currently associated
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessGatewayFromCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessGatewayFromCertificateOutcome DisassociateWirelessGatewayFromCertificate(const Model::DisassociateWirelessGatewayFromCertificateRequest& request) const;

        /**
         * A Callable wrapper for DisassociateWirelessGatewayFromCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWirelessGatewayFromCertificateOutcomeCallable DisassociateWirelessGatewayFromCertificateCallable(const Model::DisassociateWirelessGatewayFromCertificateRequest& request) const;

        /**
         * An Async wrapper for DisassociateWirelessGatewayFromCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWirelessGatewayFromCertificateAsync(const Model::DisassociateWirelessGatewayFromCertificateRequest& request, const DisassociateWirelessGatewayFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a wireless gateway from its currently associated
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessGatewayFromThing">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessGatewayFromThingOutcome DisassociateWirelessGatewayFromThing(const Model::DisassociateWirelessGatewayFromThingRequest& request) const;

        /**
         * A Callable wrapper for DisassociateWirelessGatewayFromThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWirelessGatewayFromThingOutcomeCallable DisassociateWirelessGatewayFromThingCallable(const Model::DisassociateWirelessGatewayFromThingRequest& request) const;

        /**
         * An Async wrapper for DisassociateWirelessGatewayFromThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWirelessGatewayFromThingAsync(const Model::DisassociateWirelessGatewayFromThingRequest& request, const DisassociateWirelessGatewayFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDestinationOutcome GetDestination(const Model::GetDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDestinationOutcomeCallable GetDestinationCallable(const Model::GetDestinationRequest& request) const;

        /**
         * An Async wrapper for GetDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDestinationAsync(const Model::GetDestinationRequest& request, const GetDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceProfileOutcome GetDeviceProfile(const Model::GetDeviceProfileRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceProfileOutcomeCallable GetDeviceProfileCallable(const Model::GetDeviceProfileRequest& request) const;

        /**
         * An Async wrapper for GetDeviceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceProfileAsync(const Model::GetDeviceProfileRequest& request, const GetDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the event configuration based on resource types.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetEventConfigurationByResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventConfigurationByResourceTypesOutcome GetEventConfigurationByResourceTypes(const Model::GetEventConfigurationByResourceTypesRequest& request) const;

        /**
         * A Callable wrapper for GetEventConfigurationByResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventConfigurationByResourceTypesOutcomeCallable GetEventConfigurationByResourceTypesCallable(const Model::GetEventConfigurationByResourceTypesRequest& request) const;

        /**
         * An Async wrapper for GetEventConfigurationByResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventConfigurationByResourceTypesAsync(const Model::GetEventConfigurationByResourceTypesRequest& request, const GetEventConfigurationByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFuotaTaskOutcome GetFuotaTask(const Model::GetFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for GetFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFuotaTaskOutcomeCallable GetFuotaTaskCallable(const Model::GetFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for GetFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFuotaTaskAsync(const Model::GetFuotaTaskRequest& request, const GetFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns current default log levels or log levels by resource types. Based on
         * resource types, log levels can be for wireless device log options or wireless
         * gateway log options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetLogLevelsByResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogLevelsByResourceTypesOutcome GetLogLevelsByResourceTypes(const Model::GetLogLevelsByResourceTypesRequest& request) const;

        /**
         * A Callable wrapper for GetLogLevelsByResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLogLevelsByResourceTypesOutcomeCallable GetLogLevelsByResourceTypesCallable(const Model::GetLogLevelsByResourceTypesRequest& request) const;

        /**
         * An Async wrapper for GetLogLevelsByResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLogLevelsByResourceTypesAsync(const Model::GetLogLevelsByResourceTypesRequest& request, const GetLogLevelsByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMulticastGroupOutcome GetMulticastGroup(const Model::GetMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for GetMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMulticastGroupOutcomeCallable GetMulticastGroupCallable(const Model::GetMulticastGroupRequest& request) const;

        /**
         * An Async wrapper for GetMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMulticastGroupAsync(const Model::GetMulticastGroupRequest& request, const GetMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a multicast group session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetMulticastGroupSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMulticastGroupSessionOutcome GetMulticastGroupSession(const Model::GetMulticastGroupSessionRequest& request) const;

        /**
         * A Callable wrapper for GetMulticastGroupSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMulticastGroupSessionOutcomeCallable GetMulticastGroupSessionCallable(const Model::GetMulticastGroupSessionRequest& request) const;

        /**
         * An Async wrapper for GetMulticastGroupSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMulticastGroupSessionAsync(const Model::GetMulticastGroupSessionRequest& request, const GetMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkAnalyzerConfigurationOutcome GetNetworkAnalyzerConfiguration(const Model::GetNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkAnalyzerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkAnalyzerConfigurationOutcomeCallable GetNetworkAnalyzerConfigurationCallable(const Model::GetNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetNetworkAnalyzerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkAnalyzerConfigurationAsync(const Model::GetNetworkAnalyzerConfigurationRequest& request, const GetNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a partner account. If <code>PartnerAccountId</code>
         * and <code>PartnerType</code> are <code>null</code>, returns all partner
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetPartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartnerAccountOutcome GetPartnerAccount(const Model::GetPartnerAccountRequest& request) const;

        /**
         * A Callable wrapper for GetPartnerAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPartnerAccountOutcomeCallable GetPartnerAccountCallable(const Model::GetPartnerAccountRequest& request) const;

        /**
         * An Async wrapper for GetPartnerAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPartnerAccountAsync(const Model::GetPartnerAccountRequest& request, const GetPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get estimated position information as a payload in GeoJSON format. The
         * payload measurement data is resolved using solvers that are provided by
         * third-party vendors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetPositionEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPositionEstimateOutcome GetPositionEstimate(const Model::GetPositionEstimateRequest& request) const;

        /**
         * A Callable wrapper for GetPositionEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPositionEstimateOutcomeCallable GetPositionEstimateCallable(const Model::GetPositionEstimateRequest& request) const;

        /**
         * An Async wrapper for GetPositionEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPositionEstimateAsync(const Model::GetPositionEstimateRequest& request, const GetPositionEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the event configuration for a particular resource
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetResourceEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceEventConfigurationOutcome GetResourceEventConfiguration(const Model::GetResourceEventConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetResourceEventConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceEventConfigurationOutcomeCallable GetResourceEventConfigurationCallable(const Model::GetResourceEventConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetResourceEventConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceEventConfigurationAsync(const Model::GetResourceEventConfigurationRequest& request, const GetResourceEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Fetches the log-level override, if any, for a given resource-ID and
         * resource-type. It can be used for a wireless device or a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetResourceLogLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceLogLevelOutcome GetResourceLogLevel(const Model::GetResourceLogLevelRequest& request) const;

        /**
         * A Callable wrapper for GetResourceLogLevel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceLogLevelOutcomeCallable GetResourceLogLevelCallable(const Model::GetResourceLogLevelRequest& request) const;

        /**
         * An Async wrapper for GetResourceLogLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceLogLevelAsync(const Model::GetResourceLogLevelRequest& request, const GetResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the position information for a given wireless device or a wireless
         * gateway resource. The postion information uses the <a
         * href="https://gisgeography.com/wgs84-world-geodetic-system/"> World Geodetic
         * System (WGS84)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetResourcePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePositionOutcome GetResourcePosition(const Model::GetResourcePositionRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePositionOutcomeCallable GetResourcePositionCallable(const Model::GetResourcePositionRequest& request) const;

        /**
         * An Async wrapper for GetResourcePosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePositionAsync(const Model::GetResourcePositionRequest& request, const GetResourcePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the account-specific endpoint for Configuration and Update Server (CUPS)
         * protocol or LoRaWAN Network Server (LNS) connections.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceEndpointOutcome GetServiceEndpoint(const Model::GetServiceEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetServiceEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceEndpointOutcomeCallable GetServiceEndpointCallable(const Model::GetServiceEndpointRequest& request) const;

        /**
         * An Async wrapper for GetServiceEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceEndpointAsync(const Model::GetServiceEndpointRequest& request, const GetServiceEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceProfileOutcome GetServiceProfile(const Model::GetServiceProfileRequest& request) const;

        /**
         * A Callable wrapper for GetServiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceProfileOutcomeCallable GetServiceProfileCallable(const Model::GetServiceProfileRequest& request) const;

        /**
         * An Async wrapper for GetServiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceProfileAsync(const Model::GetServiceProfileRequest& request, const GetServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessDeviceOutcome GetWirelessDevice(const Model::GetWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessDeviceOutcomeCallable GetWirelessDeviceCallable(const Model::GetWirelessDeviceRequest& request) const;

        /**
         * An Async wrapper for GetWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessDeviceAsync(const Model::GetWirelessDeviceRequest& request, const GetWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets operating information about a wireless device.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDeviceStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessDeviceStatisticsOutcome GetWirelessDeviceStatistics(const Model::GetWirelessDeviceStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessDeviceStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessDeviceStatisticsOutcomeCallable GetWirelessDeviceStatisticsCallable(const Model::GetWirelessDeviceStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetWirelessDeviceStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessDeviceStatisticsAsync(const Model::GetWirelessDeviceStatisticsRequest& request, const GetWirelessDeviceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayOutcome GetWirelessGateway(const Model::GetWirelessGatewayRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayOutcomeCallable GetWirelessGatewayCallable(const Model::GetWirelessGatewayRequest& request) const;

        /**
         * An Async wrapper for GetWirelessGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessGatewayAsync(const Model::GetWirelessGatewayRequest& request, const GetWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the ID of the certificate that is currently associated with a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayCertificateOutcome GetWirelessGatewayCertificate(const Model::GetWirelessGatewayCertificateRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessGatewayCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayCertificateOutcomeCallable GetWirelessGatewayCertificateCallable(const Model::GetWirelessGatewayCertificateRequest& request) const;

        /**
         * An Async wrapper for GetWirelessGatewayCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessGatewayCertificateAsync(const Model::GetWirelessGatewayCertificateRequest& request, const GetWirelessGatewayCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the firmware version and other information about a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayFirmwareInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayFirmwareInformationOutcome GetWirelessGatewayFirmwareInformation(const Model::GetWirelessGatewayFirmwareInformationRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessGatewayFirmwareInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayFirmwareInformationOutcomeCallable GetWirelessGatewayFirmwareInformationCallable(const Model::GetWirelessGatewayFirmwareInformationRequest& request) const;

        /**
         * An Async wrapper for GetWirelessGatewayFirmwareInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessGatewayFirmwareInformationAsync(const Model::GetWirelessGatewayFirmwareInformationRequest& request, const GetWirelessGatewayFirmwareInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets operating information about a wireless gateway.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayStatisticsOutcome GetWirelessGatewayStatistics(const Model::GetWirelessGatewayStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessGatewayStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayStatisticsOutcomeCallable GetWirelessGatewayStatisticsCallable(const Model::GetWirelessGatewayStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetWirelessGatewayStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessGatewayStatisticsAsync(const Model::GetWirelessGatewayStatisticsRequest& request, const GetWirelessGatewayStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayTaskOutcome GetWirelessGatewayTask(const Model::GetWirelessGatewayTaskRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessGatewayTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayTaskOutcomeCallable GetWirelessGatewayTaskCallable(const Model::GetWirelessGatewayTaskRequest& request) const;

        /**
         * An Async wrapper for GetWirelessGatewayTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessGatewayTaskAsync(const Model::GetWirelessGatewayTaskRequest& request, const GetWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a wireless gateway task definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayTaskDefinitionOutcome GetWirelessGatewayTaskDefinition(const Model::GetWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessGatewayTaskDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayTaskDefinitionOutcomeCallable GetWirelessGatewayTaskDefinitionCallable(const Model::GetWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetWirelessGatewayTaskDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessGatewayTaskDefinitionAsync(const Model::GetWirelessGatewayTaskDefinitionRequest& request, const GetWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the destinations registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDestinationsOutcome ListDestinations(const Model::ListDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDestinationsOutcomeCallable ListDestinationsCallable(const Model::ListDestinationsRequest& request) const;

        /**
         * An Async wrapper for ListDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDestinationsAsync(const Model::ListDestinationsRequest& request, const ListDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the device profiles registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListDeviceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceProfilesOutcome ListDeviceProfiles(const Model::ListDeviceProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceProfilesOutcomeCallable ListDeviceProfilesCallable(const Model::ListDeviceProfilesRequest& request) const;

        /**
         * An Async wrapper for ListDeviceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceProfilesAsync(const Model::ListDeviceProfilesRequest& request, const ListDeviceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List event configurations where at least one event topic has been
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListEventConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventConfigurationsOutcome ListEventConfigurations(const Model::ListEventConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListEventConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventConfigurationsOutcomeCallable ListEventConfigurationsCallable(const Model::ListEventConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListEventConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventConfigurationsAsync(const Model::ListEventConfigurationsRequest& request, const ListEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the FUOTA tasks registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListFuotaTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFuotaTasksOutcome ListFuotaTasks(const Model::ListFuotaTasksRequest& request) const;

        /**
         * A Callable wrapper for ListFuotaTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFuotaTasksOutcomeCallable ListFuotaTasksCallable(const Model::ListFuotaTasksRequest& request) const;

        /**
         * An Async wrapper for ListFuotaTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFuotaTasksAsync(const Model::ListFuotaTasksRequest& request, const ListFuotaTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the multicast groups registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListMulticastGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMulticastGroupsOutcome ListMulticastGroups(const Model::ListMulticastGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListMulticastGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMulticastGroupsOutcomeCallable ListMulticastGroupsCallable(const Model::ListMulticastGroupsRequest& request) const;

        /**
         * An Async wrapper for ListMulticastGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMulticastGroupsAsync(const Model::ListMulticastGroupsRequest& request, const ListMulticastGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all multicast groups associated with a fuota task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListMulticastGroupsByFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMulticastGroupsByFuotaTaskOutcome ListMulticastGroupsByFuotaTask(const Model::ListMulticastGroupsByFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for ListMulticastGroupsByFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMulticastGroupsByFuotaTaskOutcomeCallable ListMulticastGroupsByFuotaTaskCallable(const Model::ListMulticastGroupsByFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for ListMulticastGroupsByFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMulticastGroupsByFuotaTaskAsync(const Model::ListMulticastGroupsByFuotaTaskRequest& request, const ListMulticastGroupsByFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the network analyzer configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListNetworkAnalyzerConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkAnalyzerConfigurationsOutcome ListNetworkAnalyzerConfigurations(const Model::ListNetworkAnalyzerConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListNetworkAnalyzerConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworkAnalyzerConfigurationsOutcomeCallable ListNetworkAnalyzerConfigurationsCallable(const Model::ListNetworkAnalyzerConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListNetworkAnalyzerConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNetworkAnalyzerConfigurationsAsync(const Model::ListNetworkAnalyzerConfigurationsRequest& request, const ListNetworkAnalyzerConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the partner accounts associated with your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListPartnerAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnerAccountsOutcome ListPartnerAccounts(const Model::ListPartnerAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListPartnerAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPartnerAccountsOutcomeCallable ListPartnerAccountsCallable(const Model::ListPartnerAccountsRequest& request) const;

        /**
         * An Async wrapper for ListPartnerAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPartnerAccountsAsync(const Model::ListPartnerAccountsRequest& request, const ListPartnerAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List queued messages in the downlink queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListQueuedMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuedMessagesOutcome ListQueuedMessages(const Model::ListQueuedMessagesRequest& request) const;

        /**
         * A Callable wrapper for ListQueuedMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueuedMessagesOutcomeCallable ListQueuedMessagesCallable(const Model::ListQueuedMessagesRequest& request) const;

        /**
         * An Async wrapper for ListQueuedMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueuedMessagesAsync(const Model::ListQueuedMessagesRequest& request, const ListQueuedMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the service profiles registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListServiceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceProfilesOutcome ListServiceProfiles(const Model::ListServiceProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListServiceProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceProfilesOutcomeCallable ListServiceProfilesCallable(const Model::ListServiceProfilesRequest& request) const;

        /**
         * An Async wrapper for ListServiceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceProfilesAsync(const Model::ListServiceProfilesRequest& request, const ListServiceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListTagsForResource">AWS
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
         * <p>Lists the wireless devices registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWirelessDevicesOutcome ListWirelessDevices(const Model::ListWirelessDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListWirelessDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWirelessDevicesOutcomeCallable ListWirelessDevicesCallable(const Model::ListWirelessDevicesRequest& request) const;

        /**
         * An Async wrapper for ListWirelessDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWirelessDevicesAsync(const Model::ListWirelessDevicesRequest& request, const ListWirelessDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the wireless gateway tasks definitions registered to your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessGatewayTaskDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWirelessGatewayTaskDefinitionsOutcome ListWirelessGatewayTaskDefinitions(const Model::ListWirelessGatewayTaskDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListWirelessGatewayTaskDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWirelessGatewayTaskDefinitionsOutcomeCallable ListWirelessGatewayTaskDefinitionsCallable(const Model::ListWirelessGatewayTaskDefinitionsRequest& request) const;

        /**
         * An Async wrapper for ListWirelessGatewayTaskDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWirelessGatewayTaskDefinitionsAsync(const Model::ListWirelessGatewayTaskDefinitionsRequest& request, const ListWirelessGatewayTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the wireless gateways registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWirelessGatewaysOutcome ListWirelessGateways(const Model::ListWirelessGatewaysRequest& request) const;

        /**
         * A Callable wrapper for ListWirelessGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWirelessGatewaysOutcomeCallable ListWirelessGatewaysCallable(const Model::ListWirelessGatewaysRequest& request) const;

        /**
         * An Async wrapper for ListWirelessGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWirelessGatewaysAsync(const Model::ListWirelessGatewaysRequest& request, const ListWirelessGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the log-level override for a resource-ID and resource-type. This option
         * can be specified for a wireless gateway or a wireless device. A limit of 200 log
         * level override can be set per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/PutResourceLogLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourceLogLevelOutcome PutResourceLogLevel(const Model::PutResourceLogLevelRequest& request) const;

        /**
         * A Callable wrapper for PutResourceLogLevel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourceLogLevelOutcomeCallable PutResourceLogLevelCallable(const Model::PutResourceLogLevelRequest& request) const;

        /**
         * An Async wrapper for PutResourceLogLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourceLogLevelAsync(const Model::PutResourceLogLevelRequest& request, const PutResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the log-level overrides for all resources; both wireless devices and
         * wireless gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ResetAllResourceLogLevels">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetAllResourceLogLevelsOutcome ResetAllResourceLogLevels(const Model::ResetAllResourceLogLevelsRequest& request) const;

        /**
         * A Callable wrapper for ResetAllResourceLogLevels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetAllResourceLogLevelsOutcomeCallable ResetAllResourceLogLevelsCallable(const Model::ResetAllResourceLogLevelsRequest& request) const;

        /**
         * An Async wrapper for ResetAllResourceLogLevels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetAllResourceLogLevelsAsync(const Model::ResetAllResourceLogLevelsRequest& request, const ResetAllResourceLogLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the log-level override, if any, for a specific resource-ID and
         * resource-type. It can be used for a wireless device or a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ResetResourceLogLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetResourceLogLevelOutcome ResetResourceLogLevel(const Model::ResetResourceLogLevelRequest& request) const;

        /**
         * A Callable wrapper for ResetResourceLogLevel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetResourceLogLevelOutcomeCallable ResetResourceLogLevelCallable(const Model::ResetResourceLogLevelRequest& request) const;

        /**
         * An Async wrapper for ResetResourceLogLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetResourceLogLevelAsync(const Model::ResetResourceLogLevelRequest& request, const ResetResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends the specified data to a multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SendDataToMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDataToMulticastGroupOutcome SendDataToMulticastGroup(const Model::SendDataToMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for SendDataToMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendDataToMulticastGroupOutcomeCallable SendDataToMulticastGroupCallable(const Model::SendDataToMulticastGroupRequest& request) const;

        /**
         * An Async wrapper for SendDataToMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendDataToMulticastGroupAsync(const Model::SendDataToMulticastGroupRequest& request, const SendDataToMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a decrypted application data frame to a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SendDataToWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDataToWirelessDeviceOutcome SendDataToWirelessDevice(const Model::SendDataToWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for SendDataToWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendDataToWirelessDeviceOutcomeCallable SendDataToWirelessDeviceCallable(const Model::SendDataToWirelessDeviceRequest& request) const;

        /**
         * An Async wrapper for SendDataToWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendDataToWirelessDeviceAsync(const Model::SendDataToWirelessDeviceRequest& request, const SendDataToWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a bulk association of all qualifying wireless devices with a multicast
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartBulkAssociateWirelessDeviceWithMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome StartBulkAssociateWirelessDeviceWithMulticastGroup(const Model::StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for StartBulkAssociateWirelessDeviceWithMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBulkAssociateWirelessDeviceWithMulticastGroupOutcomeCallable StartBulkAssociateWirelessDeviceWithMulticastGroupCallable(const Model::StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request) const;

        /**
         * An Async wrapper for StartBulkAssociateWirelessDeviceWithMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBulkAssociateWirelessDeviceWithMulticastGroupAsync(const Model::StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request, const StartBulkAssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a bulk disassociatin of all qualifying wireless devices from a
         * multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartBulkDisassociateWirelessDeviceFromMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome StartBulkDisassociateWirelessDeviceFromMulticastGroup(const Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for StartBulkDisassociateWirelessDeviceFromMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcomeCallable StartBulkDisassociateWirelessDeviceFromMulticastGroupCallable(const Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request) const;

        /**
         * An Async wrapper for StartBulkDisassociateWirelessDeviceFromMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBulkDisassociateWirelessDeviceFromMulticastGroupAsync(const Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request, const StartBulkDisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFuotaTaskOutcome StartFuotaTask(const Model::StartFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for StartFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFuotaTaskOutcomeCallable StartFuotaTaskCallable(const Model::StartFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for StartFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFuotaTaskAsync(const Model::StartFuotaTaskRequest& request, const StartFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a multicast group session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartMulticastGroupSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMulticastGroupSessionOutcome StartMulticastGroupSession(const Model::StartMulticastGroupSessionRequest& request) const;

        /**
         * A Callable wrapper for StartMulticastGroupSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMulticastGroupSessionOutcomeCallable StartMulticastGroupSessionCallable(const Model::StartMulticastGroupSessionRequest& request) const;

        /**
         * An Async wrapper for StartMulticastGroupSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMulticastGroupSessionAsync(const Model::StartMulticastGroupSessionRequest& request, const StartMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TagResource">AWS
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
         * <p>Simulates a provisioned device by sending an uplink data payload of
         * <code>Hello</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TestWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::TestWirelessDeviceOutcome TestWirelessDevice(const Model::TestWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for TestWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestWirelessDeviceOutcomeCallable TestWirelessDeviceCallable(const Model::TestWirelessDeviceRequest& request) const;

        /**
         * An Async wrapper for TestWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestWirelessDeviceAsync(const Model::TestWirelessDeviceRequest& request, const TestWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UntagResource">AWS
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
         * <p>Updates properties of a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDestinationOutcome UpdateDestination(const Model::UpdateDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDestinationOutcomeCallable UpdateDestinationCallable(const Model::UpdateDestinationRequest& request) const;

        /**
         * An Async wrapper for UpdateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDestinationAsync(const Model::UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the event configuration based on resource types.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateEventConfigurationByResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventConfigurationByResourceTypesOutcome UpdateEventConfigurationByResourceTypes(const Model::UpdateEventConfigurationByResourceTypesRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventConfigurationByResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventConfigurationByResourceTypesOutcomeCallable UpdateEventConfigurationByResourceTypesCallable(const Model::UpdateEventConfigurationByResourceTypesRequest& request) const;

        /**
         * An Async wrapper for UpdateEventConfigurationByResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventConfigurationByResourceTypesAsync(const Model::UpdateEventConfigurationByResourceTypesRequest& request, const UpdateEventConfigurationByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties of a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFuotaTaskOutcome UpdateFuotaTask(const Model::UpdateFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for UpdateFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFuotaTaskOutcomeCallable UpdateFuotaTaskCallable(const Model::UpdateFuotaTaskRequest& request) const;

        /**
         * An Async wrapper for UpdateFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFuotaTaskAsync(const Model::UpdateFuotaTaskRequest& request, const UpdateFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set default log level, or log levels by resource types. This can be for
         * wireless device log options or wireless gateways log options and is used to
         * control the log messages that'll be displayed in CloudWatch.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateLogLevelsByResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLogLevelsByResourceTypesOutcome UpdateLogLevelsByResourceTypes(const Model::UpdateLogLevelsByResourceTypesRequest& request) const;

        /**
         * A Callable wrapper for UpdateLogLevelsByResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLogLevelsByResourceTypesOutcomeCallable UpdateLogLevelsByResourceTypesCallable(const Model::UpdateLogLevelsByResourceTypesRequest& request) const;

        /**
         * An Async wrapper for UpdateLogLevelsByResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLogLevelsByResourceTypesAsync(const Model::UpdateLogLevelsByResourceTypesRequest& request, const UpdateLogLevelsByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties of a multicast group session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMulticastGroupOutcome UpdateMulticastGroup(const Model::UpdateMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMulticastGroupOutcomeCallable UpdateMulticastGroupCallable(const Model::UpdateMulticastGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMulticastGroupAsync(const Model::UpdateMulticastGroupRequest& request, const UpdateMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkAnalyzerConfigurationOutcome UpdateNetworkAnalyzerConfiguration(const Model::UpdateNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkAnalyzerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNetworkAnalyzerConfigurationOutcomeCallable UpdateNetworkAnalyzerConfigurationCallable(const Model::UpdateNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateNetworkAnalyzerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNetworkAnalyzerConfigurationAsync(const Model::UpdateNetworkAnalyzerConfigurationRequest& request, const UpdateNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties of a partner account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdatePartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartnerAccountOutcome UpdatePartnerAccount(const Model::UpdatePartnerAccountRequest& request) const;

        /**
         * A Callable wrapper for UpdatePartnerAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePartnerAccountOutcomeCallable UpdatePartnerAccountCallable(const Model::UpdatePartnerAccountRequest& request) const;

        /**
         * An Async wrapper for UpdatePartnerAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePartnerAccountAsync(const Model::UpdatePartnerAccountRequest& request, const UpdatePartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the event configuration for a particular resource
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateResourceEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceEventConfigurationOutcome UpdateResourceEventConfiguration(const Model::UpdateResourceEventConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceEventConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceEventConfigurationOutcomeCallable UpdateResourceEventConfigurationCallable(const Model::UpdateResourceEventConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateResourceEventConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceEventConfigurationAsync(const Model::UpdateResourceEventConfigurationRequest& request, const UpdateResourceEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the position information of a given wireless device or a wireless
         * gateway resource. The postion coordinates are based on the <a
         * href="https://gisgeography.com/wgs84-world-geodetic-system/"> World Geodetic
         * System (WGS84)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateResourcePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourcePositionOutcome UpdateResourcePosition(const Model::UpdateResourcePositionRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourcePosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourcePositionOutcomeCallable UpdateResourcePositionCallable(const Model::UpdateResourcePositionRequest& request) const;

        /**
         * An Async wrapper for UpdateResourcePosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourcePositionAsync(const Model::UpdateResourcePositionRequest& request, const UpdateResourcePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties of a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWirelessDeviceOutcome UpdateWirelessDevice(const Model::UpdateWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for UpdateWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWirelessDeviceOutcomeCallable UpdateWirelessDeviceCallable(const Model::UpdateWirelessDeviceRequest& request) const;

        /**
         * An Async wrapper for UpdateWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWirelessDeviceAsync(const Model::UpdateWirelessDeviceRequest& request, const UpdateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties of a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWirelessGatewayOutcome UpdateWirelessGateway(const Model::UpdateWirelessGatewayRequest& request) const;

        /**
         * A Callable wrapper for UpdateWirelessGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWirelessGatewayOutcomeCallable UpdateWirelessGatewayCallable(const Model::UpdateWirelessGatewayRequest& request) const;

        /**
         * An Async wrapper for UpdateWirelessGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWirelessGatewayAsync(const Model::UpdateWirelessGatewayRequest& request, const UpdateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTWirelessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTWirelessClient>;
      void init(const IoTWirelessClientConfiguration& clientConfiguration);

      IoTWirelessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTWirelessEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTWireless
} // namespace Aws
