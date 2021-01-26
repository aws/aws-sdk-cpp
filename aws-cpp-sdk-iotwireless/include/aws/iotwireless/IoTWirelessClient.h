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
#include <aws/iotwireless/model/AssociateWirelessDeviceWithThingResult.h>
#include <aws/iotwireless/model/AssociateWirelessGatewayWithCertificateResult.h>
#include <aws/iotwireless/model/AssociateWirelessGatewayWithThingResult.h>
#include <aws/iotwireless/model/CreateDestinationResult.h>
#include <aws/iotwireless/model/CreateDeviceProfileResult.h>
#include <aws/iotwireless/model/CreateServiceProfileResult.h>
#include <aws/iotwireless/model/CreateWirelessDeviceResult.h>
#include <aws/iotwireless/model/CreateWirelessGatewayResult.h>
#include <aws/iotwireless/model/CreateWirelessGatewayTaskResult.h>
#include <aws/iotwireless/model/CreateWirelessGatewayTaskDefinitionResult.h>
#include <aws/iotwireless/model/DeleteDestinationResult.h>
#include <aws/iotwireless/model/DeleteDeviceProfileResult.h>
#include <aws/iotwireless/model/DeleteServiceProfileResult.h>
#include <aws/iotwireless/model/DeleteWirelessDeviceResult.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayResult.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskResult.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskDefinitionResult.h>
#include <aws/iotwireless/model/DisassociateAwsAccountFromPartnerAccountResult.h>
#include <aws/iotwireless/model/DisassociateWirelessDeviceFromThingResult.h>
#include <aws/iotwireless/model/DisassociateWirelessGatewayFromCertificateResult.h>
#include <aws/iotwireless/model/DisassociateWirelessGatewayFromThingResult.h>
#include <aws/iotwireless/model/GetDestinationResult.h>
#include <aws/iotwireless/model/GetDeviceProfileResult.h>
#include <aws/iotwireless/model/GetPartnerAccountResult.h>
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
#include <aws/iotwireless/model/ListPartnerAccountsResult.h>
#include <aws/iotwireless/model/ListServiceProfilesResult.h>
#include <aws/iotwireless/model/ListTagsForResourceResult.h>
#include <aws/iotwireless/model/ListWirelessDevicesResult.h>
#include <aws/iotwireless/model/ListWirelessGatewayTaskDefinitionsResult.h>
#include <aws/iotwireless/model/ListWirelessGatewaysResult.h>
#include <aws/iotwireless/model/SendDataToWirelessDeviceResult.h>
#include <aws/iotwireless/model/TagResourceResult.h>
#include <aws/iotwireless/model/TestWirelessDeviceResult.h>
#include <aws/iotwireless/model/UntagResourceResult.h>
#include <aws/iotwireless/model/UpdateDestinationResult.h>
#include <aws/iotwireless/model/UpdatePartnerAccountResult.h>
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
        class AssociateWirelessDeviceWithThingRequest;
        class AssociateWirelessGatewayWithCertificateRequest;
        class AssociateWirelessGatewayWithThingRequest;
        class CreateDestinationRequest;
        class CreateDeviceProfileRequest;
        class CreateServiceProfileRequest;
        class CreateWirelessDeviceRequest;
        class CreateWirelessGatewayRequest;
        class CreateWirelessGatewayTaskRequest;
        class CreateWirelessGatewayTaskDefinitionRequest;
        class DeleteDestinationRequest;
        class DeleteDeviceProfileRequest;
        class DeleteServiceProfileRequest;
        class DeleteWirelessDeviceRequest;
        class DeleteWirelessGatewayRequest;
        class DeleteWirelessGatewayTaskRequest;
        class DeleteWirelessGatewayTaskDefinitionRequest;
        class DisassociateAwsAccountFromPartnerAccountRequest;
        class DisassociateWirelessDeviceFromThingRequest;
        class DisassociateWirelessGatewayFromCertificateRequest;
        class DisassociateWirelessGatewayFromThingRequest;
        class GetDestinationRequest;
        class GetDeviceProfileRequest;
        class GetPartnerAccountRequest;
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
        class ListPartnerAccountsRequest;
        class ListServiceProfilesRequest;
        class ListTagsForResourceRequest;
        class ListWirelessDevicesRequest;
        class ListWirelessGatewayTaskDefinitionsRequest;
        class ListWirelessGatewaysRequest;
        class SendDataToWirelessDeviceRequest;
        class TagResourceRequest;
        class TestWirelessDeviceRequest;
        class UntagResourceRequest;
        class UpdateDestinationRequest;
        class UpdatePartnerAccountRequest;
        class UpdateWirelessDeviceRequest;
        class UpdateWirelessGatewayRequest;

        typedef Aws::Utils::Outcome<AssociateAwsAccountWithPartnerAccountResult, IoTWirelessError> AssociateAwsAccountWithPartnerAccountOutcome;
        typedef Aws::Utils::Outcome<AssociateWirelessDeviceWithThingResult, IoTWirelessError> AssociateWirelessDeviceWithThingOutcome;
        typedef Aws::Utils::Outcome<AssociateWirelessGatewayWithCertificateResult, IoTWirelessError> AssociateWirelessGatewayWithCertificateOutcome;
        typedef Aws::Utils::Outcome<AssociateWirelessGatewayWithThingResult, IoTWirelessError> AssociateWirelessGatewayWithThingOutcome;
        typedef Aws::Utils::Outcome<CreateDestinationResult, IoTWirelessError> CreateDestinationOutcome;
        typedef Aws::Utils::Outcome<CreateDeviceProfileResult, IoTWirelessError> CreateDeviceProfileOutcome;
        typedef Aws::Utils::Outcome<CreateServiceProfileResult, IoTWirelessError> CreateServiceProfileOutcome;
        typedef Aws::Utils::Outcome<CreateWirelessDeviceResult, IoTWirelessError> CreateWirelessDeviceOutcome;
        typedef Aws::Utils::Outcome<CreateWirelessGatewayResult, IoTWirelessError> CreateWirelessGatewayOutcome;
        typedef Aws::Utils::Outcome<CreateWirelessGatewayTaskResult, IoTWirelessError> CreateWirelessGatewayTaskOutcome;
        typedef Aws::Utils::Outcome<CreateWirelessGatewayTaskDefinitionResult, IoTWirelessError> CreateWirelessGatewayTaskDefinitionOutcome;
        typedef Aws::Utils::Outcome<DeleteDestinationResult, IoTWirelessError> DeleteDestinationOutcome;
        typedef Aws::Utils::Outcome<DeleteDeviceProfileResult, IoTWirelessError> DeleteDeviceProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteServiceProfileResult, IoTWirelessError> DeleteServiceProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteWirelessDeviceResult, IoTWirelessError> DeleteWirelessDeviceOutcome;
        typedef Aws::Utils::Outcome<DeleteWirelessGatewayResult, IoTWirelessError> DeleteWirelessGatewayOutcome;
        typedef Aws::Utils::Outcome<DeleteWirelessGatewayTaskResult, IoTWirelessError> DeleteWirelessGatewayTaskOutcome;
        typedef Aws::Utils::Outcome<DeleteWirelessGatewayTaskDefinitionResult, IoTWirelessError> DeleteWirelessGatewayTaskDefinitionOutcome;
        typedef Aws::Utils::Outcome<DisassociateAwsAccountFromPartnerAccountResult, IoTWirelessError> DisassociateAwsAccountFromPartnerAccountOutcome;
        typedef Aws::Utils::Outcome<DisassociateWirelessDeviceFromThingResult, IoTWirelessError> DisassociateWirelessDeviceFromThingOutcome;
        typedef Aws::Utils::Outcome<DisassociateWirelessGatewayFromCertificateResult, IoTWirelessError> DisassociateWirelessGatewayFromCertificateOutcome;
        typedef Aws::Utils::Outcome<DisassociateWirelessGatewayFromThingResult, IoTWirelessError> DisassociateWirelessGatewayFromThingOutcome;
        typedef Aws::Utils::Outcome<GetDestinationResult, IoTWirelessError> GetDestinationOutcome;
        typedef Aws::Utils::Outcome<GetDeviceProfileResult, IoTWirelessError> GetDeviceProfileOutcome;
        typedef Aws::Utils::Outcome<GetPartnerAccountResult, IoTWirelessError> GetPartnerAccountOutcome;
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
        typedef Aws::Utils::Outcome<ListPartnerAccountsResult, IoTWirelessError> ListPartnerAccountsOutcome;
        typedef Aws::Utils::Outcome<ListServiceProfilesResult, IoTWirelessError> ListServiceProfilesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTWirelessError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListWirelessDevicesResult, IoTWirelessError> ListWirelessDevicesOutcome;
        typedef Aws::Utils::Outcome<ListWirelessGatewayTaskDefinitionsResult, IoTWirelessError> ListWirelessGatewayTaskDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListWirelessGatewaysResult, IoTWirelessError> ListWirelessGatewaysOutcome;
        typedef Aws::Utils::Outcome<SendDataToWirelessDeviceResult, IoTWirelessError> SendDataToWirelessDeviceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, IoTWirelessError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TestWirelessDeviceResult, IoTWirelessError> TestWirelessDeviceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, IoTWirelessError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDestinationResult, IoTWirelessError> UpdateDestinationOutcome;
        typedef Aws::Utils::Outcome<UpdatePartnerAccountResult, IoTWirelessError> UpdatePartnerAccountOutcome;
        typedef Aws::Utils::Outcome<UpdateWirelessDeviceResult, IoTWirelessError> UpdateWirelessDeviceOutcome;
        typedef Aws::Utils::Outcome<UpdateWirelessGatewayResult, IoTWirelessError> UpdateWirelessGatewayOutcome;

        typedef std::future<AssociateAwsAccountWithPartnerAccountOutcome> AssociateAwsAccountWithPartnerAccountOutcomeCallable;
        typedef std::future<AssociateWirelessDeviceWithThingOutcome> AssociateWirelessDeviceWithThingOutcomeCallable;
        typedef std::future<AssociateWirelessGatewayWithCertificateOutcome> AssociateWirelessGatewayWithCertificateOutcomeCallable;
        typedef std::future<AssociateWirelessGatewayWithThingOutcome> AssociateWirelessGatewayWithThingOutcomeCallable;
        typedef std::future<CreateDestinationOutcome> CreateDestinationOutcomeCallable;
        typedef std::future<CreateDeviceProfileOutcome> CreateDeviceProfileOutcomeCallable;
        typedef std::future<CreateServiceProfileOutcome> CreateServiceProfileOutcomeCallable;
        typedef std::future<CreateWirelessDeviceOutcome> CreateWirelessDeviceOutcomeCallable;
        typedef std::future<CreateWirelessGatewayOutcome> CreateWirelessGatewayOutcomeCallable;
        typedef std::future<CreateWirelessGatewayTaskOutcome> CreateWirelessGatewayTaskOutcomeCallable;
        typedef std::future<CreateWirelessGatewayTaskDefinitionOutcome> CreateWirelessGatewayTaskDefinitionOutcomeCallable;
        typedef std::future<DeleteDestinationOutcome> DeleteDestinationOutcomeCallable;
        typedef std::future<DeleteDeviceProfileOutcome> DeleteDeviceProfileOutcomeCallable;
        typedef std::future<DeleteServiceProfileOutcome> DeleteServiceProfileOutcomeCallable;
        typedef std::future<DeleteWirelessDeviceOutcome> DeleteWirelessDeviceOutcomeCallable;
        typedef std::future<DeleteWirelessGatewayOutcome> DeleteWirelessGatewayOutcomeCallable;
        typedef std::future<DeleteWirelessGatewayTaskOutcome> DeleteWirelessGatewayTaskOutcomeCallable;
        typedef std::future<DeleteWirelessGatewayTaskDefinitionOutcome> DeleteWirelessGatewayTaskDefinitionOutcomeCallable;
        typedef std::future<DisassociateAwsAccountFromPartnerAccountOutcome> DisassociateAwsAccountFromPartnerAccountOutcomeCallable;
        typedef std::future<DisassociateWirelessDeviceFromThingOutcome> DisassociateWirelessDeviceFromThingOutcomeCallable;
        typedef std::future<DisassociateWirelessGatewayFromCertificateOutcome> DisassociateWirelessGatewayFromCertificateOutcomeCallable;
        typedef std::future<DisassociateWirelessGatewayFromThingOutcome> DisassociateWirelessGatewayFromThingOutcomeCallable;
        typedef std::future<GetDestinationOutcome> GetDestinationOutcomeCallable;
        typedef std::future<GetDeviceProfileOutcome> GetDeviceProfileOutcomeCallable;
        typedef std::future<GetPartnerAccountOutcome> GetPartnerAccountOutcomeCallable;
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
        typedef std::future<ListPartnerAccountsOutcome> ListPartnerAccountsOutcomeCallable;
        typedef std::future<ListServiceProfilesOutcome> ListServiceProfilesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListWirelessDevicesOutcome> ListWirelessDevicesOutcomeCallable;
        typedef std::future<ListWirelessGatewayTaskDefinitionsOutcome> ListWirelessGatewayTaskDefinitionsOutcomeCallable;
        typedef std::future<ListWirelessGatewaysOutcome> ListWirelessGatewaysOutcomeCallable;
        typedef std::future<SendDataToWirelessDeviceOutcome> SendDataToWirelessDeviceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TestWirelessDeviceOutcome> TestWirelessDeviceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDestinationOutcome> UpdateDestinationOutcomeCallable;
        typedef std::future<UpdatePartnerAccountOutcome> UpdatePartnerAccountOutcomeCallable;
        typedef std::future<UpdateWirelessDeviceOutcome> UpdateWirelessDeviceOutcomeCallable;
        typedef std::future<UpdateWirelessGatewayOutcome> UpdateWirelessGatewayOutcomeCallable;
} // namespace Model

  class IoTWirelessClient;

    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateAwsAccountWithPartnerAccountRequest&, const Model::AssociateAwsAccountWithPartnerAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAwsAccountWithPartnerAccountResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateWirelessDeviceWithThingRequest&, const Model::AssociateWirelessDeviceWithThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWirelessDeviceWithThingResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateWirelessGatewayWithCertificateRequest&, const Model::AssociateWirelessGatewayWithCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWirelessGatewayWithCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::AssociateWirelessGatewayWithThingRequest&, const Model::AssociateWirelessGatewayWithThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWirelessGatewayWithThingResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateDestinationRequest&, const Model::CreateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateDeviceProfileRequest&, const Model::CreateDeviceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeviceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateServiceProfileRequest&, const Model::CreateServiceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateWirelessDeviceRequest&, const Model::CreateWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateWirelessGatewayRequest&, const Model::CreateWirelessGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWirelessGatewayResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateWirelessGatewayTaskRequest&, const Model::CreateWirelessGatewayTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWirelessGatewayTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::CreateWirelessGatewayTaskDefinitionRequest&, const Model::CreateWirelessGatewayTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWirelessGatewayTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteDestinationRequest&, const Model::DeleteDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteDeviceProfileRequest&, const Model::DeleteDeviceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteServiceProfileRequest&, const Model::DeleteServiceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteWirelessDeviceRequest&, const Model::DeleteWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteWirelessGatewayRequest&, const Model::DeleteWirelessGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWirelessGatewayResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteWirelessGatewayTaskRequest&, const Model::DeleteWirelessGatewayTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWirelessGatewayTaskResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DeleteWirelessGatewayTaskDefinitionRequest&, const Model::DeleteWirelessGatewayTaskDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWirelessGatewayTaskDefinitionResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateAwsAccountFromPartnerAccountRequest&, const Model::DisassociateAwsAccountFromPartnerAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAwsAccountFromPartnerAccountResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateWirelessDeviceFromThingRequest&, const Model::DisassociateWirelessDeviceFromThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWirelessDeviceFromThingResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateWirelessGatewayFromCertificateRequest&, const Model::DisassociateWirelessGatewayFromCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWirelessGatewayFromCertificateResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::DisassociateWirelessGatewayFromThingRequest&, const Model::DisassociateWirelessGatewayFromThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWirelessGatewayFromThingResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetDestinationRequest&, const Model::GetDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetDeviceProfileRequest&, const Model::GetDeviceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceProfileResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::GetPartnerAccountRequest&, const Model::GetPartnerAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPartnerAccountResponseReceivedHandler;
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
    typedef std::function<void(const IoTWirelessClient*, const Model::ListPartnerAccountsRequest&, const Model::ListPartnerAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartnerAccountsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListServiceProfilesRequest&, const Model::ListServiceProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceProfilesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListWirelessDevicesRequest&, const Model::ListWirelessDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWirelessDevicesResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListWirelessGatewayTaskDefinitionsRequest&, const Model::ListWirelessGatewayTaskDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWirelessGatewayTaskDefinitionsResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::ListWirelessGatewaysRequest&, const Model::ListWirelessGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWirelessGatewaysResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::SendDataToWirelessDeviceRequest&, const Model::SendDataToWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendDataToWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::TestWirelessDeviceRequest&, const Model::TestWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateDestinationRequest&, const Model::UpdateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdatePartnerAccountRequest&, const Model::UpdatePartnerAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePartnerAccountResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateWirelessDeviceRequest&, const Model::UpdateWirelessDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWirelessDeviceResponseReceivedHandler;
    typedef std::function<void(const IoTWirelessClient*, const Model::UpdateWirelessGatewayRequest&, const Model::UpdateWirelessGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWirelessGatewayResponseReceivedHandler;

  /**
   * <p>AWS IoT Wireless API documentation</p>
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
         * <p>Associates a partner account with your AWS account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateAwsAccountWithPartnerAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateAwsAccountWithPartnerAccountOutcomeCallable AssociateAwsAccountWithPartnerAccountCallable(const Model::AssociateAwsAccountWithPartnerAccountRequest& request) const;

        /**
         * <p>Associates a partner account with your AWS account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateAwsAccountWithPartnerAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateAwsAccountWithPartnerAccountAsync(const Model::AssociateAwsAccountWithPartnerAccountRequest& request, const AssociateAwsAccountWithPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a wireless device with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithThing">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessDeviceWithThingOutcome AssociateWirelessDeviceWithThing(const Model::AssociateWirelessDeviceWithThingRequest& request) const;

        /**
         * <p>Associates a wireless device with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWirelessDeviceWithThingOutcomeCallable AssociateWirelessDeviceWithThingCallable(const Model::AssociateWirelessDeviceWithThingRequest& request) const;

        /**
         * <p>Associates a wireless device with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessDeviceWithThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Associates a wireless gateway with a certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWirelessGatewayWithCertificateOutcomeCallable AssociateWirelessGatewayWithCertificateCallable(const Model::AssociateWirelessGatewayWithCertificateRequest& request) const;

        /**
         * <p>Associates a wireless gateway with a certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWirelessGatewayWithCertificateAsync(const Model::AssociateWirelessGatewayWithCertificateRequest& request, const AssociateWirelessGatewayWithCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a wireless gateway with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithThing">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWirelessGatewayWithThingOutcome AssociateWirelessGatewayWithThing(const Model::AssociateWirelessGatewayWithThingRequest& request) const;

        /**
         * <p>Associates a wireless gateway with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateWirelessGatewayWithThingOutcomeCallable AssociateWirelessGatewayWithThingCallable(const Model::AssociateWirelessGatewayWithThingRequest& request) const;

        /**
         * <p>Associates a wireless gateway with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/AssociateWirelessGatewayWithThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateWirelessGatewayWithThingAsync(const Model::AssociateWirelessGatewayWithThingRequest& request, const AssociateWirelessGatewayWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new destination that maps a device message to an AWS IoT
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDestinationOutcome CreateDestination(const Model::CreateDestinationRequest& request) const;

        /**
         * <p>Creates a new destination that maps a device message to an AWS IoT
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDestinationOutcomeCallable CreateDestinationCallable(const Model::CreateDestinationRequest& request) const;

        /**
         * <p>Creates a new destination that maps a device message to an AWS IoT
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDestinationAsync(const Model::CreateDestinationRequest& request, const CreateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceProfileOutcome CreateDeviceProfile(const Model::CreateDeviceProfileRequest& request) const;

        /**
         * <p>Creates a new device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDeviceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeviceProfileOutcomeCallable CreateDeviceProfileCallable(const Model::CreateDeviceProfileRequest& request) const;

        /**
         * <p>Creates a new device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateDeviceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeviceProfileAsync(const Model::CreateDeviceProfileRequest& request, const CreateDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceProfileOutcome CreateServiceProfile(const Model::CreateServiceProfileRequest& request) const;

        /**
         * <p>Creates a new service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateServiceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceProfileOutcomeCallable CreateServiceProfileCallable(const Model::CreateServiceProfileRequest& request) const;

        /**
         * <p>Creates a new service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateServiceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceProfileAsync(const Model::CreateServiceProfileRequest& request, const CreateServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessDeviceOutcome CreateWirelessDevice(const Model::CreateWirelessDeviceRequest& request) const;

        /**
         * <p>Provisions a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWirelessDeviceOutcomeCallable CreateWirelessDeviceCallable(const Model::CreateWirelessDeviceRequest& request) const;

        /**
         * <p>Provisions a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWirelessDeviceAsync(const Model::CreateWirelessDeviceRequest& request, const CreateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayOutcome CreateWirelessGateway(const Model::CreateWirelessGatewayRequest& request) const;

        /**
         * <p>Provisions a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWirelessGatewayOutcomeCallable CreateWirelessGatewayCallable(const Model::CreateWirelessGatewayRequest& request) const;

        /**
         * <p>Provisions a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWirelessGatewayAsync(const Model::CreateWirelessGatewayRequest& request, const CreateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a task for a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayTaskOutcome CreateWirelessGatewayTask(const Model::CreateWirelessGatewayTaskRequest& request) const;

        /**
         * <p>Creates a task for a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWirelessGatewayTaskOutcomeCallable CreateWirelessGatewayTaskCallable(const Model::CreateWirelessGatewayTaskRequest& request) const;

        /**
         * <p>Creates a task for a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWirelessGatewayTaskAsync(const Model::CreateWirelessGatewayTaskRequest& request, const CreateWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a gateway task definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWirelessGatewayTaskDefinitionOutcome CreateWirelessGatewayTaskDefinition(const Model::CreateWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * <p>Creates a gateway task definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWirelessGatewayTaskDefinitionOutcomeCallable CreateWirelessGatewayTaskDefinitionCallable(const Model::CreateWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * <p>Creates a gateway task definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CreateWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWirelessGatewayTaskDefinitionAsync(const Model::CreateWirelessGatewayTaskDefinitionRequest& request, const CreateWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDestinationOutcome DeleteDestination(const Model::DeleteDestinationRequest& request) const;

        /**
         * <p>Deletes a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDestinationOutcomeCallable DeleteDestinationCallable(const Model::DeleteDestinationRequest& request) const;

        /**
         * <p>Deletes a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDestinationAsync(const Model::DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceProfileOutcome DeleteDeviceProfile(const Model::DeleteDeviceProfileRequest& request) const;

        /**
         * <p>Deletes a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDeviceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceProfileOutcomeCallable DeleteDeviceProfileCallable(const Model::DeleteDeviceProfileRequest& request) const;

        /**
         * <p>Deletes a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteDeviceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceProfileAsync(const Model::DeleteDeviceProfileRequest& request, const DeleteDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceProfileOutcome DeleteServiceProfile(const Model::DeleteServiceProfileRequest& request) const;

        /**
         * <p>Deletes a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteServiceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceProfileOutcomeCallable DeleteServiceProfileCallable(const Model::DeleteServiceProfileRequest& request) const;

        /**
         * <p>Deletes a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteServiceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceProfileAsync(const Model::DeleteServiceProfileRequest& request, const DeleteServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessDeviceOutcome DeleteWirelessDevice(const Model::DeleteWirelessDeviceRequest& request) const;

        /**
         * <p>Deletes a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWirelessDeviceOutcomeCallable DeleteWirelessDeviceCallable(const Model::DeleteWirelessDeviceRequest& request) const;

        /**
         * <p>Deletes a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWirelessDeviceAsync(const Model::DeleteWirelessDeviceRequest& request, const DeleteWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayOutcome DeleteWirelessGateway(const Model::DeleteWirelessGatewayRequest& request) const;

        /**
         * <p>Deletes a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWirelessGatewayOutcomeCallable DeleteWirelessGatewayCallable(const Model::DeleteWirelessGatewayRequest& request) const;

        /**
         * <p>Deletes a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWirelessGatewayAsync(const Model::DeleteWirelessGatewayRequest& request, const DeleteWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWirelessGatewayTaskOutcome DeleteWirelessGatewayTask(const Model::DeleteWirelessGatewayTaskRequest& request) const;

        /**
         * <p>Deletes a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWirelessGatewayTaskOutcomeCallable DeleteWirelessGatewayTaskCallable(const Model::DeleteWirelessGatewayTaskRequest& request) const;

        /**
         * <p>Deletes a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a wireless gateway task definition. Deleting this task definition
         * does not affect tasks that are currently in progress.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWirelessGatewayTaskDefinitionOutcomeCallable DeleteWirelessGatewayTaskDefinitionCallable(const Model::DeleteWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * <p>Deletes a wireless gateway task definition. Deleting this task definition
         * does not affect tasks that are currently in progress.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeleteWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Disassociates your AWS account from a partner account. If
         * <code>PartnerAccountId</code> and <code>PartnerType</code> are
         * <code>null</code>, disassociates your AWS account from all partner
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateAwsAccountFromPartnerAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateAwsAccountFromPartnerAccountOutcomeCallable DisassociateAwsAccountFromPartnerAccountCallable(const Model::DisassociateAwsAccountFromPartnerAccountRequest& request) const;

        /**
         * <p>Disassociates your AWS account from a partner account. If
         * <code>PartnerAccountId</code> and <code>PartnerType</code> are
         * <code>null</code>, disassociates your AWS account from all partner
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateAwsAccountFromPartnerAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateAwsAccountFromPartnerAccountAsync(const Model::DisassociateAwsAccountFromPartnerAccountRequest& request, const DisassociateAwsAccountFromPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a wireless device from its currently associated
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessDeviceFromThing">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWirelessDeviceFromThingOutcome DisassociateWirelessDeviceFromThing(const Model::DisassociateWirelessDeviceFromThingRequest& request) const;

        /**
         * <p>Disassociates a wireless device from its currently associated
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessDeviceFromThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWirelessDeviceFromThingOutcomeCallable DisassociateWirelessDeviceFromThingCallable(const Model::DisassociateWirelessDeviceFromThingRequest& request) const;

        /**
         * <p>Disassociates a wireless device from its currently associated
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessDeviceFromThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Disassociates a wireless gateway from its currently associated
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessGatewayFromCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWirelessGatewayFromCertificateOutcomeCallable DisassociateWirelessGatewayFromCertificateCallable(const Model::DisassociateWirelessGatewayFromCertificateRequest& request) const;

        /**
         * <p>Disassociates a wireless gateway from its currently associated
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessGatewayFromCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Disassociates a wireless gateway from its currently associated
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessGatewayFromThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateWirelessGatewayFromThingOutcomeCallable DisassociateWirelessGatewayFromThingCallable(const Model::DisassociateWirelessGatewayFromThingRequest& request) const;

        /**
         * <p>Disassociates a wireless gateway from its currently associated
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DisassociateWirelessGatewayFromThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateWirelessGatewayFromThingAsync(const Model::DisassociateWirelessGatewayFromThingRequest& request, const DisassociateWirelessGatewayFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDestinationOutcome GetDestination(const Model::GetDestinationRequest& request) const;

        /**
         * <p>Gets information about a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDestinationOutcomeCallable GetDestinationCallable(const Model::GetDestinationRequest& request) const;

        /**
         * <p>Gets information about a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDestinationAsync(const Model::GetDestinationRequest& request, const GetDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDeviceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceProfileOutcome GetDeviceProfile(const Model::GetDeviceProfileRequest& request) const;

        /**
         * <p>Gets information about a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDeviceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceProfileOutcomeCallable GetDeviceProfileCallable(const Model::GetDeviceProfileRequest& request) const;

        /**
         * <p>Gets information about a device profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetDeviceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceProfileAsync(const Model::GetDeviceProfileRequest& request, const GetDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a partner account. If <code>PartnerAccountId</code>
         * and <code>PartnerType</code> are <code>null</code>, returns all partner
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetPartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartnerAccountOutcome GetPartnerAccount(const Model::GetPartnerAccountRequest& request) const;

        /**
         * <p>Gets information about a partner account. If <code>PartnerAccountId</code>
         * and <code>PartnerType</code> are <code>null</code>, returns all partner
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetPartnerAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPartnerAccountOutcomeCallable GetPartnerAccountCallable(const Model::GetPartnerAccountRequest& request) const;

        /**
         * <p>Gets information about a partner account. If <code>PartnerAccountId</code>
         * and <code>PartnerType</code> are <code>null</code>, returns all partner
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetPartnerAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPartnerAccountAsync(const Model::GetPartnerAccountRequest& request, const GetPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the account-specific endpoint for Configuration and Update Server (CUPS)
         * protocol or LoRaWAN Network Server (LNS) connections.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceEndpointOutcome GetServiceEndpoint(const Model::GetServiceEndpointRequest& request) const;

        /**
         * <p>Gets the account-specific endpoint for Configuration and Update Server (CUPS)
         * protocol or LoRaWAN Network Server (LNS) connections.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceEndpointOutcomeCallable GetServiceEndpointCallable(const Model::GetServiceEndpointRequest& request) const;

        /**
         * <p>Gets the account-specific endpoint for Configuration and Update Server (CUPS)
         * protocol or LoRaWAN Network Server (LNS) connections.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceEndpointAsync(const Model::GetServiceEndpointRequest& request, const GetServiceEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceProfileOutcome GetServiceProfile(const Model::GetServiceProfileRequest& request) const;

        /**
         * <p>Gets information about a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceProfileOutcomeCallable GetServiceProfileCallable(const Model::GetServiceProfileRequest& request) const;

        /**
         * <p>Gets information about a service profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetServiceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceProfileAsync(const Model::GetServiceProfileRequest& request, const GetServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessDeviceOutcome GetWirelessDevice(const Model::GetWirelessDeviceRequest& request) const;

        /**
         * <p>Gets information about a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessDeviceOutcomeCallable GetWirelessDeviceCallable(const Model::GetWirelessDeviceRequest& request) const;

        /**
         * <p>Gets information about a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets operating information about a wireless device.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDeviceStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessDeviceStatisticsOutcomeCallable GetWirelessDeviceStatisticsCallable(const Model::GetWirelessDeviceStatisticsRequest& request) const;

        /**
         * <p>Gets operating information about a wireless device.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessDeviceStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessDeviceStatisticsAsync(const Model::GetWirelessDeviceStatisticsRequest& request, const GetWirelessDeviceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayOutcome GetWirelessGateway(const Model::GetWirelessGatewayRequest& request) const;

        /**
         * <p>Gets information about a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayOutcomeCallable GetWirelessGatewayCallable(const Model::GetWirelessGatewayRequest& request) const;

        /**
         * <p>Gets information about a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets the ID of the certificate that is currently associated with a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayCertificateOutcomeCallable GetWirelessGatewayCertificateCallable(const Model::GetWirelessGatewayCertificateRequest& request) const;

        /**
         * <p>Gets the ID of the certificate that is currently associated with a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets the firmware version and other information about a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayFirmwareInformation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayFirmwareInformationOutcomeCallable GetWirelessGatewayFirmwareInformationCallable(const Model::GetWirelessGatewayFirmwareInformationRequest& request) const;

        /**
         * <p>Gets the firmware version and other information about a wireless
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayFirmwareInformation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets operating information about a wireless gateway.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayStatisticsOutcomeCallable GetWirelessGatewayStatisticsCallable(const Model::GetWirelessGatewayStatisticsRequest& request) const;

        /**
         * <p>Gets operating information about a wireless gateway.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWirelessGatewayStatisticsAsync(const Model::GetWirelessGatewayStatisticsRequest& request, const GetWirelessGatewayStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWirelessGatewayTaskOutcome GetWirelessGatewayTask(const Model::GetWirelessGatewayTaskRequest& request) const;

        /**
         * <p>Gets information about a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayTaskOutcomeCallable GetWirelessGatewayTaskCallable(const Model::GetWirelessGatewayTaskRequest& request) const;

        /**
         * <p>Gets information about a wireless gateway task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets information about a wireless gateway task definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWirelessGatewayTaskDefinitionOutcomeCallable GetWirelessGatewayTaskDefinitionCallable(const Model::GetWirelessGatewayTaskDefinitionRequest& request) const;

        /**
         * <p>Gets information about a wireless gateway task definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/GetWirelessGatewayTaskDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the destinations registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListDestinations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDestinationsOutcomeCallable ListDestinationsCallable(const Model::ListDestinationsRequest& request) const;

        /**
         * <p>Lists the destinations registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListDestinations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the device profiles registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListDeviceProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceProfilesOutcomeCallable ListDeviceProfilesCallable(const Model::ListDeviceProfilesRequest& request) const;

        /**
         * <p>Lists the device profiles registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListDeviceProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceProfilesAsync(const Model::ListDeviceProfilesRequest& request, const ListDeviceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the partner accounts associated with your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListPartnerAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnerAccountsOutcome ListPartnerAccounts(const Model::ListPartnerAccountsRequest& request) const;

        /**
         * <p>Lists the partner accounts associated with your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListPartnerAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPartnerAccountsOutcomeCallable ListPartnerAccountsCallable(const Model::ListPartnerAccountsRequest& request) const;

        /**
         * <p>Lists the partner accounts associated with your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListPartnerAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPartnerAccountsAsync(const Model::ListPartnerAccountsRequest& request, const ListPartnerAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the service profiles registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListServiceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceProfilesOutcome ListServiceProfiles(const Model::ListServiceProfilesRequest& request) const;

        /**
         * <p>Lists the service profiles registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListServiceProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceProfilesOutcomeCallable ListServiceProfilesCallable(const Model::ListServiceProfilesRequest& request) const;

        /**
         * <p>Lists the service profiles registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListServiceProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the wireless devices registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWirelessDevicesOutcomeCallable ListWirelessDevicesCallable(const Model::ListWirelessDevicesRequest& request) const;

        /**
         * <p>Lists the wireless devices registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>List the wireless gateway tasks definitions registered to your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessGatewayTaskDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWirelessGatewayTaskDefinitionsOutcomeCallable ListWirelessGatewayTaskDefinitionsCallable(const Model::ListWirelessGatewayTaskDefinitionsRequest& request) const;

        /**
         * <p>List the wireless gateway tasks definitions registered to your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessGatewayTaskDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the wireless gateways registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessGateways">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWirelessGatewaysOutcomeCallable ListWirelessGatewaysCallable(const Model::ListWirelessGatewaysRequest& request) const;

        /**
         * <p>Lists the wireless gateways registered to your AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ListWirelessGateways">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWirelessGatewaysAsync(const Model::ListWirelessGatewaysRequest& request, const ListWirelessGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a decrypted application data frame to a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SendDataToWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDataToWirelessDeviceOutcome SendDataToWirelessDevice(const Model::SendDataToWirelessDeviceRequest& request) const;

        /**
         * <p>Sends a decrypted application data frame to a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SendDataToWirelessDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendDataToWirelessDeviceOutcomeCallable SendDataToWirelessDeviceCallable(const Model::SendDataToWirelessDeviceRequest& request) const;

        /**
         * <p>Sends a decrypted application data frame to a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SendDataToWirelessDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendDataToWirelessDeviceAsync(const Model::SendDataToWirelessDeviceRequest& request, const SendDataToWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Simulates a provisioned device by sending an uplink data payload of
         * <code>Hello</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TestWirelessDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestWirelessDeviceOutcomeCallable TestWirelessDeviceCallable(const Model::TestWirelessDeviceRequest& request) const;

        /**
         * <p>Simulates a provisioned device by sending an uplink data payload of
         * <code>Hello</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TestWirelessDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestWirelessDeviceAsync(const Model::TestWirelessDeviceRequest& request, const TestWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties of a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDestinationOutcome UpdateDestination(const Model::UpdateDestinationRequest& request) const;

        /**
         * <p>Updates properties of a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDestinationOutcomeCallable UpdateDestinationCallable(const Model::UpdateDestinationRequest& request) const;

        /**
         * <p>Updates properties of a destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDestinationAsync(const Model::UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties of a partner account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdatePartnerAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartnerAccountOutcome UpdatePartnerAccount(const Model::UpdatePartnerAccountRequest& request) const;

        /**
         * <p>Updates properties of a partner account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdatePartnerAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePartnerAccountOutcomeCallable UpdatePartnerAccountCallable(const Model::UpdatePartnerAccountRequest& request) const;

        /**
         * <p>Updates properties of a partner account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdatePartnerAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePartnerAccountAsync(const Model::UpdatePartnerAccountRequest& request, const UpdatePartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties of a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWirelessDeviceOutcome UpdateWirelessDevice(const Model::UpdateWirelessDeviceRequest& request) const;

        /**
         * <p>Updates properties of a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWirelessDeviceOutcomeCallable UpdateWirelessDeviceCallable(const Model::UpdateWirelessDeviceRequest& request) const;

        /**
         * <p>Updates properties of a wireless device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWirelessDeviceAsync(const Model::UpdateWirelessDeviceRequest& request, const UpdateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties of a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWirelessGatewayOutcome UpdateWirelessGateway(const Model::UpdateWirelessGatewayRequest& request) const;

        /**
         * <p>Updates properties of a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWirelessGatewayOutcomeCallable UpdateWirelessGatewayCallable(const Model::UpdateWirelessGatewayRequest& request) const;

        /**
         * <p>Updates properties of a wireless gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateWirelessGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWirelessGatewayAsync(const Model::UpdateWirelessGatewayRequest& request, const UpdateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateAwsAccountWithPartnerAccountAsyncHelper(const Model::AssociateAwsAccountWithPartnerAccountRequest& request, const AssociateAwsAccountWithPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWirelessDeviceWithThingAsyncHelper(const Model::AssociateWirelessDeviceWithThingRequest& request, const AssociateWirelessDeviceWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWirelessGatewayWithCertificateAsyncHelper(const Model::AssociateWirelessGatewayWithCertificateRequest& request, const AssociateWirelessGatewayWithCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateWirelessGatewayWithThingAsyncHelper(const Model::AssociateWirelessGatewayWithThingRequest& request, const AssociateWirelessGatewayWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDestinationAsyncHelper(const Model::CreateDestinationRequest& request, const CreateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeviceProfileAsyncHelper(const Model::CreateDeviceProfileRequest& request, const CreateDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceProfileAsyncHelper(const Model::CreateServiceProfileRequest& request, const CreateServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWirelessDeviceAsyncHelper(const Model::CreateWirelessDeviceRequest& request, const CreateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWirelessGatewayAsyncHelper(const Model::CreateWirelessGatewayRequest& request, const CreateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWirelessGatewayTaskAsyncHelper(const Model::CreateWirelessGatewayTaskRequest& request, const CreateWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWirelessGatewayTaskDefinitionAsyncHelper(const Model::CreateWirelessGatewayTaskDefinitionRequest& request, const CreateWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDestinationAsyncHelper(const Model::DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeviceProfileAsyncHelper(const Model::DeleteDeviceProfileRequest& request, const DeleteDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceProfileAsyncHelper(const Model::DeleteServiceProfileRequest& request, const DeleteServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWirelessDeviceAsyncHelper(const Model::DeleteWirelessDeviceRequest& request, const DeleteWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWirelessGatewayAsyncHelper(const Model::DeleteWirelessGatewayRequest& request, const DeleteWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWirelessGatewayTaskAsyncHelper(const Model::DeleteWirelessGatewayTaskRequest& request, const DeleteWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWirelessGatewayTaskDefinitionAsyncHelper(const Model::DeleteWirelessGatewayTaskDefinitionRequest& request, const DeleteWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateAwsAccountFromPartnerAccountAsyncHelper(const Model::DisassociateAwsAccountFromPartnerAccountRequest& request, const DisassociateAwsAccountFromPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWirelessDeviceFromThingAsyncHelper(const Model::DisassociateWirelessDeviceFromThingRequest& request, const DisassociateWirelessDeviceFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWirelessGatewayFromCertificateAsyncHelper(const Model::DisassociateWirelessGatewayFromCertificateRequest& request, const DisassociateWirelessGatewayFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateWirelessGatewayFromThingAsyncHelper(const Model::DisassociateWirelessGatewayFromThingRequest& request, const DisassociateWirelessGatewayFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDestinationAsyncHelper(const Model::GetDestinationRequest& request, const GetDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceProfileAsyncHelper(const Model::GetDeviceProfileRequest& request, const GetDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPartnerAccountAsyncHelper(const Model::GetPartnerAccountRequest& request, const GetPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void ListPartnerAccountsAsyncHelper(const Model::ListPartnerAccountsRequest& request, const ListPartnerAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServiceProfilesAsyncHelper(const Model::ListServiceProfilesRequest& request, const ListServiceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWirelessDevicesAsyncHelper(const Model::ListWirelessDevicesRequest& request, const ListWirelessDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWirelessGatewayTaskDefinitionsAsyncHelper(const Model::ListWirelessGatewayTaskDefinitionsRequest& request, const ListWirelessGatewayTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWirelessGatewaysAsyncHelper(const Model::ListWirelessGatewaysRequest& request, const ListWirelessGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendDataToWirelessDeviceAsyncHelper(const Model::SendDataToWirelessDeviceRequest& request, const SendDataToWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestWirelessDeviceAsyncHelper(const Model::TestWirelessDeviceRequest& request, const TestWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDestinationAsyncHelper(const Model::UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePartnerAccountAsyncHelper(const Model::UpdatePartnerAccountRequest& request, const UpdatePartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWirelessDeviceAsyncHelper(const Model::UpdateWirelessDeviceRequest& request, const UpdateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWirelessGatewayAsyncHelper(const Model::UpdateWirelessGatewayRequest& request, const UpdateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTWireless
} // namespace Aws
