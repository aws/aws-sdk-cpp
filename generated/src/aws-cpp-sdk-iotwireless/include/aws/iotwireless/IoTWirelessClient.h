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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTWirelessClientConfiguration ClientConfigurationType;
      typedef IoTWirelessEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTWirelessClient(const Aws::IoTWireless::IoTWirelessClientConfiguration& clientConfiguration = Aws::IoTWireless::IoTWirelessClientConfiguration(),
                          std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTWirelessClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::IoTWireless::IoTWirelessClientConfiguration& clientConfiguration = Aws::IoTWireless::IoTWirelessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTWirelessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AssociateAwsAccountWithPartnerAccountRequestT = Model::AssociateAwsAccountWithPartnerAccountRequest>
        Model::AssociateAwsAccountWithPartnerAccountOutcomeCallable AssociateAwsAccountWithPartnerAccountCallable(const AssociateAwsAccountWithPartnerAccountRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::AssociateAwsAccountWithPartnerAccount, request);
        }

        /**
         * An Async wrapper for AssociateAwsAccountWithPartnerAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAwsAccountWithPartnerAccountRequestT = Model::AssociateAwsAccountWithPartnerAccountRequest>
        void AssociateAwsAccountWithPartnerAccountAsync(const AssociateAwsAccountWithPartnerAccountRequestT& request, const AssociateAwsAccountWithPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::AssociateAwsAccountWithPartnerAccount, request, handler, context);
        }

        /**
         * <p>Associate a multicast group with a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateMulticastGroupWithFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMulticastGroupWithFuotaTaskOutcome AssociateMulticastGroupWithFuotaTask(const Model::AssociateMulticastGroupWithFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for AssociateMulticastGroupWithFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateMulticastGroupWithFuotaTaskRequestT = Model::AssociateMulticastGroupWithFuotaTaskRequest>
        Model::AssociateMulticastGroupWithFuotaTaskOutcomeCallable AssociateMulticastGroupWithFuotaTaskCallable(const AssociateMulticastGroupWithFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::AssociateMulticastGroupWithFuotaTask, request);
        }

        /**
         * An Async wrapper for AssociateMulticastGroupWithFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateMulticastGroupWithFuotaTaskRequestT = Model::AssociateMulticastGroupWithFuotaTaskRequest>
        void AssociateMulticastGroupWithFuotaTaskAsync(const AssociateMulticastGroupWithFuotaTaskRequestT& request, const AssociateMulticastGroupWithFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::AssociateMulticastGroupWithFuotaTask, request, handler, context);
        }

        /**
         * <p>Associate a wireless device with a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessDeviceWithFuotaTaskOutcome AssociateWirelessDeviceWithFuotaTask(const Model::AssociateWirelessDeviceWithFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for AssociateWirelessDeviceWithFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateWirelessDeviceWithFuotaTaskRequestT = Model::AssociateWirelessDeviceWithFuotaTaskRequest>
        Model::AssociateWirelessDeviceWithFuotaTaskOutcomeCallable AssociateWirelessDeviceWithFuotaTaskCallable(const AssociateWirelessDeviceWithFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::AssociateWirelessDeviceWithFuotaTask, request);
        }

        /**
         * An Async wrapper for AssociateWirelessDeviceWithFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateWirelessDeviceWithFuotaTaskRequestT = Model::AssociateWirelessDeviceWithFuotaTaskRequest>
        void AssociateWirelessDeviceWithFuotaTaskAsync(const AssociateWirelessDeviceWithFuotaTaskRequestT& request, const AssociateWirelessDeviceWithFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::AssociateWirelessDeviceWithFuotaTask, request, handler, context);
        }

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
        template<typename AssociateWirelessDeviceWithMulticastGroupRequestT = Model::AssociateWirelessDeviceWithMulticastGroupRequest>
        Model::AssociateWirelessDeviceWithMulticastGroupOutcomeCallable AssociateWirelessDeviceWithMulticastGroupCallable(const AssociateWirelessDeviceWithMulticastGroupRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::AssociateWirelessDeviceWithMulticastGroup, request);
        }

        /**
         * An Async wrapper for AssociateWirelessDeviceWithMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateWirelessDeviceWithMulticastGroupRequestT = Model::AssociateWirelessDeviceWithMulticastGroupRequest>
        void AssociateWirelessDeviceWithMulticastGroupAsync(const AssociateWirelessDeviceWithMulticastGroupRequestT& request, const AssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::AssociateWirelessDeviceWithMulticastGroup, request, handler, context);
        }

        /**
         * <p>Associates a wireless device with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithThing">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessDeviceWithThingOutcome AssociateWirelessDeviceWithThing(const Model::AssociateWirelessDeviceWithThingRequest& request) const;

        /**
         * A Callable wrapper for AssociateWirelessDeviceWithThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateWirelessDeviceWithThingRequestT = Model::AssociateWirelessDeviceWithThingRequest>
        Model::AssociateWirelessDeviceWithThingOutcomeCallable AssociateWirelessDeviceWithThingCallable(const AssociateWirelessDeviceWithThingRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::AssociateWirelessDeviceWithThing, request);
        }

        /**
         * An Async wrapper for AssociateWirelessDeviceWithThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateWirelessDeviceWithThingRequestT = Model::AssociateWirelessDeviceWithThingRequest>
        void AssociateWirelessDeviceWithThingAsync(const AssociateWirelessDeviceWithThingRequestT& request, const AssociateWirelessDeviceWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::AssociateWirelessDeviceWithThing, request, handler, context);
        }

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
        template<typename AssociateWirelessGatewayWithCertificateRequestT = Model::AssociateWirelessGatewayWithCertificateRequest>
        Model::AssociateWirelessGatewayWithCertificateOutcomeCallable AssociateWirelessGatewayWithCertificateCallable(const AssociateWirelessGatewayWithCertificateRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::AssociateWirelessGatewayWithCertificate, request);
        }

        /**
         * An Async wrapper for AssociateWirelessGatewayWithCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateWirelessGatewayWithCertificateRequestT = Model::AssociateWirelessGatewayWithCertificateRequest>
        void AssociateWirelessGatewayWithCertificateAsync(const AssociateWirelessGatewayWithCertificateRequestT& request, const AssociateWirelessGatewayWithCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::AssociateWirelessGatewayWithCertificate, request, handler, context);
        }

        /**
         * <p>Associates a wireless gateway with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithThing">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessGatewayWithThingOutcome AssociateWirelessGatewayWithThing(const Model::AssociateWirelessGatewayWithThingRequest& request) const;

        /**
         * A Callable wrapper for AssociateWirelessGatewayWithThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateWirelessGatewayWithThingRequestT = Model::AssociateWirelessGatewayWithThingRequest>
        Model::AssociateWirelessGatewayWithThingOutcomeCallable AssociateWirelessGatewayWithThingCallable(const AssociateWirelessGatewayWithThingRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::AssociateWirelessGatewayWithThing, request);
        }

        /**
         * An Async wrapper for AssociateWirelessGatewayWithThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateWirelessGatewayWithThingRequestT = Model::AssociateWirelessGatewayWithThingRequest>
        void AssociateWirelessGatewayWithThingAsync(const AssociateWirelessGatewayWithThingRequestT& request, const AssociateWirelessGatewayWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::AssociateWirelessGatewayWithThing, request, handler, context);
        }

        /**
         * <p>Cancels an existing multicast group session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CancelMulticastGroupSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMulticastGroupSessionOutcome CancelMulticastGroupSession(const Model::CancelMulticastGroupSessionRequest& request) const;

        /**
         * A Callable wrapper for CancelMulticastGroupSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMulticastGroupSessionRequestT = Model::CancelMulticastGroupSessionRequest>
        Model::CancelMulticastGroupSessionOutcomeCallable CancelMulticastGroupSessionCallable(const CancelMulticastGroupSessionRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CancelMulticastGroupSession, request);
        }

        /**
         * An Async wrapper for CancelMulticastGroupSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMulticastGroupSessionRequestT = Model::CancelMulticastGroupSessionRequest>
        void CancelMulticastGroupSessionAsync(const CancelMulticastGroupSessionRequestT& request, const CancelMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CancelMulticastGroupSession, request, handler, context);
        }

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
        template<typename CreateDestinationRequestT = Model::CreateDestinationRequest>
        Model::CreateDestinationOutcomeCallable CreateDestinationCallable(const CreateDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateDestination, request);
        }

        /**
         * An Async wrapper for CreateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDestinationRequestT = Model::CreateDestinationRequest>
        void CreateDestinationAsync(const CreateDestinationRequestT& request, const CreateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateDestination, request, handler, context);
        }

        /**
         * <p>Creates a new device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceProfileOutcome CreateDeviceProfile(const Model::CreateDeviceProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateDeviceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeviceProfileRequestT = Model::CreateDeviceProfileRequest>
        Model::CreateDeviceProfileOutcomeCallable CreateDeviceProfileCallable(const CreateDeviceProfileRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateDeviceProfile, request);
        }

        /**
         * An Async wrapper for CreateDeviceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeviceProfileRequestT = Model::CreateDeviceProfileRequest>
        void CreateDeviceProfileAsync(const CreateDeviceProfileRequestT& request, const CreateDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateDeviceProfile, request, handler, context);
        }

        /**
         * <p>Creates a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFuotaTaskOutcome CreateFuotaTask(const Model::CreateFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFuotaTaskRequestT = Model::CreateFuotaTaskRequest>
        Model::CreateFuotaTaskOutcomeCallable CreateFuotaTaskCallable(const CreateFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateFuotaTask, request);
        }

        /**
         * An Async wrapper for CreateFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFuotaTaskRequestT = Model::CreateFuotaTaskRequest>
        void CreateFuotaTaskAsync(const CreateFuotaTaskRequestT& request, const CreateFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateFuotaTask, request, handler, context);
        }

        /**
         * <p>Creates a multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMulticastGroupOutcome CreateMulticastGroup(const Model::CreateMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMulticastGroupRequestT = Model::CreateMulticastGroupRequest>
        Model::CreateMulticastGroupOutcomeCallable CreateMulticastGroupCallable(const CreateMulticastGroupRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateMulticastGroup, request);
        }

        /**
         * An Async wrapper for CreateMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMulticastGroupRequestT = Model::CreateMulticastGroupRequest>
        void CreateMulticastGroupAsync(const CreateMulticastGroupRequestT& request, const CreateMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateMulticastGroup, request, handler, context);
        }

        /**
         * <p>Creates a new network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkAnalyzerConfigurationOutcome CreateNetworkAnalyzerConfiguration(const Model::CreateNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkAnalyzerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNetworkAnalyzerConfigurationRequestT = Model::CreateNetworkAnalyzerConfigurationRequest>
        Model::CreateNetworkAnalyzerConfigurationOutcomeCallable CreateNetworkAnalyzerConfigurationCallable(const CreateNetworkAnalyzerConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateNetworkAnalyzerConfiguration, request);
        }

        /**
         * An Async wrapper for CreateNetworkAnalyzerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNetworkAnalyzerConfigurationRequestT = Model::CreateNetworkAnalyzerConfigurationRequest>
        void CreateNetworkAnalyzerConfigurationAsync(const CreateNetworkAnalyzerConfigurationRequestT& request, const CreateNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateNetworkAnalyzerConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceProfileOutcome CreateServiceProfile(const Model::CreateServiceProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceProfileRequestT = Model::CreateServiceProfileRequest>
        Model::CreateServiceProfileOutcomeCallable CreateServiceProfileCallable(const CreateServiceProfileRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateServiceProfile, request);
        }

        /**
         * An Async wrapper for CreateServiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceProfileRequestT = Model::CreateServiceProfileRequest>
        void CreateServiceProfileAsync(const CreateServiceProfileRequestT& request, const CreateServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateServiceProfile, request, handler, context);
        }

        /**
         * <p>Provisions a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessDeviceOutcome CreateWirelessDevice(const Model::CreateWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for CreateWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWirelessDeviceRequestT = Model::CreateWirelessDeviceRequest>
        Model::CreateWirelessDeviceOutcomeCallable CreateWirelessDeviceCallable(const CreateWirelessDeviceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateWirelessDevice, request);
        }

        /**
         * An Async wrapper for CreateWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWirelessDeviceRequestT = Model::CreateWirelessDeviceRequest>
        void CreateWirelessDeviceAsync(const CreateWirelessDeviceRequestT& request, const CreateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateWirelessDevice, request, handler, context);
        }

        /**
         * <p>Provisions a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayOutcome CreateWirelessGateway(const Model::CreateWirelessGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateWirelessGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWirelessGatewayRequestT = Model::CreateWirelessGatewayRequest>
        Model::CreateWirelessGatewayOutcomeCallable CreateWirelessGatewayCallable(const CreateWirelessGatewayRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateWirelessGateway, request);
        }

        /**
         * An Async wrapper for CreateWirelessGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWirelessGatewayRequestT = Model::CreateWirelessGatewayRequest>
        void CreateWirelessGatewayAsync(const CreateWirelessGatewayRequestT& request, const CreateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateWirelessGateway, request, handler, context);
        }

        /**
         * <p>Creates a task for a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayTaskOutcome CreateWirelessGatewayTask(const Model::CreateWirelessGatewayTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateWirelessGatewayTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWirelessGatewayTaskRequestT = Model::CreateWirelessGatewayTaskRequest>
        Model::CreateWirelessGatewayTaskOutcomeCallable CreateWirelessGatewayTaskCallable(const CreateWirelessGatewayTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateWirelessGatewayTask, request);
        }

        /**
         * An Async wrapper for CreateWirelessGatewayTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWirelessGatewayTaskRequestT = Model::CreateWirelessGatewayTaskRequest>
        void CreateWirelessGatewayTaskAsync(const CreateWirelessGatewayTaskRequestT& request, const CreateWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateWirelessGatewayTask, request, handler, context);
        }

        /**
         * <p>Creates a gateway task definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayTaskDefinitionOutcome CreateWirelessGatewayTaskDefinition(const Model::CreateWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * A Callable wrapper for CreateWirelessGatewayTaskDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWirelessGatewayTaskDefinitionRequestT = Model::CreateWirelessGatewayTaskDefinitionRequest>
        Model::CreateWirelessGatewayTaskDefinitionOutcomeCallable CreateWirelessGatewayTaskDefinitionCallable(const CreateWirelessGatewayTaskDefinitionRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::CreateWirelessGatewayTaskDefinition, request);
        }

        /**
         * An Async wrapper for CreateWirelessGatewayTaskDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWirelessGatewayTaskDefinitionRequestT = Model::CreateWirelessGatewayTaskDefinitionRequest>
        void CreateWirelessGatewayTaskDefinitionAsync(const CreateWirelessGatewayTaskDefinitionRequestT& request, const CreateWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::CreateWirelessGatewayTaskDefinition, request, handler, context);
        }

        /**
         * <p>Deletes a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDestinationOutcome DeleteDestination(const Model::DeleteDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDestinationRequestT = Model::DeleteDestinationRequest>
        Model::DeleteDestinationOutcomeCallable DeleteDestinationCallable(const DeleteDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteDestination, request);
        }

        /**
         * An Async wrapper for DeleteDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDestinationRequestT = Model::DeleteDestinationRequest>
        void DeleteDestinationAsync(const DeleteDestinationRequestT& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteDestination, request, handler, context);
        }

        /**
         * <p>Deletes a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceProfileOutcome DeleteDeviceProfile(const Model::DeleteDeviceProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeviceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeviceProfileRequestT = Model::DeleteDeviceProfileRequest>
        Model::DeleteDeviceProfileOutcomeCallable DeleteDeviceProfileCallable(const DeleteDeviceProfileRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteDeviceProfile, request);
        }

        /**
         * An Async wrapper for DeleteDeviceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeviceProfileRequestT = Model::DeleteDeviceProfileRequest>
        void DeleteDeviceProfileAsync(const DeleteDeviceProfileRequestT& request, const DeleteDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteDeviceProfile, request, handler, context);
        }

        /**
         * <p>Deletes a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFuotaTaskOutcome DeleteFuotaTask(const Model::DeleteFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFuotaTaskRequestT = Model::DeleteFuotaTaskRequest>
        Model::DeleteFuotaTaskOutcomeCallable DeleteFuotaTaskCallable(const DeleteFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteFuotaTask, request);
        }

        /**
         * An Async wrapper for DeleteFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFuotaTaskRequestT = Model::DeleteFuotaTaskRequest>
        void DeleteFuotaTaskAsync(const DeleteFuotaTaskRequestT& request, const DeleteFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteFuotaTask, request, handler, context);
        }

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
        template<typename DeleteMulticastGroupRequestT = Model::DeleteMulticastGroupRequest>
        Model::DeleteMulticastGroupOutcomeCallable DeleteMulticastGroupCallable(const DeleteMulticastGroupRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteMulticastGroup, request);
        }

        /**
         * An Async wrapper for DeleteMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMulticastGroupRequestT = Model::DeleteMulticastGroupRequest>
        void DeleteMulticastGroupAsync(const DeleteMulticastGroupRequestT& request, const DeleteMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteMulticastGroup, request, handler, context);
        }

        /**
         * <p>Deletes a network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkAnalyzerConfigurationOutcome DeleteNetworkAnalyzerConfiguration(const Model::DeleteNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkAnalyzerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNetworkAnalyzerConfigurationRequestT = Model::DeleteNetworkAnalyzerConfigurationRequest>
        Model::DeleteNetworkAnalyzerConfigurationOutcomeCallable DeleteNetworkAnalyzerConfigurationCallable(const DeleteNetworkAnalyzerConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteNetworkAnalyzerConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteNetworkAnalyzerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNetworkAnalyzerConfigurationRequestT = Model::DeleteNetworkAnalyzerConfigurationRequest>
        void DeleteNetworkAnalyzerConfigurationAsync(const DeleteNetworkAnalyzerConfigurationRequestT& request, const DeleteNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteNetworkAnalyzerConfiguration, request, handler, context);
        }

        /**
         * <p>Remove queued messages from the downlink queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteQueuedMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueuedMessagesOutcome DeleteQueuedMessages(const Model::DeleteQueuedMessagesRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueuedMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueuedMessagesRequestT = Model::DeleteQueuedMessagesRequest>
        Model::DeleteQueuedMessagesOutcomeCallable DeleteQueuedMessagesCallable(const DeleteQueuedMessagesRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteQueuedMessages, request);
        }

        /**
         * An Async wrapper for DeleteQueuedMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueuedMessagesRequestT = Model::DeleteQueuedMessagesRequest>
        void DeleteQueuedMessagesAsync(const DeleteQueuedMessagesRequestT& request, const DeleteQueuedMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteQueuedMessages, request, handler, context);
        }

        /**
         * <p>Deletes a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceProfileOutcome DeleteServiceProfile(const Model::DeleteServiceProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceProfileRequestT = Model::DeleteServiceProfileRequest>
        Model::DeleteServiceProfileOutcomeCallable DeleteServiceProfileCallable(const DeleteServiceProfileRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteServiceProfile, request);
        }

        /**
         * An Async wrapper for DeleteServiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceProfileRequestT = Model::DeleteServiceProfileRequest>
        void DeleteServiceProfileAsync(const DeleteServiceProfileRequestT& request, const DeleteServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteServiceProfile, request, handler, context);
        }

        /**
         * <p>Deletes a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessDeviceOutcome DeleteWirelessDevice(const Model::DeleteWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWirelessDeviceRequestT = Model::DeleteWirelessDeviceRequest>
        Model::DeleteWirelessDeviceOutcomeCallable DeleteWirelessDeviceCallable(const DeleteWirelessDeviceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteWirelessDevice, request);
        }

        /**
         * An Async wrapper for DeleteWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWirelessDeviceRequestT = Model::DeleteWirelessDeviceRequest>
        void DeleteWirelessDeviceAsync(const DeleteWirelessDeviceRequestT& request, const DeleteWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteWirelessDevice, request, handler, context);
        }

        /**
         * <p>Delete an import task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessDeviceImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessDeviceImportTaskOutcome DeleteWirelessDeviceImportTask(const Model::DeleteWirelessDeviceImportTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteWirelessDeviceImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWirelessDeviceImportTaskRequestT = Model::DeleteWirelessDeviceImportTaskRequest>
        Model::DeleteWirelessDeviceImportTaskOutcomeCallable DeleteWirelessDeviceImportTaskCallable(const DeleteWirelessDeviceImportTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteWirelessDeviceImportTask, request);
        }

        /**
         * An Async wrapper for DeleteWirelessDeviceImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWirelessDeviceImportTaskRequestT = Model::DeleteWirelessDeviceImportTaskRequest>
        void DeleteWirelessDeviceImportTaskAsync(const DeleteWirelessDeviceImportTaskRequestT& request, const DeleteWirelessDeviceImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteWirelessDeviceImportTask, request, handler, context);
        }

        /**
         * <p>Deletes a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayOutcome DeleteWirelessGateway(const Model::DeleteWirelessGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteWirelessGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWirelessGatewayRequestT = Model::DeleteWirelessGatewayRequest>
        Model::DeleteWirelessGatewayOutcomeCallable DeleteWirelessGatewayCallable(const DeleteWirelessGatewayRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteWirelessGateway, request);
        }

        /**
         * An Async wrapper for DeleteWirelessGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWirelessGatewayRequestT = Model::DeleteWirelessGatewayRequest>
        void DeleteWirelessGatewayAsync(const DeleteWirelessGatewayRequestT& request, const DeleteWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteWirelessGateway, request, handler, context);
        }

        /**
         * <p>Deletes a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayTaskOutcome DeleteWirelessGatewayTask(const Model::DeleteWirelessGatewayTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteWirelessGatewayTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWirelessGatewayTaskRequestT = Model::DeleteWirelessGatewayTaskRequest>
        Model::DeleteWirelessGatewayTaskOutcomeCallable DeleteWirelessGatewayTaskCallable(const DeleteWirelessGatewayTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteWirelessGatewayTask, request);
        }

        /**
         * An Async wrapper for DeleteWirelessGatewayTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWirelessGatewayTaskRequestT = Model::DeleteWirelessGatewayTaskRequest>
        void DeleteWirelessGatewayTaskAsync(const DeleteWirelessGatewayTaskRequestT& request, const DeleteWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteWirelessGatewayTask, request, handler, context);
        }

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
        template<typename DeleteWirelessGatewayTaskDefinitionRequestT = Model::DeleteWirelessGatewayTaskDefinitionRequest>
        Model::DeleteWirelessGatewayTaskDefinitionOutcomeCallable DeleteWirelessGatewayTaskDefinitionCallable(const DeleteWirelessGatewayTaskDefinitionRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeleteWirelessGatewayTaskDefinition, request);
        }

        /**
         * An Async wrapper for DeleteWirelessGatewayTaskDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWirelessGatewayTaskDefinitionRequestT = Model::DeleteWirelessGatewayTaskDefinitionRequest>
        void DeleteWirelessGatewayTaskDefinitionAsync(const DeleteWirelessGatewayTaskDefinitionRequestT& request, const DeleteWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeleteWirelessGatewayTaskDefinition, request, handler, context);
        }

        /**
         * <p>Deregister a wireless device from AWS IoT Wireless.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeregisterWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterWirelessDeviceOutcome DeregisterWirelessDevice(const Model::DeregisterWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterWirelessDeviceRequestT = Model::DeregisterWirelessDeviceRequest>
        Model::DeregisterWirelessDeviceOutcomeCallable DeregisterWirelessDeviceCallable(const DeregisterWirelessDeviceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DeregisterWirelessDevice, request);
        }

        /**
         * An Async wrapper for DeregisterWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterWirelessDeviceRequestT = Model::DeregisterWirelessDeviceRequest>
        void DeregisterWirelessDeviceAsync(const DeregisterWirelessDeviceRequestT& request, const DeregisterWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DeregisterWirelessDevice, request, handler, context);
        }

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
        template<typename DisassociateAwsAccountFromPartnerAccountRequestT = Model::DisassociateAwsAccountFromPartnerAccountRequest>
        Model::DisassociateAwsAccountFromPartnerAccountOutcomeCallable DisassociateAwsAccountFromPartnerAccountCallable(const DisassociateAwsAccountFromPartnerAccountRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DisassociateAwsAccountFromPartnerAccount, request);
        }

        /**
         * An Async wrapper for DisassociateAwsAccountFromPartnerAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateAwsAccountFromPartnerAccountRequestT = Model::DisassociateAwsAccountFromPartnerAccountRequest>
        void DisassociateAwsAccountFromPartnerAccountAsync(const DisassociateAwsAccountFromPartnerAccountRequestT& request, const DisassociateAwsAccountFromPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DisassociateAwsAccountFromPartnerAccount, request, handler, context);
        }

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
        template<typename DisassociateMulticastGroupFromFuotaTaskRequestT = Model::DisassociateMulticastGroupFromFuotaTaskRequest>
        Model::DisassociateMulticastGroupFromFuotaTaskOutcomeCallable DisassociateMulticastGroupFromFuotaTaskCallable(const DisassociateMulticastGroupFromFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DisassociateMulticastGroupFromFuotaTask, request);
        }

        /**
         * An Async wrapper for DisassociateMulticastGroupFromFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMulticastGroupFromFuotaTaskRequestT = Model::DisassociateMulticastGroupFromFuotaTaskRequest>
        void DisassociateMulticastGroupFromFuotaTaskAsync(const DisassociateMulticastGroupFromFuotaTaskRequestT& request, const DisassociateMulticastGroupFromFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DisassociateMulticastGroupFromFuotaTask, request, handler, context);
        }

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
        template<typename DisassociateWirelessDeviceFromFuotaTaskRequestT = Model::DisassociateWirelessDeviceFromFuotaTaskRequest>
        Model::DisassociateWirelessDeviceFromFuotaTaskOutcomeCallable DisassociateWirelessDeviceFromFuotaTaskCallable(const DisassociateWirelessDeviceFromFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DisassociateWirelessDeviceFromFuotaTask, request);
        }

        /**
         * An Async wrapper for DisassociateWirelessDeviceFromFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateWirelessDeviceFromFuotaTaskRequestT = Model::DisassociateWirelessDeviceFromFuotaTaskRequest>
        void DisassociateWirelessDeviceFromFuotaTaskAsync(const DisassociateWirelessDeviceFromFuotaTaskRequestT& request, const DisassociateWirelessDeviceFromFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DisassociateWirelessDeviceFromFuotaTask, request, handler, context);
        }

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
        template<typename DisassociateWirelessDeviceFromMulticastGroupRequestT = Model::DisassociateWirelessDeviceFromMulticastGroupRequest>
        Model::DisassociateWirelessDeviceFromMulticastGroupOutcomeCallable DisassociateWirelessDeviceFromMulticastGroupCallable(const DisassociateWirelessDeviceFromMulticastGroupRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DisassociateWirelessDeviceFromMulticastGroup, request);
        }

        /**
         * An Async wrapper for DisassociateWirelessDeviceFromMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateWirelessDeviceFromMulticastGroupRequestT = Model::DisassociateWirelessDeviceFromMulticastGroupRequest>
        void DisassociateWirelessDeviceFromMulticastGroupAsync(const DisassociateWirelessDeviceFromMulticastGroupRequestT& request, const DisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DisassociateWirelessDeviceFromMulticastGroup, request, handler, context);
        }

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
        template<typename DisassociateWirelessDeviceFromThingRequestT = Model::DisassociateWirelessDeviceFromThingRequest>
        Model::DisassociateWirelessDeviceFromThingOutcomeCallable DisassociateWirelessDeviceFromThingCallable(const DisassociateWirelessDeviceFromThingRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DisassociateWirelessDeviceFromThing, request);
        }

        /**
         * An Async wrapper for DisassociateWirelessDeviceFromThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateWirelessDeviceFromThingRequestT = Model::DisassociateWirelessDeviceFromThingRequest>
        void DisassociateWirelessDeviceFromThingAsync(const DisassociateWirelessDeviceFromThingRequestT& request, const DisassociateWirelessDeviceFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DisassociateWirelessDeviceFromThing, request, handler, context);
        }

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
        template<typename DisassociateWirelessGatewayFromCertificateRequestT = Model::DisassociateWirelessGatewayFromCertificateRequest>
        Model::DisassociateWirelessGatewayFromCertificateOutcomeCallable DisassociateWirelessGatewayFromCertificateCallable(const DisassociateWirelessGatewayFromCertificateRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DisassociateWirelessGatewayFromCertificate, request);
        }

        /**
         * An Async wrapper for DisassociateWirelessGatewayFromCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateWirelessGatewayFromCertificateRequestT = Model::DisassociateWirelessGatewayFromCertificateRequest>
        void DisassociateWirelessGatewayFromCertificateAsync(const DisassociateWirelessGatewayFromCertificateRequestT& request, const DisassociateWirelessGatewayFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DisassociateWirelessGatewayFromCertificate, request, handler, context);
        }

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
        template<typename DisassociateWirelessGatewayFromThingRequestT = Model::DisassociateWirelessGatewayFromThingRequest>
        Model::DisassociateWirelessGatewayFromThingOutcomeCallable DisassociateWirelessGatewayFromThingCallable(const DisassociateWirelessGatewayFromThingRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::DisassociateWirelessGatewayFromThing, request);
        }

        /**
         * An Async wrapper for DisassociateWirelessGatewayFromThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateWirelessGatewayFromThingRequestT = Model::DisassociateWirelessGatewayFromThingRequest>
        void DisassociateWirelessGatewayFromThingAsync(const DisassociateWirelessGatewayFromThingRequestT& request, const DisassociateWirelessGatewayFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::DisassociateWirelessGatewayFromThing, request, handler, context);
        }

        /**
         * <p>Gets information about a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDestinationOutcome GetDestination(const Model::GetDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDestinationRequestT = Model::GetDestinationRequest>
        Model::GetDestinationOutcomeCallable GetDestinationCallable(const GetDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetDestination, request);
        }

        /**
         * An Async wrapper for GetDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDestinationRequestT = Model::GetDestinationRequest>
        void GetDestinationAsync(const GetDestinationRequestT& request, const GetDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetDestination, request, handler, context);
        }

        /**
         * <p>Gets information about a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceProfileOutcome GetDeviceProfile(const Model::GetDeviceProfileRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceProfileRequestT = Model::GetDeviceProfileRequest>
        Model::GetDeviceProfileOutcomeCallable GetDeviceProfileCallable(const GetDeviceProfileRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetDeviceProfile, request);
        }

        /**
         * An Async wrapper for GetDeviceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceProfileRequestT = Model::GetDeviceProfileRequest>
        void GetDeviceProfileAsync(const GetDeviceProfileRequestT& request, const GetDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetDeviceProfile, request, handler, context);
        }

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
        template<typename GetEventConfigurationByResourceTypesRequestT = Model::GetEventConfigurationByResourceTypesRequest>
        Model::GetEventConfigurationByResourceTypesOutcomeCallable GetEventConfigurationByResourceTypesCallable(const GetEventConfigurationByResourceTypesRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetEventConfigurationByResourceTypes, request);
        }

        /**
         * An Async wrapper for GetEventConfigurationByResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventConfigurationByResourceTypesRequestT = Model::GetEventConfigurationByResourceTypesRequest>
        void GetEventConfigurationByResourceTypesAsync(const GetEventConfigurationByResourceTypesRequestT& request, const GetEventConfigurationByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetEventConfigurationByResourceTypes, request, handler, context);
        }

        /**
         * <p>Gets information about a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFuotaTaskOutcome GetFuotaTask(const Model::GetFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for GetFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFuotaTaskRequestT = Model::GetFuotaTaskRequest>
        Model::GetFuotaTaskOutcomeCallable GetFuotaTaskCallable(const GetFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetFuotaTask, request);
        }

        /**
         * An Async wrapper for GetFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFuotaTaskRequestT = Model::GetFuotaTaskRequest>
        void GetFuotaTaskAsync(const GetFuotaTaskRequestT& request, const GetFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetFuotaTask, request, handler, context);
        }

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
        template<typename GetLogLevelsByResourceTypesRequestT = Model::GetLogLevelsByResourceTypesRequest>
        Model::GetLogLevelsByResourceTypesOutcomeCallable GetLogLevelsByResourceTypesCallable(const GetLogLevelsByResourceTypesRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetLogLevelsByResourceTypes, request);
        }

        /**
         * An Async wrapper for GetLogLevelsByResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLogLevelsByResourceTypesRequestT = Model::GetLogLevelsByResourceTypesRequest>
        void GetLogLevelsByResourceTypesAsync(const GetLogLevelsByResourceTypesRequestT& request, const GetLogLevelsByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetLogLevelsByResourceTypes, request, handler, context);
        }

        /**
         * <p>Gets information about a multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMulticastGroupOutcome GetMulticastGroup(const Model::GetMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for GetMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMulticastGroupRequestT = Model::GetMulticastGroupRequest>
        Model::GetMulticastGroupOutcomeCallable GetMulticastGroupCallable(const GetMulticastGroupRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetMulticastGroup, request);
        }

        /**
         * An Async wrapper for GetMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMulticastGroupRequestT = Model::GetMulticastGroupRequest>
        void GetMulticastGroupAsync(const GetMulticastGroupRequestT& request, const GetMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetMulticastGroup, request, handler, context);
        }

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
        template<typename GetMulticastGroupSessionRequestT = Model::GetMulticastGroupSessionRequest>
        Model::GetMulticastGroupSessionOutcomeCallable GetMulticastGroupSessionCallable(const GetMulticastGroupSessionRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetMulticastGroupSession, request);
        }

        /**
         * An Async wrapper for GetMulticastGroupSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMulticastGroupSessionRequestT = Model::GetMulticastGroupSessionRequest>
        void GetMulticastGroupSessionAsync(const GetMulticastGroupSessionRequestT& request, const GetMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetMulticastGroupSession, request, handler, context);
        }

        /**
         * <p>Get network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkAnalyzerConfigurationOutcome GetNetworkAnalyzerConfiguration(const Model::GetNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkAnalyzerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkAnalyzerConfigurationRequestT = Model::GetNetworkAnalyzerConfigurationRequest>
        Model::GetNetworkAnalyzerConfigurationOutcomeCallable GetNetworkAnalyzerConfigurationCallable(const GetNetworkAnalyzerConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetNetworkAnalyzerConfiguration, request);
        }

        /**
         * An Async wrapper for GetNetworkAnalyzerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkAnalyzerConfigurationRequestT = Model::GetNetworkAnalyzerConfigurationRequest>
        void GetNetworkAnalyzerConfigurationAsync(const GetNetworkAnalyzerConfigurationRequestT& request, const GetNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetNetworkAnalyzerConfiguration, request, handler, context);
        }

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
        template<typename GetPartnerAccountRequestT = Model::GetPartnerAccountRequest>
        Model::GetPartnerAccountOutcomeCallable GetPartnerAccountCallable(const GetPartnerAccountRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetPartnerAccount, request);
        }

        /**
         * An Async wrapper for GetPartnerAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPartnerAccountRequestT = Model::GetPartnerAccountRequest>
        void GetPartnerAccountAsync(const GetPartnerAccountRequestT& request, const GetPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetPartnerAccount, request, handler, context);
        }

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
        template<typename GetPositionEstimateRequestT = Model::GetPositionEstimateRequest>
        Model::GetPositionEstimateOutcomeCallable GetPositionEstimateCallable(const GetPositionEstimateRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetPositionEstimate, request);
        }

        /**
         * An Async wrapper for GetPositionEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPositionEstimateRequestT = Model::GetPositionEstimateRequest>
        void GetPositionEstimateAsync(const GetPositionEstimateRequestT& request, const GetPositionEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetPositionEstimate, request, handler, context);
        }

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
        template<typename GetResourceEventConfigurationRequestT = Model::GetResourceEventConfigurationRequest>
        Model::GetResourceEventConfigurationOutcomeCallable GetResourceEventConfigurationCallable(const GetResourceEventConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetResourceEventConfiguration, request);
        }

        /**
         * An Async wrapper for GetResourceEventConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceEventConfigurationRequestT = Model::GetResourceEventConfigurationRequest>
        void GetResourceEventConfigurationAsync(const GetResourceEventConfigurationRequestT& request, const GetResourceEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetResourceEventConfiguration, request, handler, context);
        }

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
        template<typename GetResourceLogLevelRequestT = Model::GetResourceLogLevelRequest>
        Model::GetResourceLogLevelOutcomeCallable GetResourceLogLevelCallable(const GetResourceLogLevelRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetResourceLogLevel, request);
        }

        /**
         * An Async wrapper for GetResourceLogLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceLogLevelRequestT = Model::GetResourceLogLevelRequest>
        void GetResourceLogLevelAsync(const GetResourceLogLevelRequestT& request, const GetResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetResourceLogLevel, request, handler, context);
        }

        /**
         * <p>Get the position information for a given wireless device or a wireless
         * gateway resource. The position information uses the <a
         * href="https://gisgeography.com/wgs84-world-geodetic-system/"> World Geodetic
         * System (WGS84)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetResourcePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePositionOutcome GetResourcePosition(const Model::GetResourcePositionRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePositionRequestT = Model::GetResourcePositionRequest>
        Model::GetResourcePositionOutcomeCallable GetResourcePositionCallable(const GetResourcePositionRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetResourcePosition, request);
        }

        /**
         * An Async wrapper for GetResourcePosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePositionRequestT = Model::GetResourcePositionRequest>
        void GetResourcePositionAsync(const GetResourcePositionRequestT& request, const GetResourcePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetResourcePosition, request, handler, context);
        }

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
        template<typename GetServiceEndpointRequestT = Model::GetServiceEndpointRequest>
        Model::GetServiceEndpointOutcomeCallable GetServiceEndpointCallable(const GetServiceEndpointRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetServiceEndpoint, request);
        }

        /**
         * An Async wrapper for GetServiceEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceEndpointRequestT = Model::GetServiceEndpointRequest>
        void GetServiceEndpointAsync(const GetServiceEndpointRequestT& request, const GetServiceEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetServiceEndpoint, request, handler, context);
        }

        /**
         * <p>Gets information about a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceProfileOutcome GetServiceProfile(const Model::GetServiceProfileRequest& request) const;

        /**
         * A Callable wrapper for GetServiceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceProfileRequestT = Model::GetServiceProfileRequest>
        Model::GetServiceProfileOutcomeCallable GetServiceProfileCallable(const GetServiceProfileRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetServiceProfile, request);
        }

        /**
         * An Async wrapper for GetServiceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceProfileRequestT = Model::GetServiceProfileRequest>
        void GetServiceProfileAsync(const GetServiceProfileRequestT& request, const GetServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetServiceProfile, request, handler, context);
        }

        /**
         * <p>Gets information about a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessDeviceOutcome GetWirelessDevice(const Model::GetWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWirelessDeviceRequestT = Model::GetWirelessDeviceRequest>
        Model::GetWirelessDeviceOutcomeCallable GetWirelessDeviceCallable(const GetWirelessDeviceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetWirelessDevice, request);
        }

        /**
         * An Async wrapper for GetWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWirelessDeviceRequestT = Model::GetWirelessDeviceRequest>
        void GetWirelessDeviceAsync(const GetWirelessDeviceRequestT& request, const GetWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetWirelessDevice, request, handler, context);
        }

        /**
         * <p>Get information about an import task and count of device onboarding summary
         * information for the import task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDeviceImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessDeviceImportTaskOutcome GetWirelessDeviceImportTask(const Model::GetWirelessDeviceImportTaskRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessDeviceImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWirelessDeviceImportTaskRequestT = Model::GetWirelessDeviceImportTaskRequest>
        Model::GetWirelessDeviceImportTaskOutcomeCallable GetWirelessDeviceImportTaskCallable(const GetWirelessDeviceImportTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetWirelessDeviceImportTask, request);
        }

        /**
         * An Async wrapper for GetWirelessDeviceImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWirelessDeviceImportTaskRequestT = Model::GetWirelessDeviceImportTaskRequest>
        void GetWirelessDeviceImportTaskAsync(const GetWirelessDeviceImportTaskRequestT& request, const GetWirelessDeviceImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetWirelessDeviceImportTask, request, handler, context);
        }

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
        template<typename GetWirelessDeviceStatisticsRequestT = Model::GetWirelessDeviceStatisticsRequest>
        Model::GetWirelessDeviceStatisticsOutcomeCallable GetWirelessDeviceStatisticsCallable(const GetWirelessDeviceStatisticsRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetWirelessDeviceStatistics, request);
        }

        /**
         * An Async wrapper for GetWirelessDeviceStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWirelessDeviceStatisticsRequestT = Model::GetWirelessDeviceStatisticsRequest>
        void GetWirelessDeviceStatisticsAsync(const GetWirelessDeviceStatisticsRequestT& request, const GetWirelessDeviceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetWirelessDeviceStatistics, request, handler, context);
        }

        /**
         * <p>Gets information about a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayOutcome GetWirelessGateway(const Model::GetWirelessGatewayRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWirelessGatewayRequestT = Model::GetWirelessGatewayRequest>
        Model::GetWirelessGatewayOutcomeCallable GetWirelessGatewayCallable(const GetWirelessGatewayRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetWirelessGateway, request);
        }

        /**
         * An Async wrapper for GetWirelessGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWirelessGatewayRequestT = Model::GetWirelessGatewayRequest>
        void GetWirelessGatewayAsync(const GetWirelessGatewayRequestT& request, const GetWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetWirelessGateway, request, handler, context);
        }

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
        template<typename GetWirelessGatewayCertificateRequestT = Model::GetWirelessGatewayCertificateRequest>
        Model::GetWirelessGatewayCertificateOutcomeCallable GetWirelessGatewayCertificateCallable(const GetWirelessGatewayCertificateRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetWirelessGatewayCertificate, request);
        }

        /**
         * An Async wrapper for GetWirelessGatewayCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWirelessGatewayCertificateRequestT = Model::GetWirelessGatewayCertificateRequest>
        void GetWirelessGatewayCertificateAsync(const GetWirelessGatewayCertificateRequestT& request, const GetWirelessGatewayCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetWirelessGatewayCertificate, request, handler, context);
        }

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
        template<typename GetWirelessGatewayFirmwareInformationRequestT = Model::GetWirelessGatewayFirmwareInformationRequest>
        Model::GetWirelessGatewayFirmwareInformationOutcomeCallable GetWirelessGatewayFirmwareInformationCallable(const GetWirelessGatewayFirmwareInformationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetWirelessGatewayFirmwareInformation, request);
        }

        /**
         * An Async wrapper for GetWirelessGatewayFirmwareInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWirelessGatewayFirmwareInformationRequestT = Model::GetWirelessGatewayFirmwareInformationRequest>
        void GetWirelessGatewayFirmwareInformationAsync(const GetWirelessGatewayFirmwareInformationRequestT& request, const GetWirelessGatewayFirmwareInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetWirelessGatewayFirmwareInformation, request, handler, context);
        }

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
        template<typename GetWirelessGatewayStatisticsRequestT = Model::GetWirelessGatewayStatisticsRequest>
        Model::GetWirelessGatewayStatisticsOutcomeCallable GetWirelessGatewayStatisticsCallable(const GetWirelessGatewayStatisticsRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetWirelessGatewayStatistics, request);
        }

        /**
         * An Async wrapper for GetWirelessGatewayStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWirelessGatewayStatisticsRequestT = Model::GetWirelessGatewayStatisticsRequest>
        void GetWirelessGatewayStatisticsAsync(const GetWirelessGatewayStatisticsRequestT& request, const GetWirelessGatewayStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetWirelessGatewayStatistics, request, handler, context);
        }

        /**
         * <p>Gets information about a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayTaskOutcome GetWirelessGatewayTask(const Model::GetWirelessGatewayTaskRequest& request) const;

        /**
         * A Callable wrapper for GetWirelessGatewayTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWirelessGatewayTaskRequestT = Model::GetWirelessGatewayTaskRequest>
        Model::GetWirelessGatewayTaskOutcomeCallable GetWirelessGatewayTaskCallable(const GetWirelessGatewayTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetWirelessGatewayTask, request);
        }

        /**
         * An Async wrapper for GetWirelessGatewayTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWirelessGatewayTaskRequestT = Model::GetWirelessGatewayTaskRequest>
        void GetWirelessGatewayTaskAsync(const GetWirelessGatewayTaskRequestT& request, const GetWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetWirelessGatewayTask, request, handler, context);
        }

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
        template<typename GetWirelessGatewayTaskDefinitionRequestT = Model::GetWirelessGatewayTaskDefinitionRequest>
        Model::GetWirelessGatewayTaskDefinitionOutcomeCallable GetWirelessGatewayTaskDefinitionCallable(const GetWirelessGatewayTaskDefinitionRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::GetWirelessGatewayTaskDefinition, request);
        }

        /**
         * An Async wrapper for GetWirelessGatewayTaskDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWirelessGatewayTaskDefinitionRequestT = Model::GetWirelessGatewayTaskDefinitionRequest>
        void GetWirelessGatewayTaskDefinitionAsync(const GetWirelessGatewayTaskDefinitionRequestT& request, const GetWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::GetWirelessGatewayTaskDefinition, request, handler, context);
        }

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
        template<typename ListDestinationsRequestT = Model::ListDestinationsRequest>
        Model::ListDestinationsOutcomeCallable ListDestinationsCallable(const ListDestinationsRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListDestinations, request);
        }

        /**
         * An Async wrapper for ListDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDestinationsRequestT = Model::ListDestinationsRequest>
        void ListDestinationsAsync(const ListDestinationsRequestT& request, const ListDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListDestinations, request, handler, context);
        }

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
        template<typename ListDeviceProfilesRequestT = Model::ListDeviceProfilesRequest>
        Model::ListDeviceProfilesOutcomeCallable ListDeviceProfilesCallable(const ListDeviceProfilesRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListDeviceProfiles, request);
        }

        /**
         * An Async wrapper for ListDeviceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeviceProfilesRequestT = Model::ListDeviceProfilesRequest>
        void ListDeviceProfilesAsync(const ListDeviceProfilesRequestT& request, const ListDeviceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListDeviceProfiles, request, handler, context);
        }

        /**
         * <p>List the Sidewalk devices in an import task and their onboarding
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListDevicesForWirelessDeviceImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesForWirelessDeviceImportTaskOutcome ListDevicesForWirelessDeviceImportTask(const Model::ListDevicesForWirelessDeviceImportTaskRequest& request) const;

        /**
         * A Callable wrapper for ListDevicesForWirelessDeviceImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevicesForWirelessDeviceImportTaskRequestT = Model::ListDevicesForWirelessDeviceImportTaskRequest>
        Model::ListDevicesForWirelessDeviceImportTaskOutcomeCallable ListDevicesForWirelessDeviceImportTaskCallable(const ListDevicesForWirelessDeviceImportTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListDevicesForWirelessDeviceImportTask, request);
        }

        /**
         * An Async wrapper for ListDevicesForWirelessDeviceImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevicesForWirelessDeviceImportTaskRequestT = Model::ListDevicesForWirelessDeviceImportTaskRequest>
        void ListDevicesForWirelessDeviceImportTaskAsync(const ListDevicesForWirelessDeviceImportTaskRequestT& request, const ListDevicesForWirelessDeviceImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListDevicesForWirelessDeviceImportTask, request, handler, context);
        }

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
        template<typename ListEventConfigurationsRequestT = Model::ListEventConfigurationsRequest>
        Model::ListEventConfigurationsOutcomeCallable ListEventConfigurationsCallable(const ListEventConfigurationsRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListEventConfigurations, request);
        }

        /**
         * An Async wrapper for ListEventConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventConfigurationsRequestT = Model::ListEventConfigurationsRequest>
        void ListEventConfigurationsAsync(const ListEventConfigurationsRequestT& request, const ListEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListEventConfigurations, request, handler, context);
        }

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
        template<typename ListFuotaTasksRequestT = Model::ListFuotaTasksRequest>
        Model::ListFuotaTasksOutcomeCallable ListFuotaTasksCallable(const ListFuotaTasksRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListFuotaTasks, request);
        }

        /**
         * An Async wrapper for ListFuotaTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFuotaTasksRequestT = Model::ListFuotaTasksRequest>
        void ListFuotaTasksAsync(const ListFuotaTasksRequestT& request, const ListFuotaTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListFuotaTasks, request, handler, context);
        }

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
        template<typename ListMulticastGroupsRequestT = Model::ListMulticastGroupsRequest>
        Model::ListMulticastGroupsOutcomeCallable ListMulticastGroupsCallable(const ListMulticastGroupsRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListMulticastGroups, request);
        }

        /**
         * An Async wrapper for ListMulticastGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMulticastGroupsRequestT = Model::ListMulticastGroupsRequest>
        void ListMulticastGroupsAsync(const ListMulticastGroupsRequestT& request, const ListMulticastGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListMulticastGroups, request, handler, context);
        }

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
        template<typename ListMulticastGroupsByFuotaTaskRequestT = Model::ListMulticastGroupsByFuotaTaskRequest>
        Model::ListMulticastGroupsByFuotaTaskOutcomeCallable ListMulticastGroupsByFuotaTaskCallable(const ListMulticastGroupsByFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListMulticastGroupsByFuotaTask, request);
        }

        /**
         * An Async wrapper for ListMulticastGroupsByFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMulticastGroupsByFuotaTaskRequestT = Model::ListMulticastGroupsByFuotaTaskRequest>
        void ListMulticastGroupsByFuotaTaskAsync(const ListMulticastGroupsByFuotaTaskRequestT& request, const ListMulticastGroupsByFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListMulticastGroupsByFuotaTask, request, handler, context);
        }

        /**
         * <p>Lists the network analyzer configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListNetworkAnalyzerConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkAnalyzerConfigurationsOutcome ListNetworkAnalyzerConfigurations(const Model::ListNetworkAnalyzerConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListNetworkAnalyzerConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNetworkAnalyzerConfigurationsRequestT = Model::ListNetworkAnalyzerConfigurationsRequest>
        Model::ListNetworkAnalyzerConfigurationsOutcomeCallable ListNetworkAnalyzerConfigurationsCallable(const ListNetworkAnalyzerConfigurationsRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListNetworkAnalyzerConfigurations, request);
        }

        /**
         * An Async wrapper for ListNetworkAnalyzerConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNetworkAnalyzerConfigurationsRequestT = Model::ListNetworkAnalyzerConfigurationsRequest>
        void ListNetworkAnalyzerConfigurationsAsync(const ListNetworkAnalyzerConfigurationsRequestT& request, const ListNetworkAnalyzerConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListNetworkAnalyzerConfigurations, request, handler, context);
        }

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
        template<typename ListPartnerAccountsRequestT = Model::ListPartnerAccountsRequest>
        Model::ListPartnerAccountsOutcomeCallable ListPartnerAccountsCallable(const ListPartnerAccountsRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListPartnerAccounts, request);
        }

        /**
         * An Async wrapper for ListPartnerAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPartnerAccountsRequestT = Model::ListPartnerAccountsRequest>
        void ListPartnerAccountsAsync(const ListPartnerAccountsRequestT& request, const ListPartnerAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListPartnerAccounts, request, handler, context);
        }

        /**
         * <p>List queued messages in the downlink queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListQueuedMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuedMessagesOutcome ListQueuedMessages(const Model::ListQueuedMessagesRequest& request) const;

        /**
         * A Callable wrapper for ListQueuedMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueuedMessagesRequestT = Model::ListQueuedMessagesRequest>
        Model::ListQueuedMessagesOutcomeCallable ListQueuedMessagesCallable(const ListQueuedMessagesRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListQueuedMessages, request);
        }

        /**
         * An Async wrapper for ListQueuedMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueuedMessagesRequestT = Model::ListQueuedMessagesRequest>
        void ListQueuedMessagesAsync(const ListQueuedMessagesRequestT& request, const ListQueuedMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListQueuedMessages, request, handler, context);
        }

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
        template<typename ListServiceProfilesRequestT = Model::ListServiceProfilesRequest>
        Model::ListServiceProfilesOutcomeCallable ListServiceProfilesCallable(const ListServiceProfilesRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListServiceProfiles, request);
        }

        /**
         * An Async wrapper for ListServiceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceProfilesRequestT = Model::ListServiceProfilesRequest>
        void ListServiceProfilesAsync(const ListServiceProfilesRequestT& request, const ListServiceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListServiceProfiles, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>List wireless devices that have been added to an import task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessDeviceImportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWirelessDeviceImportTasksOutcome ListWirelessDeviceImportTasks(const Model::ListWirelessDeviceImportTasksRequest& request) const;

        /**
         * A Callable wrapper for ListWirelessDeviceImportTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWirelessDeviceImportTasksRequestT = Model::ListWirelessDeviceImportTasksRequest>
        Model::ListWirelessDeviceImportTasksOutcomeCallable ListWirelessDeviceImportTasksCallable(const ListWirelessDeviceImportTasksRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListWirelessDeviceImportTasks, request);
        }

        /**
         * An Async wrapper for ListWirelessDeviceImportTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWirelessDeviceImportTasksRequestT = Model::ListWirelessDeviceImportTasksRequest>
        void ListWirelessDeviceImportTasksAsync(const ListWirelessDeviceImportTasksRequestT& request, const ListWirelessDeviceImportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListWirelessDeviceImportTasks, request, handler, context);
        }

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
        template<typename ListWirelessDevicesRequestT = Model::ListWirelessDevicesRequest>
        Model::ListWirelessDevicesOutcomeCallable ListWirelessDevicesCallable(const ListWirelessDevicesRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListWirelessDevices, request);
        }

        /**
         * An Async wrapper for ListWirelessDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWirelessDevicesRequestT = Model::ListWirelessDevicesRequest>
        void ListWirelessDevicesAsync(const ListWirelessDevicesRequestT& request, const ListWirelessDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListWirelessDevices, request, handler, context);
        }

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
        template<typename ListWirelessGatewayTaskDefinitionsRequestT = Model::ListWirelessGatewayTaskDefinitionsRequest>
        Model::ListWirelessGatewayTaskDefinitionsOutcomeCallable ListWirelessGatewayTaskDefinitionsCallable(const ListWirelessGatewayTaskDefinitionsRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListWirelessGatewayTaskDefinitions, request);
        }

        /**
         * An Async wrapper for ListWirelessGatewayTaskDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWirelessGatewayTaskDefinitionsRequestT = Model::ListWirelessGatewayTaskDefinitionsRequest>
        void ListWirelessGatewayTaskDefinitionsAsync(const ListWirelessGatewayTaskDefinitionsRequestT& request, const ListWirelessGatewayTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListWirelessGatewayTaskDefinitions, request, handler, context);
        }

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
        template<typename ListWirelessGatewaysRequestT = Model::ListWirelessGatewaysRequest>
        Model::ListWirelessGatewaysOutcomeCallable ListWirelessGatewaysCallable(const ListWirelessGatewaysRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ListWirelessGateways, request);
        }

        /**
         * An Async wrapper for ListWirelessGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWirelessGatewaysRequestT = Model::ListWirelessGatewaysRequest>
        void ListWirelessGatewaysAsync(const ListWirelessGatewaysRequestT& request, const ListWirelessGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ListWirelessGateways, request, handler, context);
        }

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
        template<typename PutResourceLogLevelRequestT = Model::PutResourceLogLevelRequest>
        Model::PutResourceLogLevelOutcomeCallable PutResourceLogLevelCallable(const PutResourceLogLevelRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::PutResourceLogLevel, request);
        }

        /**
         * An Async wrapper for PutResourceLogLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourceLogLevelRequestT = Model::PutResourceLogLevelRequest>
        void PutResourceLogLevelAsync(const PutResourceLogLevelRequestT& request, const PutResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::PutResourceLogLevel, request, handler, context);
        }

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
        template<typename ResetAllResourceLogLevelsRequestT = Model::ResetAllResourceLogLevelsRequest>
        Model::ResetAllResourceLogLevelsOutcomeCallable ResetAllResourceLogLevelsCallable(const ResetAllResourceLogLevelsRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ResetAllResourceLogLevels, request);
        }

        /**
         * An Async wrapper for ResetAllResourceLogLevels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetAllResourceLogLevelsRequestT = Model::ResetAllResourceLogLevelsRequest>
        void ResetAllResourceLogLevelsAsync(const ResetAllResourceLogLevelsRequestT& request, const ResetAllResourceLogLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ResetAllResourceLogLevels, request, handler, context);
        }

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
        template<typename ResetResourceLogLevelRequestT = Model::ResetResourceLogLevelRequest>
        Model::ResetResourceLogLevelOutcomeCallable ResetResourceLogLevelCallable(const ResetResourceLogLevelRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::ResetResourceLogLevel, request);
        }

        /**
         * An Async wrapper for ResetResourceLogLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetResourceLogLevelRequestT = Model::ResetResourceLogLevelRequest>
        void ResetResourceLogLevelAsync(const ResetResourceLogLevelRequestT& request, const ResetResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::ResetResourceLogLevel, request, handler, context);
        }

        /**
         * <p>Sends the specified data to a multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SendDataToMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDataToMulticastGroupOutcome SendDataToMulticastGroup(const Model::SendDataToMulticastGroupRequest& request) const;

        /**
         * A Callable wrapper for SendDataToMulticastGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendDataToMulticastGroupRequestT = Model::SendDataToMulticastGroupRequest>
        Model::SendDataToMulticastGroupOutcomeCallable SendDataToMulticastGroupCallable(const SendDataToMulticastGroupRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::SendDataToMulticastGroup, request);
        }

        /**
         * An Async wrapper for SendDataToMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendDataToMulticastGroupRequestT = Model::SendDataToMulticastGroupRequest>
        void SendDataToMulticastGroupAsync(const SendDataToMulticastGroupRequestT& request, const SendDataToMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::SendDataToMulticastGroup, request, handler, context);
        }

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
        template<typename SendDataToWirelessDeviceRequestT = Model::SendDataToWirelessDeviceRequest>
        Model::SendDataToWirelessDeviceOutcomeCallable SendDataToWirelessDeviceCallable(const SendDataToWirelessDeviceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::SendDataToWirelessDevice, request);
        }

        /**
         * An Async wrapper for SendDataToWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendDataToWirelessDeviceRequestT = Model::SendDataToWirelessDeviceRequest>
        void SendDataToWirelessDeviceAsync(const SendDataToWirelessDeviceRequestT& request, const SendDataToWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::SendDataToWirelessDevice, request, handler, context);
        }

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
        template<typename StartBulkAssociateWirelessDeviceWithMulticastGroupRequestT = Model::StartBulkAssociateWirelessDeviceWithMulticastGroupRequest>
        Model::StartBulkAssociateWirelessDeviceWithMulticastGroupOutcomeCallable StartBulkAssociateWirelessDeviceWithMulticastGroupCallable(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::StartBulkAssociateWirelessDeviceWithMulticastGroup, request);
        }

        /**
         * An Async wrapper for StartBulkAssociateWirelessDeviceWithMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBulkAssociateWirelessDeviceWithMulticastGroupRequestT = Model::StartBulkAssociateWirelessDeviceWithMulticastGroupRequest>
        void StartBulkAssociateWirelessDeviceWithMulticastGroupAsync(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequestT& request, const StartBulkAssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::StartBulkAssociateWirelessDeviceWithMulticastGroup, request, handler, context);
        }

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
        template<typename StartBulkDisassociateWirelessDeviceFromMulticastGroupRequestT = Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest>
        Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcomeCallable StartBulkDisassociateWirelessDeviceFromMulticastGroupCallable(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::StartBulkDisassociateWirelessDeviceFromMulticastGroup, request);
        }

        /**
         * An Async wrapper for StartBulkDisassociateWirelessDeviceFromMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBulkDisassociateWirelessDeviceFromMulticastGroupRequestT = Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest>
        void StartBulkDisassociateWirelessDeviceFromMulticastGroupAsync(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequestT& request, const StartBulkDisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::StartBulkDisassociateWirelessDeviceFromMulticastGroup, request, handler, context);
        }

        /**
         * <p>Starts a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFuotaTaskOutcome StartFuotaTask(const Model::StartFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for StartFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFuotaTaskRequestT = Model::StartFuotaTaskRequest>
        Model::StartFuotaTaskOutcomeCallable StartFuotaTaskCallable(const StartFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::StartFuotaTask, request);
        }

        /**
         * An Async wrapper for StartFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFuotaTaskRequestT = Model::StartFuotaTaskRequest>
        void StartFuotaTaskAsync(const StartFuotaTaskRequestT& request, const StartFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::StartFuotaTask, request, handler, context);
        }

        /**
         * <p>Starts a multicast group session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartMulticastGroupSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMulticastGroupSessionOutcome StartMulticastGroupSession(const Model::StartMulticastGroupSessionRequest& request) const;

        /**
         * A Callable wrapper for StartMulticastGroupSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMulticastGroupSessionRequestT = Model::StartMulticastGroupSessionRequest>
        Model::StartMulticastGroupSessionOutcomeCallable StartMulticastGroupSessionCallable(const StartMulticastGroupSessionRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::StartMulticastGroupSession, request);
        }

        /**
         * An Async wrapper for StartMulticastGroupSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMulticastGroupSessionRequestT = Model::StartMulticastGroupSessionRequest>
        void StartMulticastGroupSessionAsync(const StartMulticastGroupSessionRequestT& request, const StartMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::StartMulticastGroupSession, request, handler, context);
        }

        /**
         * <p>Start import task for a single wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartSingleWirelessDeviceImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSingleWirelessDeviceImportTaskOutcome StartSingleWirelessDeviceImportTask(const Model::StartSingleWirelessDeviceImportTaskRequest& request) const;

        /**
         * A Callable wrapper for StartSingleWirelessDeviceImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSingleWirelessDeviceImportTaskRequestT = Model::StartSingleWirelessDeviceImportTaskRequest>
        Model::StartSingleWirelessDeviceImportTaskOutcomeCallable StartSingleWirelessDeviceImportTaskCallable(const StartSingleWirelessDeviceImportTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::StartSingleWirelessDeviceImportTask, request);
        }

        /**
         * An Async wrapper for StartSingleWirelessDeviceImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSingleWirelessDeviceImportTaskRequestT = Model::StartSingleWirelessDeviceImportTaskRequest>
        void StartSingleWirelessDeviceImportTaskAsync(const StartSingleWirelessDeviceImportTaskRequestT& request, const StartSingleWirelessDeviceImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::StartSingleWirelessDeviceImportTask, request, handler, context);
        }

        /**
         * <p>Start import task for provisioning Sidewalk devices in bulk using an S3 CSV
         * file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartWirelessDeviceImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWirelessDeviceImportTaskOutcome StartWirelessDeviceImportTask(const Model::StartWirelessDeviceImportTaskRequest& request) const;

        /**
         * A Callable wrapper for StartWirelessDeviceImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartWirelessDeviceImportTaskRequestT = Model::StartWirelessDeviceImportTaskRequest>
        Model::StartWirelessDeviceImportTaskOutcomeCallable StartWirelessDeviceImportTaskCallable(const StartWirelessDeviceImportTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::StartWirelessDeviceImportTask, request);
        }

        /**
         * An Async wrapper for StartWirelessDeviceImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartWirelessDeviceImportTaskRequestT = Model::StartWirelessDeviceImportTaskRequest>
        void StartWirelessDeviceImportTaskAsync(const StartWirelessDeviceImportTaskRequestT& request, const StartWirelessDeviceImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::StartWirelessDeviceImportTask, request, handler, context);
        }

        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::TagResource, request, handler, context);
        }

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
        template<typename TestWirelessDeviceRequestT = Model::TestWirelessDeviceRequest>
        Model::TestWirelessDeviceOutcomeCallable TestWirelessDeviceCallable(const TestWirelessDeviceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::TestWirelessDevice, request);
        }

        /**
         * An Async wrapper for TestWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestWirelessDeviceRequestT = Model::TestWirelessDeviceRequest>
        void TestWirelessDeviceAsync(const TestWirelessDeviceRequestT& request, const TestWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::TestWirelessDevice, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates properties of a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDestinationOutcome UpdateDestination(const Model::UpdateDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDestinationRequestT = Model::UpdateDestinationRequest>
        Model::UpdateDestinationOutcomeCallable UpdateDestinationCallable(const UpdateDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateDestination, request);
        }

        /**
         * An Async wrapper for UpdateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDestinationRequestT = Model::UpdateDestinationRequest>
        void UpdateDestinationAsync(const UpdateDestinationRequestT& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateDestination, request, handler, context);
        }

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
        template<typename UpdateEventConfigurationByResourceTypesRequestT = Model::UpdateEventConfigurationByResourceTypesRequest>
        Model::UpdateEventConfigurationByResourceTypesOutcomeCallable UpdateEventConfigurationByResourceTypesCallable(const UpdateEventConfigurationByResourceTypesRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateEventConfigurationByResourceTypes, request);
        }

        /**
         * An Async wrapper for UpdateEventConfigurationByResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventConfigurationByResourceTypesRequestT = Model::UpdateEventConfigurationByResourceTypesRequest>
        void UpdateEventConfigurationByResourceTypesAsync(const UpdateEventConfigurationByResourceTypesRequestT& request, const UpdateEventConfigurationByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateEventConfigurationByResourceTypes, request, handler, context);
        }

        /**
         * <p>Updates properties of a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFuotaTaskOutcome UpdateFuotaTask(const Model::UpdateFuotaTaskRequest& request) const;

        /**
         * A Callable wrapper for UpdateFuotaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFuotaTaskRequestT = Model::UpdateFuotaTaskRequest>
        Model::UpdateFuotaTaskOutcomeCallable UpdateFuotaTaskCallable(const UpdateFuotaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateFuotaTask, request);
        }

        /**
         * An Async wrapper for UpdateFuotaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFuotaTaskRequestT = Model::UpdateFuotaTaskRequest>
        void UpdateFuotaTaskAsync(const UpdateFuotaTaskRequestT& request, const UpdateFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateFuotaTask, request, handler, context);
        }

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
        template<typename UpdateLogLevelsByResourceTypesRequestT = Model::UpdateLogLevelsByResourceTypesRequest>
        Model::UpdateLogLevelsByResourceTypesOutcomeCallable UpdateLogLevelsByResourceTypesCallable(const UpdateLogLevelsByResourceTypesRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateLogLevelsByResourceTypes, request);
        }

        /**
         * An Async wrapper for UpdateLogLevelsByResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLogLevelsByResourceTypesRequestT = Model::UpdateLogLevelsByResourceTypesRequest>
        void UpdateLogLevelsByResourceTypesAsync(const UpdateLogLevelsByResourceTypesRequestT& request, const UpdateLogLevelsByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateLogLevelsByResourceTypes, request, handler, context);
        }

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
        template<typename UpdateMulticastGroupRequestT = Model::UpdateMulticastGroupRequest>
        Model::UpdateMulticastGroupOutcomeCallable UpdateMulticastGroupCallable(const UpdateMulticastGroupRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateMulticastGroup, request);
        }

        /**
         * An Async wrapper for UpdateMulticastGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMulticastGroupRequestT = Model::UpdateMulticastGroupRequest>
        void UpdateMulticastGroupAsync(const UpdateMulticastGroupRequestT& request, const UpdateMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateMulticastGroup, request, handler, context);
        }

        /**
         * <p>Update network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkAnalyzerConfigurationOutcome UpdateNetworkAnalyzerConfiguration(const Model::UpdateNetworkAnalyzerConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkAnalyzerConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNetworkAnalyzerConfigurationRequestT = Model::UpdateNetworkAnalyzerConfigurationRequest>
        Model::UpdateNetworkAnalyzerConfigurationOutcomeCallable UpdateNetworkAnalyzerConfigurationCallable(const UpdateNetworkAnalyzerConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateNetworkAnalyzerConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateNetworkAnalyzerConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNetworkAnalyzerConfigurationRequestT = Model::UpdateNetworkAnalyzerConfigurationRequest>
        void UpdateNetworkAnalyzerConfigurationAsync(const UpdateNetworkAnalyzerConfigurationRequestT& request, const UpdateNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateNetworkAnalyzerConfiguration, request, handler, context);
        }

        /**
         * <p>Updates properties of a partner account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdatePartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartnerAccountOutcome UpdatePartnerAccount(const Model::UpdatePartnerAccountRequest& request) const;

        /**
         * A Callable wrapper for UpdatePartnerAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePartnerAccountRequestT = Model::UpdatePartnerAccountRequest>
        Model::UpdatePartnerAccountOutcomeCallable UpdatePartnerAccountCallable(const UpdatePartnerAccountRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdatePartnerAccount, request);
        }

        /**
         * An Async wrapper for UpdatePartnerAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePartnerAccountRequestT = Model::UpdatePartnerAccountRequest>
        void UpdatePartnerAccountAsync(const UpdatePartnerAccountRequestT& request, const UpdatePartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdatePartnerAccount, request, handler, context);
        }

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
        template<typename UpdateResourceEventConfigurationRequestT = Model::UpdateResourceEventConfigurationRequest>
        Model::UpdateResourceEventConfigurationOutcomeCallable UpdateResourceEventConfigurationCallable(const UpdateResourceEventConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateResourceEventConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateResourceEventConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceEventConfigurationRequestT = Model::UpdateResourceEventConfigurationRequest>
        void UpdateResourceEventConfigurationAsync(const UpdateResourceEventConfigurationRequestT& request, const UpdateResourceEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateResourceEventConfiguration, request, handler, context);
        }

        /**
         * <p>Update the position information of a given wireless device or a wireless
         * gateway resource. The position coordinates are based on the <a
         * href="https://gisgeography.com/wgs84-world-geodetic-system/"> World Geodetic
         * System (WGS84)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateResourcePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourcePositionOutcome UpdateResourcePosition(const Model::UpdateResourcePositionRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourcePosition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourcePositionRequestT = Model::UpdateResourcePositionRequest>
        Model::UpdateResourcePositionOutcomeCallable UpdateResourcePositionCallable(const UpdateResourcePositionRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateResourcePosition, request);
        }

        /**
         * An Async wrapper for UpdateResourcePosition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourcePositionRequestT = Model::UpdateResourcePositionRequest>
        void UpdateResourcePositionAsync(const UpdateResourcePositionRequestT& request, const UpdateResourcePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateResourcePosition, request, handler, context);
        }

        /**
         * <p>Updates properties of a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWirelessDeviceOutcome UpdateWirelessDevice(const Model::UpdateWirelessDeviceRequest& request) const;

        /**
         * A Callable wrapper for UpdateWirelessDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWirelessDeviceRequestT = Model::UpdateWirelessDeviceRequest>
        Model::UpdateWirelessDeviceOutcomeCallable UpdateWirelessDeviceCallable(const UpdateWirelessDeviceRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateWirelessDevice, request);
        }

        /**
         * An Async wrapper for UpdateWirelessDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWirelessDeviceRequestT = Model::UpdateWirelessDeviceRequest>
        void UpdateWirelessDeviceAsync(const UpdateWirelessDeviceRequestT& request, const UpdateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateWirelessDevice, request, handler, context);
        }

        /**
         * <p>Update an import task to add more devices to the task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessDeviceImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWirelessDeviceImportTaskOutcome UpdateWirelessDeviceImportTask(const Model::UpdateWirelessDeviceImportTaskRequest& request) const;

        /**
         * A Callable wrapper for UpdateWirelessDeviceImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWirelessDeviceImportTaskRequestT = Model::UpdateWirelessDeviceImportTaskRequest>
        Model::UpdateWirelessDeviceImportTaskOutcomeCallable UpdateWirelessDeviceImportTaskCallable(const UpdateWirelessDeviceImportTaskRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateWirelessDeviceImportTask, request);
        }

        /**
         * An Async wrapper for UpdateWirelessDeviceImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWirelessDeviceImportTaskRequestT = Model::UpdateWirelessDeviceImportTaskRequest>
        void UpdateWirelessDeviceImportTaskAsync(const UpdateWirelessDeviceImportTaskRequestT& request, const UpdateWirelessDeviceImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateWirelessDeviceImportTask, request, handler, context);
        }

        /**
         * <p>Updates properties of a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWirelessGatewayOutcome UpdateWirelessGateway(const Model::UpdateWirelessGatewayRequest& request) const;

        /**
         * A Callable wrapper for UpdateWirelessGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWirelessGatewayRequestT = Model::UpdateWirelessGatewayRequest>
        Model::UpdateWirelessGatewayOutcomeCallable UpdateWirelessGatewayCallable(const UpdateWirelessGatewayRequestT& request) const
        {
            return SubmitCallable(&IoTWirelessClient::UpdateWirelessGateway, request);
        }

        /**
         * An Async wrapper for UpdateWirelessGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWirelessGatewayRequestT = Model::UpdateWirelessGatewayRequest>
        void UpdateWirelessGatewayAsync(const UpdateWirelessGatewayRequestT& request, const UpdateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTWirelessClient::UpdateWirelessGateway, request, handler, context);
        }


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
