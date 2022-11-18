/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/IoTWirelessServiceClientModel.h>
#include <aws/iotwireless/IoTWirelessLegacyAsyncMacros.h>

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
  class AWS_IOTWIRELESS_API IoTWirelessClient : public Aws::Client::AWSJsonClient
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
         * <p>Associates a partner account with your AWS account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateAwsAccountWithPartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAwsAccountWithPartnerAccountOutcome AssociateAwsAccountWithPartnerAccount(const Model::AssociateAwsAccountWithPartnerAccountRequest& request) const;


        /**
         * <p>Associate a multicast group with a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateMulticastGroupWithFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMulticastGroupWithFuotaTaskOutcome AssociateMulticastGroupWithFuotaTask(const Model::AssociateMulticastGroupWithFuotaTaskRequest& request) const;


        /**
         * <p>Associate a wireless device with a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessDeviceWithFuotaTaskOutcome AssociateWirelessDeviceWithFuotaTask(const Model::AssociateWirelessDeviceWithFuotaTaskRequest& request) const;


        /**
         * <p>Associates a wireless device with a multicast group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessDeviceWithMulticastGroupOutcome AssociateWirelessDeviceWithMulticastGroup(const Model::AssociateWirelessDeviceWithMulticastGroupRequest& request) const;


        /**
         * <p>Associates a wireless device with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithThing">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessDeviceWithThingOutcome AssociateWirelessDeviceWithThing(const Model::AssociateWirelessDeviceWithThingRequest& request) const;


        /**
         * <p>Associates a wireless gateway with a certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessGatewayWithCertificateOutcome AssociateWirelessGatewayWithCertificate(const Model::AssociateWirelessGatewayWithCertificateRequest& request) const;


        /**
         * <p>Associates a wireless gateway with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithThing">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessGatewayWithThingOutcome AssociateWirelessGatewayWithThing(const Model::AssociateWirelessGatewayWithThingRequest& request) const;


        /**
         * <p>Cancels an existing multicast group session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CancelMulticastGroupSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMulticastGroupSessionOutcome CancelMulticastGroupSession(const Model::CancelMulticastGroupSessionRequest& request) const;


        /**
         * <p>Creates a new destination that maps a device message to an AWS IoT
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDestinationOutcome CreateDestination(const Model::CreateDestinationRequest& request) const;


        /**
         * <p>Creates a new device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceProfileOutcome CreateDeviceProfile(const Model::CreateDeviceProfileRequest& request) const;


        /**
         * <p>Creates a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFuotaTaskOutcome CreateFuotaTask(const Model::CreateFuotaTaskRequest& request) const;


        /**
         * <p>Creates a multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMulticastGroupOutcome CreateMulticastGroup(const Model::CreateMulticastGroupRequest& request) const;


        /**
         * <p>Creates a new network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkAnalyzerConfigurationOutcome CreateNetworkAnalyzerConfiguration(const Model::CreateNetworkAnalyzerConfigurationRequest& request) const;


        /**
         * <p>Creates a new service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceProfileOutcome CreateServiceProfile(const Model::CreateServiceProfileRequest& request) const;


        /**
         * <p>Provisions a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessDeviceOutcome CreateWirelessDevice(const Model::CreateWirelessDeviceRequest& request) const;


        /**
         * <p>Provisions a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayOutcome CreateWirelessGateway(const Model::CreateWirelessGatewayRequest& request) const;


        /**
         * <p>Creates a task for a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayTaskOutcome CreateWirelessGatewayTask(const Model::CreateWirelessGatewayTaskRequest& request) const;


        /**
         * <p>Creates a gateway task definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayTaskDefinitionOutcome CreateWirelessGatewayTaskDefinition(const Model::CreateWirelessGatewayTaskDefinitionRequest& request) const;


        /**
         * <p>Deletes a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDestinationOutcome DeleteDestination(const Model::DeleteDestinationRequest& request) const;


        /**
         * <p>Deletes a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceProfileOutcome DeleteDeviceProfile(const Model::DeleteDeviceProfileRequest& request) const;


        /**
         * <p>Deletes a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFuotaTaskOutcome DeleteFuotaTask(const Model::DeleteFuotaTaskRequest& request) const;


        /**
         * <p>Deletes a multicast group if it is not in use by a fuota task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMulticastGroupOutcome DeleteMulticastGroup(const Model::DeleteMulticastGroupRequest& request) const;


        /**
         * <p>Deletes a network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkAnalyzerConfigurationOutcome DeleteNetworkAnalyzerConfiguration(const Model::DeleteNetworkAnalyzerConfigurationRequest& request) const;


        /**
         * <p>Remove queued messages from the downlink queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteQueuedMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueuedMessagesOutcome DeleteQueuedMessages(const Model::DeleteQueuedMessagesRequest& request) const;


        /**
         * <p>Deletes a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceProfileOutcome DeleteServiceProfile(const Model::DeleteServiceProfileRequest& request) const;


        /**
         * <p>Deletes a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessDeviceOutcome DeleteWirelessDevice(const Model::DeleteWirelessDeviceRequest& request) const;


        /**
         * <p>Deletes a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayOutcome DeleteWirelessGateway(const Model::DeleteWirelessGatewayRequest& request) const;


        /**
         * <p>Deletes a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayTaskOutcome DeleteWirelessGatewayTask(const Model::DeleteWirelessGatewayTaskRequest& request) const;


        /**
         * <p>Deletes a wireless gateway task definition. Deleting this task definition
         * does not affect tasks that are currently in progress.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayTaskDefinitionOutcome DeleteWirelessGatewayTaskDefinition(const Model::DeleteWirelessGatewayTaskDefinitionRequest& request) const;


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
         * <p>Disassociates a multicast group from a fuota task.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateMulticastGroupFromFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMulticastGroupFromFuotaTaskOutcome DisassociateMulticastGroupFromFuotaTask(const Model::DisassociateMulticastGroupFromFuotaTaskRequest& request) const;


        /**
         * <p>Disassociates a wireless device from a FUOTA task.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessDeviceFromFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessDeviceFromFuotaTaskOutcome DisassociateWirelessDeviceFromFuotaTask(const Model::DisassociateWirelessDeviceFromFuotaTaskRequest& request) const;


        /**
         * <p>Disassociates a wireless device from a multicast group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessDeviceFromMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessDeviceFromMulticastGroupOutcome DisassociateWirelessDeviceFromMulticastGroup(const Model::DisassociateWirelessDeviceFromMulticastGroupRequest& request) const;


        /**
         * <p>Disassociates a wireless device from its currently associated
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessDeviceFromThing">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessDeviceFromThingOutcome DisassociateWirelessDeviceFromThing(const Model::DisassociateWirelessDeviceFromThingRequest& request) const;


        /**
         * <p>Disassociates a wireless gateway from its currently associated
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessGatewayFromCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessGatewayFromCertificateOutcome DisassociateWirelessGatewayFromCertificate(const Model::DisassociateWirelessGatewayFromCertificateRequest& request) const;


        /**
         * <p>Disassociates a wireless gateway from its currently associated
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessGatewayFromThing">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessGatewayFromThingOutcome DisassociateWirelessGatewayFromThing(const Model::DisassociateWirelessGatewayFromThingRequest& request) const;


        /**
         * <p>Gets information about a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDestinationOutcome GetDestination(const Model::GetDestinationRequest& request) const;


        /**
         * <p>Gets information about a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceProfileOutcome GetDeviceProfile(const Model::GetDeviceProfileRequest& request) const;


        /**
         * <p>Get the event configuration based on resource types.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetEventConfigurationByResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventConfigurationByResourceTypesOutcome GetEventConfigurationByResourceTypes(const Model::GetEventConfigurationByResourceTypesRequest& request) const;


        /**
         * <p>Gets information about a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFuotaTaskOutcome GetFuotaTask(const Model::GetFuotaTaskRequest& request) const;


        /**
         * <p>Returns current default log levels or log levels by resource types. Based on
         * resource types, log levels can be for wireless device log options or wireless
         * gateway log options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetLogLevelsByResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogLevelsByResourceTypesOutcome GetLogLevelsByResourceTypes(const Model::GetLogLevelsByResourceTypesRequest& request) const;


        /**
         * <p>Gets information about a multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMulticastGroupOutcome GetMulticastGroup(const Model::GetMulticastGroupRequest& request) const;


        /**
         * <p>Gets information about a multicast group session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetMulticastGroupSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMulticastGroupSessionOutcome GetMulticastGroupSession(const Model::GetMulticastGroupSessionRequest& request) const;


        /**
         * <p>Get network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkAnalyzerConfigurationOutcome GetNetworkAnalyzerConfiguration(const Model::GetNetworkAnalyzerConfigurationRequest& request) const;


        /**
         * <p>Gets information about a partner account. If <code>PartnerAccountId</code>
         * and <code>PartnerType</code> are <code>null</code>, returns all partner
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetPartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartnerAccountOutcome GetPartnerAccount(const Model::GetPartnerAccountRequest& request) const;


        /**
         * <p>Get the position information for a given resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetPosition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPositionOutcome GetPosition(const Model::GetPositionRequest& request) const;


        /**
         * <p>Get position configuration for a given resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetPositionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPositionConfigurationOutcome GetPositionConfiguration(const Model::GetPositionConfigurationRequest& request) const;


        /**
         * <p>Get the event configuration for a particular resource
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetResourceEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceEventConfigurationOutcome GetResourceEventConfiguration(const Model::GetResourceEventConfigurationRequest& request) const;


        /**
         * <p>Fetches the log-level override, if any, for a given resource-ID and
         * resource-type. It can be used for a wireless device or a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetResourceLogLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceLogLevelOutcome GetResourceLogLevel(const Model::GetResourceLogLevelRequest& request) const;


        /**
         * <p>Gets the account-specific endpoint for Configuration and Update Server (CUPS)
         * protocol or LoRaWAN Network Server (LNS) connections.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceEndpointOutcome GetServiceEndpoint(const Model::GetServiceEndpointRequest& request) const;


        /**
         * <p>Gets information about a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceProfileOutcome GetServiceProfile(const Model::GetServiceProfileRequest& request) const;


        /**
         * <p>Gets information about a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessDeviceOutcome GetWirelessDevice(const Model::GetWirelessDeviceRequest& request) const;


        /**
         * <p>Gets operating information about a wireless device.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDeviceStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessDeviceStatisticsOutcome GetWirelessDeviceStatistics(const Model::GetWirelessDeviceStatisticsRequest& request) const;


        /**
         * <p>Gets information about a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayOutcome GetWirelessGateway(const Model::GetWirelessGatewayRequest& request) const;


        /**
         * <p>Gets the ID of the certificate that is currently associated with a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayCertificateOutcome GetWirelessGatewayCertificate(const Model::GetWirelessGatewayCertificateRequest& request) const;


        /**
         * <p>Gets the firmware version and other information about a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayFirmwareInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayFirmwareInformationOutcome GetWirelessGatewayFirmwareInformation(const Model::GetWirelessGatewayFirmwareInformationRequest& request) const;


        /**
         * <p>Gets operating information about a wireless gateway.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayStatisticsOutcome GetWirelessGatewayStatistics(const Model::GetWirelessGatewayStatisticsRequest& request) const;


        /**
         * <p>Gets information about a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayTaskOutcome GetWirelessGatewayTask(const Model::GetWirelessGatewayTaskRequest& request) const;


        /**
         * <p>Gets information about a wireless gateway task definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayTaskDefinitionOutcome GetWirelessGatewayTaskDefinition(const Model::GetWirelessGatewayTaskDefinitionRequest& request) const;


        /**
         * <p>Lists the destinations registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDestinationsOutcome ListDestinations(const Model::ListDestinationsRequest& request) const;


        /**
         * <p>Lists the device profiles registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListDeviceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceProfilesOutcome ListDeviceProfiles(const Model::ListDeviceProfilesRequest& request) const;


        /**
         * <p>List event configurations where at least one event topic has been
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListEventConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventConfigurationsOutcome ListEventConfigurations(const Model::ListEventConfigurationsRequest& request) const;


        /**
         * <p>Lists the FUOTA tasks registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListFuotaTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFuotaTasksOutcome ListFuotaTasks(const Model::ListFuotaTasksRequest& request) const;


        /**
         * <p>Lists the multicast groups registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListMulticastGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMulticastGroupsOutcome ListMulticastGroups(const Model::ListMulticastGroupsRequest& request) const;


        /**
         * <p>List all multicast groups associated with a fuota task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListMulticastGroupsByFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMulticastGroupsByFuotaTaskOutcome ListMulticastGroupsByFuotaTask(const Model::ListMulticastGroupsByFuotaTaskRequest& request) const;


        /**
         * <p>Lists the network analyzer configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListNetworkAnalyzerConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkAnalyzerConfigurationsOutcome ListNetworkAnalyzerConfigurations(const Model::ListNetworkAnalyzerConfigurationsRequest& request) const;


        /**
         * <p>Lists the partner accounts associated with your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListPartnerAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnerAccountsOutcome ListPartnerAccounts(const Model::ListPartnerAccountsRequest& request) const;


        /**
         * <p>List position configurations for a given resource, such as positioning
         * solvers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListPositionConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPositionConfigurationsOutcome ListPositionConfigurations(const Model::ListPositionConfigurationsRequest& request) const;


        /**
         * <p>List queued messages in the downlink queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListQueuedMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuedMessagesOutcome ListQueuedMessages(const Model::ListQueuedMessagesRequest& request) const;


        /**
         * <p>Lists the service profiles registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListServiceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceProfilesOutcome ListServiceProfiles(const Model::ListServiceProfilesRequest& request) const;


        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists the wireless devices registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWirelessDevicesOutcome ListWirelessDevices(const Model::ListWirelessDevicesRequest& request) const;


        /**
         * <p>List the wireless gateway tasks definitions registered to your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessGatewayTaskDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWirelessGatewayTaskDefinitionsOutcome ListWirelessGatewayTaskDefinitions(const Model::ListWirelessGatewayTaskDefinitionsRequest& request) const;


        /**
         * <p>Lists the wireless gateways registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWirelessGatewaysOutcome ListWirelessGateways(const Model::ListWirelessGatewaysRequest& request) const;


        /**
         * <p>Put position configuration for a given resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/PutPositionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPositionConfigurationOutcome PutPositionConfiguration(const Model::PutPositionConfigurationRequest& request) const;


        /**
         * <p>Sets the log-level override for a resource-ID and resource-type. This option
         * can be specified for a wireless gateway or a wireless device. A limit of 200 log
         * level override can be set per account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/PutResourceLogLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourceLogLevelOutcome PutResourceLogLevel(const Model::PutResourceLogLevelRequest& request) const;


        /**
         * <p>Removes the log-level overrides for all resources; both wireless devices and
         * wireless gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ResetAllResourceLogLevels">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetAllResourceLogLevelsOutcome ResetAllResourceLogLevels(const Model::ResetAllResourceLogLevelsRequest& request) const;


        /**
         * <p>Removes the log-level override, if any, for a specific resource-ID and
         * resource-type. It can be used for a wireless device or a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ResetResourceLogLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetResourceLogLevelOutcome ResetResourceLogLevel(const Model::ResetResourceLogLevelRequest& request) const;


        /**
         * <p>Sends the specified data to a multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SendDataToMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDataToMulticastGroupOutcome SendDataToMulticastGroup(const Model::SendDataToMulticastGroupRequest& request) const;


        /**
         * <p>Sends a decrypted application data frame to a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SendDataToWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDataToWirelessDeviceOutcome SendDataToWirelessDevice(const Model::SendDataToWirelessDeviceRequest& request) const;


        /**
         * <p>Starts a bulk association of all qualifying wireless devices with a multicast
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartBulkAssociateWirelessDeviceWithMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome StartBulkAssociateWirelessDeviceWithMulticastGroup(const Model::StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request) const;


        /**
         * <p>Starts a bulk disassociatin of all qualifying wireless devices from a
         * multicast group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartBulkDisassociateWirelessDeviceFromMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome StartBulkDisassociateWirelessDeviceFromMulticastGroup(const Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request) const;


        /**
         * <p>Starts a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFuotaTaskOutcome StartFuotaTask(const Model::StartFuotaTaskRequest& request) const;


        /**
         * <p>Starts a multicast group session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/StartMulticastGroupSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMulticastGroupSessionOutcome StartMulticastGroupSession(const Model::StartMulticastGroupSessionRequest& request) const;


        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Simulates a provisioned device by sending an uplink data payload of
         * <code>Hello</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TestWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::TestWirelessDeviceOutcome TestWirelessDevice(const Model::TestWirelessDeviceRequest& request) const;


        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates properties of a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDestinationOutcome UpdateDestination(const Model::UpdateDestinationRequest& request) const;


        /**
         * <p>Update the event configuration based on resource types.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateEventConfigurationByResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventConfigurationByResourceTypesOutcome UpdateEventConfigurationByResourceTypes(const Model::UpdateEventConfigurationByResourceTypesRequest& request) const;


        /**
         * <p>Updates properties of a FUOTA task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateFuotaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFuotaTaskOutcome UpdateFuotaTask(const Model::UpdateFuotaTaskRequest& request) const;


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
         * <p>Updates properties of a multicast group session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateMulticastGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMulticastGroupOutcome UpdateMulticastGroup(const Model::UpdateMulticastGroupRequest& request) const;


        /**
         * <p>Update network analyzer configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateNetworkAnalyzerConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkAnalyzerConfigurationOutcome UpdateNetworkAnalyzerConfiguration(const Model::UpdateNetworkAnalyzerConfigurationRequest& request) const;


        /**
         * <p>Updates properties of a partner account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdatePartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartnerAccountOutcome UpdatePartnerAccount(const Model::UpdatePartnerAccountRequest& request) const;


        /**
         * <p>Update the position information of a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdatePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePositionOutcome UpdatePosition(const Model::UpdatePositionRequest& request) const;


        /**
         * <p>Update the event configuration for a particular resource
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateResourceEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceEventConfigurationOutcome UpdateResourceEventConfiguration(const Model::UpdateResourceEventConfigurationRequest& request) const;


        /**
         * <p>Updates properties of a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWirelessDeviceOutcome UpdateWirelessDevice(const Model::UpdateWirelessDeviceRequest& request) const;


        /**
         * <p>Updates properties of a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWirelessGatewayOutcome UpdateWirelessGateway(const Model::UpdateWirelessGatewayRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTWirelessEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IoTWirelessClientConfiguration& clientConfiguration);

      IoTWirelessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTWirelessEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTWireless
} // namespace Aws
