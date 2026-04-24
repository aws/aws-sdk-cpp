/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/CodeConnectionsClient.h>
#include <aws/codeconnections/CodeConnectionsEndpointProvider.h>
#include <aws/codeconnections/CodeConnectionsErrorMarshaller.h>
#include <aws/codeconnections/model/CreateConnectionRequest.h>
#include <aws/codeconnections/model/CreateHostRequest.h>
#include <aws/codeconnections/model/CreateRepositoryLinkRequest.h>
#include <aws/codeconnections/model/CreateSyncConfigurationRequest.h>
#include <aws/codeconnections/model/DeleteConnectionRequest.h>
#include <aws/codeconnections/model/DeleteHostRequest.h>
#include <aws/codeconnections/model/DeleteRepositoryLinkRequest.h>
#include <aws/codeconnections/model/DeleteSyncConfigurationRequest.h>
#include <aws/codeconnections/model/GetConnectionRequest.h>
#include <aws/codeconnections/model/GetHostRequest.h>
#include <aws/codeconnections/model/GetRepositoryLinkRequest.h>
#include <aws/codeconnections/model/GetRepositorySyncStatusRequest.h>
#include <aws/codeconnections/model/GetResourceSyncStatusRequest.h>
#include <aws/codeconnections/model/GetSyncBlockerSummaryRequest.h>
#include <aws/codeconnections/model/GetSyncConfigurationRequest.h>
#include <aws/codeconnections/model/ListConnectionsRequest.h>
#include <aws/codeconnections/model/ListHostsRequest.h>
#include <aws/codeconnections/model/ListRepositoryLinksRequest.h>
#include <aws/codeconnections/model/ListRepositorySyncDefinitionsRequest.h>
#include <aws/codeconnections/model/ListSyncConfigurationsRequest.h>
#include <aws/codeconnections/model/ListTagsForResourceRequest.h>
#include <aws/codeconnections/model/TagResourceRequest.h>
#include <aws/codeconnections/model/UntagResourceRequest.h>
#include <aws/codeconnections/model/UpdateHostRequest.h>
#include <aws/codeconnections/model/UpdateRepositoryLinkRequest.h>
#include <aws/codeconnections/model/UpdateSyncBlockerRequest.h>
#include <aws/codeconnections/model/UpdateSyncConfigurationRequest.h>
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
using namespace Aws::CodeConnections;
using namespace Aws::CodeConnections::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodeConnections {
const char SERVICE_NAME[] = "codeconnections";
const char ALLOCATION_TAG[] = "CodeConnectionsClient";
}  // namespace CodeConnections
}  // namespace Aws
const char* CodeConnectionsClient::GetServiceName() { return SERVICE_NAME; }
const char* CodeConnectionsClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodeConnectionsClient::CodeConnectionsClient(const CodeConnections::CodeConnectionsClientConfiguration& clientConfiguration,
                                             std::shared_ptr<CodeConnectionsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeConnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeConnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeConnectionsClient::CodeConnectionsClient(const AWSCredentials& credentials,
                                             std::shared_ptr<CodeConnectionsEndpointProviderBase> endpointProvider,
                                             const CodeConnections::CodeConnectionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeConnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeConnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeConnectionsClient::CodeConnectionsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<CodeConnectionsEndpointProviderBase> endpointProvider,
                                             const CodeConnections::CodeConnectionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeConnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeConnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodeConnectionsClient::CodeConnectionsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeConnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeConnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeConnectionsClient::CodeConnectionsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeConnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeConnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeConnectionsClient::CodeConnectionsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeConnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeConnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodeConnectionsClient::~CodeConnectionsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodeConnectionsEndpointProviderBase>& CodeConnectionsClient::accessEndpointProvider() { return m_endpointProvider; }

void CodeConnectionsClient::init(const CodeConnections::CodeConnectionsClientConfiguration& config) {
  AWSClient::SetServiceClientName("CodeConnections");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codeconnections");
}

void CodeConnectionsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodeConnectionsClient::InvokeOperationOutcome CodeConnectionsClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateConnectionOutcome CodeConnectionsClient::CreateConnection(const CreateConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectionOutcome(result.GetResultWithOwnership())
                            : CreateConnectionOutcome(std::move(result.GetError()));
}

CreateHostOutcome CodeConnectionsClient::CreateHost(const CreateHostRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHostOutcome(result.GetResultWithOwnership()) : CreateHostOutcome(std::move(result.GetError()));
}

CreateRepositoryLinkOutcome CodeConnectionsClient::CreateRepositoryLink(const CreateRepositoryLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRepositoryLinkOutcome(result.GetResultWithOwnership())
                            : CreateRepositoryLinkOutcome(std::move(result.GetError()));
}

CreateSyncConfigurationOutcome CodeConnectionsClient::CreateSyncConfiguration(const CreateSyncConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSyncConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateSyncConfigurationOutcome(std::move(result.GetError()));
}

DeleteConnectionOutcome CodeConnectionsClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteConnectionOutcome(std::move(result.GetError()));
}

DeleteHostOutcome CodeConnectionsClient::DeleteHost(const DeleteHostRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHostOutcome(result.GetResultWithOwnership()) : DeleteHostOutcome(std::move(result.GetError()));
}

DeleteRepositoryLinkOutcome CodeConnectionsClient::DeleteRepositoryLink(const DeleteRepositoryLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRepositoryLinkOutcome(result.GetResultWithOwnership())
                            : DeleteRepositoryLinkOutcome(std::move(result.GetError()));
}

DeleteSyncConfigurationOutcome CodeConnectionsClient::DeleteSyncConfiguration(const DeleteSyncConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSyncConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteSyncConfigurationOutcome(std::move(result.GetError()));
}

GetConnectionOutcome CodeConnectionsClient::GetConnection(const GetConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConnectionOutcome(result.GetResultWithOwnership()) : GetConnectionOutcome(std::move(result.GetError()));
}

GetHostOutcome CodeConnectionsClient::GetHost(const GetHostRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetHostOutcome(result.GetResultWithOwnership()) : GetHostOutcome(std::move(result.GetError()));
}

GetRepositoryLinkOutcome CodeConnectionsClient::GetRepositoryLink(const GetRepositoryLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRepositoryLinkOutcome(result.GetResultWithOwnership())
                            : GetRepositoryLinkOutcome(std::move(result.GetError()));
}

GetRepositorySyncStatusOutcome CodeConnectionsClient::GetRepositorySyncStatus(const GetRepositorySyncStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRepositorySyncStatusOutcome(result.GetResultWithOwnership())
                            : GetRepositorySyncStatusOutcome(std::move(result.GetError()));
}

GetResourceSyncStatusOutcome CodeConnectionsClient::GetResourceSyncStatus(const GetResourceSyncStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceSyncStatusOutcome(result.GetResultWithOwnership())
                            : GetResourceSyncStatusOutcome(std::move(result.GetError()));
}

GetSyncBlockerSummaryOutcome CodeConnectionsClient::GetSyncBlockerSummary(const GetSyncBlockerSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSyncBlockerSummaryOutcome(result.GetResultWithOwnership())
                            : GetSyncBlockerSummaryOutcome(std::move(result.GetError()));
}

GetSyncConfigurationOutcome CodeConnectionsClient::GetSyncConfiguration(const GetSyncConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSyncConfigurationOutcome(result.GetResultWithOwnership())
                            : GetSyncConfigurationOutcome(std::move(result.GetError()));
}

ListConnectionsOutcome CodeConnectionsClient::ListConnections(const ListConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectionsOutcome(result.GetResultWithOwnership())
                            : ListConnectionsOutcome(std::move(result.GetError()));
}

ListHostsOutcome CodeConnectionsClient::ListHosts(const ListHostsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListHostsOutcome(result.GetResultWithOwnership()) : ListHostsOutcome(std::move(result.GetError()));
}

ListRepositoryLinksOutcome CodeConnectionsClient::ListRepositoryLinks(const ListRepositoryLinksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRepositoryLinksOutcome(result.GetResultWithOwnership())
                            : ListRepositoryLinksOutcome(std::move(result.GetError()));
}

ListRepositorySyncDefinitionsOutcome CodeConnectionsClient::ListRepositorySyncDefinitions(
    const ListRepositorySyncDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRepositorySyncDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListRepositorySyncDefinitionsOutcome(std::move(result.GetError()));
}

ListSyncConfigurationsOutcome CodeConnectionsClient::ListSyncConfigurations(const ListSyncConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSyncConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListSyncConfigurationsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome CodeConnectionsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

TagResourceOutcome CodeConnectionsClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome CodeConnectionsClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateHostOutcome CodeConnectionsClient::UpdateHost(const UpdateHostRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateHostOutcome(result.GetResultWithOwnership()) : UpdateHostOutcome(std::move(result.GetError()));
}

UpdateRepositoryLinkOutcome CodeConnectionsClient::UpdateRepositoryLink(const UpdateRepositoryLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRepositoryLinkOutcome(result.GetResultWithOwnership())
                            : UpdateRepositoryLinkOutcome(std::move(result.GetError()));
}

UpdateSyncBlockerOutcome CodeConnectionsClient::UpdateSyncBlocker(const UpdateSyncBlockerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSyncBlockerOutcome(result.GetResultWithOwnership())
                            : UpdateSyncBlockerOutcome(std::move(result.GetError()));
}

UpdateSyncConfigurationOutcome CodeConnectionsClient::UpdateSyncConfiguration(const UpdateSyncConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSyncConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateSyncConfigurationOutcome(std::move(result.GetError()));
}
