/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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
#include <aws/iotwireless/model/DeleteWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayRequest.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskRequest.h>
#include <aws/iotwireless/model/DeleteWirelessGatewayTaskDefinitionRequest.h>
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
#include <aws/iotwireless/model/GetWirelessDeviceRequest.h>
#include <aws/iotwireless/model/GetWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/GetWirelessDeviceStatisticsRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayCertificateRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayFirmwareInformationRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayStatisticsRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayTaskRequest.h>
#include <aws/iotwireless/model/GetWirelessGatewayTaskDefinitionRequest.h>
#include <aws/iotwireless/model/ListDestinationsRequest.h>
#include <aws/iotwireless/model/ListDeviceProfilesRequest.h>
#include <aws/iotwireless/model/ListDevicesForWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/ListEventConfigurationsRequest.h>
#include <aws/iotwireless/model/ListFuotaTasksRequest.h>
#include <aws/iotwireless/model/ListMulticastGroupsRequest.h>
#include <aws/iotwireless/model/ListMulticastGroupsByFuotaTaskRequest.h>
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
#include <aws/iotwireless/model/UpdateWirelessDeviceRequest.h>
#include <aws/iotwireless/model/UpdateWirelessDeviceImportTaskRequest.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTWireless;
using namespace Aws::IoTWireless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace IoTWireless
  {
    const char ALLOCATION_TAG[] = "IoTWirelessClient";
    const char SERVICE_NAME[] = "iotwireless";
  }
}
const char* IoTWirelessClient::GetServiceName() {return SERVICE_NAME;}
const char* IoTWirelessClient::GetAllocationTag() {return ALLOCATION_TAG;}

IoTWirelessClient::IoTWirelessClient(const IoTWireless::IoTWirelessClientConfiguration& clientConfiguration,
                           std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoT Wireless",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

IoTWirelessClient::IoTWirelessClient(const AWSCredentials& credentials,
                           std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider,
                           const IoTWireless::IoTWirelessClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoT Wireless",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

IoTWirelessClient::IoTWirelessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<IoTWirelessEndpointProviderBase> endpointProvider,
                           const IoTWireless::IoTWirelessClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoT Wireless",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
IoTWirelessClient::IoTWirelessClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "IoT Wireless",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

IoTWirelessClient::IoTWirelessClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoT Wireless",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

IoTWirelessClient::IoTWirelessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoT Wireless",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTWirelessErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<IoTWirelessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

IoTWirelessClient::~IoTWirelessClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<IoTWirelessEndpointProviderBase>& IoTWirelessClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoTWirelessClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
AssociateAwsAccountWithPartnerAccountOutcome IoTWirelessClient::AssociateAwsAccountWithPartnerAccount(const AssociateAwsAccountWithPartnerAccountRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateAwsAccountWithPartnerAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAwsAccountWithPartnerAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateAwsAccountWithPartnerAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateAwsAccountWithPartnerAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateAwsAccountWithPartnerAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateAwsAccountWithPartnerAccountOutcome>(
    [&]()-> AssociateAwsAccountWithPartnerAccountOutcome {
      return AssociateAwsAccountWithPartnerAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/partner-accounts");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateMulticastGroupWithFuotaTaskOutcome IoTWirelessClient::AssociateMulticastGroupWithFuotaTask(const AssociateMulticastGroupWithFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateMulticastGroupWithFuotaTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateMulticastGroupWithFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMulticastGroupWithFuotaTask", "Required field: Id, is not set");
    return AssociateMulticastGroupWithFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateMulticastGroupWithFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateMulticastGroupWithFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateMulticastGroupWithFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateMulticastGroupWithFuotaTaskOutcome>(
    [&]()-> AssociateMulticastGroupWithFuotaTaskOutcome {
      return AssociateMulticastGroupWithFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/multicast-group");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateWirelessDeviceWithFuotaTaskOutcome IoTWirelessClient::AssociateWirelessDeviceWithFuotaTask(const AssociateWirelessDeviceWithFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateWirelessDeviceWithFuotaTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessDeviceWithFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithFuotaTask", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateWirelessDeviceWithFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateWirelessDeviceWithFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateWirelessDeviceWithFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateWirelessDeviceWithFuotaTaskOutcome>(
    [&]()-> AssociateWirelessDeviceWithFuotaTaskOutcome {
      return AssociateWirelessDeviceWithFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/wireless-device");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateWirelessDeviceWithMulticastGroupOutcome IoTWirelessClient::AssociateWirelessDeviceWithMulticastGroup(const AssociateWirelessDeviceWithMulticastGroupRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateWirelessDeviceWithMulticastGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithMulticastGroup", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateWirelessDeviceWithMulticastGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateWirelessDeviceWithMulticastGroupOutcome>(
    [&]()-> AssociateWirelessDeviceWithMulticastGroupOutcome {
      return AssociateWirelessDeviceWithMulticastGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/wireless-device");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateWirelessDeviceWithThingOutcome IoTWirelessClient::AssociateWirelessDeviceWithThing(const AssociateWirelessDeviceWithThingRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateWirelessDeviceWithThing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessDeviceWithThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessDeviceWithThing", "Required field: Id, is not set");
    return AssociateWirelessDeviceWithThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateWirelessDeviceWithThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateWirelessDeviceWithThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateWirelessDeviceWithThing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateWirelessDeviceWithThingOutcome>(
    [&]()-> AssociateWirelessDeviceWithThingOutcome {
      return AssociateWirelessDeviceWithThingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/thing");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateWirelessGatewayWithCertificateOutcome IoTWirelessClient::AssociateWirelessGatewayWithCertificate(const AssociateWirelessGatewayWithCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateWirelessGatewayWithCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessGatewayWithCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessGatewayWithCertificate", "Required field: Id, is not set");
    return AssociateWirelessGatewayWithCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateWirelessGatewayWithCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateWirelessGatewayWithCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateWirelessGatewayWithCertificate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateWirelessGatewayWithCertificateOutcome>(
    [&]()-> AssociateWirelessGatewayWithCertificateOutcome {
      return AssociateWirelessGatewayWithCertificateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/certificate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateWirelessGatewayWithThingOutcome IoTWirelessClient::AssociateWirelessGatewayWithThing(const AssociateWirelessGatewayWithThingRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateWirelessGatewayWithThing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWirelessGatewayWithThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateWirelessGatewayWithThing", "Required field: Id, is not set");
    return AssociateWirelessGatewayWithThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateWirelessGatewayWithThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateWirelessGatewayWithThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateWirelessGatewayWithThing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateWirelessGatewayWithThingOutcome>(
    [&]()-> AssociateWirelessGatewayWithThingOutcome {
      return AssociateWirelessGatewayWithThingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/thing");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelMulticastGroupSessionOutcome IoTWirelessClient::CancelMulticastGroupSession(const CancelMulticastGroupSessionRequest& request) const
{
  AWS_OPERATION_GUARD(CancelMulticastGroupSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelMulticastGroupSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelMulticastGroupSession", "Required field: Id, is not set");
    return CancelMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelMulticastGroupSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelMulticastGroupSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelMulticastGroupSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelMulticastGroupSessionOutcome>(
    [&]()-> CancelMulticastGroupSessionOutcome {
      return CancelMulticastGroupSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/session");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDestinationOutcome IoTWirelessClient::CreateDestination(const CreateDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDestinationOutcome>(
    [&]()-> CreateDestinationOutcome {
      return CreateDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/destinations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDeviceProfileOutcome IoTWirelessClient::CreateDeviceProfile(const CreateDeviceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDeviceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeviceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDeviceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDeviceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDeviceProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDeviceProfileOutcome>(
    [&]()-> CreateDeviceProfileOutcome {
      return CreateDeviceProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/device-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFuotaTaskOutcome IoTWirelessClient::CreateFuotaTask(const CreateFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(CreateFuotaTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFuotaTaskOutcome>(
    [&]()-> CreateFuotaTaskOutcome {
      return CreateFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMulticastGroupOutcome IoTWirelessClient::CreateMulticastGroup(const CreateMulticastGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMulticastGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMulticastGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMulticastGroupOutcome>(
    [&]()-> CreateMulticastGroupOutcome {
      return CreateMulticastGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNetworkAnalyzerConfigurationOutcome IoTWirelessClient::CreateNetworkAnalyzerConfiguration(const CreateNetworkAnalyzerConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateNetworkAnalyzerConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNetworkAnalyzerConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNetworkAnalyzerConfigurationOutcome>(
    [&]()-> CreateNetworkAnalyzerConfigurationOutcome {
      return CreateNetworkAnalyzerConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/network-analyzer-configurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateServiceProfileOutcome IoTWirelessClient::CreateServiceProfile(const CreateServiceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateServiceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateServiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateServiceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateServiceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateServiceProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateServiceProfileOutcome>(
    [&]()-> CreateServiceProfileOutcome {
      return CreateServiceProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/service-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWirelessDeviceOutcome IoTWirelessClient::CreateWirelessDevice(const CreateWirelessDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWirelessDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWirelessDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWirelessDeviceOutcome>(
    [&]()-> CreateWirelessDeviceOutcome {
      return CreateWirelessDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWirelessGatewayOutcome IoTWirelessClient::CreateWirelessGateway(const CreateWirelessGatewayRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWirelessGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateWirelessGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWirelessGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWirelessGateway",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWirelessGatewayOutcome>(
    [&]()-> CreateWirelessGatewayOutcome {
      return CreateWirelessGatewayOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWirelessGatewayTaskOutcome IoTWirelessClient::CreateWirelessGatewayTask(const CreateWirelessGatewayTaskRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWirelessGatewayTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWirelessGatewayTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWirelessGatewayTask", "Required field: Id, is not set");
    return CreateWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateWirelessGatewayTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWirelessGatewayTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWirelessGatewayTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWirelessGatewayTaskOutcome>(
    [&]()-> CreateWirelessGatewayTaskOutcome {
      return CreateWirelessGatewayTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::CreateWirelessGatewayTaskDefinition(const CreateWirelessGatewayTaskDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWirelessGatewayTaskDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWirelessGatewayTaskDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWirelessGatewayTaskDefinitionOutcome>(
    [&]()-> CreateWirelessGatewayTaskDefinitionOutcome {
      return CreateWirelessGatewayTaskDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateway-task-definitions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDestinationOutcome IoTWirelessClient::DeleteDestination(const DeleteDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDestination", "Required field: Name, is not set");
    return DeleteDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDestinationOutcome>(
    [&]()-> DeleteDestinationOutcome {
      return DeleteDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/destinations/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDeviceProfileOutcome IoTWirelessClient::DeleteDeviceProfile(const DeleteDeviceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDeviceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeviceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeviceProfile", "Required field: Id, is not set");
    return DeleteDeviceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDeviceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDeviceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDeviceProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDeviceProfileOutcome>(
    [&]()-> DeleteDeviceProfileOutcome {
      return DeleteDeviceProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/device-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFuotaTaskOutcome IoTWirelessClient::DeleteFuotaTask(const DeleteFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFuotaTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFuotaTask", "Required field: Id, is not set");
    return DeleteFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFuotaTaskOutcome>(
    [&]()-> DeleteFuotaTaskOutcome {
      return DeleteFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMulticastGroupOutcome IoTWirelessClient::DeleteMulticastGroup(const DeleteMulticastGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMulticastGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMulticastGroup", "Required field: Id, is not set");
    return DeleteMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMulticastGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMulticastGroupOutcome>(
    [&]()-> DeleteMulticastGroupOutcome {
      return DeleteMulticastGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNetworkAnalyzerConfigurationOutcome IoTWirelessClient::DeleteNetworkAnalyzerConfiguration(const DeleteNetworkAnalyzerConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteNetworkAnalyzerConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return DeleteNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteNetworkAnalyzerConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteNetworkAnalyzerConfigurationOutcome>(
    [&]()-> DeleteNetworkAnalyzerConfigurationOutcome {
      return DeleteNetworkAnalyzerConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/network-analyzer-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetConfigurationName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueuedMessagesOutcome IoTWirelessClient::DeleteQueuedMessages(const DeleteQueuedMessagesRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteQueuedMessages);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteQueuedMessages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueuedMessages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueuedMessages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueuedMessagesOutcome>(
    [&]()-> DeleteQueuedMessagesOutcome {
      return DeleteQueuedMessagesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/data");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteServiceProfileOutcome IoTWirelessClient::DeleteServiceProfile(const DeleteServiceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteServiceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteServiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteServiceProfile", "Required field: Id, is not set");
    return DeleteServiceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteServiceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteServiceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteServiceProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteServiceProfileOutcome>(
    [&]()-> DeleteServiceProfileOutcome {
      return DeleteServiceProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/service-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWirelessDeviceOutcome IoTWirelessClient::DeleteWirelessDevice(const DeleteWirelessDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWirelessDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessDevice", "Required field: Id, is not set");
    return DeleteWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWirelessDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWirelessDeviceOutcome>(
    [&]()-> DeleteWirelessDeviceOutcome {
      return DeleteWirelessDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWirelessDeviceImportTaskOutcome IoTWirelessClient::DeleteWirelessDeviceImportTask(const DeleteWirelessDeviceImportTaskRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWirelessDeviceImportTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWirelessDeviceImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessDeviceImportTask", "Required field: Id, is not set");
    return DeleteWirelessDeviceImportTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWirelessDeviceImportTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWirelessDeviceImportTaskOutcome>(
    [&]()-> DeleteWirelessDeviceImportTaskOutcome {
      return DeleteWirelessDeviceImportTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless_device_import_task/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWirelessGatewayOutcome IoTWirelessClient::DeleteWirelessGateway(const DeleteWirelessGatewayRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWirelessGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGateway", "Required field: Id, is not set");
    return DeleteWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteWirelessGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWirelessGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWirelessGateway",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWirelessGatewayOutcome>(
    [&]()-> DeleteWirelessGatewayOutcome {
      return DeleteWirelessGatewayOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWirelessGatewayTaskOutcome IoTWirelessClient::DeleteWirelessGatewayTask(const DeleteWirelessGatewayTaskRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWirelessGatewayTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWirelessGatewayTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGatewayTask", "Required field: Id, is not set");
    return DeleteWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteWirelessGatewayTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWirelessGatewayTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWirelessGatewayTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWirelessGatewayTaskOutcome>(
    [&]()-> DeleteWirelessGatewayTaskOutcome {
      return DeleteWirelessGatewayTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::DeleteWirelessGatewayTaskDefinition(const DeleteWirelessGatewayTaskDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWirelessGatewayTaskDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWirelessGatewayTaskDefinition", "Required field: Id, is not set");
    return DeleteWirelessGatewayTaskDefinitionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWirelessGatewayTaskDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWirelessGatewayTaskDefinitionOutcome>(
    [&]()-> DeleteWirelessGatewayTaskDefinitionOutcome {
      return DeleteWirelessGatewayTaskDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateway-task-definitions/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterWirelessDeviceOutcome IoTWirelessClient::DeregisterWirelessDevice(const DeregisterWirelessDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(DeregisterWirelessDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterWirelessDevice", "Required field: Identifier, is not set");
    return DeregisterWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeregisterWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeregisterWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeregisterWirelessDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeregisterWirelessDeviceOutcome>(
    [&]()-> DeregisterWirelessDeviceOutcome {
      return DeregisterWirelessDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/deregister");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateAwsAccountFromPartnerAccountOutcome IoTWirelessClient::DisassociateAwsAccountFromPartnerAccount(const DisassociateAwsAccountFromPartnerAccountRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateAwsAccountFromPartnerAccount);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateAwsAccountFromPartnerAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateAwsAccountFromPartnerAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateAwsAccountFromPartnerAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateAwsAccountFromPartnerAccountOutcome>(
    [&]()-> DisassociateAwsAccountFromPartnerAccountOutcome {
      return DisassociateAwsAccountFromPartnerAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/partner-accounts/");
      resolvedEndpoint.AddPathSegment(request.GetPartnerAccountId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateMulticastGroupFromFuotaTaskOutcome IoTWirelessClient::DisassociateMulticastGroupFromFuotaTask(const DisassociateMulticastGroupFromFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateMulticastGroupFromFuotaTask);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateMulticastGroupFromFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateMulticastGroupFromFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateMulticastGroupFromFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateMulticastGroupFromFuotaTaskOutcome>(
    [&]()-> DisassociateMulticastGroupFromFuotaTaskOutcome {
      return DisassociateMulticastGroupFromFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetMulticastGroupId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateWirelessDeviceFromFuotaTaskOutcome IoTWirelessClient::DisassociateWirelessDeviceFromFuotaTask(const DisassociateWirelessDeviceFromFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateWirelessDeviceFromFuotaTask);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateWirelessDeviceFromFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateWirelessDeviceFromFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateWirelessDeviceFromFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateWirelessDeviceFromFuotaTaskOutcome>(
    [&]()-> DisassociateWirelessDeviceFromFuotaTaskOutcome {
      return DisassociateWirelessDeviceFromFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetWirelessDeviceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateWirelessDeviceFromMulticastGroupOutcome IoTWirelessClient::DisassociateWirelessDeviceFromMulticastGroup(const DisassociateWirelessDeviceFromMulticastGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateWirelessDeviceFromMulticastGroup);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateWirelessDeviceFromMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateWirelessDeviceFromMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateWirelessDeviceFromMulticastGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateWirelessDeviceFromMulticastGroupOutcome>(
    [&]()-> DisassociateWirelessDeviceFromMulticastGroupOutcome {
      return DisassociateWirelessDeviceFromMulticastGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetWirelessDeviceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateWirelessDeviceFromThingOutcome IoTWirelessClient::DisassociateWirelessDeviceFromThing(const DisassociateWirelessDeviceFromThingRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateWirelessDeviceFromThing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateWirelessDeviceFromThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessDeviceFromThing", "Required field: Id, is not set");
    return DisassociateWirelessDeviceFromThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateWirelessDeviceFromThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateWirelessDeviceFromThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateWirelessDeviceFromThing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateWirelessDeviceFromThingOutcome>(
    [&]()-> DisassociateWirelessDeviceFromThingOutcome {
      return DisassociateWirelessDeviceFromThingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/thing");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateWirelessGatewayFromCertificateOutcome IoTWirelessClient::DisassociateWirelessGatewayFromCertificate(const DisassociateWirelessGatewayFromCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateWirelessGatewayFromCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateWirelessGatewayFromCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessGatewayFromCertificate", "Required field: Id, is not set");
    return DisassociateWirelessGatewayFromCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateWirelessGatewayFromCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateWirelessGatewayFromCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateWirelessGatewayFromCertificate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateWirelessGatewayFromCertificateOutcome>(
    [&]()-> DisassociateWirelessGatewayFromCertificateOutcome {
      return DisassociateWirelessGatewayFromCertificateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/certificate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateWirelessGatewayFromThingOutcome IoTWirelessClient::DisassociateWirelessGatewayFromThing(const DisassociateWirelessGatewayFromThingRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateWirelessGatewayFromThing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateWirelessGatewayFromThing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateWirelessGatewayFromThing", "Required field: Id, is not set");
    return DisassociateWirelessGatewayFromThingOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateWirelessGatewayFromThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateWirelessGatewayFromThing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateWirelessGatewayFromThing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateWirelessGatewayFromThingOutcome>(
    [&]()-> DisassociateWirelessGatewayFromThingOutcome {
      return DisassociateWirelessGatewayFromThingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/thing");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDestinationOutcome IoTWirelessClient::GetDestination(const GetDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(GetDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDestination", "Required field: Name, is not set");
    return GetDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDestinationOutcome>(
    [&]()-> GetDestinationOutcome {
      return GetDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/destinations/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDeviceProfileOutcome IoTWirelessClient::GetDeviceProfile(const GetDeviceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetDeviceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeviceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeviceProfile", "Required field: Id, is not set");
    return GetDeviceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDeviceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDeviceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDeviceProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDeviceProfileOutcome>(
    [&]()-> GetDeviceProfileOutcome {
      return GetDeviceProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/device-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEventConfigurationByResourceTypesOutcome IoTWirelessClient::GetEventConfigurationByResourceTypes(const GetEventConfigurationByResourceTypesRequest& request) const
{
  AWS_OPERATION_GUARD(GetEventConfigurationByResourceTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventConfigurationByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEventConfigurationByResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEventConfigurationByResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEventConfigurationByResourceTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEventConfigurationByResourceTypesOutcome>(
    [&]()-> GetEventConfigurationByResourceTypesOutcome {
      return GetEventConfigurationByResourceTypesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/event-configurations-resource-types");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFuotaTaskOutcome IoTWirelessClient::GetFuotaTask(const GetFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(GetFuotaTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFuotaTask", "Required field: Id, is not set");
    return GetFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFuotaTaskOutcome>(
    [&]()-> GetFuotaTaskOutcome {
      return GetFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLogLevelsByResourceTypesOutcome IoTWirelessClient::GetLogLevelsByResourceTypes(const GetLogLevelsByResourceTypesRequest& request) const
{
  AWS_OPERATION_GUARD(GetLogLevelsByResourceTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLogLevelsByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetLogLevelsByResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLogLevelsByResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLogLevelsByResourceTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLogLevelsByResourceTypesOutcome>(
    [&]()-> GetLogLevelsByResourceTypesOutcome {
      return GetLogLevelsByResourceTypesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/log-levels");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMetricConfigurationOutcome IoTWirelessClient::GetMetricConfiguration(const GetMetricConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetMetricConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetricConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMetricConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMetricConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMetricConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMetricConfigurationOutcome>(
    [&]()-> GetMetricConfigurationOutcome {
      return GetMetricConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/metric-configuration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMetricsOutcome IoTWirelessClient::GetMetrics(const GetMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(GetMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMetrics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMetrics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMetricsOutcome>(
    [&]()-> GetMetricsOutcome {
      return GetMetricsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/metrics");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMulticastGroupOutcome IoTWirelessClient::GetMulticastGroup(const GetMulticastGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetMulticastGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMulticastGroup", "Required field: Id, is not set");
    return GetMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMulticastGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMulticastGroupOutcome>(
    [&]()-> GetMulticastGroupOutcome {
      return GetMulticastGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMulticastGroupSessionOutcome IoTWirelessClient::GetMulticastGroupSession(const GetMulticastGroupSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetMulticastGroupSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMulticastGroupSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMulticastGroupSession", "Required field: Id, is not set");
    return GetMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMulticastGroupSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMulticastGroupSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMulticastGroupSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMulticastGroupSessionOutcome>(
    [&]()-> GetMulticastGroupSessionOutcome {
      return GetMulticastGroupSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/session");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetNetworkAnalyzerConfigurationOutcome IoTWirelessClient::GetNetworkAnalyzerConfiguration(const GetNetworkAnalyzerConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetNetworkAnalyzerConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return GetNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetNetworkAnalyzerConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetNetworkAnalyzerConfigurationOutcome>(
    [&]()-> GetNetworkAnalyzerConfigurationOutcome {
      return GetNetworkAnalyzerConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/network-analyzer-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetConfigurationName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPartnerAccountOutcome IoTWirelessClient::GetPartnerAccount(const GetPartnerAccountRequest& request) const
{
  AWS_OPERATION_GUARD(GetPartnerAccount);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPartnerAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPartnerAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPartnerAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPartnerAccountOutcome>(
    [&]()-> GetPartnerAccountOutcome {
      return GetPartnerAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/partner-accounts/");
      resolvedEndpoint.AddPathSegment(request.GetPartnerAccountId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPositionEstimateOutcome IoTWirelessClient::GetPositionEstimate(const GetPositionEstimateRequest& request) const
{
  AWS_OPERATION_GUARD(GetPositionEstimate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPositionEstimate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPositionEstimate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPositionEstimate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPositionEstimate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPositionEstimateOutcome>(
    [&]()-> GetPositionEstimateOutcome {
      return GetPositionEstimateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/position-estimate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourceEventConfigurationOutcome IoTWirelessClient::GetResourceEventConfiguration(const GetResourceEventConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetResourceEventConfiguration);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetResourceEventConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResourceEventConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResourceEventConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResourceEventConfigurationOutcome>(
    [&]()-> GetResourceEventConfigurationOutcome {
      return GetResourceEventConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/event-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourceLogLevelOutcome IoTWirelessClient::GetResourceLogLevel(const GetResourceLogLevelRequest& request) const
{
  AWS_OPERATION_GUARD(GetResourceLogLevel);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetResourceLogLevel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResourceLogLevel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResourceLogLevel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResourceLogLevelOutcome>(
    [&]()-> GetResourceLogLevelOutcome {
      return GetResourceLogLevelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/log-levels/");
      resolvedEndpoint.AddPathSegment(request.GetResourceIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourcePositionOutcome IoTWirelessClient::GetResourcePosition(const GetResourcePositionRequest& request) const
{
  AWS_OPERATION_GUARD(GetResourcePosition);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetResourcePosition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResourcePosition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResourcePosition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResourcePositionOutcome>(
    [&]()-> GetResourcePositionOutcome {
      return GetResourcePositionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/resource-positions/");
      resolvedEndpoint.AddPathSegment(request.GetResourceIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetServiceEndpointOutcome IoTWirelessClient::GetServiceEndpoint(const GetServiceEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(GetServiceEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetServiceEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetServiceEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetServiceEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetServiceEndpointOutcome>(
    [&]()-> GetServiceEndpointOutcome {
      return GetServiceEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/service-endpoint");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetServiceProfileOutcome IoTWirelessClient::GetServiceProfile(const GetServiceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetServiceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServiceProfile", "Required field: Id, is not set");
    return GetServiceProfileOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetServiceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetServiceProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetServiceProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetServiceProfileOutcome>(
    [&]()-> GetServiceProfileOutcome {
      return GetServiceProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/service-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWirelessDeviceOutcome IoTWirelessClient::GetWirelessDevice(const GetWirelessDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(GetWirelessDevice);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWirelessDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWirelessDeviceOutcome>(
    [&]()-> GetWirelessDeviceOutcome {
      return GetWirelessDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWirelessDeviceImportTaskOutcome IoTWirelessClient::GetWirelessDeviceImportTask(const GetWirelessDeviceImportTaskRequest& request) const
{
  AWS_OPERATION_GUARD(GetWirelessDeviceImportTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessDeviceImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessDeviceImportTask", "Required field: Id, is not set");
    return GetWirelessDeviceImportTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWirelessDeviceImportTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWirelessDeviceImportTaskOutcome>(
    [&]()-> GetWirelessDeviceImportTaskOutcome {
      return GetWirelessDeviceImportTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless_device_import_task/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWirelessDeviceStatisticsOutcome IoTWirelessClient::GetWirelessDeviceStatistics(const GetWirelessDeviceStatisticsRequest& request) const
{
  AWS_OPERATION_GUARD(GetWirelessDeviceStatistics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessDeviceStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WirelessDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessDeviceStatistics", "Required field: WirelessDeviceId, is not set");
    return GetWirelessDeviceStatisticsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWirelessDeviceStatistics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWirelessDeviceStatistics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWirelessDeviceStatistics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWirelessDeviceStatisticsOutcome>(
    [&]()-> GetWirelessDeviceStatisticsOutcome {
      return GetWirelessDeviceStatisticsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetWirelessDeviceId());
      resolvedEndpoint.AddPathSegments("/statistics");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWirelessGatewayOutcome IoTWirelessClient::GetWirelessGateway(const GetWirelessGatewayRequest& request) const
{
  AWS_OPERATION_GUARD(GetWirelessGateway);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWirelessGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWirelessGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWirelessGateway",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWirelessGatewayOutcome>(
    [&]()-> GetWirelessGatewayOutcome {
      return GetWirelessGatewayOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWirelessGatewayCertificateOutcome IoTWirelessClient::GetWirelessGatewayCertificate(const GetWirelessGatewayCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(GetWirelessGatewayCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayCertificate", "Required field: Id, is not set");
    return GetWirelessGatewayCertificateOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWirelessGatewayCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWirelessGatewayCertificate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWirelessGatewayCertificate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWirelessGatewayCertificateOutcome>(
    [&]()-> GetWirelessGatewayCertificateOutcome {
      return GetWirelessGatewayCertificateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/certificate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWirelessGatewayFirmwareInformationOutcome IoTWirelessClient::GetWirelessGatewayFirmwareInformation(const GetWirelessGatewayFirmwareInformationRequest& request) const
{
  AWS_OPERATION_GUARD(GetWirelessGatewayFirmwareInformation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayFirmwareInformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayFirmwareInformation", "Required field: Id, is not set");
    return GetWirelessGatewayFirmwareInformationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWirelessGatewayFirmwareInformation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWirelessGatewayFirmwareInformation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWirelessGatewayFirmwareInformation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWirelessGatewayFirmwareInformationOutcome>(
    [&]()-> GetWirelessGatewayFirmwareInformationOutcome {
      return GetWirelessGatewayFirmwareInformationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/firmware-information");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWirelessGatewayStatisticsOutcome IoTWirelessClient::GetWirelessGatewayStatistics(const GetWirelessGatewayStatisticsRequest& request) const
{
  AWS_OPERATION_GUARD(GetWirelessGatewayStatistics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WirelessGatewayIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayStatistics", "Required field: WirelessGatewayId, is not set");
    return GetWirelessGatewayStatisticsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WirelessGatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWirelessGatewayStatistics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWirelessGatewayStatistics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWirelessGatewayStatistics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWirelessGatewayStatisticsOutcome>(
    [&]()-> GetWirelessGatewayStatisticsOutcome {
      return GetWirelessGatewayStatisticsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetWirelessGatewayId());
      resolvedEndpoint.AddPathSegments("/statistics");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWirelessGatewayTaskOutcome IoTWirelessClient::GetWirelessGatewayTask(const GetWirelessGatewayTaskRequest& request) const
{
  AWS_OPERATION_GUARD(GetWirelessGatewayTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayTask", "Required field: Id, is not set");
    return GetWirelessGatewayTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWirelessGatewayTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWirelessGatewayTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWirelessGatewayTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWirelessGatewayTaskOutcome>(
    [&]()-> GetWirelessGatewayTaskOutcome {
      return GetWirelessGatewayTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWirelessGatewayTaskDefinitionOutcome IoTWirelessClient::GetWirelessGatewayTaskDefinition(const GetWirelessGatewayTaskDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(GetWirelessGatewayTaskDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWirelessGatewayTaskDefinition", "Required field: Id, is not set");
    return GetWirelessGatewayTaskDefinitionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWirelessGatewayTaskDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWirelessGatewayTaskDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWirelessGatewayTaskDefinitionOutcome>(
    [&]()-> GetWirelessGatewayTaskDefinitionOutcome {
      return GetWirelessGatewayTaskDefinitionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateway-task-definitions/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDestinationsOutcome IoTWirelessClient::ListDestinations(const ListDestinationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDestinations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDestinations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDestinations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDestinations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDestinationsOutcome>(
    [&]()-> ListDestinationsOutcome {
      return ListDestinationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/destinations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDeviceProfilesOutcome IoTWirelessClient::ListDeviceProfiles(const ListDeviceProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDeviceProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDeviceProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDeviceProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDeviceProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDeviceProfilesOutcome>(
    [&]()-> ListDeviceProfilesOutcome {
      return ListDeviceProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/device-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDevicesForWirelessDeviceImportTaskOutcome IoTWirelessClient::ListDevicesForWirelessDeviceImportTask(const ListDevicesForWirelessDeviceImportTaskRequest& request) const
{
  AWS_OPERATION_GUARD(ListDevicesForWirelessDeviceImportTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevicesForWirelessDeviceImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDevicesForWirelessDeviceImportTask", "Required field: Id, is not set");
    return ListDevicesForWirelessDeviceImportTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDevicesForWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDevicesForWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDevicesForWirelessDeviceImportTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDevicesForWirelessDeviceImportTaskOutcome>(
    [&]()-> ListDevicesForWirelessDeviceImportTaskOutcome {
      return ListDevicesForWirelessDeviceImportTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless_device_import_task");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEventConfigurationsOutcome IoTWirelessClient::ListEventConfigurations(const ListEventConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEventConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEventConfigurations", "Required field: ResourceType, is not set");
    return ListEventConfigurationsOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEventConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEventConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEventConfigurations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEventConfigurationsOutcome>(
    [&]()-> ListEventConfigurationsOutcome {
      return ListEventConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/event-configurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFuotaTasksOutcome IoTWirelessClient::ListFuotaTasks(const ListFuotaTasksRequest& request) const
{
  AWS_OPERATION_GUARD(ListFuotaTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFuotaTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFuotaTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFuotaTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFuotaTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFuotaTasksOutcome>(
    [&]()-> ListFuotaTasksOutcome {
      return ListFuotaTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMulticastGroupsOutcome IoTWirelessClient::ListMulticastGroups(const ListMulticastGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMulticastGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMulticastGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMulticastGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMulticastGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMulticastGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMulticastGroupsOutcome>(
    [&]()-> ListMulticastGroupsOutcome {
      return ListMulticastGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMulticastGroupsByFuotaTaskOutcome IoTWirelessClient::ListMulticastGroupsByFuotaTask(const ListMulticastGroupsByFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(ListMulticastGroupsByFuotaTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMulticastGroupsByFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMulticastGroupsByFuotaTask", "Required field: Id, is not set");
    return ListMulticastGroupsByFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMulticastGroupsByFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMulticastGroupsByFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMulticastGroupsByFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMulticastGroupsByFuotaTaskOutcome>(
    [&]()-> ListMulticastGroupsByFuotaTaskOutcome {
      return ListMulticastGroupsByFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/multicast-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNetworkAnalyzerConfigurationsOutcome IoTWirelessClient::ListNetworkAnalyzerConfigurations(const ListNetworkAnalyzerConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListNetworkAnalyzerConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNetworkAnalyzerConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListNetworkAnalyzerConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNetworkAnalyzerConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNetworkAnalyzerConfigurations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNetworkAnalyzerConfigurationsOutcome>(
    [&]()-> ListNetworkAnalyzerConfigurationsOutcome {
      return ListNetworkAnalyzerConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/network-analyzer-configurations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPartnerAccountsOutcome IoTWirelessClient::ListPartnerAccounts(const ListPartnerAccountsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPartnerAccounts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPartnerAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPartnerAccounts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPartnerAccounts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPartnerAccounts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPartnerAccountsOutcome>(
    [&]()-> ListPartnerAccountsOutcome {
      return ListPartnerAccountsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/partner-accounts");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueuedMessagesOutcome IoTWirelessClient::ListQueuedMessages(const ListQueuedMessagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListQueuedMessages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueuedMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueuedMessages", "Required field: Id, is not set");
    return ListQueuedMessagesOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListQueuedMessages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueuedMessages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueuedMessages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueuedMessagesOutcome>(
    [&]()-> ListQueuedMessagesOutcome {
      return ListQueuedMessagesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/data");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListServiceProfilesOutcome IoTWirelessClient::ListServiceProfiles(const ListServiceProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListServiceProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServiceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListServiceProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListServiceProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListServiceProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListServiceProfilesOutcome>(
    [&]()-> ListServiceProfilesOutcome {
      return ListServiceProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/service-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome IoTWirelessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWirelessDeviceImportTasksOutcome IoTWirelessClient::ListWirelessDeviceImportTasks(const ListWirelessDeviceImportTasksRequest& request) const
{
  AWS_OPERATION_GUARD(ListWirelessDeviceImportTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWirelessDeviceImportTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListWirelessDeviceImportTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWirelessDeviceImportTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWirelessDeviceImportTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWirelessDeviceImportTasksOutcome>(
    [&]()-> ListWirelessDeviceImportTasksOutcome {
      return ListWirelessDeviceImportTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless_device_import_tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWirelessDevicesOutcome IoTWirelessClient::ListWirelessDevices(const ListWirelessDevicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListWirelessDevices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWirelessDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListWirelessDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWirelessDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWirelessDevices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWirelessDevicesOutcome>(
    [&]()-> ListWirelessDevicesOutcome {
      return ListWirelessDevicesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWirelessGatewayTaskDefinitionsOutcome IoTWirelessClient::ListWirelessGatewayTaskDefinitions(const ListWirelessGatewayTaskDefinitionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListWirelessGatewayTaskDefinitions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWirelessGatewayTaskDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListWirelessGatewayTaskDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWirelessGatewayTaskDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWirelessGatewayTaskDefinitions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWirelessGatewayTaskDefinitionsOutcome>(
    [&]()-> ListWirelessGatewayTaskDefinitionsOutcome {
      return ListWirelessGatewayTaskDefinitionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateway-task-definitions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWirelessGatewaysOutcome IoTWirelessClient::ListWirelessGateways(const ListWirelessGatewaysRequest& request) const
{
  AWS_OPERATION_GUARD(ListWirelessGateways);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWirelessGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListWirelessGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWirelessGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWirelessGateways",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWirelessGatewaysOutcome>(
    [&]()-> ListWirelessGatewaysOutcome {
      return ListWirelessGatewaysOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutResourceLogLevelOutcome IoTWirelessClient::PutResourceLogLevel(const PutResourceLogLevelRequest& request) const
{
  AWS_OPERATION_GUARD(PutResourceLogLevel);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutResourceLogLevel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutResourceLogLevel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutResourceLogLevel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutResourceLogLevelOutcome>(
    [&]()-> PutResourceLogLevelOutcome {
      return PutResourceLogLevelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/log-levels/");
      resolvedEndpoint.AddPathSegment(request.GetResourceIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ResetAllResourceLogLevelsOutcome IoTWirelessClient::ResetAllResourceLogLevels(const ResetAllResourceLogLevelsRequest& request) const
{
  AWS_OPERATION_GUARD(ResetAllResourceLogLevels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetAllResourceLogLevels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ResetAllResourceLogLevels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ResetAllResourceLogLevels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ResetAllResourceLogLevels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ResetAllResourceLogLevelsOutcome>(
    [&]()-> ResetAllResourceLogLevelsOutcome {
      return ResetAllResourceLogLevelsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/log-levels");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ResetResourceLogLevelOutcome IoTWirelessClient::ResetResourceLogLevel(const ResetResourceLogLevelRequest& request) const
{
  AWS_OPERATION_GUARD(ResetResourceLogLevel);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ResetResourceLogLevel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ResetResourceLogLevel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ResetResourceLogLevel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ResetResourceLogLevelOutcome>(
    [&]()-> ResetResourceLogLevelOutcome {
      return ResetResourceLogLevelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/log-levels/");
      resolvedEndpoint.AddPathSegment(request.GetResourceIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendDataToMulticastGroupOutcome IoTWirelessClient::SendDataToMulticastGroup(const SendDataToMulticastGroupRequest& request) const
{
  AWS_OPERATION_GUARD(SendDataToMulticastGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendDataToMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendDataToMulticastGroup", "Required field: Id, is not set");
    return SendDataToMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SendDataToMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendDataToMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendDataToMulticastGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendDataToMulticastGroupOutcome>(
    [&]()-> SendDataToMulticastGroupOutcome {
      return SendDataToMulticastGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/data");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendDataToWirelessDeviceOutcome IoTWirelessClient::SendDataToWirelessDevice(const SendDataToWirelessDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(SendDataToWirelessDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendDataToWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendDataToWirelessDevice", "Required field: Id, is not set");
    return SendDataToWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SendDataToWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendDataToWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendDataToWirelessDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendDataToWirelessDeviceOutcome>(
    [&]()-> SendDataToWirelessDeviceOutcome {
      return SendDataToWirelessDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/data");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome IoTWirelessClient::StartBulkAssociateWirelessDeviceWithMulticastGroup(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequest& request) const
{
  AWS_OPERATION_GUARD(StartBulkAssociateWirelessDeviceWithMulticastGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBulkAssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBulkAssociateWirelessDeviceWithMulticastGroup", "Required field: Id, is not set");
    return StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartBulkAssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartBulkAssociateWirelessDeviceWithMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartBulkAssociateWirelessDeviceWithMulticastGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome>(
    [&]()-> StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome {
      return StartBulkAssociateWirelessDeviceWithMulticastGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/bulk");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome IoTWirelessClient::StartBulkDisassociateWirelessDeviceFromMulticastGroup(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest& request) const
{
  AWS_OPERATION_GUARD(StartBulkDisassociateWirelessDeviceFromMulticastGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBulkDisassociateWirelessDeviceFromMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBulkDisassociateWirelessDeviceFromMulticastGroup", "Required field: Id, is not set");
    return StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartBulkDisassociateWirelessDeviceFromMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartBulkDisassociateWirelessDeviceFromMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartBulkDisassociateWirelessDeviceFromMulticastGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome>(
    [&]()-> StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome {
      return StartBulkDisassociateWirelessDeviceFromMulticastGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/bulk");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartFuotaTaskOutcome IoTWirelessClient::StartFuotaTask(const StartFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StartFuotaTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartFuotaTask", "Required field: Id, is not set");
    return StartFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartFuotaTaskOutcome>(
    [&]()-> StartFuotaTaskOutcome {
      return StartFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartMulticastGroupSessionOutcome IoTWirelessClient::StartMulticastGroupSession(const StartMulticastGroupSessionRequest& request) const
{
  AWS_OPERATION_GUARD(StartMulticastGroupSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMulticastGroupSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMulticastGroupSession", "Required field: Id, is not set");
    return StartMulticastGroupSessionOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartMulticastGroupSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartMulticastGroupSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartMulticastGroupSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartMulticastGroupSessionOutcome>(
    [&]()-> StartMulticastGroupSessionOutcome {
      return StartMulticastGroupSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/session");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartSingleWirelessDeviceImportTaskOutcome IoTWirelessClient::StartSingleWirelessDeviceImportTask(const StartSingleWirelessDeviceImportTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StartSingleWirelessDeviceImportTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSingleWirelessDeviceImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartSingleWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartSingleWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartSingleWirelessDeviceImportTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartSingleWirelessDeviceImportTaskOutcome>(
    [&]()-> StartSingleWirelessDeviceImportTaskOutcome {
      return StartSingleWirelessDeviceImportTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless_single_device_import_task");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartWirelessDeviceImportTaskOutcome IoTWirelessClient::StartWirelessDeviceImportTask(const StartWirelessDeviceImportTaskRequest& request) const
{
  AWS_OPERATION_GUARD(StartWirelessDeviceImportTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartWirelessDeviceImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartWirelessDeviceImportTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartWirelessDeviceImportTaskOutcome>(
    [&]()-> StartWirelessDeviceImportTaskOutcome {
      return StartWirelessDeviceImportTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless_device_import_task");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome IoTWirelessClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TestWirelessDeviceOutcome IoTWirelessClient::TestWirelessDevice(const TestWirelessDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(TestWirelessDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestWirelessDevice", "Required field: Id, is not set");
    return TestWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TestWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TestWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TestWirelessDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TestWirelessDeviceOutcome>(
    [&]()-> TestWirelessDeviceOutcome {
      return TestWirelessDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      resolvedEndpoint.AddPathSegments("/test");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome IoTWirelessClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDestinationOutcome IoTWirelessClient::UpdateDestination(const UpdateDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDestination", "Required field: Name, is not set");
    return UpdateDestinationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDestinationOutcome>(
    [&]()-> UpdateDestinationOutcome {
      return UpdateDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/destinations/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateEventConfigurationByResourceTypesOutcome IoTWirelessClient::UpdateEventConfigurationByResourceTypes(const UpdateEventConfigurationByResourceTypesRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEventConfigurationByResourceTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEventConfigurationByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateEventConfigurationByResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEventConfigurationByResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEventConfigurationByResourceTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEventConfigurationByResourceTypesOutcome>(
    [&]()-> UpdateEventConfigurationByResourceTypesOutcome {
      return UpdateEventConfigurationByResourceTypesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/event-configurations-resource-types");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFuotaTaskOutcome IoTWirelessClient::UpdateFuotaTask(const UpdateFuotaTaskRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateFuotaTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFuotaTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFuotaTask", "Required field: Id, is not set");
    return UpdateFuotaTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFuotaTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFuotaTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFuotaTaskOutcome>(
    [&]()-> UpdateFuotaTaskOutcome {
      return UpdateFuotaTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/fuota-tasks/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateLogLevelsByResourceTypesOutcome IoTWirelessClient::UpdateLogLevelsByResourceTypes(const UpdateLogLevelsByResourceTypesRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateLogLevelsByResourceTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLogLevelsByResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateLogLevelsByResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateLogLevelsByResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateLogLevelsByResourceTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateLogLevelsByResourceTypesOutcome>(
    [&]()-> UpdateLogLevelsByResourceTypesOutcome {
      return UpdateLogLevelsByResourceTypesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/log-levels");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMetricConfigurationOutcome IoTWirelessClient::UpdateMetricConfiguration(const UpdateMetricConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMetricConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMetricConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMetricConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMetricConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMetricConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMetricConfigurationOutcome>(
    [&]()-> UpdateMetricConfigurationOutcome {
      return UpdateMetricConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/metric-configuration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMulticastGroupOutcome IoTWirelessClient::UpdateMulticastGroup(const UpdateMulticastGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMulticastGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMulticastGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMulticastGroup", "Required field: Id, is not set");
    return UpdateMulticastGroupOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMulticastGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMulticastGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMulticastGroupOutcome>(
    [&]()-> UpdateMulticastGroupOutcome {
      return UpdateMulticastGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/multicast-groups/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateNetworkAnalyzerConfigurationOutcome IoTWirelessClient::UpdateNetworkAnalyzerConfiguration(const UpdateNetworkAnalyzerConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateNetworkAnalyzerConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNetworkAnalyzerConfiguration", "Required field: ConfigurationName, is not set");
    return UpdateNetworkAnalyzerConfigurationOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateNetworkAnalyzerConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateNetworkAnalyzerConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateNetworkAnalyzerConfigurationOutcome>(
    [&]()-> UpdateNetworkAnalyzerConfigurationOutcome {
      return UpdateNetworkAnalyzerConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/network-analyzer-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetConfigurationName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdatePartnerAccountOutcome IoTWirelessClient::UpdatePartnerAccount(const UpdatePartnerAccountRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePartnerAccount);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdatePartnerAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePartnerAccount, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePartnerAccount",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePartnerAccountOutcome>(
    [&]()-> UpdatePartnerAccountOutcome {
      return UpdatePartnerAccountOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/partner-accounts/");
      resolvedEndpoint.AddPathSegment(request.GetPartnerAccountId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateResourceEventConfigurationOutcome IoTWirelessClient::UpdateResourceEventConfiguration(const UpdateResourceEventConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateResourceEventConfiguration);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateResourceEventConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateResourceEventConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateResourceEventConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateResourceEventConfigurationOutcome>(
    [&]()-> UpdateResourceEventConfigurationOutcome {
      return UpdateResourceEventConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/event-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateResourcePositionOutcome IoTWirelessClient::UpdateResourcePosition(const UpdateResourcePositionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateResourcePosition);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateResourcePosition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateResourcePosition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateResourcePosition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateResourcePositionOutcome>(
    [&]()-> UpdateResourcePositionOutcome {
      return UpdateResourcePositionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/resource-positions/");
      resolvedEndpoint.AddPathSegment(request.GetResourceIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWirelessDeviceOutcome IoTWirelessClient::UpdateWirelessDevice(const UpdateWirelessDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateWirelessDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWirelessDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWirelessDevice", "Required field: Id, is not set");
    return UpdateWirelessDeviceOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWirelessDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWirelessDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWirelessDeviceOutcome>(
    [&]()-> UpdateWirelessDeviceOutcome {
      return UpdateWirelessDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-devices/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWirelessDeviceImportTaskOutcome IoTWirelessClient::UpdateWirelessDeviceImportTask(const UpdateWirelessDeviceImportTaskRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateWirelessDeviceImportTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWirelessDeviceImportTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWirelessDeviceImportTask", "Required field: Id, is not set");
    return UpdateWirelessDeviceImportTaskOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWirelessDeviceImportTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWirelessDeviceImportTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWirelessDeviceImportTaskOutcome>(
    [&]()-> UpdateWirelessDeviceImportTaskOutcome {
      return UpdateWirelessDeviceImportTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless_device_import_task/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWirelessGatewayOutcome IoTWirelessClient::UpdateWirelessGateway(const UpdateWirelessGatewayRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateWirelessGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWirelessGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWirelessGateway", "Required field: Id, is not set");
    return UpdateWirelessGatewayOutcome(Aws::Client::AWSError<IoTWirelessErrors>(IoTWirelessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateWirelessGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWirelessGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWirelessGateway",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWirelessGatewayOutcome>(
    [&]()-> UpdateWirelessGatewayOutcome {
      return UpdateWirelessGatewayOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/wireless-gateways/");
      resolvedEndpoint.AddPathSegment(request.GetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


