/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/BackupGatewayClient.h>
#include <aws/backup-gateway/BackupGatewayEndpointProvider.h>
#include <aws/backup-gateway/BackupGatewayErrorMarshaller.h>
#include <aws/backup-gateway/model/AssociateGatewayToServerRequest.h>
#include <aws/backup-gateway/model/CreateGatewayRequest.h>
#include <aws/backup-gateway/model/DeleteGatewayRequest.h>
#include <aws/backup-gateway/model/DeleteHypervisorRequest.h>
#include <aws/backup-gateway/model/DisassociateGatewayFromServerRequest.h>
#include <aws/backup-gateway/model/GetBandwidthRateLimitScheduleRequest.h>
#include <aws/backup-gateway/model/GetGatewayRequest.h>
#include <aws/backup-gateway/model/GetHypervisorPropertyMappingsRequest.h>
#include <aws/backup-gateway/model/GetHypervisorRequest.h>
#include <aws/backup-gateway/model/GetVirtualMachineRequest.h>
#include <aws/backup-gateway/model/ImportHypervisorConfigurationRequest.h>
#include <aws/backup-gateway/model/ListGatewaysRequest.h>
#include <aws/backup-gateway/model/ListHypervisorsRequest.h>
#include <aws/backup-gateway/model/ListTagsForResourceRequest.h>
#include <aws/backup-gateway/model/ListVirtualMachinesRequest.h>
#include <aws/backup-gateway/model/PutBandwidthRateLimitScheduleRequest.h>
#include <aws/backup-gateway/model/PutHypervisorPropertyMappingsRequest.h>
#include <aws/backup-gateway/model/PutMaintenanceStartTimeRequest.h>
#include <aws/backup-gateway/model/StartVirtualMachinesMetadataSyncRequest.h>
#include <aws/backup-gateway/model/TagResourceRequest.h>
#include <aws/backup-gateway/model/TestHypervisorConfigurationRequest.h>
#include <aws/backup-gateway/model/UntagResourceRequest.h>
#include <aws/backup-gateway/model/UpdateGatewayInformationRequest.h>
#include <aws/backup-gateway/model/UpdateGatewaySoftwareNowRequest.h>
#include <aws/backup-gateway/model/UpdateHypervisorRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BackupGateway;
using namespace Aws::BackupGateway::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BackupGateway {
const char SERVICE_NAME[] = "backup-gateway";
const char ALLOCATION_TAG[] = "BackupGatewayClient";
}  // namespace BackupGateway
}  // namespace Aws
const char* BackupGatewayClient::GetServiceName() { return SERVICE_NAME; }
const char* BackupGatewayClient::GetAllocationTag() { return ALLOCATION_TAG; }

BackupGatewayClient::BackupGatewayClient(const BackupGateway::BackupGatewayClientConfiguration& clientConfiguration,
                                         std::shared_ptr<BackupGatewayEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupGatewayClient::BackupGatewayClient(const AWSCredentials& credentials,
                                         std::shared_ptr<BackupGatewayEndpointProviderBase> endpointProvider,
                                         const BackupGateway::BackupGatewayClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupGatewayClient::BackupGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<BackupGatewayEndpointProviderBase> endpointProvider,
                                         const BackupGateway::BackupGatewayClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
BackupGatewayClient::BackupGatewayClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BackupGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupGatewayClient::BackupGatewayClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BackupGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupGatewayClient::BackupGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupGatewayErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BackupGatewayEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
BackupGatewayClient::~BackupGatewayClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BackupGatewayEndpointProviderBase>& BackupGatewayClient::accessEndpointProvider() { return m_endpointProvider; }

void BackupGatewayClient::init(const BackupGateway::BackupGatewayClientConfiguration& config) {
  AWSClient::SetServiceClientName("Backup Gateway");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "backup-gateway");
}

void BackupGatewayClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BackupGatewayClient::InvokeOperationOutcome BackupGatewayClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateGatewayToServerOutcome BackupGatewayClient::AssociateGatewayToServer(const AssociateGatewayToServerRequest& request) const {
  return AssociateGatewayToServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGatewayOutcome BackupGatewayClient::CreateGateway(const CreateGatewayRequest& request) const {
  return CreateGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGatewayOutcome BackupGatewayClient::DeleteGateway(const DeleteGatewayRequest& request) const {
  return DeleteGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteHypervisorOutcome BackupGatewayClient::DeleteHypervisor(const DeleteHypervisorRequest& request) const {
  return DeleteHypervisorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateGatewayFromServerOutcome BackupGatewayClient::DisassociateGatewayFromServer(
    const DisassociateGatewayFromServerRequest& request) const {
  return DisassociateGatewayFromServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBandwidthRateLimitScheduleOutcome BackupGatewayClient::GetBandwidthRateLimitSchedule(
    const GetBandwidthRateLimitScheduleRequest& request) const {
  return GetBandwidthRateLimitScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGatewayOutcome BackupGatewayClient::GetGateway(const GetGatewayRequest& request) const {
  return GetGatewayOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetHypervisorOutcome BackupGatewayClient::GetHypervisor(const GetHypervisorRequest& request) const {
  return GetHypervisorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetHypervisorPropertyMappingsOutcome BackupGatewayClient::GetHypervisorPropertyMappings(
    const GetHypervisorPropertyMappingsRequest& request) const {
  return GetHypervisorPropertyMappingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetVirtualMachineOutcome BackupGatewayClient::GetVirtualMachine(const GetVirtualMachineRequest& request) const {
  return GetVirtualMachineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportHypervisorConfigurationOutcome BackupGatewayClient::ImportHypervisorConfiguration(
    const ImportHypervisorConfigurationRequest& request) const {
  return ImportHypervisorConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGatewaysOutcome BackupGatewayClient::ListGateways(const ListGatewaysRequest& request) const {
  return ListGatewaysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHypervisorsOutcome BackupGatewayClient::ListHypervisors(const ListHypervisorsRequest& request) const {
  return ListHypervisorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome BackupGatewayClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVirtualMachinesOutcome BackupGatewayClient::ListVirtualMachines(const ListVirtualMachinesRequest& request) const {
  return ListVirtualMachinesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutBandwidthRateLimitScheduleOutcome BackupGatewayClient::PutBandwidthRateLimitSchedule(
    const PutBandwidthRateLimitScheduleRequest& request) const {
  return PutBandwidthRateLimitScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutHypervisorPropertyMappingsOutcome BackupGatewayClient::PutHypervisorPropertyMappings(
    const PutHypervisorPropertyMappingsRequest& request) const {
  return PutHypervisorPropertyMappingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutMaintenanceStartTimeOutcome BackupGatewayClient::PutMaintenanceStartTime(const PutMaintenanceStartTimeRequest& request) const {
  return PutMaintenanceStartTimeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartVirtualMachinesMetadataSyncOutcome BackupGatewayClient::StartVirtualMachinesMetadataSync(
    const StartVirtualMachinesMetadataSyncRequest& request) const {
  return StartVirtualMachinesMetadataSyncOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome BackupGatewayClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestHypervisorConfigurationOutcome BackupGatewayClient::TestHypervisorConfiguration(
    const TestHypervisorConfigurationRequest& request) const {
  return TestHypervisorConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome BackupGatewayClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGatewayInformationOutcome BackupGatewayClient::UpdateGatewayInformation(const UpdateGatewayInformationRequest& request) const {
  return UpdateGatewayInformationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGatewaySoftwareNowOutcome BackupGatewayClient::UpdateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest& request) const {
  return UpdateGatewaySoftwareNowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHypervisorOutcome BackupGatewayClient::UpdateHypervisor(const UpdateHypervisorRequest& request) const {
  return UpdateHypervisorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
