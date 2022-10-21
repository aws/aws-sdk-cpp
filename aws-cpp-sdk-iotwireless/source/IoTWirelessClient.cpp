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

#include <aws/iotwireless/IoTWirelessClient.h>
#include <aws/iotwireless/IoTWirelessEndpoint.h>
#include <aws/iotwireless/IoTWirelessErrorMarshaller.h>
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
#include <aws/iotwireless/model/GetPositionRequest.h>
#include <aws/iotwireless/model/GetPositionConfigurationRequest.h>
#include <aws/iotwireless/model/GetResourceEventConfigurationRequest.h>
#include <aws/iotwireless/model/GetResourceLogLevelRequest.h>
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
#include <aws/iotwireless/model/ListPositionConfigurationsRequest.h>
#include <aws/iotwireless/model/ListQueuedMessagesRequest.h>
#include <aws/iotwireless/model/ListServiceProfilesRequest.h>
#include <aws/iotwireless/model/ListTagsForResourceRequest.h>
#include <aws/iotwireless/model/ListWirelessDevicesRequest.h>
#include <aws/iotwireless/model/ListWirelessGatewayTaskDefinitionsRequest.h>
#include <aws/iotwireless/model/ListWirelessGatewaysRequest.h>
#include <aws/iotwireless/model/PutPositionConfigurationRequest.h>
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
#include <aws/iotwireless/model/UpdatePositionRequest.h>
#include <aws/iotwireless/model/UpdateResourceEventConfigurationRequest.h>
#include <aws/iotwireless/model/UpdateWirelessDeviceRequest.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTWireless;
using namespace Aws::IoTWireless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* IoTWirelessClient::SERVICE_NAME = "iotwireless";
const char* IoTWirelessClient::ALLOCATION_TAG = "IoTWirelessClient";

IoTWirelessClient::IoTWirelessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTWirelessClient::~IoTWirelessClient()
{
}

void IoTWirelessClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoT Wireless");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoTWirelessEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoTWirelessClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AssociateAwsAccountWithPartnerAccountOutcome IoTWirelessClient::AssociateAwsAccountWithPartnerAccount(const AssociateAwsAccountWithPartnerAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/partner-accounts");
  return AssociateAwsAccountWithPartnerAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateAwsAccountWithPartnerAccountOutcomeCallable IoTWirelessClient::AssociateAwsAccountWithPartnerAccountCallable(const AssociateAwsAccountWithPartnerAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAwsAccountWithPartnerAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAwsAccountWithPartnerAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::AssociateAwsAccountWithPartnerAccountAsync(const AssociateAwsAccountWithPartnerAccountRequest& request, const AssociateAwsAccountWithPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateAwsAccountWithPartnerAccount(request), context);
    } );
}

AssociateMulticastGroupWithFuotaTaskOutcome IoTWirelessClient::AssociateMulticastGroupWithFuotaTask(const AssociateMulticastGroupWithFuotaTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMulticastGroupWithFuotaTask", "Required field: Id, is not set");
    return AssociateMulticastGroupWithFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/multicast-group");
  return AssociateMulticastGroupWithFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateMulticastGroupWithFuotaTaskOutcomeCallable IoTWirelessClient::AssociateMulticastGroupWithFuotaTaskCallable(const AssociateMulticastGroupWithFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateMulticastGroupWithFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateMulticastGroupWithFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::AssociateMulticastGroupWithFuotaTaskAsync(const AssociateMulticastGroupWithFuotaTaskRequest& request, const AssociateMulticastGroupWithFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateMulticastGroupWithFuotaTask(request), context);
    } );
}

AssociateWirelessDeviceWithFuotaTaskOutcome IoTWirelessClient::AssociateWirelessDeviceWithFuotaTask(const AssociateWirelessDeviceWithFuotaTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithFuotaTask", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/wireless-device");
  return AssociateWirelessDeviceWithFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessDeviceWithFuotaTaskOutcomeCallable IoTWirelessClient::AssociateWirelessDeviceWithFuotaTaskCallable(const AssociateWirelessDeviceWithFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWirelessDeviceWithFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWirelessDeviceWithFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::AssociateWirelessDeviceWithFuotaTaskAsync(const AssociateWirelessDeviceWithFuotaTaskRequest& request, const AssociateWirelessDeviceWithFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateWirelessDeviceWithFuotaTask(request), context);
    } );
}

AssociateWirelessDeviceWithMulticastGroupOutcome IoTWirelessClient::AssociateWirelessDeviceWithMulticastGroup(const AssociateWirelessDeviceWithMulticastGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithMulticastGroup", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/wireless-device");
  return AssociateWirelessDeviceWithMulticastGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessDeviceWithMulticastGroupOutcomeCallable IoTWirelessClient::AssociateWirelessDeviceWithMulticastGroupCallable(const AssociateWirelessDeviceWithMulticastGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWirelessDeviceWithMulticastGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWirelessDeviceWithMulticastGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::AssociateWirelessDeviceWithMulticastGroupAsync(const AssociateWirelessDeviceWithMulticastGroupRequest& request, const AssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateWirelessDeviceWithMulticastGroup(request), context);
    } );
}

AssociateWirelessDeviceWithThingOutcome IoTWirelessClient::AssociateWirelessDeviceWithThing(const AssociateWirelessDeviceWithThingRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithThing", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/thing");
  return AssociateWirelessDeviceWithThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessDeviceWithThingOutcomeCallable IoTWirelessClient::AssociateWirelessDeviceWithThingCallable(const AssociateWirelessDeviceWithThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWirelessDeviceWithThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWirelessDeviceWithThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::AssociateWirelessDeviceWithThingAsync(const AssociateWirelessDeviceWithThingRequest& request, const AssociateWirelessDeviceWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateWirelessDeviceWithThing(request), context);
    } );
}

AssociateWirelessGatewayWithCertificateOutcome IoTWirelessClient::AssociateWirelessGatewayWithCertificate(const AssociateWirelessGatewayWithCertificateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessGatewayWithCertificate", "Required field: Id, is not set");
    return AssociateWirelessGatewayWithCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/certificate");
  return AssociateWirelessGatewayWithCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessGatewayWithCertificateOutcomeCallable IoTWirelessClient::AssociateWirelessGatewayWithCertificateCallable(const AssociateWirelessGatewayWithCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWirelessGatewayWithCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWirelessGatewayWithCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::AssociateWirelessGatewayWithCertificateAsync(const AssociateWirelessGatewayWithCertificateRequest& request, const AssociateWirelessGatewayWithCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateWirelessGatewayWithCertificate(request), context);
    } );
}

AssociateWirelessGatewayWithThingOutcome IoTWirelessClient::AssociateWirelessGatewayWithThing(const AssociateWirelessGatewayWithThingRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessGatewayWithThing", "Required field: Id, is not set");
    return AssociateWirelessGatewayWithThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/thing");
  return AssociateWirelessGatewayWithThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateWirelessGatewayWithThingOutcomeCallable IoTWirelessClient::AssociateWirelessGatewayWithThingCallable(const AssociateWirelessGatewayWithThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWirelessGatewayWithThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWirelessGatewayWithThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::AssociateWirelessGatewayWithThingAsync(const AssociateWirelessGatewayWithThingRequest& request, const AssociateWirelessGatewayWithThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateWirelessGatewayWithThing(request), context);
    } );
}

CancelMulticastGroupSessionOutcome IoTWirelessClient::CancelMulticastGroupSession(const CancelMulticastGroupSessionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelMulticastGroupSession", "Required field: Id, is not set");
    return CancelMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/session");
  return CancelMulticastGroupSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelMulticastGroupSessionOutcomeCallable IoTWirelessClient::CancelMulticastGroupSessionCallable(const CancelMulticastGroupSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelMulticastGroupSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelMulticastGroupSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CancelMulticastGroupSessionAsync(const CancelMulticastGroupSessionRequest& request, const CancelMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelMulticastGroupSession(request), context);
    } );
}

CreateDestinationOutcome IoTWirelessClient::CreateDestination(const CreateDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations");
  return CreateDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDestinationOutcomeCallable IoTWirelessClient::CreateDestinationCallable(const CreateDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateDestinationAsync(const CreateDestinationRequest& request, const CreateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDestination(request), context);
    } );
}

CreateDeviceProfileOutcome IoTWirelessClient::CreateDeviceProfile(const CreateDeviceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/device-profiles");
  return CreateDeviceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeviceProfileOutcomeCallable IoTWirelessClient::CreateDeviceProfileCallable(const CreateDeviceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeviceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeviceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateDeviceProfileAsync(const CreateDeviceProfileRequest& request, const CreateDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeviceProfile(request), context);
    } );
}

CreateFuotaTaskOutcome IoTWirelessClient::CreateFuotaTask(const CreateFuotaTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks");
  return CreateFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFuotaTaskOutcomeCallable IoTWirelessClient::CreateFuotaTaskCallable(const CreateFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateFuotaTaskAsync(const CreateFuotaTaskRequest& request, const CreateFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFuotaTask(request), context);
    } );
}

CreateMulticastGroupOutcome IoTWirelessClient::CreateMulticastGroup(const CreateMulticastGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups");
  return CreateMulticastGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMulticastGroupOutcomeCallable IoTWirelessClient::CreateMulticastGroupCallable(const CreateMulticastGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMulticastGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMulticastGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateMulticastGroupAsync(const CreateMulticastGroupRequest& request, const CreateMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMulticastGroup(request), context);
    } );
}

CreateNetworkAnalyzerConfigurationOutcome IoTWirelessClient::CreateNetworkAnalyzerConfiguration(const CreateNetworkAnalyzerConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/network-analyzer-configurations");
  return CreateNetworkAnalyzerConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkAnalyzerConfigurationOutcomeCallable IoTWirelessClient::CreateNetworkAnalyzerConfigurationCallable(const CreateNetworkAnalyzerConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkAnalyzerConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetworkAnalyzerConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateNetworkAnalyzerConfigurationAsync(const CreateNetworkAnalyzerConfigurationRequest& request, const CreateNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNetworkAnalyzerConfiguration(request), context);
    } );
}

CreateServiceProfileOutcome IoTWirelessClient::CreateServiceProfile(const CreateServiceProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/service-profiles");
  return CreateServiceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceProfileOutcomeCallable IoTWirelessClient::CreateServiceProfileCallable(const CreateServiceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateServiceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateServiceProfileAsync(const CreateServiceProfileRequest& request, const CreateServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateServiceProfile(request), context);
    } );
}

CreateWirelessDeviceOutcome IoTWirelessClient::CreateWirelessDevice(const CreateWirelessDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices");
  return CreateWirelessDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWirelessDeviceOutcomeCallable IoTWirelessClient::CreateWirelessDeviceCallable(const CreateWirelessDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWirelessDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWirelessDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateWirelessDeviceAsync(const CreateWirelessDeviceRequest& request, const CreateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWirelessDevice(request), context);
    } );
}

CreateWirelessGatewayOutcome IoTWirelessClient::CreateWirelessGateway(const CreateWirelessGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways");
  return CreateWirelessGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWirelessGatewayOutcomeCallable IoTWirelessClient::CreateWirelessGatewayCallable(const CreateWirelessGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWirelessGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWirelessGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateWirelessGatewayAsync(const CreateWirelessGatewayRequest& request, const CreateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWirelessGateway(request), context);
    } );
}

CreateWirelessGatewayTaskOutcome IoTWirelessClient::CreateWirelessGatewayTask(const CreateWirelessGatewayTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWirelessGatewayTask", "Required field: Id, is not set");
    return CreateWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/tasks");
  return CreateWirelessGatewayTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWirelessGatewayTaskOutcomeCallable IoTWirelessClient::CreateWirelessGatewayTaskCallable(const CreateWirelessGatewayTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWirelessGatewayTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWirelessGatewayTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateWirelessGatewayTaskAsync(const CreateWirelessGatewayTaskRequest& request, const CreateWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWirelessGatewayTask(request), context);
    } );
}

CreateWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::CreateWirelessGatewayTaskDefinition(const CreateWirelessGatewayTaskDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateway-task-definitions");
  return CreateWirelessGatewayTaskDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWirelessGatewayTaskDefinitionOutcomeCallable IoTWirelessClient::CreateWirelessGatewayTaskDefinitionCallable(const CreateWirelessGatewayTaskDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWirelessGatewayTaskDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWirelessGatewayTaskDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::CreateWirelessGatewayTaskDefinitionAsync(const CreateWirelessGatewayTaskDefinitionRequest& request, const CreateWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWirelessGatewayTaskDefinition(request), context);
    } );
}

DeleteDestinationOutcome IoTWirelessClient::DeleteDestination(const DeleteDestinationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDestination", "Required field: Name, is not set");
    return DeleteDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations/");
  uri.AddPathSegment(request.GetName());
  return DeleteDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDestinationOutcomeCallable IoTWirelessClient::DeleteDestinationCallable(const DeleteDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteDestinationAsync(const DeleteDestinationRequest& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDestination(request), context);
    } );
}

DeleteDeviceProfileOutcome IoTWirelessClient::DeleteDeviceProfile(const DeleteDeviceProfileRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeviceProfile", "Required field: Id, is not set");
    return DeleteDeviceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/device-profiles/");
  uri.AddPathSegment(request.GetId());
  return DeleteDeviceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceProfileOutcomeCallable IoTWirelessClient::DeleteDeviceProfileCallable(const DeleteDeviceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeviceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteDeviceProfileAsync(const DeleteDeviceProfileRequest& request, const DeleteDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDeviceProfile(request), context);
    } );
}

DeleteFuotaTaskOutcome IoTWirelessClient::DeleteFuotaTask(const DeleteFuotaTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFuotaTask", "Required field: Id, is not set");
    return DeleteFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks/");
  uri.AddPathSegment(request.GetId());
  return DeleteFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFuotaTaskOutcomeCallable IoTWirelessClient::DeleteFuotaTaskCallable(const DeleteFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteFuotaTaskAsync(const DeleteFuotaTaskRequest& request, const DeleteFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFuotaTask(request), context);
    } );
}

DeleteMulticastGroupOutcome IoTWirelessClient::DeleteMulticastGroup(const DeleteMulticastGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMulticastGroup", "Required field: Id, is not set");
    return DeleteMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  return DeleteMulticastGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMulticastGroupOutcomeCallable IoTWirelessClient::DeleteMulticastGroupCallable(const DeleteMulticastGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMulticastGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMulticastGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteMulticastGroupAsync(const DeleteMulticastGroupRequest& request, const DeleteMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMulticastGroup(request), context);
    } );
}

DeleteNetworkAnalyzerConfigurationOutcome IoTWirelessClient::DeleteNetworkAnalyzerConfiguration(const DeleteNetworkAnalyzerConfigurationRequest& request) const
{
  if (!request.ConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return DeleteNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/network-analyzer-configurations/");
  uri.AddPathSegment(request.GetConfigurationName());
  return DeleteNetworkAnalyzerConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkAnalyzerConfigurationOutcomeCallable IoTWirelessClient::DeleteNetworkAnalyzerConfigurationCallable(const DeleteNetworkAnalyzerConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNetworkAnalyzerConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNetworkAnalyzerConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteNetworkAnalyzerConfigurationAsync(const DeleteNetworkAnalyzerConfigurationRequest& request, const DeleteNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNetworkAnalyzerConfiguration(request), context);
    } );
}

DeleteQueuedMessagesOutcome IoTWirelessClient::DeleteQueuedMessages(const DeleteQueuedMessagesRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/data");
  return DeleteQueuedMessagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteQueuedMessagesOutcomeCallable IoTWirelessClient::DeleteQueuedMessagesCallable(const DeleteQueuedMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQueuedMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQueuedMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteQueuedMessagesAsync(const DeleteQueuedMessagesRequest& request, const DeleteQueuedMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteQueuedMessages(request), context);
    } );
}

DeleteServiceProfileOutcome IoTWirelessClient::DeleteServiceProfile(const DeleteServiceProfileRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteServiceProfile", "Required field: Id, is not set");
    return DeleteServiceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/service-profiles/");
  uri.AddPathSegment(request.GetId());
  return DeleteServiceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceProfileOutcomeCallable IoTWirelessClient::DeleteServiceProfileCallable(const DeleteServiceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteServiceProfileAsync(const DeleteServiceProfileRequest& request, const DeleteServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteServiceProfile(request), context);
    } );
}

DeleteWirelessDeviceOutcome IoTWirelessClient::DeleteWirelessDevice(const DeleteWirelessDeviceRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessDevice", "Required field: Id, is not set");
    return DeleteWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetId());
  return DeleteWirelessDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWirelessDeviceOutcomeCallable IoTWirelessClient::DeleteWirelessDeviceCallable(const DeleteWirelessDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWirelessDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWirelessDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteWirelessDeviceAsync(const DeleteWirelessDeviceRequest& request, const DeleteWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWirelessDevice(request), context);
    } );
}

DeleteWirelessGatewayOutcome IoTWirelessClient::DeleteWirelessGateway(const DeleteWirelessGatewayRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGateway", "Required field: Id, is not set");
    return DeleteWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  return DeleteWirelessGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWirelessGatewayOutcomeCallable IoTWirelessClient::DeleteWirelessGatewayCallable(const DeleteWirelessGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWirelessGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWirelessGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteWirelessGatewayAsync(const DeleteWirelessGatewayRequest& request, const DeleteWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWirelessGateway(request), context);
    } );
}

DeleteWirelessGatewayTaskOutcome IoTWirelessClient::DeleteWirelessGatewayTask(const DeleteWirelessGatewayTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGatewayTask", "Required field: Id, is not set");
    return DeleteWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/tasks");
  return DeleteWirelessGatewayTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWirelessGatewayTaskOutcomeCallable IoTWirelessClient::DeleteWirelessGatewayTaskCallable(const DeleteWirelessGatewayTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWirelessGatewayTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWirelessGatewayTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteWirelessGatewayTaskAsync(const DeleteWirelessGatewayTaskRequest& request, const DeleteWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWirelessGatewayTask(request), context);
    } );
}

DeleteWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::DeleteWirelessGatewayTaskDefinition(const DeleteWirelessGatewayTaskDefinitionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGatewayTaskDefinition", "Required field: Id, is not set");
    return DeleteWirelessGatewayTaskDefinitionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateway-task-definitions/");
  uri.AddPathSegment(request.GetId());
  return DeleteWirelessGatewayTaskDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWirelessGatewayTaskDefinitionOutcomeCallable IoTWirelessClient::DeleteWirelessGatewayTaskDefinitionCallable(const DeleteWirelessGatewayTaskDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWirelessGatewayTaskDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWirelessGatewayTaskDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DeleteWirelessGatewayTaskDefinitionAsync(const DeleteWirelessGatewayTaskDefinitionRequest& request, const DeleteWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWirelessGatewayTaskDefinition(request), context);
    } );
}

DisassociateAwsAccountFromPartnerAccountOutcome IoTWirelessClient::DisassociateAwsAccountFromPartnerAccount(const DisassociateAwsAccountFromPartnerAccountRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/partner-accounts/");
  uri.AddPathSegment(request.GetPartnerAccountId());
  return DisassociateAwsAccountFromPartnerAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAwsAccountFromPartnerAccountOutcomeCallable IoTWirelessClient::DisassociateAwsAccountFromPartnerAccountCallable(const DisassociateAwsAccountFromPartnerAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAwsAccountFromPartnerAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAwsAccountFromPartnerAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DisassociateAwsAccountFromPartnerAccountAsync(const DisassociateAwsAccountFromPartnerAccountRequest& request, const DisassociateAwsAccountFromPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateAwsAccountFromPartnerAccount(request), context);
    } );
}

DisassociateMulticastGroupFromFuotaTaskOutcome IoTWirelessClient::DisassociateMulticastGroupFromFuotaTask(const DisassociateMulticastGroupFromFuotaTaskRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetMulticastGroupId());
  return DisassociateMulticastGroupFromFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMulticastGroupFromFuotaTaskOutcomeCallable IoTWirelessClient::DisassociateMulticastGroupFromFuotaTaskCallable(const DisassociateMulticastGroupFromFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMulticastGroupFromFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMulticastGroupFromFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DisassociateMulticastGroupFromFuotaTaskAsync(const DisassociateMulticastGroupFromFuotaTaskRequest& request, const DisassociateMulticastGroupFromFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateMulticastGroupFromFuotaTask(request), context);
    } );
}

DisassociateWirelessDeviceFromFuotaTaskOutcome IoTWirelessClient::DisassociateWirelessDeviceFromFuotaTask(const DisassociateWirelessDeviceFromFuotaTaskRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetWirelessDeviceId());
  return DisassociateWirelessDeviceFromFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessDeviceFromFuotaTaskOutcomeCallable IoTWirelessClient::DisassociateWirelessDeviceFromFuotaTaskCallable(const DisassociateWirelessDeviceFromFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWirelessDeviceFromFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWirelessDeviceFromFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DisassociateWirelessDeviceFromFuotaTaskAsync(const DisassociateWirelessDeviceFromFuotaTaskRequest& request, const DisassociateWirelessDeviceFromFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateWirelessDeviceFromFuotaTask(request), context);
    } );
}

DisassociateWirelessDeviceFromMulticastGroupOutcome IoTWirelessClient::DisassociateWirelessDeviceFromMulticastGroup(const DisassociateWirelessDeviceFromMulticastGroupRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetWirelessDeviceId());
  return DisassociateWirelessDeviceFromMulticastGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessDeviceFromMulticastGroupOutcomeCallable IoTWirelessClient::DisassociateWirelessDeviceFromMulticastGroupCallable(const DisassociateWirelessDeviceFromMulticastGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWirelessDeviceFromMulticastGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWirelessDeviceFromMulticastGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DisassociateWirelessDeviceFromMulticastGroupAsync(const DisassociateWirelessDeviceFromMulticastGroupRequest& request, const DisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateWirelessDeviceFromMulticastGroup(request), context);
    } );
}

DisassociateWirelessDeviceFromThingOutcome IoTWirelessClient::DisassociateWirelessDeviceFromThing(const DisassociateWirelessDeviceFromThingRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromThing", "Required field: Id, is not set");
    return DisassociateWirelessDeviceFromThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/thing");
  return DisassociateWirelessDeviceFromThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessDeviceFromThingOutcomeCallable IoTWirelessClient::DisassociateWirelessDeviceFromThingCallable(const DisassociateWirelessDeviceFromThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWirelessDeviceFromThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWirelessDeviceFromThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DisassociateWirelessDeviceFromThingAsync(const DisassociateWirelessDeviceFromThingRequest& request, const DisassociateWirelessDeviceFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateWirelessDeviceFromThing(request), context);
    } );
}

DisassociateWirelessGatewayFromCertificateOutcome IoTWirelessClient::DisassociateWirelessGatewayFromCertificate(const DisassociateWirelessGatewayFromCertificateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessGatewayFromCertificate", "Required field: Id, is not set");
    return DisassociateWirelessGatewayFromCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/certificate");
  return DisassociateWirelessGatewayFromCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessGatewayFromCertificateOutcomeCallable IoTWirelessClient::DisassociateWirelessGatewayFromCertificateCallable(const DisassociateWirelessGatewayFromCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWirelessGatewayFromCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWirelessGatewayFromCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DisassociateWirelessGatewayFromCertificateAsync(const DisassociateWirelessGatewayFromCertificateRequest& request, const DisassociateWirelessGatewayFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateWirelessGatewayFromCertificate(request), context);
    } );
}

DisassociateWirelessGatewayFromThingOutcome IoTWirelessClient::DisassociateWirelessGatewayFromThing(const DisassociateWirelessGatewayFromThingRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessGatewayFromThing", "Required field: Id, is not set");
    return DisassociateWirelessGatewayFromThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/thing");
  return DisassociateWirelessGatewayFromThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWirelessGatewayFromThingOutcomeCallable IoTWirelessClient::DisassociateWirelessGatewayFromThingCallable(const DisassociateWirelessGatewayFromThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWirelessGatewayFromThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWirelessGatewayFromThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::DisassociateWirelessGatewayFromThingAsync(const DisassociateWirelessGatewayFromThingRequest& request, const DisassociateWirelessGatewayFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateWirelessGatewayFromThing(request), context);
    } );
}

GetDestinationOutcome IoTWirelessClient::GetDestination(const GetDestinationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDestination", "Required field: Name, is not set");
    return GetDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations/");
  uri.AddPathSegment(request.GetName());
  return GetDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDestinationOutcomeCallable IoTWirelessClient::GetDestinationCallable(const GetDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetDestinationAsync(const GetDestinationRequest& request, const GetDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDestination(request), context);
    } );
}

GetDeviceProfileOutcome IoTWirelessClient::GetDeviceProfile(const GetDeviceProfileRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeviceProfile", "Required field: Id, is not set");
    return GetDeviceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/device-profiles/");
  uri.AddPathSegment(request.GetId());
  return GetDeviceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceProfileOutcomeCallable IoTWirelessClient::GetDeviceProfileCallable(const GetDeviceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetDeviceProfileAsync(const GetDeviceProfileRequest& request, const GetDeviceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeviceProfile(request), context);
    } );
}

GetEventConfigurationByResourceTypesOutcome IoTWirelessClient::GetEventConfigurationByResourceTypes(const GetEventConfigurationByResourceTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/event-configurations-resource-types");
  return GetEventConfigurationByResourceTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEventConfigurationByResourceTypesOutcomeCallable IoTWirelessClient::GetEventConfigurationByResourceTypesCallable(const GetEventConfigurationByResourceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventConfigurationByResourceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventConfigurationByResourceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetEventConfigurationByResourceTypesAsync(const GetEventConfigurationByResourceTypesRequest& request, const GetEventConfigurationByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEventConfigurationByResourceTypes(request), context);
    } );
}

GetFuotaTaskOutcome IoTWirelessClient::GetFuotaTask(const GetFuotaTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFuotaTask", "Required field: Id, is not set");
    return GetFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks/");
  uri.AddPathSegment(request.GetId());
  return GetFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFuotaTaskOutcomeCallable IoTWirelessClient::GetFuotaTaskCallable(const GetFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetFuotaTaskAsync(const GetFuotaTaskRequest& request, const GetFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFuotaTask(request), context);
    } );
}

GetLogLevelsByResourceTypesOutcome IoTWirelessClient::GetLogLevelsByResourceTypes(const GetLogLevelsByResourceTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/log-levels");
  return GetLogLevelsByResourceTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLogLevelsByResourceTypesOutcomeCallable IoTWirelessClient::GetLogLevelsByResourceTypesCallable(const GetLogLevelsByResourceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLogLevelsByResourceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLogLevelsByResourceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetLogLevelsByResourceTypesAsync(const GetLogLevelsByResourceTypesRequest& request, const GetLogLevelsByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLogLevelsByResourceTypes(request), context);
    } );
}

GetMulticastGroupOutcome IoTWirelessClient::GetMulticastGroup(const GetMulticastGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMulticastGroup", "Required field: Id, is not set");
    return GetMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  return GetMulticastGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMulticastGroupOutcomeCallable IoTWirelessClient::GetMulticastGroupCallable(const GetMulticastGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMulticastGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMulticastGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetMulticastGroupAsync(const GetMulticastGroupRequest& request, const GetMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMulticastGroup(request), context);
    } );
}

GetMulticastGroupSessionOutcome IoTWirelessClient::GetMulticastGroupSession(const GetMulticastGroupSessionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMulticastGroupSession", "Required field: Id, is not set");
    return GetMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/session");
  return GetMulticastGroupSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMulticastGroupSessionOutcomeCallable IoTWirelessClient::GetMulticastGroupSessionCallable(const GetMulticastGroupSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMulticastGroupSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMulticastGroupSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetMulticastGroupSessionAsync(const GetMulticastGroupSessionRequest& request, const GetMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMulticastGroupSession(request), context);
    } );
}

GetNetworkAnalyzerConfigurationOutcome IoTWirelessClient::GetNetworkAnalyzerConfiguration(const GetNetworkAnalyzerConfigurationRequest& request) const
{
  if (!request.ConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return GetNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/network-analyzer-configurations/");
  uri.AddPathSegment(request.GetConfigurationName());
  return GetNetworkAnalyzerConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkAnalyzerConfigurationOutcomeCallable IoTWirelessClient::GetNetworkAnalyzerConfigurationCallable(const GetNetworkAnalyzerConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkAnalyzerConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetworkAnalyzerConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetNetworkAnalyzerConfigurationAsync(const GetNetworkAnalyzerConfigurationRequest& request, const GetNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetNetworkAnalyzerConfiguration(request), context);
    } );
}

GetPartnerAccountOutcome IoTWirelessClient::GetPartnerAccount(const GetPartnerAccountRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/partner-accounts/");
  uri.AddPathSegment(request.GetPartnerAccountId());
  return GetPartnerAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPartnerAccountOutcomeCallable IoTWirelessClient::GetPartnerAccountCallable(const GetPartnerAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPartnerAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPartnerAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetPartnerAccountAsync(const GetPartnerAccountRequest& request, const GetPartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPartnerAccount(request), context);
    } );
}

GetPositionOutcome IoTWirelessClient::GetPosition(const GetPositionRequest& request) const
{
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPosition", "Required field: ResourceIdentifier, is not set");
    return GetPositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPosition", "Required field: ResourceType, is not set");
    return GetPositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/positions/");
  uri.AddPathSegment(request.GetResourceIdentifier());
  return GetPositionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPositionOutcomeCallable IoTWirelessClient::GetPositionCallable(const GetPositionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPositionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPosition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetPositionAsync(const GetPositionRequest& request, const GetPositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPosition(request), context);
    } );
}

GetPositionConfigurationOutcome IoTWirelessClient::GetPositionConfiguration(const GetPositionConfigurationRequest& request) const
{
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPositionConfiguration", "Required field: ResourceIdentifier, is not set");
    return GetPositionConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPositionConfiguration", "Required field: ResourceType, is not set");
    return GetPositionConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/position-configurations/");
  uri.AddPathSegment(request.GetResourceIdentifier());
  return GetPositionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPositionConfigurationOutcomeCallable IoTWirelessClient::GetPositionConfigurationCallable(const GetPositionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPositionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPositionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetPositionConfigurationAsync(const GetPositionConfigurationRequest& request, const GetPositionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPositionConfiguration(request), context);
    } );
}

GetResourceEventConfigurationOutcome IoTWirelessClient::GetResourceEventConfiguration(const GetResourceEventConfigurationRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/event-configurations/");
  uri.AddPathSegment(request.GetIdentifier());
  return GetResourceEventConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceEventConfigurationOutcomeCallable IoTWirelessClient::GetResourceEventConfigurationCallable(const GetResourceEventConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceEventConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceEventConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetResourceEventConfigurationAsync(const GetResourceEventConfigurationRequest& request, const GetResourceEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourceEventConfiguration(request), context);
    } );
}

GetResourceLogLevelOutcome IoTWirelessClient::GetResourceLogLevel(const GetResourceLogLevelRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/log-levels/");
  uri.AddPathSegment(request.GetResourceIdentifier());
  return GetResourceLogLevelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceLogLevelOutcomeCallable IoTWirelessClient::GetResourceLogLevelCallable(const GetResourceLogLevelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceLogLevelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceLogLevel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetResourceLogLevelAsync(const GetResourceLogLevelRequest& request, const GetResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourceLogLevel(request), context);
    } );
}

GetServiceEndpointOutcome IoTWirelessClient::GetServiceEndpoint(const GetServiceEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/service-endpoint");
  return GetServiceEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceEndpointOutcomeCallable IoTWirelessClient::GetServiceEndpointCallable(const GetServiceEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetServiceEndpointAsync(const GetServiceEndpointRequest& request, const GetServiceEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceEndpoint(request), context);
    } );
}

GetServiceProfileOutcome IoTWirelessClient::GetServiceProfile(const GetServiceProfileRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServiceProfile", "Required field: Id, is not set");
    return GetServiceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/service-profiles/");
  uri.AddPathSegment(request.GetId());
  return GetServiceProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServiceProfileOutcomeCallable IoTWirelessClient::GetServiceProfileCallable(const GetServiceProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetServiceProfileAsync(const GetServiceProfileRequest& request, const GetServiceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceProfile(request), context);
    } );
}

GetWirelessDeviceOutcome IoTWirelessClient::GetWirelessDevice(const GetWirelessDeviceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetIdentifier());
  return GetWirelessDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessDeviceOutcomeCallable IoTWirelessClient::GetWirelessDeviceCallable(const GetWirelessDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWirelessDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWirelessDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetWirelessDeviceAsync(const GetWirelessDeviceRequest& request, const GetWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWirelessDevice(request), context);
    } );
}

GetWirelessDeviceStatisticsOutcome IoTWirelessClient::GetWirelessDeviceStatistics(const GetWirelessDeviceStatisticsRequest& request) const
{
  if (!request.WirelessDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessDeviceStatistics", "Required field: WirelessDeviceId, is not set");
    return GetWirelessDeviceStatisticsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetWirelessDeviceId());
  uri.AddPathSegments("/statistics");
  return GetWirelessDeviceStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessDeviceStatisticsOutcomeCallable IoTWirelessClient::GetWirelessDeviceStatisticsCallable(const GetWirelessDeviceStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWirelessDeviceStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWirelessDeviceStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetWirelessDeviceStatisticsAsync(const GetWirelessDeviceStatisticsRequest& request, const GetWirelessDeviceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWirelessDeviceStatistics(request), context);
    } );
}

GetWirelessGatewayOutcome IoTWirelessClient::GetWirelessGateway(const GetWirelessGatewayRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetIdentifier());
  return GetWirelessGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayOutcomeCallable IoTWirelessClient::GetWirelessGatewayCallable(const GetWirelessGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWirelessGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWirelessGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetWirelessGatewayAsync(const GetWirelessGatewayRequest& request, const GetWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWirelessGateway(request), context);
    } );
}

GetWirelessGatewayCertificateOutcome IoTWirelessClient::GetWirelessGatewayCertificate(const GetWirelessGatewayCertificateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayCertificate", "Required field: Id, is not set");
    return GetWirelessGatewayCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/certificate");
  return GetWirelessGatewayCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayCertificateOutcomeCallable IoTWirelessClient::GetWirelessGatewayCertificateCallable(const GetWirelessGatewayCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWirelessGatewayCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWirelessGatewayCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetWirelessGatewayCertificateAsync(const GetWirelessGatewayCertificateRequest& request, const GetWirelessGatewayCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWirelessGatewayCertificate(request), context);
    } );
}

GetWirelessGatewayFirmwareInformationOutcome IoTWirelessClient::GetWirelessGatewayFirmwareInformation(const GetWirelessGatewayFirmwareInformationRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayFirmwareInformation", "Required field: Id, is not set");
    return GetWirelessGatewayFirmwareInformationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/firmware-information");
  return GetWirelessGatewayFirmwareInformationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayFirmwareInformationOutcomeCallable IoTWirelessClient::GetWirelessGatewayFirmwareInformationCallable(const GetWirelessGatewayFirmwareInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWirelessGatewayFirmwareInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWirelessGatewayFirmwareInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetWirelessGatewayFirmwareInformationAsync(const GetWirelessGatewayFirmwareInformationRequest& request, const GetWirelessGatewayFirmwareInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWirelessGatewayFirmwareInformation(request), context);
    } );
}

GetWirelessGatewayStatisticsOutcome IoTWirelessClient::GetWirelessGatewayStatistics(const GetWirelessGatewayStatisticsRequest& request) const
{
  if (!request.WirelessGatewayIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayStatistics", "Required field: WirelessGatewayId, is not set");
    return GetWirelessGatewayStatisticsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessGatewayId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetWirelessGatewayId());
  uri.AddPathSegments("/statistics");
  return GetWirelessGatewayStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayStatisticsOutcomeCallable IoTWirelessClient::GetWirelessGatewayStatisticsCallable(const GetWirelessGatewayStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWirelessGatewayStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWirelessGatewayStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetWirelessGatewayStatisticsAsync(const GetWirelessGatewayStatisticsRequest& request, const GetWirelessGatewayStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWirelessGatewayStatistics(request), context);
    } );
}

GetWirelessGatewayTaskOutcome IoTWirelessClient::GetWirelessGatewayTask(const GetWirelessGatewayTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayTask", "Required field: Id, is not set");
    return GetWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/tasks");
  return GetWirelessGatewayTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayTaskOutcomeCallable IoTWirelessClient::GetWirelessGatewayTaskCallable(const GetWirelessGatewayTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWirelessGatewayTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWirelessGatewayTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetWirelessGatewayTaskAsync(const GetWirelessGatewayTaskRequest& request, const GetWirelessGatewayTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWirelessGatewayTask(request), context);
    } );
}

GetWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::GetWirelessGatewayTaskDefinition(const GetWirelessGatewayTaskDefinitionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayTaskDefinition", "Required field: Id, is not set");
    return GetWirelessGatewayTaskDefinitionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateway-task-definitions/");
  uri.AddPathSegment(request.GetId());
  return GetWirelessGatewayTaskDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWirelessGatewayTaskDefinitionOutcomeCallable IoTWirelessClient::GetWirelessGatewayTaskDefinitionCallable(const GetWirelessGatewayTaskDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWirelessGatewayTaskDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWirelessGatewayTaskDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::GetWirelessGatewayTaskDefinitionAsync(const GetWirelessGatewayTaskDefinitionRequest& request, const GetWirelessGatewayTaskDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWirelessGatewayTaskDefinition(request), context);
    } );
}

ListDestinationsOutcome IoTWirelessClient::ListDestinations(const ListDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations");
  return ListDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDestinationsOutcomeCallable IoTWirelessClient::ListDestinationsCallable(const ListDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListDestinationsAsync(const ListDestinationsRequest& request, const ListDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDestinations(request), context);
    } );
}

ListDeviceProfilesOutcome IoTWirelessClient::ListDeviceProfiles(const ListDeviceProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/device-profiles");
  return ListDeviceProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceProfilesOutcomeCallable IoTWirelessClient::ListDeviceProfilesCallable(const ListDeviceProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListDeviceProfilesAsync(const ListDeviceProfilesRequest& request, const ListDeviceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeviceProfiles(request), context);
    } );
}

ListEventConfigurationsOutcome IoTWirelessClient::ListEventConfigurations(const ListEventConfigurationsRequest& request) const
{
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEventConfigurations", "Required field: ResourceType, is not set");
    return ListEventConfigurationsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/event-configurations");
  return ListEventConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEventConfigurationsOutcomeCallable IoTWirelessClient::ListEventConfigurationsCallable(const ListEventConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListEventConfigurationsAsync(const ListEventConfigurationsRequest& request, const ListEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEventConfigurations(request), context);
    } );
}

ListFuotaTasksOutcome IoTWirelessClient::ListFuotaTasks(const ListFuotaTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks");
  return ListFuotaTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFuotaTasksOutcomeCallable IoTWirelessClient::ListFuotaTasksCallable(const ListFuotaTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFuotaTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFuotaTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListFuotaTasksAsync(const ListFuotaTasksRequest& request, const ListFuotaTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFuotaTasks(request), context);
    } );
}

ListMulticastGroupsOutcome IoTWirelessClient::ListMulticastGroups(const ListMulticastGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups");
  return ListMulticastGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMulticastGroupsOutcomeCallable IoTWirelessClient::ListMulticastGroupsCallable(const ListMulticastGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMulticastGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMulticastGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListMulticastGroupsAsync(const ListMulticastGroupsRequest& request, const ListMulticastGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMulticastGroups(request), context);
    } );
}

ListMulticastGroupsByFuotaTaskOutcome IoTWirelessClient::ListMulticastGroupsByFuotaTask(const ListMulticastGroupsByFuotaTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMulticastGroupsByFuotaTask", "Required field: Id, is not set");
    return ListMulticastGroupsByFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/multicast-groups");
  return ListMulticastGroupsByFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMulticastGroupsByFuotaTaskOutcomeCallable IoTWirelessClient::ListMulticastGroupsByFuotaTaskCallable(const ListMulticastGroupsByFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMulticastGroupsByFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMulticastGroupsByFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListMulticastGroupsByFuotaTaskAsync(const ListMulticastGroupsByFuotaTaskRequest& request, const ListMulticastGroupsByFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMulticastGroupsByFuotaTask(request), context);
    } );
}

ListNetworkAnalyzerConfigurationsOutcome IoTWirelessClient::ListNetworkAnalyzerConfigurations(const ListNetworkAnalyzerConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/network-analyzer-configurations");
  return ListNetworkAnalyzerConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNetworkAnalyzerConfigurationsOutcomeCallable IoTWirelessClient::ListNetworkAnalyzerConfigurationsCallable(const ListNetworkAnalyzerConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNetworkAnalyzerConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNetworkAnalyzerConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListNetworkAnalyzerConfigurationsAsync(const ListNetworkAnalyzerConfigurationsRequest& request, const ListNetworkAnalyzerConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNetworkAnalyzerConfigurations(request), context);
    } );
}

ListPartnerAccountsOutcome IoTWirelessClient::ListPartnerAccounts(const ListPartnerAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/partner-accounts");
  return ListPartnerAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPartnerAccountsOutcomeCallable IoTWirelessClient::ListPartnerAccountsCallable(const ListPartnerAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartnerAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPartnerAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListPartnerAccountsAsync(const ListPartnerAccountsRequest& request, const ListPartnerAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPartnerAccounts(request), context);
    } );
}

ListPositionConfigurationsOutcome IoTWirelessClient::ListPositionConfigurations(const ListPositionConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/position-configurations");
  return ListPositionConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPositionConfigurationsOutcomeCallable IoTWirelessClient::ListPositionConfigurationsCallable(const ListPositionConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPositionConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPositionConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListPositionConfigurationsAsync(const ListPositionConfigurationsRequest& request, const ListPositionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPositionConfigurations(request), context);
    } );
}

ListQueuedMessagesOutcome IoTWirelessClient::ListQueuedMessages(const ListQueuedMessagesRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueuedMessages", "Required field: Id, is not set");
    return ListQueuedMessagesOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/data");
  return ListQueuedMessagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQueuedMessagesOutcomeCallable IoTWirelessClient::ListQueuedMessagesCallable(const ListQueuedMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueuedMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueuedMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListQueuedMessagesAsync(const ListQueuedMessagesRequest& request, const ListQueuedMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListQueuedMessages(request), context);
    } );
}

ListServiceProfilesOutcome IoTWirelessClient::ListServiceProfiles(const ListServiceProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/service-profiles");
  return ListServiceProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListServiceProfilesOutcomeCallable IoTWirelessClient::ListServiceProfilesCallable(const ListServiceProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListServiceProfilesAsync(const ListServiceProfilesRequest& request, const ListServiceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServiceProfiles(request), context);
    } );
}

ListTagsForResourceOutcome IoTWirelessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoTWirelessClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListWirelessDevicesOutcome IoTWirelessClient::ListWirelessDevices(const ListWirelessDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices");
  return ListWirelessDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWirelessDevicesOutcomeCallable IoTWirelessClient::ListWirelessDevicesCallable(const ListWirelessDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWirelessDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWirelessDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListWirelessDevicesAsync(const ListWirelessDevicesRequest& request, const ListWirelessDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWirelessDevices(request), context);
    } );
}

ListWirelessGatewayTaskDefinitionsOutcome IoTWirelessClient::ListWirelessGatewayTaskDefinitions(const ListWirelessGatewayTaskDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateway-task-definitions");
  return ListWirelessGatewayTaskDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWirelessGatewayTaskDefinitionsOutcomeCallable IoTWirelessClient::ListWirelessGatewayTaskDefinitionsCallable(const ListWirelessGatewayTaskDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWirelessGatewayTaskDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWirelessGatewayTaskDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListWirelessGatewayTaskDefinitionsAsync(const ListWirelessGatewayTaskDefinitionsRequest& request, const ListWirelessGatewayTaskDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWirelessGatewayTaskDefinitions(request), context);
    } );
}

ListWirelessGatewaysOutcome IoTWirelessClient::ListWirelessGateways(const ListWirelessGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways");
  return ListWirelessGatewaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWirelessGatewaysOutcomeCallable IoTWirelessClient::ListWirelessGatewaysCallable(const ListWirelessGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWirelessGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWirelessGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ListWirelessGatewaysAsync(const ListWirelessGatewaysRequest& request, const ListWirelessGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWirelessGateways(request), context);
    } );
}

PutPositionConfigurationOutcome IoTWirelessClient::PutPositionConfiguration(const PutPositionConfigurationRequest& request) const
{
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPositionConfiguration", "Required field: ResourceIdentifier, is not set");
    return PutPositionConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPositionConfiguration", "Required field: ResourceType, is not set");
    return PutPositionConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/position-configurations/");
  uri.AddPathSegment(request.GetResourceIdentifier());
  return PutPositionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutPositionConfigurationOutcomeCallable IoTWirelessClient::PutPositionConfigurationCallable(const PutPositionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPositionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPositionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::PutPositionConfigurationAsync(const PutPositionConfigurationRequest& request, const PutPositionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutPositionConfiguration(request), context);
    } );
}

PutResourceLogLevelOutcome IoTWirelessClient::PutResourceLogLevel(const PutResourceLogLevelRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/log-levels/");
  uri.AddPathSegment(request.GetResourceIdentifier());
  return PutResourceLogLevelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutResourceLogLevelOutcomeCallable IoTWirelessClient::PutResourceLogLevelCallable(const PutResourceLogLevelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourceLogLevelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourceLogLevel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::PutResourceLogLevelAsync(const PutResourceLogLevelRequest& request, const PutResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourceLogLevel(request), context);
    } );
}

ResetAllResourceLogLevelsOutcome IoTWirelessClient::ResetAllResourceLogLevels(const ResetAllResourceLogLevelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/log-levels");
  return ResetAllResourceLogLevelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

ResetAllResourceLogLevelsOutcomeCallable IoTWirelessClient::ResetAllResourceLogLevelsCallable(const ResetAllResourceLogLevelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetAllResourceLogLevelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetAllResourceLogLevels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ResetAllResourceLogLevelsAsync(const ResetAllResourceLogLevelsRequest& request, const ResetAllResourceLogLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetAllResourceLogLevels(request), context);
    } );
}

ResetResourceLogLevelOutcome IoTWirelessClient::ResetResourceLogLevel(const ResetResourceLogLevelRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/log-levels/");
  uri.AddPathSegment(request.GetResourceIdentifier());
  return ResetResourceLogLevelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

ResetResourceLogLevelOutcomeCallable IoTWirelessClient::ResetResourceLogLevelCallable(const ResetResourceLogLevelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetResourceLogLevelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetResourceLogLevel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::ResetResourceLogLevelAsync(const ResetResourceLogLevelRequest& request, const ResetResourceLogLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetResourceLogLevel(request), context);
    } );
}

SendDataToMulticastGroupOutcome IoTWirelessClient::SendDataToMulticastGroup(const SendDataToMulticastGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendDataToMulticastGroup", "Required field: Id, is not set");
    return SendDataToMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/data");
  return SendDataToMulticastGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendDataToMulticastGroupOutcomeCallable IoTWirelessClient::SendDataToMulticastGroupCallable(const SendDataToMulticastGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendDataToMulticastGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendDataToMulticastGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::SendDataToMulticastGroupAsync(const SendDataToMulticastGroupRequest& request, const SendDataToMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendDataToMulticastGroup(request), context);
    } );
}

SendDataToWirelessDeviceOutcome IoTWirelessClient::SendDataToWirelessDevice(const SendDataToWirelessDeviceRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendDataToWirelessDevice", "Required field: Id, is not set");
    return SendDataToWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/data");
  return SendDataToWirelessDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendDataToWirelessDeviceOutcomeCallable IoTWirelessClient::SendDataToWirelessDeviceCallable(const SendDataToWirelessDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendDataToWirelessDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendDataToWirelessDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::SendDataToWirelessDeviceAsync(const SendDataToWirelessDeviceRequest& request, const SendDataToWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendDataToWirelessDevice(request), context);
    } );
}

StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome IoTWirelessClient::StartBulkAssociateWirelessDeviceWithMulticastGroup(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBulkAssociateWirelessDeviceWithMulticastGroup", "Required field: Id, is not set");
    return StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/bulk");
  return StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

StartBulkAssociateWirelessDeviceWithMulticastGroupOutcomeCallable IoTWirelessClient::StartBulkAssociateWirelessDeviceWithMulticastGroupCallable(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBulkAssociateWirelessDeviceWithMulticastGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::StartBulkAssociateWirelessDeviceWithMulticastGroupAsync(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request, const StartBulkAssociateWirelessDeviceWithMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartBulkAssociateWirelessDeviceWithMulticastGroup(request), context);
    } );
}

StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome IoTWirelessClient::StartBulkDisassociateWirelessDeviceFromMulticastGroup(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBulkDisassociateWirelessDeviceFromMulticastGroup", "Required field: Id, is not set");
    return StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/bulk");
  return StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcomeCallable IoTWirelessClient::StartBulkDisassociateWirelessDeviceFromMulticastGroupCallable(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBulkDisassociateWirelessDeviceFromMulticastGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::StartBulkDisassociateWirelessDeviceFromMulticastGroupAsync(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request, const StartBulkDisassociateWirelessDeviceFromMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartBulkDisassociateWirelessDeviceFromMulticastGroup(request), context);
    } );
}

StartFuotaTaskOutcome IoTWirelessClient::StartFuotaTask(const StartFuotaTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartFuotaTask", "Required field: Id, is not set");
    return StartFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks/");
  uri.AddPathSegment(request.GetId());
  return StartFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartFuotaTaskOutcomeCallable IoTWirelessClient::StartFuotaTaskCallable(const StartFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::StartFuotaTaskAsync(const StartFuotaTaskRequest& request, const StartFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartFuotaTask(request), context);
    } );
}

StartMulticastGroupSessionOutcome IoTWirelessClient::StartMulticastGroupSession(const StartMulticastGroupSessionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMulticastGroupSession", "Required field: Id, is not set");
    return StartMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/session");
  return StartMulticastGroupSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartMulticastGroupSessionOutcomeCallable IoTWirelessClient::StartMulticastGroupSessionCallable(const StartMulticastGroupSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMulticastGroupSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMulticastGroupSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::StartMulticastGroupSessionAsync(const StartMulticastGroupSessionRequest& request, const StartMulticastGroupSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartMulticastGroupSession(request), context);
    } );
}

TagResourceOutcome IoTWirelessClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoTWirelessClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

TestWirelessDeviceOutcome IoTWirelessClient::TestWirelessDevice(const TestWirelessDeviceRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestWirelessDevice", "Required field: Id, is not set");
    return TestWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/test");
  return TestWirelessDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestWirelessDeviceOutcomeCallable IoTWirelessClient::TestWirelessDeviceCallable(const TestWirelessDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestWirelessDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestWirelessDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::TestWirelessDeviceAsync(const TestWirelessDeviceRequest& request, const TestWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestWirelessDevice(request), context);
    } );
}

UntagResourceOutcome IoTWirelessClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoTWirelessClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDestinationOutcome IoTWirelessClient::UpdateDestination(const UpdateDestinationRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDestination", "Required field: Name, is not set");
    return UpdateDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/destinations/");
  uri.AddPathSegment(request.GetName());
  return UpdateDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDestinationOutcomeCallable IoTWirelessClient::UpdateDestinationCallable(const UpdateDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdateDestinationAsync(const UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDestination(request), context);
    } );
}

UpdateEventConfigurationByResourceTypesOutcome IoTWirelessClient::UpdateEventConfigurationByResourceTypes(const UpdateEventConfigurationByResourceTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/event-configurations-resource-types");
  return UpdateEventConfigurationByResourceTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventConfigurationByResourceTypesOutcomeCallable IoTWirelessClient::UpdateEventConfigurationByResourceTypesCallable(const UpdateEventConfigurationByResourceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventConfigurationByResourceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventConfigurationByResourceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdateEventConfigurationByResourceTypesAsync(const UpdateEventConfigurationByResourceTypesRequest& request, const UpdateEventConfigurationByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEventConfigurationByResourceTypes(request), context);
    } );
}

UpdateFuotaTaskOutcome IoTWirelessClient::UpdateFuotaTask(const UpdateFuotaTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFuotaTask", "Required field: Id, is not set");
    return UpdateFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/fuota-tasks/");
  uri.AddPathSegment(request.GetId());
  return UpdateFuotaTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFuotaTaskOutcomeCallable IoTWirelessClient::UpdateFuotaTaskCallable(const UpdateFuotaTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFuotaTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFuotaTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdateFuotaTaskAsync(const UpdateFuotaTaskRequest& request, const UpdateFuotaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFuotaTask(request), context);
    } );
}

UpdateLogLevelsByResourceTypesOutcome IoTWirelessClient::UpdateLogLevelsByResourceTypes(const UpdateLogLevelsByResourceTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/log-levels");
  return UpdateLogLevelsByResourceTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLogLevelsByResourceTypesOutcomeCallable IoTWirelessClient::UpdateLogLevelsByResourceTypesCallable(const UpdateLogLevelsByResourceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLogLevelsByResourceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLogLevelsByResourceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdateLogLevelsByResourceTypesAsync(const UpdateLogLevelsByResourceTypesRequest& request, const UpdateLogLevelsByResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLogLevelsByResourceTypes(request), context);
    } );
}

UpdateMulticastGroupOutcome IoTWirelessClient::UpdateMulticastGroup(const UpdateMulticastGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMulticastGroup", "Required field: Id, is not set");
    return UpdateMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/multicast-groups/");
  uri.AddPathSegment(request.GetId());
  return UpdateMulticastGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMulticastGroupOutcomeCallable IoTWirelessClient::UpdateMulticastGroupCallable(const UpdateMulticastGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMulticastGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMulticastGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdateMulticastGroupAsync(const UpdateMulticastGroupRequest& request, const UpdateMulticastGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMulticastGroup(request), context);
    } );
}

UpdateNetworkAnalyzerConfigurationOutcome IoTWirelessClient::UpdateNetworkAnalyzerConfiguration(const UpdateNetworkAnalyzerConfigurationRequest& request) const
{
  if (!request.ConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return UpdateNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/network-analyzer-configurations/");
  uri.AddPathSegment(request.GetConfigurationName());
  return UpdateNetworkAnalyzerConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkAnalyzerConfigurationOutcomeCallable IoTWirelessClient::UpdateNetworkAnalyzerConfigurationCallable(const UpdateNetworkAnalyzerConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNetworkAnalyzerConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNetworkAnalyzerConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdateNetworkAnalyzerConfigurationAsync(const UpdateNetworkAnalyzerConfigurationRequest& request, const UpdateNetworkAnalyzerConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateNetworkAnalyzerConfiguration(request), context);
    } );
}

UpdatePartnerAccountOutcome IoTWirelessClient::UpdatePartnerAccount(const UpdatePartnerAccountRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/partner-accounts/");
  uri.AddPathSegment(request.GetPartnerAccountId());
  return UpdatePartnerAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdatePartnerAccountOutcomeCallable IoTWirelessClient::UpdatePartnerAccountCallable(const UpdatePartnerAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePartnerAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePartnerAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdatePartnerAccountAsync(const UpdatePartnerAccountRequest& request, const UpdatePartnerAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePartnerAccount(request), context);
    } );
}

UpdatePositionOutcome IoTWirelessClient::UpdatePosition(const UpdatePositionRequest& request) const
{
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePosition", "Required field: ResourceIdentifier, is not set");
    return UpdatePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePosition", "Required field: ResourceType, is not set");
    return UpdatePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/positions/");
  uri.AddPathSegment(request.GetResourceIdentifier());
  return UpdatePositionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdatePositionOutcomeCallable IoTWirelessClient::UpdatePositionCallable(const UpdatePositionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePositionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePosition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdatePositionAsync(const UpdatePositionRequest& request, const UpdatePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePosition(request), context);
    } );
}

UpdateResourceEventConfigurationOutcome IoTWirelessClient::UpdateResourceEventConfiguration(const UpdateResourceEventConfigurationRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/event-configurations/");
  uri.AddPathSegment(request.GetIdentifier());
  return UpdateResourceEventConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceEventConfigurationOutcomeCallable IoTWirelessClient::UpdateResourceEventConfigurationCallable(const UpdateResourceEventConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceEventConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceEventConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdateResourceEventConfigurationAsync(const UpdateResourceEventConfigurationRequest& request, const UpdateResourceEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResourceEventConfiguration(request), context);
    } );
}

UpdateWirelessDeviceOutcome IoTWirelessClient::UpdateWirelessDevice(const UpdateWirelessDeviceRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWirelessDevice", "Required field: Id, is not set");
    return UpdateWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-devices/");
  uri.AddPathSegment(request.GetId());
  return UpdateWirelessDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateWirelessDeviceOutcomeCallable IoTWirelessClient::UpdateWirelessDeviceCallable(const UpdateWirelessDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWirelessDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWirelessDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdateWirelessDeviceAsync(const UpdateWirelessDeviceRequest& request, const UpdateWirelessDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWirelessDevice(request), context);
    } );
}

UpdateWirelessGatewayOutcome IoTWirelessClient::UpdateWirelessGateway(const UpdateWirelessGatewayRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWirelessGateway", "Required field: Id, is not set");
    return UpdateWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/wireless-gateways/");
  uri.AddPathSegment(request.GetId());
  return UpdateWirelessGatewayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateWirelessGatewayOutcomeCallable IoTWirelessClient::UpdateWirelessGatewayCallable(const UpdateWirelessGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWirelessGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWirelessGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTWirelessClient::UpdateWirelessGatewayAsync(const UpdateWirelessGatewayRequest& request, const UpdateWirelessGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWirelessGateway(request), context);
    } );
}

