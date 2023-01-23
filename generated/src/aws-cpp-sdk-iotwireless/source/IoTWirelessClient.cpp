/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/iotwireless/IoTWirelessClient.h>
#include <aws/iotwireless/IoTWirelessErrorMarshaller.h>
#include <aws/iotwireless/IoTWirelessEndpointProvider.h>
#include <aws/iotwireless/model/AssociateAwsAccountWithPartnerAccountRequest.h>
#include <aws/iotwireless/model/AssociateMulticastGroupWithFuotaTaskRequest.h>
#include <aws/iotwireless/model/AssociateWirelessDeviceWithFuotaTaskRequest.h>
#include <aws/iotwireless/model/AssociateWirelessDeviceWithMulticastGroupRequest.h>
#include <aws/iotwireless/model/AssociateWirelessDeviceWithThingRequest.h>
#include <aws/iotwireless/model/AssociateWirelessGatewayWithCertificateRequest.h>
#include <aws/iotwireless/model/AssociateWirelessGatewayWithThingRequest.h>
#include <aws/iotwireless/model/CancelMulticastGroupSessionRequest.h>
#include <aws/iotwireless/model/CreateDestinationRequest.h>
#include <aws/iotwireless/model/CreateDeviceProfileRequest.h>
#include <aws/iotwireless/model/CreateFuotaTaskRequest.h>
#include <aws/iotwireless/model/CreateMulticastGroupRequest.h>
#include <aws/iotwireless/model/CreateNetworkAnalyzerConfigurationRequest.h>
#include <aws/iotwireless/model/CreateServiceProfileRequest.h>
#include <aws/iotwireless/model/CreateWirelessDeviceRequest.h>
#include <aws/iotwireless/model/CreateWirelessGatewayRequest.h>
#include <aws/iotwireless/model/CreateWirelessGatewayTaskRequest.h>
#include <aws/iotwireless/model/CreateWirelessGatewayTaskDefinitionRequest.h>
#include <aws/iotwireless/model/DeleteDestinationRequest.h>
#include <aws/iotwireless/model/DeleteDeviceProfileRequest.h>
#include <aws/iotwireless/model/DeleteFuotaTaskRequest.h>
#include <aws/iotwireless/model/DeleteMulticastGroupRequest.h>
#include <aws/iotwireless/model/DeleteNetworkAnalyzerConfigurationRequest.h>
#include <aws/iotwireless/model/DeleteQueuedMessagesRequest.h>
#include <aws/iotwireless/model/DeleteServiceProfileRequest.h>
#include <aws/iotwireless/model/DeleteWirelessDeviceRequest.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayRequest.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskRequest.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskDefinitionRequest.h>
#include <aws/iotwireless/model/DisassociateAwsAccountFromPartnerAccountRequest.h>
#include <aws/iotwireless/model/DisassociateMulticastGroupFromFuotaTaskRequest.h>
#include <aws/iotwireless/model/DisassociateWirelessDeviceFromFuotaTaskRequest.h>
#include <aws/iotwireless/model/DisassociateWirelessDeviceFromMulticastGroupRequest.h>
#include <aws/iotwireless/model/DisassociateWirelessDeviceFromThingRequest.h>
#include <aws/iotwireless/model/DisassociateWirelessGatewayFromCertificateRequest.h>
#include <aws/iotwireless/model/DisassociateWirelessGatewayFromThingRequest.h>
#include <aws/iotwireless/model/GetDestinationRequest.h>
#include <aws/iotwireless/model/GetDeviceProfileRequest.h>
#include <aws/iotwireless/model/GetEventConfigurationByResourceTypesRequest.h>
#include <aws/iotwireless/model/GetFuotaTaskRequest.h>
#include <aws/iotwireless/model/GetLogLevelsByResourceTypesRequest.h>
#include <aws/iotwireless/model/GetMulticastGroupRequest.h>
#include <aws/iotwireless/model/GetMulticastGroupSessionRequest.h>
#include <aws/iotwireless/model/GetNetworkAnalyzerConfigurationRequest.h>
#include <aws/iotwireless/model/GetPartnerAccountRequest.h>
#include <aws/iotwireless/model/GetPositionEstimateRequest.h>
#include <aws/iotwireless/model/GetResourceEventConfigurationRequest.h>
#include <aws/iotwireless/model/GetResourceLogLevelRequest.h>
#include <aws/iotwireless/model/GetResourcePositionRequest.h>
#include <aws/iotwireless/model/GetServiceEndpointRequest.h>
#include <aws/iotwireless/model/GetServiceProfileRequest.h>
#include <aws/iotwireless/model/GetWirelessDeviceRequest.h>
#include <aws/iotwireless/model/GetWirelessDeviceStatisticsRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayCertificateRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayFirmwareInformationRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayStatisticsRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayTaskRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayTaskDefinitionRequest.h>
#include <aws/iotwireless/model/ListDestinationsRequest.h>
#include <aws/iotwireless/model/ListDeviceProfilesRequest.h>
#include <aws/iotwireless/model/ListEventConfigurationsRequest.h>
#include <aws/iotwireless/model/ListFuotaTasksRequest.h>
#include <aws/iotwireless/model/ListMulticastGroupsRequest.h>
#include <aws/iotwireless/model/ListMulticastGroupsByFuotaTaskRequest.h>
#include <aws/iotwireless/model/ListNetworkAnalyzerConfigurationsRequest.h>
#include <aws/iotwireless/model/ListPartnerAccountsRequest.h>
#include <aws/iotwireless/model/ListQueuedMessagesRequest.h>
#include <aws/iotwireless/model/ListServiceProfilesRequest.h>
#include <aws/iotwireless/model/ListTagsForResourceRequest.h>
#include <aws/iotwireless/model/ListWirelessDevicesRequest.h>
#include <aws/iotwireless/model/ListWirelessGatewayTaskDefinitionsRequest.h>
#include <aws/iotwireless/model/ListWirelessGatewaysRequest.h>
#include <aws/iotwireless/model/PutResourceLogLevelRequest.h>
#include <aws/iotwireless/model/ResetAllResourceLogLevelsRequest.h>
#include <aws/iotwireless/model/ResetResourceLogLevelRequest.h>
#include <aws/iotwireless/model/SendDataToMulticastGroupRequest.h>
#include <aws/iotwireless/model/SendDataToWirelessDeviceRequest.h>
#include <aws/iotwireless/model/StartBulkAssociateWirelessDeviceWithMulticastGroupRequest.h>
#include <aws/iotwireless/model/StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest.h>
#include <aws/iotwireless/model/StartFuotaTaskRequest.h>
#include <aws/iotwireless/model/StartMulticastGroupSessionRequest.h>
#include <aws/iotwireless/model/TagResourceRequest.h>
#include <aws/iotwireless/model/TestWirelessDeviceRequest.h>
#include <aws/iotwireless/model/UntagResourceRequest.h>
#include <aws/iotwireless/model/UpdateDestinationRequest.h>
#include <aws/iotwireless/model/UpdateEventConfigurationByResourceTypesRequest.h>
#include <aws/iotwireless/model/UpdateFuotaTaskRequest.h>
#include <aws/iotwireless/model/UpdateLogLevelsByResourceTypesRequest.h>
#include <aws/iotwireless/model/UpdateMulticastGroupRequest.h>
#include <aws/iotwireless/model/UpdateNetworkAnalyzerConfigurationRequest.h>
#include <aws/iotwireless/model/UpdatePartnerAccountRequest.h>
#include <aws/iotwireless/model/UpdateResourceEventConfigurationRequest.h>
#include <aws/iotwireless/model/UpdateResourcePositionRequest.h>
#include <aws/iotwireless/model/UpdateWirelessDeviceRequest.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTWireless;
using namespace Aws::IoTWireless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* IoTWirelessClient::SERVICE_NAME = "iotwireless";
const char* IoTWirelessClient::ALLOCATION_TAG = "IoTWirelessClient";

IoTWirelessClient::IoTWirelessClient(const IoTWireless::IoTWirelessClientConfiguration& clientConfiguration,
                                     std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const AWSCredentials& credentials,
                                     std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider,
                                     const IoTWireless::IoTWirelessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider,
                                     const IoTWireless::IoTWirelessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  IoTWirelessClient::IoTWirelessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
IoTWirelessClient::~IoTWirelessClient()
{
}

std::shared_ptr<IoTWirelessEndpointProviderBase>& IoTWirelessClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoTWirelessClient::init(const IoTWireless::IoTWirelessClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoT Wireless");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void IoTWirelessClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateAwsAccountWithPartnerAccountOutcome IoTWirelessClient::AssociateAwsAccountWithPartnerAccount(const AssociateAwsAccountWithPartnerAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAwsAccountWithPartnerAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateAwsAccountWithPartnerAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts");
  return AssociateAwsAccountWithPartnerAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateMulticastGroupWithFuotaTaskOutcome IoTWirelessClient::AssociateMulticastGroupWithFuotaTask(const AssociateMulticastGroupWithFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateMulticastGroupWithFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMulticastGroupWithFuotaTask", "Required field: Id, is not set");
    return AssociateMulticastGroupWithFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateMulticastGroupWithFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-group");
  return AssociateMulticastGroupWithFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessDeviceWithFuotaTaskOutcome IoTWirelessClient::AssociateWirelessDeviceWithFuotaTask(const AssociateWirelessDeviceWithFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessDeviceWithFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithFuotaTask", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateWirelessDeviceWithFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-device");
  return AssociateWirelessDeviceWithFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessDeviceWithMulticastGroupOutcome IoTWirelessClient::AssociateWirelessDeviceWithMulticastGroup(const AssociateWirelessDeviceWithMulticastGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithMulticastGroup", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-device");
  return AssociateWirelessDeviceWithMulticastGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessDeviceWithThingOutcome IoTWirelessClient::AssociateWirelessDeviceWithThing(const AssociateWirelessDeviceWithThingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessDeviceWithThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithThing", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateWirelessDeviceWithThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/thing");
  return AssociateWirelessDeviceWithThingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessGatewayWithCertificateOutcome IoTWirelessClient::AssociateWirelessGatewayWithCertificate(const AssociateWirelessGatewayWithCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessGatewayWithCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessGatewayWithCertificate", "Required field: Id, is not set");
    return AssociateWirelessGatewayWithCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateWirelessGatewayWithCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  return AssociateWirelessGatewayWithCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessGatewayWithThingOutcome IoTWirelessClient::AssociateWirelessGatewayWithThing(const AssociateWirelessGatewayWithThingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessGatewayWithThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessGatewayWithThing", "Required field: Id, is not set");
    return AssociateWirelessGatewayWithThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateWirelessGatewayWithThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/thing");
  return AssociateWirelessGatewayWithThingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelMulticastGroupSessionOutcome IoTWirelessClient::CancelMulticastGroupSession(const CancelMulticastGroupSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelMulticastGroupSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelMulticastGroupSession", "Required field: Id, is not set");
    return CancelMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelMulticastGroupSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  return CancelMulticastGroupSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CreateDestinationOutcome IoTWirelessClient::CreateDestination(const CreateDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  return CreateDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeviceProfileOutcome IoTWirelessClient::CreateDeviceProfile(const CreateDeviceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeviceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeviceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/device-profiles");
  return CreateDeviceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFuotaTaskOutcome IoTWirelessClient::CreateFuotaTask(const CreateFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks");
  return CreateFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMulticastGroupOutcome IoTWirelessClient::CreateMulticastGroup(const CreateMulticastGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups");
  return CreateMulticastGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkAnalyzerConfigurationOutcome IoTWirelessClient::CreateNetworkAnalyzerConfiguration(const CreateNetworkAnalyzerConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations");
  return CreateNetworkAnalyzerConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceProfileOutcome IoTWirelessClient::CreateServiceProfile(const CreateServiceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateServiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateServiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/service-profiles");
  return CreateServiceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWirelessDeviceOutcome IoTWirelessClient::CreateWirelessDevice(const CreateWirelessDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices");
  return CreateWirelessDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWirelessGatewayOutcome IoTWirelessClient::CreateWirelessGateway(const CreateWirelessGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways");
  return CreateWirelessGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWirelessGatewayTaskOutcome IoTWirelessClient::CreateWirelessGatewayTask(const CreateWirelessGatewayTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWirelessGatewayTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWirelessGatewayTask", "Required field: Id, is not set");
    return CreateWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWirelessGatewayTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  return CreateWirelessGatewayTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::CreateWirelessGatewayTaskDefinition(const CreateWirelessGatewayTaskDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateway-task-definitions");
  return CreateWirelessGatewayTaskDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDestinationOutcome IoTWirelessClient::DeleteDestination(const DeleteDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDestination", "Required field: Name, is not set");
    return DeleteDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceProfileOutcome IoTWirelessClient::DeleteDeviceProfile(const DeleteDeviceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeviceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeviceProfile", "Required field: Id, is not set");
    return DeleteDeviceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDeviceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/device-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteDeviceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFuotaTaskOutcome IoTWirelessClient::DeleteFuotaTask(const DeleteFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFuotaTask", "Required field: Id, is not set");
    return DeleteFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMulticastGroupOutcome IoTWirelessClient::DeleteMulticastGroup(const DeleteMulticastGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMulticastGroup", "Required field: Id, is not set");
    return DeleteMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteMulticastGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkAnalyzerConfigurationOutcome IoTWirelessClient::DeleteNetworkAnalyzerConfiguration(const DeleteNetworkAnalyzerConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return DeleteNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationName());
  return DeleteNetworkAnalyzerConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteQueuedMessagesOutcome IoTWirelessClient::DeleteQueuedMessages(const DeleteQueuedMessagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueuedMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueuedMessages", "Required field: Id, is not set");
    return DeleteQueuedMessagesOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueuedMessages", "Required field: MessageId, is not set");
    return DeleteQueuedMessagesOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueuedMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  return DeleteQueuedMessagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceProfileOutcome IoTWirelessClient::DeleteServiceProfile(const DeleteServiceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteServiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteServiceProfile", "Required field: Id, is not set");
    return DeleteServiceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteServiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/service-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteServiceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWirelessDeviceOutcome IoTWirelessClient::DeleteWirelessDevice(const DeleteWirelessDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessDevice", "Required field: Id, is not set");
    return DeleteWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteWirelessDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWirelessGatewayOutcome IoTWirelessClient::DeleteWirelessGateway(const DeleteWirelessGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGateway", "Required field: Id, is not set");
    return DeleteWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteWirelessGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWirelessGatewayTaskOutcome IoTWirelessClient::DeleteWirelessGatewayTask(const DeleteWirelessGatewayTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWirelessGatewayTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGatewayTask", "Required field: Id, is not set");
    return DeleteWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWirelessGatewayTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  return DeleteWirelessGatewayTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::DeleteWirelessGatewayTaskDefinition(const DeleteWirelessGatewayTaskDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGatewayTaskDefinition", "Required field: Id, is not set");
    return DeleteWirelessGatewayTaskDefinitionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateway-task-definitions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteWirelessGatewayTaskDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAwsAccountFromPartnerAccountOutcome IoTWirelessClient::DisassociateAwsAccountFromPartnerAccount(const DisassociateAwsAccountFromPartnerAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAwsAccountFromPartnerAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PartnerAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAwsAccountFromPartnerAccount", "Required field: PartnerAccountId, is not set");
    return DisassociateAwsAccountFromPartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartnerAccountId]", false));
  }
  if (!request.PartnerTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAwsAccountFromPartnerAccount", "Required field: PartnerType, is not set");
    return DisassociateAwsAccountFromPartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartnerType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateAwsAccountFromPartnerAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPartnerAccountId());
  return DisassociateAwsAccountFromPartnerAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMulticastGroupFromFuotaTaskOutcome IoTWirelessClient::DisassociateMulticastGroupFromFuotaTask(const DisassociateMulticastGroupFromFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateMulticastGroupFromFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMulticastGroupFromFuotaTask", "Required field: Id, is not set");
    return DisassociateMulticastGroupFromFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.MulticastGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMulticastGroupFromFuotaTask", "Required field: MulticastGroupId, is not set");
    return DisassociateMulticastGroupFromFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MulticastGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateMulticastGroupFromFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMulticastGroupId());
  return DisassociateMulticastGroupFromFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessDeviceFromFuotaTaskOutcome IoTWirelessClient::DisassociateWirelessDeviceFromFuotaTask(const DisassociateWirelessDeviceFromFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateWirelessDeviceFromFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromFuotaTask", "Required field: Id, is not set");
    return DisassociateWirelessDeviceFromFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.WirelessDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromFuotaTask", "Required field: WirelessDeviceId, is not set");
    return DisassociateWirelessDeviceFromFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessDeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateWirelessDeviceFromFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWirelessDeviceId());
  return DisassociateWirelessDeviceFromFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessDeviceFromMulticastGroupOutcome IoTWirelessClient::DisassociateWirelessDeviceFromMulticastGroup(const DisassociateWirelessDeviceFromMulticastGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateWirelessDeviceFromMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromMulticastGroup", "Required field: Id, is not set");
    return DisassociateWirelessDeviceFromMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.WirelessDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromMulticastGroup", "Required field: WirelessDeviceId, is not set");
    return DisassociateWirelessDeviceFromMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessDeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateWirelessDeviceFromMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWirelessDeviceId());
  return DisassociateWirelessDeviceFromMulticastGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessDeviceFromThingOutcome IoTWirelessClient::DisassociateWirelessDeviceFromThing(const DisassociateWirelessDeviceFromThingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateWirelessDeviceFromThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromThing", "Required field: Id, is not set");
    return DisassociateWirelessDeviceFromThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateWirelessDeviceFromThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/thing");
  return DisassociateWirelessDeviceFromThingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessGatewayFromCertificateOutcome IoTWirelessClient::DisassociateWirelessGatewayFromCertificate(const DisassociateWirelessGatewayFromCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateWirelessGatewayFromCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessGatewayFromCertificate", "Required field: Id, is not set");
    return DisassociateWirelessGatewayFromCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateWirelessGatewayFromCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  return DisassociateWirelessGatewayFromCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessGatewayFromThingOutcome IoTWirelessClient::DisassociateWirelessGatewayFromThing(const DisassociateWirelessGatewayFromThingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateWirelessGatewayFromThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessGatewayFromThing", "Required field: Id, is not set");
    return DisassociateWirelessGatewayFromThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateWirelessGatewayFromThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/thing");
  return DisassociateWirelessGatewayFromThingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetDestinationOutcome IoTWirelessClient::GetDestination(const GetDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDestination", "Required field: Name, is not set");
    return GetDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceProfileOutcome IoTWirelessClient::GetDeviceProfile(const GetDeviceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeviceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeviceProfile", "Required field: Id, is not set");
    return GetDeviceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeviceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/device-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetDeviceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEventConfigurationByResourceTypesOutcome IoTWirelessClient::GetEventConfigurationByResourceTypes(const GetEventConfigurationByResourceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventConfigurationByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventConfigurationByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations-resource-types");
  return GetEventConfigurationByResourceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFuotaTaskOutcome IoTWirelessClient::GetFuotaTask(const GetFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFuotaTask", "Required field: Id, is not set");
    return GetFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLogLevelsByResourceTypesOutcome IoTWirelessClient::GetLogLevelsByResourceTypes(const GetLogLevelsByResourceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLogLevelsByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLogLevelsByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels");
  return GetLogLevelsByResourceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMulticastGroupOutcome IoTWirelessClient::GetMulticastGroup(const GetMulticastGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMulticastGroup", "Required field: Id, is not set");
    return GetMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetMulticastGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMulticastGroupSessionOutcome IoTWirelessClient::GetMulticastGroupSession(const GetMulticastGroupSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMulticastGroupSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMulticastGroupSession", "Required field: Id, is not set");
    return GetMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMulticastGroupSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  return GetMulticastGroupSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkAnalyzerConfigurationOutcome IoTWirelessClient::GetNetworkAnalyzerConfiguration(const GetNetworkAnalyzerConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return GetNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationName());
  return GetNetworkAnalyzerConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPartnerAccountOutcome IoTWirelessClient::GetPartnerAccount(const GetPartnerAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPartnerAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PartnerAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPartnerAccount", "Required field: PartnerAccountId, is not set");
    return GetPartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartnerAccountId]", false));
  }
  if (!request.PartnerTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPartnerAccount", "Required field: PartnerType, is not set");
    return GetPartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartnerType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPartnerAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPartnerAccountId());
  return GetPartnerAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPositionEstimateOutcome IoTWirelessClient::GetPositionEstimate(const GetPositionEstimateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPositionEstimate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPositionEstimate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/position-estimate");
  return GetPositionEstimateOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetResourceEventConfigurationOutcome IoTWirelessClient::GetResourceEventConfiguration(const GetResourceEventConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceEventConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceEventConfiguration", "Required field: Identifier, is not set");
    return GetResourceEventConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.IdentifierTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceEventConfiguration", "Required field: IdentifierType, is not set");
    return GetResourceEventConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentifierType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceEventConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  return GetResourceEventConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceLogLevelOutcome IoTWirelessClient::GetResourceLogLevel(const GetResourceLogLevelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceLogLevel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceLogLevel", "Required field: ResourceIdentifier, is not set");
    return GetResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceLogLevel", "Required field: ResourceType, is not set");
    return GetResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceLogLevel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  return GetResourceLogLevelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePositionOutcome IoTWirelessClient::GetResourcePosition(const GetResourcePositionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePosition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourcePosition", "Required field: ResourceIdentifier, is not set");
    return GetResourcePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourcePosition", "Required field: ResourceType, is not set");
    return GetResourcePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePosition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource-positions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  return GetResourcePositionOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetServiceEndpointOutcome IoTWirelessClient::GetServiceEndpoint(const GetServiceEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/service-endpoint");
  return GetServiceEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceProfileOutcome IoTWirelessClient::GetServiceProfile(const GetServiceProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServiceProfile", "Required field: Id, is not set");
    return GetServiceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/service-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetServiceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessDeviceOutcome IoTWirelessClient::GetWirelessDevice(const GetWirelessDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessDevice", "Required field: Identifier, is not set");
    return GetWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.IdentifierTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessDevice", "Required field: IdentifierType, is not set");
    return GetWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentifierType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  return GetWirelessDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessDeviceStatisticsOutcome IoTWirelessClient::GetWirelessDeviceStatistics(const GetWirelessDeviceStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessDeviceStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WirelessDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessDeviceStatistics", "Required field: WirelessDeviceId, is not set");
    return GetWirelessDeviceStatisticsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessDeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWirelessDeviceStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWirelessDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/statistics");
  return GetWirelessDeviceStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayOutcome IoTWirelessClient::GetWirelessGateway(const GetWirelessGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGateway", "Required field: Identifier, is not set");
    return GetWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.IdentifierTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGateway", "Required field: IdentifierType, is not set");
    return GetWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentifierType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  return GetWirelessGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayCertificateOutcome IoTWirelessClient::GetWirelessGatewayCertificate(const GetWirelessGatewayCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayCertificate", "Required field: Id, is not set");
    return GetWirelessGatewayCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWirelessGatewayCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  return GetWirelessGatewayCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayFirmwareInformationOutcome IoTWirelessClient::GetWirelessGatewayFirmwareInformation(const GetWirelessGatewayFirmwareInformationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayFirmwareInformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayFirmwareInformation", "Required field: Id, is not set");
    return GetWirelessGatewayFirmwareInformationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWirelessGatewayFirmwareInformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/firmware-information");
  return GetWirelessGatewayFirmwareInformationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayStatisticsOutcome IoTWirelessClient::GetWirelessGatewayStatistics(const GetWirelessGatewayStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WirelessGatewayIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayStatistics", "Required field: WirelessGatewayId, is not set");
    return GetWirelessGatewayStatisticsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessGatewayId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWirelessGatewayStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWirelessGatewayId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/statistics");
  return GetWirelessGatewayStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayTaskOutcome IoTWirelessClient::GetWirelessGatewayTask(const GetWirelessGatewayTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayTask", "Required field: Id, is not set");
    return GetWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWirelessGatewayTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  return GetWirelessGatewayTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::GetWirelessGatewayTaskDefinition(const GetWirelessGatewayTaskDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayTaskDefinition", "Required field: Id, is not set");
    return GetWirelessGatewayTaskDefinitionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateway-task-definitions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetWirelessGatewayTaskDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDestinationsOutcome IoTWirelessClient::ListDestinations(const ListDestinationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  return ListDestinationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceProfilesOutcome IoTWirelessClient::ListDeviceProfiles(const ListDeviceProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeviceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/device-profiles");
  return ListDeviceProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEventConfigurationsOutcome IoTWirelessClient::ListEventConfigurations(const ListEventConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEventConfigurations", "Required field: ResourceType, is not set");
    return ListEventConfigurationsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations");
  return ListEventConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFuotaTasksOutcome IoTWirelessClient::ListFuotaTasks(const ListFuotaTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFuotaTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFuotaTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks");
  return ListFuotaTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMulticastGroupsOutcome IoTWirelessClient::ListMulticastGroups(const ListMulticastGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMulticastGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMulticastGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups");
  return ListMulticastGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMulticastGroupsByFuotaTaskOutcome IoTWirelessClient::ListMulticastGroupsByFuotaTask(const ListMulticastGroupsByFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMulticastGroupsByFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMulticastGroupsByFuotaTask", "Required field: Id, is not set");
    return ListMulticastGroupsByFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMulticastGroupsByFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups");
  return ListMulticastGroupsByFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNetworkAnalyzerConfigurationsOutcome IoTWirelessClient::ListNetworkAnalyzerConfigurations(const ListNetworkAnalyzerConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNetworkAnalyzerConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNetworkAnalyzerConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations");
  return ListNetworkAnalyzerConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPartnerAccountsOutcome IoTWirelessClient::ListPartnerAccounts(const ListPartnerAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPartnerAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPartnerAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts");
  return ListPartnerAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQueuedMessagesOutcome IoTWirelessClient::ListQueuedMessages(const ListQueuedMessagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueuedMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueuedMessages", "Required field: Id, is not set");
    return ListQueuedMessagesOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueuedMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  return ListQueuedMessagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListServiceProfilesOutcome IoTWirelessClient::ListServiceProfiles(const ListServiceProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServiceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServiceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/service-profiles");
  return ListServiceProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome IoTWirelessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWirelessDevicesOutcome IoTWirelessClient::ListWirelessDevices(const ListWirelessDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWirelessDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWirelessDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices");
  return ListWirelessDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWirelessGatewayTaskDefinitionsOutcome IoTWirelessClient::ListWirelessGatewayTaskDefinitions(const ListWirelessGatewayTaskDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWirelessGatewayTaskDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWirelessGatewayTaskDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateway-task-definitions");
  return ListWirelessGatewayTaskDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWirelessGatewaysOutcome IoTWirelessClient::ListWirelessGateways(const ListWirelessGatewaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWirelessGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWirelessGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways");
  return ListWirelessGatewaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutResourceLogLevelOutcome IoTWirelessClient::PutResourceLogLevel(const PutResourceLogLevelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourceLogLevel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutResourceLogLevel", "Required field: ResourceIdentifier, is not set");
    return PutResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutResourceLogLevel", "Required field: ResourceType, is not set");
    return PutResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourceLogLevel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  return PutResourceLogLevelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ResetAllResourceLogLevelsOutcome IoTWirelessClient::ResetAllResourceLogLevels(const ResetAllResourceLogLevelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetAllResourceLogLevels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetAllResourceLogLevels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels");
  return ResetAllResourceLogLevelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

ResetResourceLogLevelOutcome IoTWirelessClient::ResetResourceLogLevel(const ResetResourceLogLevelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetResourceLogLevel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ResetResourceLogLevel", "Required field: ResourceIdentifier, is not set");
    return ResetResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ResetResourceLogLevel", "Required field: ResourceType, is not set");
    return ResetResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetResourceLogLevel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  return ResetResourceLogLevelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

SendDataToMulticastGroupOutcome IoTWirelessClient::SendDataToMulticastGroup(const SendDataToMulticastGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendDataToMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendDataToMulticastGroup", "Required field: Id, is not set");
    return SendDataToMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendDataToMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  return SendDataToMulticastGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendDataToWirelessDeviceOutcome IoTWirelessClient::SendDataToWirelessDevice(const SendDataToWirelessDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendDataToWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendDataToWirelessDevice", "Required field: Id, is not set");
    return SendDataToWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendDataToWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  return SendDataToWirelessDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome IoTWirelessClient::StartBulkAssociateWirelessDeviceWithMulticastGroup(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBulkAssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBulkAssociateWirelessDeviceWithMulticastGroup", "Required field: Id, is not set");
    return StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBulkAssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bulk");
  return StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome IoTWirelessClient::StartBulkDisassociateWirelessDeviceFromMulticastGroup(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBulkDisassociateWirelessDeviceFromMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBulkDisassociateWirelessDeviceFromMulticastGroup", "Required field: Id, is not set");
    return StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBulkDisassociateWirelessDeviceFromMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bulk");
  return StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFuotaTaskOutcome IoTWirelessClient::StartFuotaTask(const StartFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartFuotaTask", "Required field: Id, is not set");
    return StartFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return StartFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartMulticastGroupSessionOutcome IoTWirelessClient::StartMulticastGroupSession(const StartMulticastGroupSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMulticastGroupSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMulticastGroupSession", "Required field: Id, is not set");
    return StartMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMulticastGroupSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  return StartMulticastGroupSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome IoTWirelessClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestWirelessDeviceOutcome IoTWirelessClient::TestWirelessDevice(const TestWirelessDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestWirelessDevice", "Required field: Id, is not set");
    return TestWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/test");
  return TestWirelessDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome IoTWirelessClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateDestinationOutcome IoTWirelessClient::UpdateDestination(const UpdateDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDestination", "Required field: Name, is not set");
    return UpdateDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventConfigurationByResourceTypesOutcome IoTWirelessClient::UpdateEventConfigurationByResourceTypes(const UpdateEventConfigurationByResourceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEventConfigurationByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEventConfigurationByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations-resource-types");
  return UpdateEventConfigurationByResourceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFuotaTaskOutcome IoTWirelessClient::UpdateFuotaTask(const UpdateFuotaTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFuotaTask", "Required field: Id, is not set");
    return UpdateFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateFuotaTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLogLevelsByResourceTypesOutcome IoTWirelessClient::UpdateLogLevelsByResourceTypes(const UpdateLogLevelsByResourceTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLogLevelsByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLogLevelsByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels");
  return UpdateLogLevelsByResourceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMulticastGroupOutcome IoTWirelessClient::UpdateMulticastGroup(const UpdateMulticastGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMulticastGroup", "Required field: Id, is not set");
    return UpdateMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateMulticastGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkAnalyzerConfigurationOutcome IoTWirelessClient::UpdateNetworkAnalyzerConfiguration(const UpdateNetworkAnalyzerConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return UpdateNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationName());
  return UpdateNetworkAnalyzerConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdatePartnerAccountOutcome IoTWirelessClient::UpdatePartnerAccount(const UpdatePartnerAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePartnerAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PartnerAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePartnerAccount", "Required field: PartnerAccountId, is not set");
    return UpdatePartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartnerAccountId]", false));
  }
  if (!request.PartnerTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePartnerAccount", "Required field: PartnerType, is not set");
    return UpdatePartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartnerType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePartnerAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPartnerAccountId());
  return UpdatePartnerAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceEventConfigurationOutcome IoTWirelessClient::UpdateResourceEventConfiguration(const UpdateResourceEventConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourceEventConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourceEventConfiguration", "Required field: Identifier, is not set");
    return UpdateResourceEventConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.IdentifierTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourceEventConfiguration", "Required field: IdentifierType, is not set");
    return UpdateResourceEventConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentifierType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourceEventConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  return UpdateResourceEventConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourcePositionOutcome IoTWirelessClient::UpdateResourcePosition(const UpdateResourcePositionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourcePosition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourcePosition", "Required field: ResourceIdentifier, is not set");
    return UpdateResourcePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourcePosition", "Required field: ResourceType, is not set");
    return UpdateResourcePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourcePosition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource-positions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  return UpdateResourcePositionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateWirelessDeviceOutcome IoTWirelessClient::UpdateWirelessDevice(const UpdateWirelessDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWirelessDevice", "Required field: Id, is not set");
    return UpdateWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateWirelessDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateWirelessGatewayOutcome IoTWirelessClient::UpdateWirelessGateway(const UpdateWirelessGatewayRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWirelessGateway", "Required field: Id, is not set");
    return UpdateWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateWirelessGatewayOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

