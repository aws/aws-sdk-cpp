/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/iotwireless/IoTWirelessClient.h>
#include <aws/iotwireless/IoTWirelessEndpointProvider.h>
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
#include <aws/iotwireless/model/CreateWirelessGatewayTaskDefinitionRequest.h>
#include <aws/iotwireless/model/CreateWirelessGatewayTaskRequest.h>
#include <aws/iotwireless/model/DeleteDestinationRequest.h>
#include <aws/iotwireless/model/DeleteDeviceProfileRequest.h>
#include <aws/iotwireless/model/DeleteFuotaTaskRequest.h>
#include <aws/iotwireless/model/DeleteMulticastGroupRequest.h>
#include <aws/iotwireless/model/DeleteNetworkAnalyzerConfigurationRequest.h>
#include <aws/iotwireless/model/DeleteQueuedMessagesRequest.h>
#include <aws/iotwireless/model/DeleteServiceProfileRequest.h>
#include <aws/iotwireless/model/DeleteWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/DeleteWirelessDeviceRequest.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayRequest.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskDefinitionRequest.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskRequest.h>
#include <aws/iotwireless/model/DeregisterWirelessDeviceRequest.h>
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
#include <aws/iotwireless/model/GetMetricConfigurationRequest.h>
#include <aws/iotwireless/model/GetMetricsRequest.h>
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
#include <aws/iotwireless/model/GetWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/GetWirelessDeviceRequest.h>
#include <aws/iotwireless/model/GetWirelessDeviceStatisticsRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayCertificateRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayFirmwareInformationRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayStatisticsRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayTaskDefinitionRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayTaskRequest.h>
#include <aws/iotwireless/model/ListDestinationsRequest.h>
#include <aws/iotwireless/model/ListDeviceProfilesRequest.h>
#include <aws/iotwireless/model/ListDevicesForWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/ListEventConfigurationsRequest.h>
#include <aws/iotwireless/model/ListFuotaTasksRequest.h>
#include <aws/iotwireless/model/ListMulticastGroupsByFuotaTaskRequest.h>
#include <aws/iotwireless/model/ListMulticastGroupsRequest.h>
#include <aws/iotwireless/model/ListNetworkAnalyzerConfigurationsRequest.h>
#include <aws/iotwireless/model/ListPartnerAccountsRequest.h>
#include <aws/iotwireless/model/ListQueuedMessagesRequest.h>
#include <aws/iotwireless/model/ListServiceProfilesRequest.h>
#include <aws/iotwireless/model/ListTagsForResourceRequest.h>
#include <aws/iotwireless/model/ListWirelessDeviceImportTasksRequest.h>
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
#include <aws/iotwireless/model/StartSingleWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/StartWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/TagResourceRequest.h>
#include <aws/iotwireless/model/TestWirelessDeviceRequest.h>
#include <aws/iotwireless/model/UntagResourceRequest.h>
#include <aws/iotwireless/model/UpdateDestinationRequest.h>
#include <aws/iotwireless/model/UpdateEventConfigurationByResourceTypesRequest.h>
#include <aws/iotwireless/model/UpdateFuotaTaskRequest.h>
#include <aws/iotwireless/model/UpdateLogLevelsByResourceTypesRequest.h>
#include <aws/iotwireless/model/UpdateMetricConfigurationRequest.h>
#include <aws/iotwireless/model/UpdateMulticastGroupRequest.h>
#include <aws/iotwireless/model/UpdateNetworkAnalyzerConfigurationRequest.h>
#include <aws/iotwireless/model/UpdatePartnerAccountRequest.h>
#include <aws/iotwireless/model/UpdateResourceEventConfigurationRequest.h>
#include <aws/iotwireless/model/UpdateResourcePositionRequest.h>
#include <aws/iotwireless/model/UpdateWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/UpdateWirelessDeviceRequest.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTWireless;
using namespace Aws::IoTWireless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IoTWireless {
const char SERVICE_NAME[] = "iotwireless";
const char ALLOCATION_TAG[] = "IoTWirelessClient";
}  // namespace IoTWireless
}  // namespace Aws
const char* IoTWirelessClient::GetServiceName() { return SERVICE_NAME; }
const char* IoTWirelessClient::GetAllocationTag() { return ALLOCATION_TAG; }

IoTWirelessClient::IoTWirelessClient(const IoTWireless::IoTWirelessClientConfiguration& clientConfiguration,
                                     std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const AWSCredentials& credentials, std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider,
                                     const IoTWireless::IoTWirelessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider,
                                     const IoTWireless::IoTWirelessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IoTWirelessClient::IoTWirelessClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTWirelessClient::IoTWirelessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IoTWirelessClient::~IoTWirelessClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IoTWirelessEndpointProviderBase>& IoTWirelessClient::accessEndpointProvider() { return m_endpointProvider; }

void IoTWirelessClient::init(const IoTWireless::IoTWirelessClientConfiguration& config) {
  AWSClient::SetServiceClientName("IoT Wireless");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "iotwireless");
}

void IoTWirelessClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IoTWirelessClient::InvokeOperationOutcome IoTWirelessClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateAwsAccountWithPartnerAccountOutcome IoTWirelessClient::AssociateAwsAccountWithPartnerAccount(
    const AssociateAwsAccountWithPartnerAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts");
  };

  return AssociateAwsAccountWithPartnerAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateMulticastGroupWithFuotaTaskOutcome IoTWirelessClient::AssociateMulticastGroupWithFuotaTask(
    const AssociateMulticastGroupWithFuotaTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMulticastGroupWithFuotaTask", "Required field: Id, is not set");
    return AssociateMulticastGroupWithFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-group");
  };

  return AssociateMulticastGroupWithFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateWirelessDeviceWithFuotaTaskOutcome IoTWirelessClient::AssociateWirelessDeviceWithFuotaTask(
    const AssociateWirelessDeviceWithFuotaTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithFuotaTask", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-device");
  };

  return AssociateWirelessDeviceWithFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateWirelessDeviceWithMulticastGroupOutcome IoTWirelessClient::AssociateWirelessDeviceWithMulticastGroup(
    const AssociateWirelessDeviceWithMulticastGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithMulticastGroup", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-device");
  };

  return AssociateWirelessDeviceWithMulticastGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateWirelessDeviceWithThingOutcome IoTWirelessClient::AssociateWirelessDeviceWithThing(
    const AssociateWirelessDeviceWithThingRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithThing", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing");
  };

  return AssociateWirelessDeviceWithThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateWirelessGatewayWithCertificateOutcome IoTWirelessClient::AssociateWirelessGatewayWithCertificate(
    const AssociateWirelessGatewayWithCertificateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateWirelessGatewayWithCertificate", "Required field: Id, is not set");
    return AssociateWirelessGatewayWithCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  };

  return AssociateWirelessGatewayWithCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateWirelessGatewayWithThingOutcome IoTWirelessClient::AssociateWirelessGatewayWithThing(
    const AssociateWirelessGatewayWithThingRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateWirelessGatewayWithThing", "Required field: Id, is not set");
    return AssociateWirelessGatewayWithThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing");
  };

  return AssociateWirelessGatewayWithThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CancelMulticastGroupSessionOutcome IoTWirelessClient::CancelMulticastGroupSession(const CancelMulticastGroupSessionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelMulticastGroupSession", "Required field: Id, is not set");
    return CancelMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  };

  return CancelMulticastGroupSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CreateDestinationOutcome IoTWirelessClient::CreateDestination(const CreateDestinationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  };

  return CreateDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeviceProfileOutcome IoTWirelessClient::CreateDeviceProfile(const CreateDeviceProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-profiles");
  };

  return CreateDeviceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFuotaTaskOutcome IoTWirelessClient::CreateFuotaTask(const CreateFuotaTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks");
  };

  return CreateFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMulticastGroupOutcome IoTWirelessClient::CreateMulticastGroup(const CreateMulticastGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups");
  };

  return CreateMulticastGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNetworkAnalyzerConfigurationOutcome IoTWirelessClient::CreateNetworkAnalyzerConfiguration(
    const CreateNetworkAnalyzerConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations");
  };

  return CreateNetworkAnalyzerConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceProfileOutcome IoTWirelessClient::CreateServiceProfile(const CreateServiceProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-profiles");
  };

  return CreateServiceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWirelessDeviceOutcome IoTWirelessClient::CreateWirelessDevice(const CreateWirelessDeviceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices");
  };

  return CreateWirelessDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWirelessGatewayOutcome IoTWirelessClient::CreateWirelessGateway(const CreateWirelessGatewayRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways");
  };

  return CreateWirelessGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWirelessGatewayTaskOutcome IoTWirelessClient::CreateWirelessGatewayTask(const CreateWirelessGatewayTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWirelessGatewayTask", "Required field: Id, is not set");
    return CreateWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  };

  return CreateWirelessGatewayTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::CreateWirelessGatewayTaskDefinition(
    const CreateWirelessGatewayTaskDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateway-task-definitions");
  };

  return CreateWirelessGatewayTaskDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDestinationOutcome IoTWirelessClient::DeleteDestination(const DeleteDestinationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDestination", "Required field: Name, is not set");
    return DeleteDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDeviceProfileOutcome IoTWirelessClient::DeleteDeviceProfile(const DeleteDeviceProfileRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDeviceProfile", "Required field: Id, is not set");
    return DeleteDeviceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteDeviceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFuotaTaskOutcome IoTWirelessClient::DeleteFuotaTask(const DeleteFuotaTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFuotaTask", "Required field: Id, is not set");
    return DeleteFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMulticastGroupOutcome IoTWirelessClient::DeleteMulticastGroup(const DeleteMulticastGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMulticastGroup", "Required field: Id, is not set");
    return DeleteMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteMulticastGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteNetworkAnalyzerConfigurationOutcome IoTWirelessClient::DeleteNetworkAnalyzerConfiguration(
    const DeleteNetworkAnalyzerConfigurationRequest& request) const {
  if (!request.ConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return DeleteNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationName());
  };

  return DeleteNetworkAnalyzerConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteQueuedMessagesOutcome IoTWirelessClient::DeleteQueuedMessages(const DeleteQueuedMessagesRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueuedMessages", "Required field: Id, is not set");
    return DeleteQueuedMessagesOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Id]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueuedMessages", "Required field: MessageId, is not set");
    return DeleteQueuedMessagesOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [MessageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  };

  return DeleteQueuedMessagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteServiceProfileOutcome IoTWirelessClient::DeleteServiceProfile(const DeleteServiceProfileRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteServiceProfile", "Required field: Id, is not set");
    return DeleteServiceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteServiceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWirelessDeviceOutcome IoTWirelessClient::DeleteWirelessDevice(const DeleteWirelessDeviceRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWirelessDevice", "Required field: Id, is not set");
    return DeleteWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteWirelessDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWirelessDeviceImportTaskOutcome IoTWirelessClient::DeleteWirelessDeviceImportTask(
    const DeleteWirelessDeviceImportTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWirelessDeviceImportTask", "Required field: Id, is not set");
    return DeleteWirelessDeviceImportTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless_device_import_task/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteWirelessDeviceImportTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWirelessGatewayOutcome IoTWirelessClient::DeleteWirelessGateway(const DeleteWirelessGatewayRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGateway", "Required field: Id, is not set");
    return DeleteWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteWirelessGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWirelessGatewayTaskOutcome IoTWirelessClient::DeleteWirelessGatewayTask(const DeleteWirelessGatewayTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGatewayTask", "Required field: Id, is not set");
    return DeleteWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  };

  return DeleteWirelessGatewayTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::DeleteWirelessGatewayTaskDefinition(
    const DeleteWirelessGatewayTaskDefinitionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGatewayTaskDefinition", "Required field: Id, is not set");
    return DeleteWirelessGatewayTaskDefinitionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateway-task-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteWirelessGatewayTaskDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeregisterWirelessDeviceOutcome IoTWirelessClient::DeregisterWirelessDevice(const DeregisterWirelessDeviceRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterWirelessDevice", "Required field: Identifier, is not set");
    return DeregisterWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deregister");
  };

  return DeregisterWirelessDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

DisassociateAwsAccountFromPartnerAccountOutcome IoTWirelessClient::DisassociateAwsAccountFromPartnerAccount(
    const DisassociateAwsAccountFromPartnerAccountRequest& request) const {
  if (!request.PartnerAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAwsAccountFromPartnerAccount", "Required field: PartnerAccountId, is not set");
    return DisassociateAwsAccountFromPartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartnerAccountId]", false));
  }
  if (!request.PartnerTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAwsAccountFromPartnerAccount", "Required field: PartnerType, is not set");
    return DisassociateAwsAccountFromPartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PartnerType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPartnerAccountId());
  };

  return DisassociateAwsAccountFromPartnerAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateMulticastGroupFromFuotaTaskOutcome IoTWirelessClient::DisassociateMulticastGroupFromFuotaTask(
    const DisassociateMulticastGroupFromFuotaTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMulticastGroupFromFuotaTask", "Required field: Id, is not set");
    return DisassociateMulticastGroupFromFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.MulticastGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMulticastGroupFromFuotaTask", "Required field: MulticastGroupId, is not set");
    return DisassociateMulticastGroupFromFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MulticastGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMulticastGroupId());
  };

  return DisassociateMulticastGroupFromFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateWirelessDeviceFromFuotaTaskOutcome IoTWirelessClient::DisassociateWirelessDeviceFromFuotaTask(
    const DisassociateWirelessDeviceFromFuotaTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromFuotaTask", "Required field: Id, is not set");
    return DisassociateWirelessDeviceFromFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.WirelessDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromFuotaTask", "Required field: WirelessDeviceId, is not set");
    return DisassociateWirelessDeviceFromFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWirelessDeviceId());
  };

  return DisassociateWirelessDeviceFromFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateWirelessDeviceFromMulticastGroupOutcome IoTWirelessClient::DisassociateWirelessDeviceFromMulticastGroup(
    const DisassociateWirelessDeviceFromMulticastGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromMulticastGroup", "Required field: Id, is not set");
    return DisassociateWirelessDeviceFromMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.WirelessDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromMulticastGroup", "Required field: WirelessDeviceId, is not set");
    return DisassociateWirelessDeviceFromMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWirelessDeviceId());
  };

  return DisassociateWirelessDeviceFromMulticastGroupOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateWirelessDeviceFromThingOutcome IoTWirelessClient::DisassociateWirelessDeviceFromThing(
    const DisassociateWirelessDeviceFromThingRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromThing", "Required field: Id, is not set");
    return DisassociateWirelessDeviceFromThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing");
  };

  return DisassociateWirelessDeviceFromThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateWirelessGatewayFromCertificateOutcome IoTWirelessClient::DisassociateWirelessGatewayFromCertificate(
    const DisassociateWirelessGatewayFromCertificateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessGatewayFromCertificate", "Required field: Id, is not set");
    return DisassociateWirelessGatewayFromCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  };

  return DisassociateWirelessGatewayFromCertificateOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateWirelessGatewayFromThingOutcome IoTWirelessClient::DisassociateWirelessGatewayFromThing(
    const DisassociateWirelessGatewayFromThingRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessGatewayFromThing", "Required field: Id, is not set");
    return DisassociateWirelessGatewayFromThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing");
  };

  return DisassociateWirelessGatewayFromThingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetDestinationOutcome IoTWirelessClient::GetDestination(const GetDestinationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDestination", "Required field: Name, is not set");
    return GetDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeviceProfileOutcome IoTWirelessClient::GetDeviceProfile(const GetDeviceProfileRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeviceProfile", "Required field: Id, is not set");
    return GetDeviceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetDeviceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEventConfigurationByResourceTypesOutcome IoTWirelessClient::GetEventConfigurationByResourceTypes(
    const GetEventConfigurationByResourceTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations-resource-types");
  };

  return GetEventConfigurationByResourceTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFuotaTaskOutcome IoTWirelessClient::GetFuotaTask(const GetFuotaTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFuotaTask", "Required field: Id, is not set");
    return GetFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLogLevelsByResourceTypesOutcome IoTWirelessClient::GetLogLevelsByResourceTypes(const GetLogLevelsByResourceTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels");
  };

  return GetLogLevelsByResourceTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMetricConfigurationOutcome IoTWirelessClient::GetMetricConfiguration(const GetMetricConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metric-configuration");
  };

  return GetMetricConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMetricsOutcome IoTWirelessClient::GetMetrics(const GetMetricsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  };

  return GetMetricsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMulticastGroupOutcome IoTWirelessClient::GetMulticastGroup(const GetMulticastGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMulticastGroup", "Required field: Id, is not set");
    return GetMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetMulticastGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMulticastGroupSessionOutcome IoTWirelessClient::GetMulticastGroupSession(const GetMulticastGroupSessionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMulticastGroupSession", "Required field: Id, is not set");
    return GetMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  };

  return GetMulticastGroupSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNetworkAnalyzerConfigurationOutcome IoTWirelessClient::GetNetworkAnalyzerConfiguration(
    const GetNetworkAnalyzerConfigurationRequest& request) const {
  if (!request.ConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return GetNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationName());
  };

  return GetNetworkAnalyzerConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPartnerAccountOutcome IoTWirelessClient::GetPartnerAccount(const GetPartnerAccountRequest& request) const {
  if (!request.PartnerAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPartnerAccount", "Required field: PartnerAccountId, is not set");
    return GetPartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [PartnerAccountId]", false));
  }
  if (!request.PartnerTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPartnerAccount", "Required field: PartnerType, is not set");
    return GetPartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [PartnerType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPartnerAccountId());
  };

  return GetPartnerAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPositionEstimateOutcome IoTWirelessClient::GetPositionEstimate(const GetPositionEstimateRequest& request) const {
  AWS_OPERATION_GUARD(GetPositionEstimate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPositionEstimate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetPositionEstimate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPositionEstimate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPositionEstimate",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPositionEstimateOutcome>(
      [&]() -> GetPositionEstimateOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPositionEstimate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/position-estimate");
        return GetPositionEstimateOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourceEventConfigurationOutcome IoTWirelessClient::GetResourceEventConfiguration(
    const GetResourceEventConfigurationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceEventConfiguration", "Required field: Identifier, is not set");
    return GetResourceEventConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.IdentifierTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceEventConfiguration", "Required field: IdentifierType, is not set");
    return GetResourceEventConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentifierType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetResourceEventConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourceLogLevelOutcome IoTWirelessClient::GetResourceLogLevel(const GetResourceLogLevelRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceLogLevel", "Required field: ResourceIdentifier, is not set");
    return GetResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceLogLevel", "Required field: ResourceType, is not set");
    return GetResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return GetResourceLogLevelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourcePositionOutcome IoTWirelessClient::GetResourcePosition(const GetResourcePositionRequest& request) const {
  AWS_OPERATION_GUARD(GetResourcePosition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePosition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePosition", "Required field: ResourceIdentifier, is not set");
    return GetResourcePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePosition", "Required field: ResourceType, is not set");
    return GetResourcePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetResourcePosition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResourcePosition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResourcePosition",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResourcePositionOutcome>(
      [&]() -> GetResourcePositionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePosition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/resource-positions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
        return GetResourcePositionOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetServiceEndpointOutcome IoTWirelessClient::GetServiceEndpoint(const GetServiceEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-endpoint");
  };

  return GetServiceEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServiceProfileOutcome IoTWirelessClient::GetServiceProfile(const GetServiceProfileRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServiceProfile", "Required field: Id, is not set");
    return GetServiceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetServiceProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWirelessDeviceOutcome IoTWirelessClient::GetWirelessDevice(const GetWirelessDeviceRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessDevice", "Required field: Identifier, is not set");
    return GetWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Identifier]", false));
  }
  if (!request.IdentifierTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessDevice", "Required field: IdentifierType, is not set");
    return GetWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [IdentifierType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetWirelessDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWirelessDeviceImportTaskOutcome IoTWirelessClient::GetWirelessDeviceImportTask(const GetWirelessDeviceImportTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessDeviceImportTask", "Required field: Id, is not set");
    return GetWirelessDeviceImportTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless_device_import_task/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetWirelessDeviceImportTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWirelessDeviceStatisticsOutcome IoTWirelessClient::GetWirelessDeviceStatistics(const GetWirelessDeviceStatisticsRequest& request) const {
  if (!request.WirelessDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessDeviceStatistics", "Required field: WirelessDeviceId, is not set");
    return GetWirelessDeviceStatisticsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWirelessDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/statistics");
  };

  return GetWirelessDeviceStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWirelessGatewayOutcome IoTWirelessClient::GetWirelessGateway(const GetWirelessGatewayRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessGateway", "Required field: Identifier, is not set");
    return GetWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Identifier]", false));
  }
  if (!request.IdentifierTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessGateway", "Required field: IdentifierType, is not set");
    return GetWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [IdentifierType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetWirelessGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWirelessGatewayCertificateOutcome IoTWirelessClient::GetWirelessGatewayCertificate(
    const GetWirelessGatewayCertificateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayCertificate", "Required field: Id, is not set");
    return GetWirelessGatewayCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  };

  return GetWirelessGatewayCertificateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWirelessGatewayFirmwareInformationOutcome IoTWirelessClient::GetWirelessGatewayFirmwareInformation(
    const GetWirelessGatewayFirmwareInformationRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayFirmwareInformation", "Required field: Id, is not set");
    return GetWirelessGatewayFirmwareInformationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/firmware-information");
  };

  return GetWirelessGatewayFirmwareInformationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWirelessGatewayStatisticsOutcome IoTWirelessClient::GetWirelessGatewayStatistics(
    const GetWirelessGatewayStatisticsRequest& request) const {
  if (!request.WirelessGatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayStatistics", "Required field: WirelessGatewayId, is not set");
    return GetWirelessGatewayStatisticsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessGatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWirelessGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/statistics");
  };

  return GetWirelessGatewayStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWirelessGatewayTaskOutcome IoTWirelessClient::GetWirelessGatewayTask(const GetWirelessGatewayTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayTask", "Required field: Id, is not set");
    return GetWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  };

  return GetWirelessGatewayTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::GetWirelessGatewayTaskDefinition(
    const GetWirelessGatewayTaskDefinitionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayTaskDefinition", "Required field: Id, is not set");
    return GetWirelessGatewayTaskDefinitionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateway-task-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetWirelessGatewayTaskDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDestinationsOutcome IoTWirelessClient::ListDestinations(const ListDestinationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  };

  return ListDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeviceProfilesOutcome IoTWirelessClient::ListDeviceProfiles(const ListDeviceProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/device-profiles");
  };

  return ListDeviceProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDevicesForWirelessDeviceImportTaskOutcome IoTWirelessClient::ListDevicesForWirelessDeviceImportTask(
    const ListDevicesForWirelessDeviceImportTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDevicesForWirelessDeviceImportTask", "Required field: Id, is not set");
    return ListDevicesForWirelessDeviceImportTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless_device_import_task");
  };

  return ListDevicesForWirelessDeviceImportTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEventConfigurationsOutcome IoTWirelessClient::ListEventConfigurations(const ListEventConfigurationsRequest& request) const {
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEventConfigurations", "Required field: ResourceType, is not set");
    return ListEventConfigurationsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations");
  };

  return ListEventConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFuotaTasksOutcome IoTWirelessClient::ListFuotaTasks(const ListFuotaTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks");
  };

  return ListFuotaTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMulticastGroupsOutcome IoTWirelessClient::ListMulticastGroups(const ListMulticastGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups");
  };

  return ListMulticastGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMulticastGroupsByFuotaTaskOutcome IoTWirelessClient::ListMulticastGroupsByFuotaTask(
    const ListMulticastGroupsByFuotaTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMulticastGroupsByFuotaTask", "Required field: Id, is not set");
    return ListMulticastGroupsByFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups");
  };

  return ListMulticastGroupsByFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNetworkAnalyzerConfigurationsOutcome IoTWirelessClient::ListNetworkAnalyzerConfigurations(
    const ListNetworkAnalyzerConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations");
  };

  return ListNetworkAnalyzerConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPartnerAccountsOutcome IoTWirelessClient::ListPartnerAccounts(const ListPartnerAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts");
  };

  return ListPartnerAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListQueuedMessagesOutcome IoTWirelessClient::ListQueuedMessages(const ListQueuedMessagesRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueuedMessages", "Required field: Id, is not set");
    return ListQueuedMessagesOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  };

  return ListQueuedMessagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServiceProfilesOutcome IoTWirelessClient::ListServiceProfiles(const ListServiceProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-profiles");
  };

  return ListServiceProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome IoTWirelessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWirelessDeviceImportTasksOutcome IoTWirelessClient::ListWirelessDeviceImportTasks(
    const ListWirelessDeviceImportTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless_device_import_tasks");
  };

  return ListWirelessDeviceImportTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWirelessDevicesOutcome IoTWirelessClient::ListWirelessDevices(const ListWirelessDevicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices");
  };

  return ListWirelessDevicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWirelessGatewayTaskDefinitionsOutcome IoTWirelessClient::ListWirelessGatewayTaskDefinitions(
    const ListWirelessGatewayTaskDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateway-task-definitions");
  };

  return ListWirelessGatewayTaskDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWirelessGatewaysOutcome IoTWirelessClient::ListWirelessGateways(const ListWirelessGatewaysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways");
  };

  return ListWirelessGatewaysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutResourceLogLevelOutcome IoTWirelessClient::PutResourceLogLevel(const PutResourceLogLevelRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutResourceLogLevel", "Required field: ResourceIdentifier, is not set");
    return PutResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutResourceLogLevel", "Required field: ResourceType, is not set");
    return PutResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return PutResourceLogLevelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ResetAllResourceLogLevelsOutcome IoTWirelessClient::ResetAllResourceLogLevels(const ResetAllResourceLogLevelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels");
  };

  return ResetAllResourceLogLevelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ResetResourceLogLevelOutcome IoTWirelessClient::ResetResourceLogLevel(const ResetResourceLogLevelRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetResourceLogLevel", "Required field: ResourceIdentifier, is not set");
    return ResetResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetResourceLogLevel", "Required field: ResourceType, is not set");
    return ResetResourceLogLevelOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return ResetResourceLogLevelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

SendDataToMulticastGroupOutcome IoTWirelessClient::SendDataToMulticastGroup(const SendDataToMulticastGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendDataToMulticastGroup", "Required field: Id, is not set");
    return SendDataToMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  };

  return SendDataToMulticastGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendDataToWirelessDeviceOutcome IoTWirelessClient::SendDataToWirelessDevice(const SendDataToWirelessDeviceRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendDataToWirelessDevice", "Required field: Id, is not set");
    return SendDataToWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  };

  return SendDataToWirelessDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome IoTWirelessClient::StartBulkAssociateWirelessDeviceWithMulticastGroup(
    const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBulkAssociateWirelessDeviceWithMulticastGroup", "Required field: Id, is not set");
    return StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bulk");
  };

  return StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome IoTWirelessClient::StartBulkDisassociateWirelessDeviceFromMulticastGroup(
    const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBulkDisassociateWirelessDeviceFromMulticastGroup", "Required field: Id, is not set");
    return StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bulk");
  };

  return StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFuotaTaskOutcome IoTWirelessClient::StartFuotaTask(const StartFuotaTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartFuotaTask", "Required field: Id, is not set");
    return StartFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return StartFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartMulticastGroupSessionOutcome IoTWirelessClient::StartMulticastGroupSession(const StartMulticastGroupSessionRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMulticastGroupSession", "Required field: Id, is not set");
    return StartMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/session");
  };

  return StartMulticastGroupSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartSingleWirelessDeviceImportTaskOutcome IoTWirelessClient::StartSingleWirelessDeviceImportTask(
    const StartSingleWirelessDeviceImportTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless_single_device_import_task");
  };

  return StartSingleWirelessDeviceImportTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartWirelessDeviceImportTaskOutcome IoTWirelessClient::StartWirelessDeviceImportTask(
    const StartWirelessDeviceImportTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless_device_import_task");
  };

  return StartWirelessDeviceImportTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome IoTWirelessClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TestWirelessDeviceOutcome IoTWirelessClient::TestWirelessDevice(const TestWirelessDeviceRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestWirelessDevice", "Required field: Id, is not set");
    return TestWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/test");
  };

  return TestWirelessDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome IoTWirelessClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateDestinationOutcome IoTWirelessClient::UpdateDestination(const UpdateDestinationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDestination", "Required field: Name, is not set");
    return UpdateDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateEventConfigurationByResourceTypesOutcome IoTWirelessClient::UpdateEventConfigurationByResourceTypes(
    const UpdateEventConfigurationByResourceTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations-resource-types");
  };

  return UpdateEventConfigurationByResourceTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateFuotaTaskOutcome IoTWirelessClient::UpdateFuotaTask(const UpdateFuotaTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFuotaTask", "Required field: Id, is not set");
    return UpdateFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fuota-tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateFuotaTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateLogLevelsByResourceTypesOutcome IoTWirelessClient::UpdateLogLevelsByResourceTypes(
    const UpdateLogLevelsByResourceTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/log-levels");
  };

  return UpdateLogLevelsByResourceTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMetricConfigurationOutcome IoTWirelessClient::UpdateMetricConfiguration(const UpdateMetricConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/metric-configuration");
  };

  return UpdateMetricConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateMulticastGroupOutcome IoTWirelessClient::UpdateMulticastGroup(const UpdateMulticastGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMulticastGroup", "Required field: Id, is not set");
    return UpdateMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/multicast-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateMulticastGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateNetworkAnalyzerConfigurationOutcome IoTWirelessClient::UpdateNetworkAnalyzerConfiguration(
    const UpdateNetworkAnalyzerConfigurationRequest& request) const {
  if (!request.ConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return UpdateNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-analyzer-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationName());
  };

  return UpdateNetworkAnalyzerConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePartnerAccountOutcome IoTWirelessClient::UpdatePartnerAccount(const UpdatePartnerAccountRequest& request) const {
  if (!request.PartnerAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePartnerAccount", "Required field: PartnerAccountId, is not set");
    return UpdatePartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [PartnerAccountId]", false));
  }
  if (!request.PartnerTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePartnerAccount", "Required field: PartnerType, is not set");
    return UpdatePartnerAccountOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [PartnerType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/partner-accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPartnerAccountId());
  };

  return UpdatePartnerAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateResourceEventConfigurationOutcome IoTWirelessClient::UpdateResourceEventConfiguration(
    const UpdateResourceEventConfigurationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourceEventConfiguration", "Required field: Identifier, is not set");
    return UpdateResourceEventConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.IdentifierTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourceEventConfiguration", "Required field: IdentifierType, is not set");
    return UpdateResourceEventConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentifierType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateResourceEventConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateResourcePositionOutcome IoTWirelessClient::UpdateResourcePosition(const UpdateResourcePositionRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourcePosition", "Required field: ResourceIdentifier, is not set");
    return UpdateResourcePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ResourceIdentifier]", false));
  }
  if (!request.ResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourcePosition", "Required field: ResourceType, is not set");
    return UpdateResourcePositionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ResourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-positions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return UpdateResourcePositionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateWirelessDeviceOutcome IoTWirelessClient::UpdateWirelessDevice(const UpdateWirelessDeviceRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWirelessDevice", "Required field: Id, is not set");
    return UpdateWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateWirelessDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateWirelessDeviceImportTaskOutcome IoTWirelessClient::UpdateWirelessDeviceImportTask(
    const UpdateWirelessDeviceImportTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWirelessDeviceImportTask", "Required field: Id, is not set");
    return UpdateWirelessDeviceImportTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(
        IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless_device_import_task/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateWirelessDeviceImportTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateWirelessGatewayOutcome IoTWirelessClient::UpdateWirelessGateway(const UpdateWirelessGatewayRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWirelessGateway", "Required field: Id, is not set");
    return UpdateWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/wireless-gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateWirelessGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
