/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/MigrationHubClient.h>
#include <aws/AWSMigrationHub/MigrationHubEndpointProvider.h>
#include <aws/AWSMigrationHub/MigrationHubErrorMarshaller.h>
#include <aws/AWSMigrationHub/model/AssociateCreatedArtifactRequest.h>
#include <aws/AWSMigrationHub/model/AssociateDiscoveredResourceRequest.h>
#include <aws/AWSMigrationHub/model/AssociateSourceResourceRequest.h>
#include <aws/AWSMigrationHub/model/CreateProgressUpdateStreamRequest.h>
#include <aws/AWSMigrationHub/model/DeleteProgressUpdateStreamRequest.h>
#include <aws/AWSMigrationHub/model/DescribeApplicationStateRequest.h>
#include <aws/AWSMigrationHub/model/DescribeMigrationTaskRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateCreatedArtifactRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateDiscoveredResourceRequest.h>
#include <aws/AWSMigrationHub/model/DisassociateSourceResourceRequest.h>
#include <aws/AWSMigrationHub/model/ImportMigrationTaskRequest.h>
#include <aws/AWSMigrationHub/model/ListApplicationStatesRequest.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsRequest.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesRequest.h>
#include <aws/AWSMigrationHub/model/ListMigrationTaskUpdatesRequest.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksRequest.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsRequest.h>
#include <aws/AWSMigrationHub/model/ListSourceResourcesRequest.h>
#include <aws/AWSMigrationHub/model/NotifyApplicationStateRequest.h>
#include <aws/AWSMigrationHub/model/NotifyMigrationTaskStateRequest.h>
#include <aws/AWSMigrationHub/model/PutResourceAttributesRequest.h>
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
using namespace Aws::MigrationHub;
using namespace Aws::MigrationHub::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MigrationHub {
const char SERVICE_NAME[] = "mgh";
const char ALLOCATION_TAG[] = "MigrationHubClient";
}  // namespace MigrationHub
}  // namespace Aws
const char* MigrationHubClient::GetServiceName() { return SERVICE_NAME; }
const char* MigrationHubClient::GetAllocationTag() { return ALLOCATION_TAG; }

MigrationHubClient::MigrationHubClient(const MigrationHub::MigrationHubClientConfiguration& clientConfiguration,
                                       std::shared_ptr<MigrationHubEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MigrationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const AWSCredentials& credentials,
                                       std::shared_ptr<MigrationHubEndpointProviderBase> endpointProvider,
                                       const MigrationHub::MigrationHubClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MigrationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<MigrationHubEndpointProviderBase> endpointProvider,
                                       const MigrationHub::MigrationHubClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MigrationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MigrationHubClient::MigrationHubClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubClient::MigrationHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MigrationHubClient::~MigrationHubClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MigrationHubEndpointProviderBase>& MigrationHubClient::accessEndpointProvider() { return m_endpointProvider; }

void MigrationHubClient::init(const MigrationHub::MigrationHubClientConfiguration& config) {
  AWSClient::SetServiceClientName("Migration Hub");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mgh");
}

void MigrationHubClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MigrationHubClient::InvokeOperationOutcome MigrationHubClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateCreatedArtifactOutcome MigrationHubClient::AssociateCreatedArtifact(const AssociateCreatedArtifactRequest& request) const {
  return AssociateCreatedArtifactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateDiscoveredResourceOutcome MigrationHubClient::AssociateDiscoveredResource(
    const AssociateDiscoveredResourceRequest& request) const {
  return AssociateDiscoveredResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateSourceResourceOutcome MigrationHubClient::AssociateSourceResource(const AssociateSourceResourceRequest& request) const {
  return AssociateSourceResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProgressUpdateStreamOutcome MigrationHubClient::CreateProgressUpdateStream(const CreateProgressUpdateStreamRequest& request) const {
  return CreateProgressUpdateStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProgressUpdateStreamOutcome MigrationHubClient::DeleteProgressUpdateStream(const DeleteProgressUpdateStreamRequest& request) const {
  return DeleteProgressUpdateStreamOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationStateOutcome MigrationHubClient::DescribeApplicationState(const DescribeApplicationStateRequest& request) const {
  return DescribeApplicationStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMigrationTaskOutcome MigrationHubClient::DescribeMigrationTask(const DescribeMigrationTaskRequest& request) const {
  return DescribeMigrationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateCreatedArtifactOutcome MigrationHubClient::DisassociateCreatedArtifact(
    const DisassociateCreatedArtifactRequest& request) const {
  return DisassociateCreatedArtifactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateDiscoveredResourceOutcome MigrationHubClient::DisassociateDiscoveredResource(
    const DisassociateDiscoveredResourceRequest& request) const {
  return DisassociateDiscoveredResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSourceResourceOutcome MigrationHubClient::DisassociateSourceResource(const DisassociateSourceResourceRequest& request) const {
  return DisassociateSourceResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportMigrationTaskOutcome MigrationHubClient::ImportMigrationTask(const ImportMigrationTaskRequest& request) const {
  return ImportMigrationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationStatesOutcome MigrationHubClient::ListApplicationStates(const ListApplicationStatesRequest& request) const {
  return ListApplicationStatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCreatedArtifactsOutcome MigrationHubClient::ListCreatedArtifacts(const ListCreatedArtifactsRequest& request) const {
  return ListCreatedArtifactsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDiscoveredResourcesOutcome MigrationHubClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest& request) const {
  return ListDiscoveredResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMigrationTaskUpdatesOutcome MigrationHubClient::ListMigrationTaskUpdates(const ListMigrationTaskUpdatesRequest& request) const {
  return ListMigrationTaskUpdatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMigrationTasksOutcome MigrationHubClient::ListMigrationTasks(const ListMigrationTasksRequest& request) const {
  return ListMigrationTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProgressUpdateStreamsOutcome MigrationHubClient::ListProgressUpdateStreams(const ListProgressUpdateStreamsRequest& request) const {
  return ListProgressUpdateStreamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSourceResourcesOutcome MigrationHubClient::ListSourceResources(const ListSourceResourcesRequest& request) const {
  return ListSourceResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

NotifyApplicationStateOutcome MigrationHubClient::NotifyApplicationState(const NotifyApplicationStateRequest& request) const {
  return NotifyApplicationStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

NotifyMigrationTaskStateOutcome MigrationHubClient::NotifyMigrationTaskState(const NotifyMigrationTaskStateRequest& request) const {
  return NotifyMigrationTaskStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourceAttributesOutcome MigrationHubClient::PutResourceAttributes(const PutResourceAttributesRequest& request) const {
  return PutResourceAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
