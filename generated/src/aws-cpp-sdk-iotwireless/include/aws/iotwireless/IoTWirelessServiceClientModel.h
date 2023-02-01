/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iotwireless/IoTWirelessErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iotwireless/IoTWirelessEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTWirelessClient header */
#include <aws/iotwireless/model/AssociateAwsAccountWithPartnerAccountResult.h>
#include <aws/iotwireless/model/AssociateMulticastGroupWithFuotaTaskResult.h>
#include <aws/iotwireless/model/AssociateWirelessDeviceWithFuotaTaskResult.h>
#include <aws/iotwireless/model/AssociateWirelessDeviceWithMulticastGroupResult.h>
#include <aws/iotwireless/model/AssociateWirelessDeviceWithThingResult.h>
#include <aws/iotwireless/model/AssociateWirelessGatewayWithCertificateResult.h>
#include <aws/iotwireless/model/AssociateWirelessGatewayWithThingResult.h>
#include <aws/iotwireless/model/CancelMulticastGroupSessionResult.h>
#include <aws/iotwireless/model/CreateDestinationResult.h>
#include <aws/iotwireless/model/CreateDeviceProfileResult.h>
#include <aws/iotwireless/model/CreateFuotaTaskResult.h>
#include <aws/iotwireless/model/CreateMulticastGroupResult.h>
#include <aws/iotwireless/model/CreateNetworkAnalyzerConfigurationResult.h>
#include <aws/iotwireless/model/CreateServiceProfileResult.h>
#include <aws/iotwireless/model/CreateWirelessDeviceResult.h>
#include <aws/iotwireless/model/CreateWirelessGatewayResult.h>
#include <aws/iotwireless/model/CreateWirelessGatewayTaskResult.h>
#include <aws/iotwireless/model/CreateWirelessGatewayTaskDefinitionResult.h>
#include <aws/iotwireless/model/DeleteDestinationResult.h>
#include <aws/iotwireless/model/DeleteDeviceProfileResult.h>
#include <aws/iotwireless/model/DeleteFuotaTaskResult.h>
#include <aws/iotwireless/model/DeleteMulticastGroupResult.h>
#include <aws/iotwireless/model/DeleteNetworkAnalyzerConfigurationResult.h>
#include <aws/iotwireless/model/DeleteQueuedMessagesResult.h>
#include <aws/iotwireless/model/DeleteServiceProfileResult.h>
#include <aws/iotwireless/model/DeleteWirelessDeviceResult.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayResult.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskResult.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskDefinitionResult.h>
#include <aws/iotwireless/model/DisassociateAwsAccountFromPartnerAccountResult.h>
#include <aws/iotwireless/model/DisassociateMulticastGroupFromFuotaTaskResult.h>
#include <aws/iotwireless/model/DisassociateWirelessDeviceFromFuotaTaskResult.h>
#include <aws/iotwireless/model/DisassociateWirelessDeviceFromMulticastGroupResult.h>
#include <aws/iotwireless/model/DisassociateWirelessDeviceFromThingResult.h>
#include <aws/iotwireless/model/DisassociateWirelessGatewayFromCertificateResult.h>
#include <aws/iotwireless/model/DisassociateWirelessGatewayFromThingResult.h>
#include <aws/iotwireless/model/GetDestinationResult.h>
#include <aws/iotwireless/model/GetDeviceProfileResult.h>
#include <aws/iotwireless/model/GetEventConfigurationByResourceTypesResult.h>
#include <aws/iotwireless/model/GetFuotaTaskResult.h>
#include <aws/iotwireless/model/GetLogLevelsByResourceTypesResult.h>
#include <aws/iotwireless/model/GetMulticastGroupResult.h>
#include <aws/iotwireless/model/GetMulticastGroupSessionResult.h>
#include <aws/iotwireless/model/GetNetworkAnalyzerConfigurationResult.h>
#include <aws/iotwireless/model/GetPartnerAccountResult.h>
#include <aws/iotwireless/model/GetPositionEstimateResult.h>
#include <aws/iotwireless/model/GetResourceEventConfigurationResult.h>
#include <aws/iotwireless/model/GetResourceLogLevelResult.h>
#include <aws/iotwireless/model/GetResourcePositionResult.h>
#include <aws/iotwireless/model/GetServiceEndpointResult.h>
#include <aws/iotwireless/model/GetServiceProfileResult.h>
#include <aws/iotwireless/model/GetWirelessDeviceResult.h>
#include <aws/iotwireless/model/GetWirelessDeviceStatisticsResult.h>
#include <aws/iotwireless/model/GetWirelessGatewayResult.h>
#include <aws/iotwireless/model/GetWirelessGatewayCertificateResult.h>
#include <aws/iotwireless/model/GetWirelessGatewayFirmwareInformationResult.h>
#include <aws/iotwireless/model/GetWirelessGatewayStatisticsResult.h>
#include <aws/iotwireless/model/GetWirelessGatewayTaskResult.h>
#include <aws/iotwireless/model/GetWirelessGatewayTaskDefinitionResult.h>
#include <aws/iotwireless/model/ListDestinationsResult.h>
#include <aws/iotwireless/model/ListDeviceProfilesResult.h>
#include <aws/iotwireless/model/ListEventConfigurationsResult.h>
#include <aws/iotwireless/model/ListFuotaTasksResult.h>
#include <aws/iotwireless/model/ListMulticastGroupsResult.h>
#include <aws/iotwireless/model/ListMulticastGroupsByFuotaTaskResult.h>
#include <aws/iotwireless/model/ListNetworkAnalyzerConfigurationsResult.h>
#include <aws/iotwireless/model/ListPartnerAccountsResult.h>
#include <aws/iotwireless/model/ListQueuedMessagesResult.h>
#include <aws/iotwireless/model/ListServiceProfilesResult.h>
#include <aws/iotwireless/model/ListTagsForResourceResult.h>
#include <aws/iotwireless/model/ListWirelessDevicesResult.h>
#include <aws/iotwireless/model/ListWirelessGatewayTaskDefinitionsResult.h>
#include <aws/iotwireless/model/ListWirelessGatewaysResult.h>
#include <aws/iotwireless/model/PutResourceLogLevelResult.h>
#include <aws/iotwireless/model/ResetAllResourceLogLevelsResult.h>
#include <aws/iotwireless/model/ResetResourceLogLevelResult.h>
#include <aws/iotwireless/model/SendDataToMulticastGroupResult.h>
#include <aws/iotwireless/model/SendDataToWirelessDeviceResult.h>
#include <aws/iotwireless/model/StartBulkAssociateWirelessDeviceWithMulticastGroupResult.h>
#include <aws/iotwireless/model/StartBulkDisassociateWirelessDeviceFromMulticastGroupResult.h>
#include <aws/iotwireless/model/StartFuotaTaskResult.h>
#include <aws/iotwireless/model/StartMulticastGroupSessionResult.h>
#include <aws/iotwireless/model/TagResourceResult.h>
#include <aws/iotwireless/model/TestWirelessDeviceResult.h>
#include <aws/iotwireless/model/UntagResourceResult.h>
#include <aws/iotwireless/model/UpdateDestinationResult.h>
#include <aws/iotwireless/model/UpdateEventConfigurationByResourceTypesResult.h>
#include <aws/iotwireless/model/UpdateFuotaTaskResult.h>
#include <aws/iotwireless/model/UpdateLogLevelsByResourceTypesResult.h>
#include <aws/iotwireless/model/UpdateMulticastGroupResult.h>
#include <aws/iotwireless/model/UpdateNetworkAnalyzerConfigurationResult.h>
#include <aws/iotwireless/model/UpdatePartnerAccountResult.h>
#include <aws/iotwireless/model/UpdateResourceEventConfigurationResult.h>
#include <aws/iotwireless/model/UpdateResourcePositionResult.h>
#include <aws/iotwireless/model/UpdateWirelessDeviceResult.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayResult.h>
/* End of service model headers required in IoTWirelessClient header */

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

  namespace IoTWireless
  {
    using IoTWirelessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTWirelessEndpointProviderBase = Aws::IoTWireless::Endpoint::IoTWirelessEndpointProviderBase;
    using IoTWirelessEndpointProvider = Aws::IoTWireless::Endpoint::IoTWirelessEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTWirelessClient header */
      class AssociateAwsAccountWithPartnerAccountRequest;
      class AssociateMulticastGroupWithFuotaTaskRequest;
      class AssociateWirelessDeviceWithFuotaTaskRequest;
      class AssociateWirelessDeviceWithMulticastGroupRequest;
      class AssociateWirelessDeviceWithThingRequest;
      class AssociateWirelessGatewayWithCertificateRequest;
      class AssociateWirelessGatewayWithThingRequest;
      class CancelMulticastGroupSessionRequest;
      class CreateDestinationRequest;
      class CreateDeviceProfileRequest;
      class CreateFuotaTaskRequest;
      class CreateMulticastGroupRequest;
      class CreateNetworkAnalyzerConfigurationRequest;
      class CreateServiceProfileRequest;
      class CreateWirelessDeviceRequest;
      class CreateWirelessGatewayRequest;
      class CreateWirelessGatewayTaskRequest;
      class CreateWirelessGatewayTaskDefinitionRequest;
      class DeleteDestinationRequest;
      class DeleteDeviceProfileRequest;
      class DeleteFuotaTaskRequest;
      class DeleteMulticastGroupRequest;
      class DeleteNetworkAnalyzerConfigurationRequest;
      class DeleteQueuedMessagesRequest;
      class DeleteServiceProfileRequest;
      class DeleteWirelessDeviceRequest;
      class DeleteWirelessGatewayRequest;
      class DeleteWirelessGatewayTaskRequest;
      class DeleteWirelessGatewayTaskDefinitionRequest;
      class DisassociateAwsAccountFromPartnerAccountRequest;
      class DisassociateMulticastGroupFromFuotaTaskRequest;
      class DisassociateWirelessDeviceFromFuotaTaskRequest;
      class DisassociateWirelessDeviceFromMulticastGroupRequest;
      class DisassociateWirelessDeviceFromThingRequest;
      class DisassociateWirelessGatewayFromCertificateRequest;
      class DisassociateWirelessGatewayFromThingRequest;
      class GetDestinationRequest;
      class GetDeviceProfileRequest;
      class GetEventConfigurationByResourceTypesRequest;
      class GetFuotaTaskRequest;
      class GetLogLevelsByResourceTypesRequest;
      class GetMulticastGroupRequest;
      class GetMulticastGroupSessionRequest;
      class GetNetworkAnalyzerConfigurationRequest;
      class GetPartnerAccountRequest;
      class GetPositionEstimateRequest;
      class GetResourceEventConfigurationRequest;
      class GetResourceLogLevelRequest;
      class GetResourcePositionRequest;
      class GetServiceEndpointRequest;
      class GetServiceProfileRequest;
      class GetWirelessDeviceRequest;
      class GetWirelessDeviceStatisticsRequest;
      class GetWirelessGatewayRequest;
      class GetWirelessGatewayCertificateRequest;
      class GetWirelessGatewayFirmwareInformationRequest;
      class GetWirelessGatewayStatisticsRequest;
      class GetWirelessGatewayTaskRequest;
      class GetWirelessGatewayTaskDefinitionRequest;
      class ListDestinationsRequest;
      class ListDeviceProfilesRequest;
      class ListEventConfigurationsRequest;
      class ListFuotaTasksRequest;
      class ListMulticastGroupsRequest;
      class ListMulticastGroupsByFuotaTaskRequest;
      class ListNetworkAnalyzerConfigurationsRequest;
      class ListPartnerAccountsRequest;
      class ListQueuedMessagesRequest;
      class ListServiceProfilesRequest;
      class ListTagsForResourceRequest;
      class ListWirelessDevicesRequest;
      class ListWirelessGatewayTaskDefinitionsRequest;
      class ListWirelessGatewaysRequest;
      class PutResourceLogLevelRequest;
      class ResetAllResourceLogLevelsRequest;
      class ResetResourceLogLevelRequest;
      class SendDataToMulticastGroupRequest;
      class SendDataToWirelessDeviceRequest;
      class StartBulkAssociateWirelessDeviceWithMulticastGroupRequest;
      class StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest;
      class StartFuotaTaskRequest;
      class StartMulticastGroupSessionRequest;
      class TagResourceRequest;
      class TestWirelessDeviceRequest;
      class UntagResourceRequest;
      class UpdateDestinationRequest;
      class UpdateEventConfigurationByResourceTypesRequest;
      class UpdateFuotaTaskRequest;
      class UpdateLogLevelsByResourceTypesRequest;
      class UpdateMulticastGroupRequest;
      class UpdateNetworkAnalyzerConfigurationRequest;
      class UpdatePartnerAccountRequest;
      class UpdateResourceEventConfigurationRequest;
      class UpdateResourcePositionRequest;
      class UpdateWirelessDeviceRequest;
      class UpdateWirelessGatewayRequest;
      /* End of service model forward declarations required in IoTWirelessClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateAwsAccountWithPartnerAccountResult, IoTWirelessError> AssociateAwsAccountWithPartnerAccountOutcome;
      typedef Aws::Utils::Outcome<AssociateMulticastGroupWithFuotaTaskResult, IoTWirelessError> AssociateMulticastGroupWithFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<AssociateWirelessDeviceWithFuotaTaskResult, IoTWirelessError> AssociateWirelessDeviceWithFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<AssociateWirelessDeviceWithMulticastGroupResult, IoTWirelessError> AssociateWirelessDeviceWithMulticastGroupOutcome;
      typedef Aws::Utils::Outcome<AssociateWirelessDeviceWithThingResult, IoTWirelessError> AssociateWirelessDeviceWithThingOutcome;
      typedef Aws::Utils::Outcome<AssociateWirelessGatewayWithCertificateResult, IoTWirelessError> AssociateWirelessGatewayWithCertificateOutcome;
      typedef Aws::Utils::Outcome<AssociateWirelessGatewayWithThingResult, IoTWirelessError> AssociateWirelessGatewayWithThingOutcome;
      typedef Aws::Utils::Outcome<CancelMulticastGroupSessionResult, IoTWirelessError> CancelMulticastGroupSessionOutcome;
      typedef Aws::Utils::Outcome<CreateDestinationResult, IoTWirelessError> CreateDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateDeviceProfileResult, IoTWirelessError> CreateDeviceProfileOutcome;
      typedef Aws::Utils::Outcome<CreateFuotaTaskResult, IoTWirelessError> CreateFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<CreateMulticastGroupResult, IoTWirelessError> CreateMulticastGroupOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkAnalyzerConfigurationResult, IoTWirelessError> CreateNetworkAnalyzerConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateServiceProfileResult, IoTWirelessError> CreateServiceProfileOutcome;
      typedef Aws::Utils::Outcome<CreateWirelessDeviceResult, IoTWirelessError> CreateWirelessDeviceOutcome;
      typedef Aws::Utils::Outcome<CreateWirelessGatewayResult, IoTWirelessError> CreateWirelessGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateWirelessGatewayTaskResult, IoTWirelessError> CreateWirelessGatewayTaskOutcome;
      typedef Aws::Utils::Outcome<CreateWirelessGatewayTaskDefinitionResult, IoTWirelessError> CreateWirelessGatewayTaskDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteDestinationResult, IoTWirelessError> DeleteDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteDeviceProfileResult, IoTWirelessError> DeleteDeviceProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteFuotaTaskResult, IoTWirelessError> DeleteFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<DeleteMulticastGroupResult, IoTWirelessError> DeleteMulticastGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkAnalyzerConfigurationResult, IoTWirelessError> DeleteNetworkAnalyzerConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteQueuedMessagesResult, IoTWirelessError> DeleteQueuedMessagesOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceProfileResult, IoTWirelessError> DeleteServiceProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteWirelessDeviceResult, IoTWirelessError> DeleteWirelessDeviceOutcome;
      typedef Aws::Utils::Outcome<DeleteWirelessGatewayResult, IoTWirelessError> DeleteWirelessGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteWirelessGatewayTaskResult, IoTWirelessError> DeleteWirelessGatewayTaskOutcome;
      typedef Aws::Utils::Outcome<DeleteWirelessGatewayTaskDefinitionResult, IoTWirelessError> DeleteWirelessGatewayTaskDefinitionOutcome;
      typedef Aws::Utils::Outcome<DisassociateAwsAccountFromPartnerAccountResult, IoTWirelessError> DisassociateAwsAccountFromPartnerAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateMulticastGroupFromFuotaTaskResult, IoTWirelessError> DisassociateMulticastGroupFromFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<DisassociateWirelessDeviceFromFuotaTaskResult, IoTWirelessError> DisassociateWirelessDeviceFromFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<DisassociateWirelessDeviceFromMulticastGroupResult, IoTWirelessError> DisassociateWirelessDeviceFromMulticastGroupOutcome;
      typedef Aws::Utils::Outcome<DisassociateWirelessDeviceFromThingResult, IoTWirelessError> DisassociateWirelessDeviceFromThingOutcome;
      typedef Aws::Utils::Outcome<DisassociateWirelessGatewayFromCertificateResult, IoTWirelessError> DisassociateWirelessGatewayFromCertificateOutcome;
      typedef Aws::Utils::Outcome<DisassociateWirelessGatewayFromThingResult, IoTWirelessError> DisassociateWirelessGatewayFromThingOutcome;
      typedef Aws::Utils::Outcome<GetDestinationResult, IoTWirelessError> GetDestinationOutcome;
      typedef Aws::Utils::Outcome<GetDeviceProfileResult, IoTWirelessError> GetDeviceProfileOutcome;
      typedef Aws::Utils::Outcome<GetEventConfigurationByResourceTypesResult, IoTWirelessError> GetEventConfigurationByResourceTypesOutcome;
      typedef Aws::Utils::Outcome<GetFuotaTaskResult, IoTWirelessError> GetFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<GetLogLevelsByResourceTypesResult, IoTWirelessError> GetLogLevelsByResourceTypesOutcome;
      typedef Aws::Utils::Outcome<GetMulticastGroupResult, IoTWirelessError> GetMulticastGroupOutcome;
      typedef Aws::Utils::Outcome<GetMulticastGroupSessionResult, IoTWirelessError> GetMulticastGroupSessionOutcome;
      typedef Aws::Utils::Outcome<GetNetworkAnalyzerConfigurationResult, IoTWirelessError> GetNetworkAnalyzerConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetPartnerAccountResult, IoTWirelessError> GetPartnerAccountOutcome;
      typedef Aws::Utils::Outcome<GetPositionEstimateResult, IoTWirelessError> GetPositionEstimateOutcome;
      typedef Aws::Utils::Outcome<GetResourceEventConfigurationResult, IoTWirelessError> GetResourceEventConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetResourceLogLevelResult, IoTWirelessError> GetResourceLogLevelOutcome;
      typedef Aws::Utils::Outcome<GetResourcePositionResult, IoTWirelessError> GetResourcePositionOutcome;
      typedef Aws::Utils::Outcome<GetServiceEndpointResult, IoTWirelessError> GetServiceEndpointOutcome;
      typedef Aws::Utils::Outcome<GetServiceProfileResult, IoTWirelessError> GetServiceProfileOutcome;
      typedef Aws::Utils::Outcome<GetWirelessDeviceResult, IoTWirelessError> GetWirelessDeviceOutcome;
      typedef Aws::Utils::Outcome<GetWirelessDeviceStatisticsResult, IoTWirelessError> GetWirelessDeviceStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetWirelessGatewayResult, IoTWirelessError> GetWirelessGatewayOutcome;
      typedef Aws::Utils::Outcome<GetWirelessGatewayCertificateResult, IoTWirelessError> GetWirelessGatewayCertificateOutcome;
      typedef Aws::Utils::Outcome<GetWirelessGatewayFirmwareInformationResult, IoTWirelessError> GetWirelessGatewayFirmwareInformationOutcome;
      typedef Aws::Utils::Outcome<GetWirelessGatewayStatisticsResult, IoTWirelessError> GetWirelessGatewayStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetWirelessGatewayTaskResult, IoTWirelessError> GetWirelessGatewayTaskOutcome;
      typedef Aws::Utils::Outcome<GetWirelessGatewayTaskDefinitionResult, IoTWirelessError> GetWirelessGatewayTaskDefinitionOutcome;
      typedef Aws::Utils::Outcome<ListDestinationsResult, IoTWirelessError> ListDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListDeviceProfilesResult, IoTWirelessError> ListDeviceProfilesOutcome;
      typedef Aws::Utils::Outcome<ListEventConfigurationsResult, IoTWirelessError> ListEventConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListFuotaTasksResult, IoTWirelessError> ListFuotaTasksOutcome;
      typedef Aws::Utils::Outcome<ListMulticastGroupsResult, IoTWirelessError> ListMulticastGroupsOutcome;
      typedef Aws::Utils::Outcome<ListMulticastGroupsByFuotaTaskResult, IoTWirelessError> ListMulticastGroupsByFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<ListNetworkAnalyzerConfigurationsResult, IoTWirelessError> ListNetworkAnalyzerConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListPartnerAccountsResult, IoTWirelessError> ListPartnerAccountsOutcome;
      typedef Aws::Utils::Outcome<ListQueuedMessagesResult, IoTWirelessError> ListQueuedMessagesOutcome;
      typedef Aws::Utils::Outcome<ListServiceProfilesResult, IoTWirelessError> ListServiceProfilesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTWirelessError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWirelessDevicesResult, IoTWirelessError> ListWirelessDevicesOutcome;
      typedef Aws::Utils::Outcome<ListWirelessGatewayTaskDefinitionsResult, IoTWirelessError> ListWirelessGatewayTaskDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListWirelessGatewaysResult, IoTWirelessError> ListWirelessGatewaysOutcome;
      typedef Aws::Utils::Outcome<PutResourceLogLevelResult, IoTWirelessError> PutResourceLogLevelOutcome;
      typedef Aws::Utils::Outcome<ResetAllResourceLogLevelsResult, IoTWirelessError> ResetAllResourceLogLevelsOutcome;
      typedef Aws::Utils::Outcome<ResetResourceLogLevelResult, IoTWirelessError> ResetResourceLogLevelOutcome;
      typedef Aws::Utils::Outcome<SendDataToMulticastGroupResult, IoTWirelessError> SendDataToMulticastGroupOutcome;
      typedef Aws::Utils::Outcome<SendDataToWirelessDeviceResult, IoTWirelessError> SendDataToWirelessDeviceOutcome;
      typedef Aws::Utils::Outcome<StartBulkAssociateWirelessDeviceWithMulticastGroupResult, IoTWirelessError> StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome;
      typedef Aws::Utils::Outcome<StartBulkDisassociateWirelessDeviceFromMulticastGroupResult, IoTWirelessError> StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome;
      typedef Aws::Utils::Outcome<StartFuotaTaskResult, IoTWirelessError> StartFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<StartMulticastGroupSessionResult, IoTWirelessError> StartMulticastGroupSessionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoTWirelessError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestWirelessDeviceResult, IoTWirelessError> TestWirelessDeviceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoTWirelessError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDestinationResult, IoTWirelessError> UpdateDestinationOutcome;
      typedef Aws::Utils::Outcome<UpdateEventConfigurationByResourceTypesResult, IoTWirelessError> UpdateEventConfigurationByResourceTypesOutcome;
      typedef Aws::Utils::Outcome<UpdateFuotaTaskResult, IoTWirelessError> UpdateFuotaTaskOutcome;
      typedef Aws::Utils::Outcome<UpdateLogLevelsByResourceTypesResult, IoTWirelessError> UpdateLogLevelsByResourceTypesOutcome;
      typedef Aws::Utils::Outcome<UpdateMulticastGroupResult, IoTWirelessError> UpdateMulticastGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateNetworkAnalyzerConfigurationResult, IoTWirelessError> UpdateNetworkAnalyzerConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdatePartnerAccountResult, IoTWirelessError> UpdatePartnerAccountOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceEventConfigurationResult, IoTWirelessError> UpdateResourceEventConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateResourcePositionResult, IoTWirelessError> UpdateResourcePositionOutcome;
      typedef Aws::Utils::Outcome<UpdateWirelessDeviceResult, IoTWirelessError> UpdateWirelessDeviceOutcome;
      typedef Aws::Utils::Outcome<UpdateWirelessGatewayResult, IoTWirelessError> UpdateWirelessGatewayOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateAwsAccountWithPartnerAccountOutcome> AssociateAwsAccountWithPartnerAccountOutcomeCallable;
      typedef std::future<AssociateMulticastGroupWithFuotaTaskOutcome> AssociateMulticastGroupWithFuotaTaskOutcomeCallable;
      typedef std::future<AssociateWirelessDeviceWithFuotaTaskOutcome> AssociateWirelessDeviceWithFuotaTaskOutcomeCallable;
      typedef std::future<AssociateWirelessDeviceWithMulticastGroupOutcome> AssociateWirelessDeviceWithMulticastGroupOutcomeCallable;
      typedef std::future<AssociateWirelessDeviceWithThingOutcome> AssociateWirelessDeviceWithThingOutcomeCallable;
      typedef std::future<AssociateWirelessGatewayWithCertificateOutcome> AssociateWirelessGatewayWithCertificateOutcomeCallable;
      typedef std::future<AssociateWirelessGatewayWithThingOutcome> AssociateWirelessGatewayWithThingOutcomeCallable;
      typedef std::future<CancelMulticastGroupSessionOutcome> CancelMulticastGroupSessionOutcomeCallable;
      typedef std::future<CreateDestinationOutcome> CreateDestinationOutcomeCallable;
      typedef std::future<CreateDeviceProfileOutcome> CreateDeviceProfileOutcomeCallable;
      typedef std::future<CreateFuotaTaskOutcome> CreateFuotaTaskOutcomeCallable;
      typedef std::future<CreateMulticastGroupOutcome> CreateMulticastGroupOutcomeCallable;
      typedef std::future<CreateNetworkAnalyzerConfigurationOutcome> CreateNetworkAnalyzerConfigurationOutcomeCallable;
      typedef std::future<CreateServiceProfileOutcome> CreateServiceProfileOutcomeCallable;
      typedef std::future<CreateWirelessDeviceOutcome> CreateWirelessDeviceOutcomeCallable;
      typedef std::future<CreateWirelessGatewayOutcome> CreateWirelessGatewayOutcomeCallable;
      typedef std::future<CreateWirelessGatewayTaskOutcome> CreateWirelessGatewayTaskOutcomeCallable;
      typedef std::future<CreateWirelessGatewayTaskDefinitionOutcome> CreateWirelessGatewayTaskDefinitionOutcomeCallable;
      typedef std::future<DeleteDestinationOutcome> DeleteDestinationOutcomeCallable;
      typedef std::future<DeleteDeviceProfileOutcome> DeleteDeviceProfileOutcomeCallable;
      typedef std::future<DeleteFuotaTaskOutcome> DeleteFuotaTaskOutcomeCallable;
      typedef std::future<DeleteMulticastGroupOutcome> DeleteMulticastGroupOutcomeCallable;
      typedef std::future<DeleteNetworkAnalyzerConfigurationOutcome> DeleteNetworkAnalyzerConfigurationOutcomeCallable;
      typedef std::future<DeleteQueuedMessagesOutcome> DeleteQueuedMessagesOutcomeCallable;
      typedef std::future<DeleteServiceProfileOutcome> DeleteServiceProfileOutcomeCallable;
      typedef std::future<DeleteWirelessDeviceOutcome> DeleteWirelessDeviceOutcomeCallable;
      typedef std::future<DeleteWirelessGatewayOutcome> DeleteWirelessGatewayOutcomeCallable;
      typedef std::future<DeleteWirelessGatewayTaskOutcome> DeleteWirelessGatewayTaskOutcomeCallable;
      typedef std::future<DeleteWirelessGatewayTaskDefinitionOutcome> DeleteWirelessGatewayTaskDefinitionOutcomeCallable;
      typedef std::future<DisassociateAwsAccountFromPartnerAccountOutcome> DisassociateAwsAccountFromPartnerAccountOutcomeCallable;
      typedef std::future<DisassociateMulticastGroupFromFuotaTaskOutcome> DisassociateMulticastGroupFromFuotaTaskOutcomeCallable;
      typedef std::future<DisassociateWirelessDeviceFromFuotaTaskOutcome> DisassociateWirelessDeviceFromFuotaTaskOutcomeCallable;
      typedef std::future<DisassociateWirelessDeviceFromMulticastGroupOutcome> DisassociateWirelessDeviceFromMulticastGroupOutcomeCallable;
      typedef std::future<DisassociateWirelessDeviceFromThingOutcome> DisassociateWirelessDeviceFromThingOutcomeCallable;
      typedef std::future<DisassociateWirelessGatewayFromCertificateOutcome> DisassociateWirelessGatewayFromCertificateOutcomeCallable;
      typedef std::future<DisassociateWirelessGatewayFromThingOutcome> DisassociateWirelessGatewayFromThingOutcomeCallable;
      typedef std::future<GetDestinationOutcome> GetDestinationOutcomeCallable;
      typedef std::future<GetDeviceProfileOutcome> GetDeviceProfileOutcomeCallable;
      typedef std::future<GetEventConfigurationByResourceTypesOutcome> GetEventConfigurationByResourceTypesOutcomeCallable;
      typedef std::future<GetFuotaTaskOutcome> GetFuotaTaskOutcomeCallable;
      typedef std::future<GetLogLevelsByResourceTypesOutcome> GetLogLevelsByResourceTypesOutcomeCallable;
      typedef std::future<GetMulticastGroupOutcome> GetMulticastGroupOutcomeCallable;
      typedef std::future<GetMulticastGroupSessionOutcome> GetMulticastGroupSessionOutcomeCallable;
      typedef std::future<GetNetworkAnalyzerConfigurationOutcome> GetNetworkAnalyzerConfigurationOutcomeCallable;
      typedef std::future<GetPartnerAccountOutcome> GetPartnerAccountOutcomeCallable;
      typedef std::future<GetPositionEstimateOutcome> GetPositionEstimateOutcomeCallable;
      typedef std::future<GetResourceEventConfigurationOutcome> GetResourceEventConfigurationOutcomeCallable;
      typedef std::future<GetResourceLogLevelOutcome> GetResourceLogLevelOutcomeCallable;
      typedef std::future<GetResourcePositionOutcome> GetResourcePositionOutcomeCallable;
      typedef std::future<GetServiceEndpointOutcome> GetServiceEndpointOutcomeCallable;
      typedef std::future<GetServiceProfileOutcome> GetServiceProfileOutcomeCallable;
      typedef std::future<GetWirelessDeviceOutcome> GetWirelessDeviceOutcomeCallable;
      typedef std::future<GetWirelessDeviceStatisticsOutcome> GetWirelessDeviceStatisticsOutcomeCallable;
      typedef std::future<GetWirelessGatewayOutcome> GetWirelessGatewayOutcomeCallable;
      typedef std::future<GetWirelessGatewayCertificateOutcome> GetWirelessGatewayCertificateOutcomeCallable;
      typedef std::future<GetWirelessGatewayFirmwareInformationOutcome> GetWirelessGatewayFirmwareInformationOutcomeCallable;
      typedef std::future<GetWirelessGatewayStatisticsOutcome> GetWirelessGatewayStatisticsOutcomeCallable;
      typedef std::future<GetWirelessGatewayTaskOutcome> GetWirelessGatewayTaskOutcomeCallable;
      typedef std::future<GetWirelessGatewayTaskDefinitionOutcome> GetWirelessGatewayTaskDefinitionOutcomeCallable;
      typedef std::future<ListDestinationsOutcome> ListDestinationsOutcomeCallable;
      typedef std::future<ListDeviceProfilesOutcome> ListDeviceProfilesOutcomeCallable;
      typedef std::future<ListEventConfigurationsOutcome> ListEventConfigurationsOutcomeCallable;
      typedef std::future<ListFuotaTasksOutcome> ListFuotaTasksOutcomeCallable;
      typedef std::future<ListMulticastGroupsOutcome> ListMulticastGroupsOutcomeCallable;
      typedef std::future<ListMulticastGroupsByFuotaTaskOutcome> ListMulticastGroupsByFuotaTaskOutcomeCallable;
      typedef std::future<ListNetworkAnalyzerConfigurationsOutcome> ListNetworkAnalyzerConfigurationsOutcomeCallable;
      typedef std::future<ListPartnerAccountsOutcome> ListPartnerAccountsOutcomeCallable;
      typedef std::future<ListQueuedMessagesOutcome> ListQueuedMessagesOutcomeCallable;
      typedef std::future<ListServiceProfilesOutcome> ListServiceProfilesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWirelessDevicesOutcome> ListWirelessDevicesOutcomeCallable;
      typedef std::future<ListWirelessGatewayTaskDefinitionsOutcome> ListWirelessGatewayTaskDefinitionsOutcomeCallable;
      typedef std::future<ListWirelessGatewaysOutcome> ListWirelessGatewaysOutcomeCallable;
      typedef std::future<PutResourceLogLevelOutcome> PutResourceLogLevelOutcomeCallable;
      typedef std::future<ResetAllResourceLogLevelsOutcome> ResetAllResourceLogLevelsOutcomeCallable;
      typedef std::future<ResetResourceLogLevelOutcome> ResetResourceLogLevelOutcomeCallable;
      typedef std::future<SendDataToMulticastGroupOutcome> SendDataToMulticastGroupOutcomeCallable;
      typedef std::future<SendDataToWirelessDeviceOutcome> SendDataToWirelessDeviceOutcomeCallable;
      typedef std::future<StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome> StartBulkAssociateWirelessDeviceWithMulticastGroupOutcomeCallable;
      typedef std::future<StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome> StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcomeCallable;
      typedef std::future<StartFuotaTaskOutcome> StartFuotaTaskOutcomeCallable;
      typedef std::future<StartMulticastGroupSessionOutcome> StartMulticastGroupSessionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestWirelessDeviceOutcome> TestWirelessDeviceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDestinationOutcome> UpdateDestinationOutcomeCallable;
      typedef std::future<UpdateEventConfigurationByResourceTypesOutcome> UpdateEventConfigurationByResourceTypesOutcomeCallable;
      typedef std::future<UpdateFuotaTaskOutcome> UpdateFuotaTaskOutcomeCallable;
      typedef std::future<UpdateLogLevelsByResourceTypesOutcome> UpdateLogLevelsByResourceTypesOutcomeCallable;
      typedef std::future<UpdateMulticastGroupOutcome> UpdateMulticastGroupOutcomeCallable;
      typedef std::future<UpdateNetworkAnalyzerConfigurationOutcome> UpdateNetworkAnalyzerConfigurationOutcomeCallable;
      typedef std::future<UpdatePartnerAccountOutcome> UpdatePartnerAccountOutcomeCallable;
      typedef std::future<UpdateResourceEventConfigurationOutcome> UpdateResourceEventConfigurationOutcomeCallable;
      typedef std::future<UpdateResourcePositionOutcome> UpdateResourcePositionOutcomeCallable;
      typedef std::future<UpdateWirelessDeviceOutcome> UpdateWirelessDeviceOutcomeCallable;
      typedef std::future<UpdateWirelessGatewayOutcome> UpdateWirelessGatewayOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTWirelessClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateAwsAccountWithPartnerAccountRequest&, const Model::AssociateAwsAccountWithPartnerAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAwsAccountWithPartnerAccountResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateMulticastGroupWithFuotaTaskRequest&, const Model::AssociateMulticastGroupWithFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMulticastGroupWithFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateWirelessDeviceWithFuotaTaskRequest&, const Model::AssociateWirelessDeviceWithFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWirelessDeviceWithFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateWirelessDeviceWithMulticastGroupRequest&, const Model::AssociateWirelessDeviceWithMulticastGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateWirelessDeviceWithThingRequest&, const Model::AssociateWirelessDeviceWithThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWirelessDeviceWithThingResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateWirelessGatewayWithCertificateRequest&, const Model::AssociateWirelessGatewayWithCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWirelessGatewayWithCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateWirelessGatewayWithThingRequest&, const Model::AssociateWirelessGatewayWithThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWirelessGatewayWithThingResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CancelMulticastGroupSessionRequest&, const Model::CancelMulticastGroupSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMulticastGroupSessionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateDestinationRequest&, const Model::CreateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateDeviceProfileRequest&, const Model::CreateDeviceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeviceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateFuotaTaskRequest&, const Model::CreateFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateMulticastGroupRequest&, const Model::CreateMulticastGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMulticastGroupResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateNetworkAnalyzerConfigurationRequest&, const Model::CreateNetworkAnalyzerConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkAnalyzerConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateServiceProfileRequest&, const Model::CreateServiceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateWirelessDeviceRequest&, const Model::CreateWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateWirelessGatewayRequest&, const Model::CreateWirelessGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWirelessGatewayResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateWirelessGatewayTaskRequest&, const Model::CreateWirelessGatewayTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWirelessGatewayTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateWirelessGatewayTaskDefinitionRequest&, const Model::CreateWirelessGatewayTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWirelessGatewayTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteDestinationRequest&, const Model::DeleteDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteDeviceProfileRequest&, const Model::DeleteDeviceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteFuotaTaskRequest&, const Model::DeleteFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteMulticastGroupRequest&, const Model::DeleteMulticastGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMulticastGroupResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteNetworkAnalyzerConfigurationRequest&, const Model::DeleteNetworkAnalyzerConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkAnalyzerConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteQueuedMessagesRequest&, const Model::DeleteQueuedMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueuedMessagesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteServiceProfileRequest&, const Model::DeleteServiceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteWirelessDeviceRequest&, const Model::DeleteWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteWirelessGatewayRequest&, const Model::DeleteWirelessGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWirelessGatewayResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteWirelessGatewayTaskRequest&, const Model::DeleteWirelessGatewayTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWirelessGatewayTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteWirelessGatewayTaskDefinitionRequest&, const Model::DeleteWirelessGatewayTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWirelessGatewayTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateAwsAccountFromPartnerAccountRequest&, const Model::DisassociateAwsAccountFromPartnerAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAwsAccountFromPartnerAccountResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateMulticastGroupFromFuotaTaskRequest&, const Model::DisassociateMulticastGroupFromFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMulticastGroupFromFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateWirelessDeviceFromFuotaTaskRequest&, const Model::DisassociateWirelessDeviceFromFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWirelessDeviceFromFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateWirelessDeviceFromMulticastGroupRequest&, const Model::DisassociateWirelessDeviceFromMulticastGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateWirelessDeviceFromThingRequest&, const Model::DisassociateWirelessDeviceFromThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWirelessDeviceFromThingResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateWirelessGatewayFromCertificateRequest&, const Model::DisassociateWirelessGatewayFromCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWirelessGatewayFromCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateWirelessGatewayFromThingRequest&, const Model::DisassociateWirelessGatewayFromThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWirelessGatewayFromThingResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetDestinationRequest&, const Model::GetDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetDeviceProfileRequest&, const Model::GetDeviceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetEventConfigurationByResourceTypesRequest&, const Model::GetEventConfigurationByResourceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventConfigurationByResourceTypesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetFuotaTaskRequest&, const Model::GetFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetLogLevelsByResourceTypesRequest&, const Model::GetLogLevelsByResourceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLogLevelsByResourceTypesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetMulticastGroupRequest&, const Model::GetMulticastGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMulticastGroupResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetMulticastGroupSessionRequest&, const Model::GetMulticastGroupSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMulticastGroupSessionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetNetworkAnalyzerConfigurationRequest&, const Model::GetNetworkAnalyzerConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkAnalyzerConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetPartnerAccountRequest&, const Model::GetPartnerAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPartnerAccountResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetPositionEstimateRequest&, Model::GetPositionEstimateOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPositionEstimateResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetResourceEventConfigurationRequest&, const Model::GetResourceEventConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceEventConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetResourceLogLevelRequest&, const Model::GetResourceLogLevelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceLogLevelResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetResourcePositionRequest&, Model::GetResourcePositionOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePositionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetServiceEndpointRequest&, const Model::GetServiceEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceEndpointResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetServiceProfileRequest&, const Model::GetServiceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetWirelessDeviceRequest&, const Model::GetWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetWirelessDeviceStatisticsRequest&, const Model::GetWirelessDeviceStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWirelessDeviceStatisticsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetWirelessGatewayRequest&, const Model::GetWirelessGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWirelessGatewayResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetWirelessGatewayCertificateRequest&, const Model::GetWirelessGatewayCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWirelessGatewayCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetWirelessGatewayFirmwareInformationRequest&, const Model::GetWirelessGatewayFirmwareInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWirelessGatewayFirmwareInformationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetWirelessGatewayStatisticsRequest&, const Model::GetWirelessGatewayStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWirelessGatewayStatisticsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetWirelessGatewayTaskRequest&, const Model::GetWirelessGatewayTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWirelessGatewayTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetWirelessGatewayTaskDefinitionRequest&, const Model::GetWirelessGatewayTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWirelessGatewayTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListDestinationsRequest&, const Model::ListDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDestinationsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListDeviceProfilesRequest&, const Model::ListDeviceProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceProfilesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListEventConfigurationsRequest&, const Model::ListEventConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListFuotaTasksRequest&, const Model::ListFuotaTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFuotaTasksResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListMulticastGroupsRequest&, const Model::ListMulticastGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMulticastGroupsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListMulticastGroupsByFuotaTaskRequest&, const Model::ListMulticastGroupsByFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMulticastGroupsByFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListNetworkAnalyzerConfigurationsRequest&, const Model::ListNetworkAnalyzerConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworkAnalyzerConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListPartnerAccountsRequest&, const Model::ListPartnerAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartnerAccountsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListQueuedMessagesRequest&, const Model::ListQueuedMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuedMessagesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListServiceProfilesRequest&, const Model::ListServiceProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceProfilesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListWirelessDevicesRequest&, const Model::ListWirelessDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWirelessDevicesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListWirelessGatewayTaskDefinitionsRequest&, const Model::ListWirelessGatewayTaskDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWirelessGatewayTaskDefinitionsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListWirelessGatewaysRequest&, const Model::ListWirelessGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWirelessGatewaysResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::PutResourceLogLevelRequest&, const Model::PutResourceLogLevelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourceLogLevelResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ResetAllResourceLogLevelsRequest&, const Model::ResetAllResourceLogLevelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetAllResourceLogLevelsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ResetResourceLogLevelRequest&, const Model::ResetResourceLogLevelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetResourceLogLevelResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::SendDataToMulticastGroupRequest&, const Model::SendDataToMulticastGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendDataToMulticastGroupResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::SendDataToWirelessDeviceRequest&, const Model::SendDataToWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendDataToWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::StartBulkAssociateWirelessDeviceWithMulticastGroupRequest&, const Model::StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBulkAssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest&, const Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBulkDisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::StartFuotaTaskRequest&, const Model::StartFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::StartMulticastGroupSessionRequest&, const Model::StartMulticastGroupSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMulticastGroupSessionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::TestWirelessDeviceRequest&, const Model::TestWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateDestinationRequest&, const Model::UpdateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateEventConfigurationByResourceTypesRequest&, const Model::UpdateEventConfigurationByResourceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventConfigurationByResourceTypesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateFuotaTaskRequest&, const Model::UpdateFuotaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFuotaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateLogLevelsByResourceTypesRequest&, const Model::UpdateLogLevelsByResourceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLogLevelsByResourceTypesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateMulticastGroupRequest&, const Model::UpdateMulticastGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMulticastGroupResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateNetworkAnalyzerConfigurationRequest&, const Model::UpdateNetworkAnalyzerConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkAnalyzerConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdatePartnerAccountRequest&, const Model::UpdatePartnerAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePartnerAccountResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateResourceEventConfigurationRequest&, const Model::UpdateResourceEventConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceEventConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateResourcePositionRequest&, const Model::UpdateResourcePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourcePositionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateWirelessDeviceRequest&, const Model::UpdateWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateWirelessGatewayRequest&, const Model::UpdateWirelessGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWirelessGatewayResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTWireless
} // namespace Aws
