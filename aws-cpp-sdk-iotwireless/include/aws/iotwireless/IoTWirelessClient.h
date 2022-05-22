/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/iotwireless/model/GetResourceEventConfigurationResult.h>
#include <aws/iotwireless/model/GetResourceLogLevelResult.h>
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
#include <aws/iotwireless/model/UpdateWirelessDeviceResult.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
        class GetResourceEventConfigurationRequest;
        class GetResourceLogLevelRequest;
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
        class UpdateWirelessDeviceRequest;
        class UpdateWirelessGatewayRequest;

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
        typedef Aws::Utils::Outcome<GetResourceEventConfigurationResult, IoTWirelessError> GetResourceEventConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetResourceLogLevelResult, IoTWirelessError> GetResourceLogLevelOutcome;
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
        typedef Aws::Utils::Outcome<UpdateWirelessDeviceResult, IoTWirelessError> UpdateWirelessDeviceOutcome;
        typedef Aws::Utils::Outcome<UpdateWirelessGatewayResult, IoTWirelessError> UpdateWirelessGatewayOutcome;

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
        typedef std::future<GetResourceEventConfigurationOutcome> GetResourceEventConfigurationOutcomeCallable;
        typedef std::future<GetResourceLogLevelOutcome> GetResourceLogLevelOutcomeCallable;
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
        typedef std::future<UpdateWirelessDeviceOutcome> UpdateWirelessDeviceOutcomeCallable;
        typedef std::future<UpdateWirelessGatewayOutcome> UpdateWirelessGatewayOutcomeCallable;
} // namespace Model

  class IoTWirelessClient;

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
    typedef std::function<void(const IoTWirelessClient*, const Model::GetResourceEventConfigurationRequest&, const Model::GetResourceEventConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceEventConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetResourceLogLevelRequest&, const Model::GetResourceLogLevelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceLogLevelResponseReceivedHandler;
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
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateWirelessDeviceRequest&, const Model::UpdateWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateWirelessGatewayRequest&, const Model::UpdateWirelessGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWirelessGatewayResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTWirelessClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTWirelessClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTWirelessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Get the event configuration by resource types.</p><p><h3>See Also:</h3>   <a
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
         * <p>Update the event configuration by resource types.</p><p><h3>See Also:</h3>  
         * <a
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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateAwsAccountWithPartnerAccountAsyncHelper(const Model::AssociateAwsAccountWithPartnerAccountRequest& request, const AssociateAwsAccountWithPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateMulticastGroupWithFuotaTaskAsyncHelper(const Model::AssociateMulticastGroupWithFuotaTaskRequest& request, const AssociateMulticastGroupWithFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWirelessDeviceWithFuotaTaskAsyncHelper(const Model::AssociateWirelessDeviceWithFuotaTaskRequest& request, const AssociateWirelessDeviceWithFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWirelessDeviceWithMulticastGroupAsyncHelper(const Model::AssociateWirelessDeviceWithMulticastGroupRequest& request, const AssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWirelessDeviceWithThingAsyncHelper(const Model::AssociateWirelessDeviceWithThingRequest& request, const AssociateWirelessDeviceWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWirelessGatewayWithCertificateAsyncHelper(const Model::AssociateWirelessGatewayWithCertificateRequest& request, const AssociateWirelessGatewayWithCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWirelessGatewayWithThingAsyncHelper(const Model::AssociateWirelessGatewayWithThingRequest& request, const AssociateWirelessGatewayWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelMulticastGroupSessionAsyncHelper(const Model::CancelMulticastGroupSessionRequest& request, const CancelMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDestinationAsyncHelper(const Model::CreateDestinationRequest& request, const CreateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeviceProfileAsyncHelper(const Model::CreateDeviceProfileRequest& request, const CreateDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFuotaTaskAsyncHelper(const Model::CreateFuotaTaskRequest& request, const CreateFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMulticastGroupAsyncHelper(const Model::CreateMulticastGroupRequest& request, const CreateMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkAnalyzerConfigurationAsyncHelper(const Model::CreateNetworkAnalyzerConfigurationRequest& request, const CreateNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceProfileAsyncHelper(const Model::CreateServiceProfileRequest& request, const CreateServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWirelessDeviceAsyncHelper(const Model::CreateWirelessDeviceRequest& request, const CreateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWirelessGatewayAsyncHelper(const Model::CreateWirelessGatewayRequest& request, const CreateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWirelessGatewayTaskAsyncHelper(const Model::CreateWirelessGatewayTaskRequest& request, const CreateWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWirelessGatewayTaskDefinitionAsyncHelper(const Model::CreateWirelessGatewayTaskDefinitionRequest& request, const CreateWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDestinationAsyncHelper(const Model::DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeviceProfileAsyncHelper(const Model::DeleteDeviceProfileRequest& request, const DeleteDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFuotaTaskAsyncHelper(const Model::DeleteFuotaTaskRequest& request, const DeleteFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMulticastGroupAsyncHelper(const Model::DeleteMulticastGroupRequest& request, const DeleteMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkAnalyzerConfigurationAsyncHelper(const Model::DeleteNetworkAnalyzerConfigurationRequest& request, const DeleteNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteQueuedMessagesAsyncHelper(const Model::DeleteQueuedMessagesRequest& request, const DeleteQueuedMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceProfileAsyncHelper(const Model::DeleteServiceProfileRequest& request, const DeleteServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWirelessDeviceAsyncHelper(const Model::DeleteWirelessDeviceRequest& request, const DeleteWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWirelessGatewayAsyncHelper(const Model::DeleteWirelessGatewayRequest& request, const DeleteWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWirelessGatewayTaskAsyncHelper(const Model::DeleteWirelessGatewayTaskRequest& request, const DeleteWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWirelessGatewayTaskDefinitionAsyncHelper(const Model::DeleteWirelessGatewayTaskDefinitionRequest& request, const DeleteWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateAwsAccountFromPartnerAccountAsyncHelper(const Model::DisassociateAwsAccountFromPartnerAccountRequest& request, const DisassociateAwsAccountFromPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateMulticastGroupFromFuotaTaskAsyncHelper(const Model::DisassociateMulticastGroupFromFuotaTaskRequest& request, const DisassociateMulticastGroupFromFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWirelessDeviceFromFuotaTaskAsyncHelper(const Model::DisassociateWirelessDeviceFromFuotaTaskRequest& request, const DisassociateWirelessDeviceFromFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWirelessDeviceFromMulticastGroupAsyncHelper(const Model::DisassociateWirelessDeviceFromMulticastGroupRequest& request, const DisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWirelessDeviceFromThingAsyncHelper(const Model::DisassociateWirelessDeviceFromThingRequest& request, const DisassociateWirelessDeviceFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWirelessGatewayFromCertificateAsyncHelper(const Model::DisassociateWirelessGatewayFromCertificateRequest& request, const DisassociateWirelessGatewayFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWirelessGatewayFromThingAsyncHelper(const Model::DisassociateWirelessGatewayFromThingRequest& request, const DisassociateWirelessGatewayFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDestinationAsyncHelper(const Model::GetDestinationRequest& request, const GetDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceProfileAsyncHelper(const Model::GetDeviceProfileRequest& request, const GetDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventConfigurationByResourceTypesAsyncHelper(const Model::GetEventConfigurationByResourceTypesRequest& request, const GetEventConfigurationByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFuotaTaskAsyncHelper(const Model::GetFuotaTaskRequest& request, const GetFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLogLevelsByResourceTypesAsyncHelper(const Model::GetLogLevelsByResourceTypesRequest& request, const GetLogLevelsByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMulticastGroupAsyncHelper(const Model::GetMulticastGroupRequest& request, const GetMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMulticastGroupSessionAsyncHelper(const Model::GetMulticastGroupSessionRequest& request, const GetMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNetworkAnalyzerConfigurationAsyncHelper(const Model::GetNetworkAnalyzerConfigurationRequest& request, const GetNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPartnerAccountAsyncHelper(const Model::GetPartnerAccountRequest& request, const GetPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceEventConfigurationAsyncHelper(const Model::GetResourceEventConfigurationRequest& request, const GetResourceEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceLogLevelAsyncHelper(const Model::GetResourceLogLevelRequest& request, const GetResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceEndpointAsyncHelper(const Model::GetServiceEndpointRequest& request, const GetServiceEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceProfileAsyncHelper(const Model::GetServiceProfileRequest& request, const GetServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWirelessDeviceAsyncHelper(const Model::GetWirelessDeviceRequest& request, const GetWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWirelessDeviceStatisticsAsyncHelper(const Model::GetWirelessDeviceStatisticsRequest& request, const GetWirelessDeviceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWirelessGatewayAsyncHelper(const Model::GetWirelessGatewayRequest& request, const GetWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWirelessGatewayCertificateAsyncHelper(const Model::GetWirelessGatewayCertificateRequest& request, const GetWirelessGatewayCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWirelessGatewayFirmwareInformationAsyncHelper(const Model::GetWirelessGatewayFirmwareInformationRequest& request, const GetWirelessGatewayFirmwareInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWirelessGatewayStatisticsAsyncHelper(const Model::GetWirelessGatewayStatisticsRequest& request, const GetWirelessGatewayStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWirelessGatewayTaskAsyncHelper(const Model::GetWirelessGatewayTaskRequest& request, const GetWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWirelessGatewayTaskDefinitionAsyncHelper(const Model::GetWirelessGatewayTaskDefinitionRequest& request, const GetWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDestinationsAsyncHelper(const Model::ListDestinationsRequest& request, const ListDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeviceProfilesAsyncHelper(const Model::ListDeviceProfilesRequest& request, const ListDeviceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventConfigurationsAsyncHelper(const Model::ListEventConfigurationsRequest& request, const ListEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFuotaTasksAsyncHelper(const Model::ListFuotaTasksRequest& request, const ListFuotaTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMulticastGroupsAsyncHelper(const Model::ListMulticastGroupsRequest& request, const ListMulticastGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMulticastGroupsByFuotaTaskAsyncHelper(const Model::ListMulticastGroupsByFuotaTaskRequest& request, const ListMulticastGroupsByFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNetworkAnalyzerConfigurationsAsyncHelper(const Model::ListNetworkAnalyzerConfigurationsRequest& request, const ListNetworkAnalyzerConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPartnerAccountsAsyncHelper(const Model::ListPartnerAccountsRequest& request, const ListPartnerAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQueuedMessagesAsyncHelper(const Model::ListQueuedMessagesRequest& request, const ListQueuedMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServiceProfilesAsyncHelper(const Model::ListServiceProfilesRequest& request, const ListServiceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWirelessDevicesAsyncHelper(const Model::ListWirelessDevicesRequest& request, const ListWirelessDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWirelessGatewayTaskDefinitionsAsyncHelper(const Model::ListWirelessGatewayTaskDefinitionsRequest& request, const ListWirelessGatewayTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWirelessGatewaysAsyncHelper(const Model::ListWirelessGatewaysRequest& request, const ListWirelessGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourceLogLevelAsyncHelper(const Model::PutResourceLogLevelRequest& request, const PutResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetAllResourceLogLevelsAsyncHelper(const Model::ResetAllResourceLogLevelsRequest& request, const ResetAllResourceLogLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetResourceLogLevelAsyncHelper(const Model::ResetResourceLogLevelRequest& request, const ResetResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendDataToMulticastGroupAsyncHelper(const Model::SendDataToMulticastGroupRequest& request, const SendDataToMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendDataToWirelessDeviceAsyncHelper(const Model::SendDataToWirelessDeviceRequest& request, const SendDataToWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartBulkAssociateWirelessDeviceWithMulticastGroupAsyncHelper(const Model::StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request, const StartBulkAssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartBulkDisassociateWirelessDeviceFromMulticastGroupAsyncHelper(const Model::StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request, const StartBulkDisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFuotaTaskAsyncHelper(const Model::StartFuotaTaskRequest& request, const StartFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMulticastGroupSessionAsyncHelper(const Model::StartMulticastGroupSessionRequest& request, const StartMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestWirelessDeviceAsyncHelper(const Model::TestWirelessDeviceRequest& request, const TestWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDestinationAsyncHelper(const Model::UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEventConfigurationByResourceTypesAsyncHelper(const Model::UpdateEventConfigurationByResourceTypesRequest& request, const UpdateEventConfigurationByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFuotaTaskAsyncHelper(const Model::UpdateFuotaTaskRequest& request, const UpdateFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLogLevelsByResourceTypesAsyncHelper(const Model::UpdateLogLevelsByResourceTypesRequest& request, const UpdateLogLevelsByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMulticastGroupAsyncHelper(const Model::UpdateMulticastGroupRequest& request, const UpdateMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNetworkAnalyzerConfigurationAsyncHelper(const Model::UpdateNetworkAnalyzerConfigurationRequest& request, const UpdateNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePartnerAccountAsyncHelper(const Model::UpdatePartnerAccountRequest& request, const UpdatePartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceEventConfigurationAsyncHelper(const Model::UpdateResourceEventConfigurationRequest& request, const UpdateResourceEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWirelessDeviceAsyncHelper(const Model::UpdateWirelessDeviceRequest& request, const UpdateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWirelessGatewayAsyncHelper(const Model::UpdateWirelessGatewayRequest& request, const UpdateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTWireless
} // namespace Aws
