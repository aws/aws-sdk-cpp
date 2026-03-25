/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/AppRunnerClient.h>
#include <aws/apprunner/AppRunnerEndpointProvider.h>
#include <aws/apprunner/AppRunnerErrorMarshaller.h>
#include <aws/apprunner/model/AssociateCustomDomainRequest.h>
#include <aws/apprunner/model/CreateAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/CreateConnectionRequest.h>
#include <aws/apprunner/model/CreateObservabilityConfigurationRequest.h>
#include <aws/apprunner/model/CreateServiceRequest.h>
#include <aws/apprunner/model/CreateVpcConnectorRequest.h>
#include <aws/apprunner/model/CreateVpcIngressConnectionRequest.h>
#include <aws/apprunner/model/DeleteAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/DeleteConnectionRequest.h>
#include <aws/apprunner/model/DeleteObservabilityConfigurationRequest.h>
#include <aws/apprunner/model/DeleteServiceRequest.h>
#include <aws/apprunner/model/DeleteVpcConnectorRequest.h>
#include <aws/apprunner/model/DeleteVpcIngressConnectionRequest.h>
#include <aws/apprunner/model/DescribeAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/DescribeCustomDomainsRequest.h>
#include <aws/apprunner/model/DescribeObservabilityConfigurationRequest.h>
#include <aws/apprunner/model/DescribeServiceRequest.h>
#include <aws/apprunner/model/DescribeVpcConnectorRequest.h>
#include <aws/apprunner/model/DescribeVpcIngressConnectionRequest.h>
#include <aws/apprunner/model/DisassociateCustomDomainRequest.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsRequest.h>
#include <aws/apprunner/model/ListConnectionsRequest.h>
#include <aws/apprunner/model/ListObservabilityConfigurationsRequest.h>
#include <aws/apprunner/model/ListOperationsRequest.h>
#include <aws/apprunner/model/ListServicesForAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/ListServicesRequest.h>
#include <aws/apprunner/model/ListTagsForResourceRequest.h>
#include <aws/apprunner/model/ListVpcConnectorsRequest.h>
#include <aws/apprunner/model/ListVpcIngressConnectionsRequest.h>
#include <aws/apprunner/model/PauseServiceRequest.h>
#include <aws/apprunner/model/ResumeServiceRequest.h>
#include <aws/apprunner/model/StartDeploymentRequest.h>
#include <aws/apprunner/model/TagResourceRequest.h>
#include <aws/apprunner/model/UntagResourceRequest.h>
#include <aws/apprunner/model/UpdateDefaultAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/UpdateServiceRequest.h>
#include <aws/apprunner/model/UpdateVpcIngressConnectionRequest.h>
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
using namespace Aws::AppRunner;
using namespace Aws::AppRunner::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AppRunner {
const char SERVICE_NAME[] = "apprunner";
const char ALLOCATION_TAG[] = "AppRunnerClient";
}  // namespace AppRunner
}  // namespace Aws
const char* AppRunnerClient::GetServiceName() { return SERVICE_NAME; }
const char* AppRunnerClient::GetAllocationTag() { return ALLOCATION_TAG; }

AppRunnerClient::AppRunnerClient(const AppRunner::AppRunnerClientConfiguration& clientConfiguration,
                                 std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const AWSCredentials& credentials, std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider,
                                 const AppRunner::AppRunnerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider,
                                 const AppRunner::AppRunnerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AppRunnerClient::AppRunnerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AppRunnerClient::~AppRunnerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AppRunnerEndpointProviderBase>& AppRunnerClient::accessEndpointProvider() { return m_endpointProvider; }

void AppRunnerClient::init(const AppRunner::AppRunnerClientConfiguration& config) {
  AWSClient::SetServiceClientName("AppRunner");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "apprunner");
}

void AppRunnerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AppRunnerClient::InvokeOperationOutcome AppRunnerClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateCustomDomainOutcome AppRunnerClient::AssociateCustomDomain(const AssociateCustomDomainRequest& request) const {
  return AssociateCustomDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAutoScalingConfigurationOutcome AppRunnerClient::CreateAutoScalingConfiguration(
    const CreateAutoScalingConfigurationRequest& request) const {
  return CreateAutoScalingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectionOutcome AppRunnerClient::CreateConnection(const CreateConnectionRequest& request) const {
  return CreateConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateObservabilityConfigurationOutcome AppRunnerClient::CreateObservabilityConfiguration(
    const CreateObservabilityConfigurationRequest& request) const {
  return CreateObservabilityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceOutcome AppRunnerClient::CreateService(const CreateServiceRequest& request) const {
  return CreateServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcConnectorOutcome AppRunnerClient::CreateVpcConnector(const CreateVpcConnectorRequest& request) const {
  return CreateVpcConnectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcIngressConnectionOutcome AppRunnerClient::CreateVpcIngressConnection(const CreateVpcIngressConnectionRequest& request) const {
  return CreateVpcIngressConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAutoScalingConfigurationOutcome AppRunnerClient::DeleteAutoScalingConfiguration(
    const DeleteAutoScalingConfigurationRequest& request) const {
  return DeleteAutoScalingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectionOutcome AppRunnerClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  return DeleteConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteObservabilityConfigurationOutcome AppRunnerClient::DeleteObservabilityConfiguration(
    const DeleteObservabilityConfigurationRequest& request) const {
  return DeleteObservabilityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteServiceOutcome AppRunnerClient::DeleteService(const DeleteServiceRequest& request) const {
  return DeleteServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVpcConnectorOutcome AppRunnerClient::DeleteVpcConnector(const DeleteVpcConnectorRequest& request) const {
  return DeleteVpcConnectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVpcIngressConnectionOutcome AppRunnerClient::DeleteVpcIngressConnection(const DeleteVpcIngressConnectionRequest& request) const {
  return DeleteVpcIngressConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAutoScalingConfigurationOutcome AppRunnerClient::DescribeAutoScalingConfiguration(
    const DescribeAutoScalingConfigurationRequest& request) const {
  return DescribeAutoScalingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCustomDomainsOutcome AppRunnerClient::DescribeCustomDomains(const DescribeCustomDomainsRequest& request) const {
  return DescribeCustomDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeObservabilityConfigurationOutcome AppRunnerClient::DescribeObservabilityConfiguration(
    const DescribeObservabilityConfigurationRequest& request) const {
  return DescribeObservabilityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeServiceOutcome AppRunnerClient::DescribeService(const DescribeServiceRequest& request) const {
  return DescribeServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcConnectorOutcome AppRunnerClient::DescribeVpcConnector(const DescribeVpcConnectorRequest& request) const {
  return DescribeVpcConnectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcIngressConnectionOutcome AppRunnerClient::DescribeVpcIngressConnection(
    const DescribeVpcIngressConnectionRequest& request) const {
  return DescribeVpcIngressConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateCustomDomainOutcome AppRunnerClient::DisassociateCustomDomain(const DisassociateCustomDomainRequest& request) const {
  return DisassociateCustomDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAutoScalingConfigurationsOutcome AppRunnerClient::ListAutoScalingConfigurations(
    const ListAutoScalingConfigurationsRequest& request) const {
  return ListAutoScalingConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConnectionsOutcome AppRunnerClient::ListConnections(const ListConnectionsRequest& request) const {
  return ListConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListObservabilityConfigurationsOutcome AppRunnerClient::ListObservabilityConfigurations(
    const ListObservabilityConfigurationsRequest& request) const {
  return ListObservabilityConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOperationsOutcome AppRunnerClient::ListOperations(const ListOperationsRequest& request) const {
  return ListOperationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServicesOutcome AppRunnerClient::ListServices(const ListServicesRequest& request) const {
  return ListServicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServicesForAutoScalingConfigurationOutcome AppRunnerClient::ListServicesForAutoScalingConfiguration(
    const ListServicesForAutoScalingConfigurationRequest& request) const {
  return ListServicesForAutoScalingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome AppRunnerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVpcConnectorsOutcome AppRunnerClient::ListVpcConnectors(const ListVpcConnectorsRequest& request) const {
  return ListVpcConnectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVpcIngressConnectionsOutcome AppRunnerClient::ListVpcIngressConnections(const ListVpcIngressConnectionsRequest& request) const {
  return ListVpcIngressConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PauseServiceOutcome AppRunnerClient::PauseService(const PauseServiceRequest& request) const {
  return PauseServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeServiceOutcome AppRunnerClient::ResumeService(const ResumeServiceRequest& request) const {
  return ResumeServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDeploymentOutcome AppRunnerClient::StartDeployment(const StartDeploymentRequest& request) const {
  return StartDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome AppRunnerClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AppRunnerClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDefaultAutoScalingConfigurationOutcome AppRunnerClient::UpdateDefaultAutoScalingConfiguration(
    const UpdateDefaultAutoScalingConfigurationRequest& request) const {
  return UpdateDefaultAutoScalingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServiceOutcome AppRunnerClient::UpdateService(const UpdateServiceRequest& request) const {
  return UpdateServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVpcIngressConnectionOutcome AppRunnerClient::UpdateVpcIngressConnection(const UpdateVpcIngressConnectionRequest& request) const {
  return UpdateVpcIngressConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
