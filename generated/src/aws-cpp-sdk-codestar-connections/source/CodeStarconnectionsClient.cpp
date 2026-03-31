/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/CodeStarconnectionsClient.h>
#include <aws/codestar-connections/CodeStarconnectionsEndpointProvider.h>
#include <aws/codestar-connections/CodeStarconnectionsErrorMarshaller.h>
#include <aws/codestar-connections/model/CreateConnectionRequest.h>
#include <aws/codestar-connections/model/CreateHostRequest.h>
#include <aws/codestar-connections/model/CreateRepositoryLinkRequest.h>
#include <aws/codestar-connections/model/CreateSyncConfigurationRequest.h>
#include <aws/codestar-connections/model/DeleteConnectionRequest.h>
#include <aws/codestar-connections/model/DeleteHostRequest.h>
#include <aws/codestar-connections/model/DeleteRepositoryLinkRequest.h>
#include <aws/codestar-connections/model/DeleteSyncConfigurationRequest.h>
#include <aws/codestar-connections/model/GetConnectionRequest.h>
#include <aws/codestar-connections/model/GetHostRequest.h>
#include <aws/codestar-connections/model/GetRepositoryLinkRequest.h>
#include <aws/codestar-connections/model/GetRepositorySyncStatusRequest.h>
#include <aws/codestar-connections/model/GetResourceSyncStatusRequest.h>
#include <aws/codestar-connections/model/GetSyncBlockerSummaryRequest.h>
#include <aws/codestar-connections/model/GetSyncConfigurationRequest.h>
#include <aws/codestar-connections/model/ListConnectionsRequest.h>
#include <aws/codestar-connections/model/ListHostsRequest.h>
#include <aws/codestar-connections/model/ListRepositoryLinksRequest.h>
#include <aws/codestar-connections/model/ListRepositorySyncDefinitionsRequest.h>
#include <aws/codestar-connections/model/ListSyncConfigurationsRequest.h>
#include <aws/codestar-connections/model/ListTagsForResourceRequest.h>
#include <aws/codestar-connections/model/TagResourceRequest.h>
#include <aws/codestar-connections/model/UntagResourceRequest.h>
#include <aws/codestar-connections/model/UpdateHostRequest.h>
#include <aws/codestar-connections/model/UpdateRepositoryLinkRequest.h>
#include <aws/codestar-connections/model/UpdateSyncBlockerRequest.h>
#include <aws/codestar-connections/model/UpdateSyncConfigurationRequest.h>
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
using namespace Aws::CodeStarconnections;
using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodeStarconnections {
const char SERVICE_NAME[] = "codestar-connections";
const char ALLOCATION_TAG[] = "CodeStarconnectionsClient";
}  // namespace CodeStarconnections
}  // namespace Aws
const char* CodeStarconnectionsClient::GetServiceName() { return SERVICE_NAME; }
const char* CodeStarconnectionsClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodeStarconnectionsClient::CodeStarconnectionsClient(const CodeStarconnections::CodeStarconnectionsClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<CodeStarconnectionsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeStarconnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeStarconnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeStarconnectionsClient::CodeStarconnectionsClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<CodeStarconnectionsEndpointProviderBase> endpointProvider,
                                                     const CodeStarconnections::CodeStarconnectionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeStarconnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeStarconnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeStarconnectionsClient::CodeStarconnectionsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<CodeStarconnectionsEndpointProviderBase> endpointProvider,
                                                     const CodeStarconnections::CodeStarconnectionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeStarconnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CodeStarconnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodeStarconnectionsClient::CodeStarconnectionsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeStarconnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeStarconnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeStarconnectionsClient::CodeStarconnectionsClient(const AWSCredentials& credentials,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeStarconnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeStarconnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodeStarconnectionsClient::CodeStarconnectionsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodeStarconnectionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodeStarconnectionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodeStarconnectionsClient::~CodeStarconnectionsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodeStarconnectionsEndpointProviderBase>& CodeStarconnectionsClient::accessEndpointProvider() { return m_endpointProvider; }

void CodeStarconnectionsClient::init(const CodeStarconnections::CodeStarconnectionsClientConfiguration& config) {
  AWSClient::SetServiceClientName("CodeStar connections");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codestar-connections");
}

void CodeStarconnectionsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodeStarconnectionsClient::InvokeOperationOutcome CodeStarconnectionsClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

CreateConnectionOutcome CodeStarconnectionsClient::CreateConnection(const CreateConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectionOutcome(result.GetResultWithOwnership())
                            : CreateConnectionOutcome(std::move(result.GetError()));
}

CreateHostOutcome CodeStarconnectionsClient::CreateHost(const CreateHostRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHostOutcome(result.GetResultWithOwnership()) : CreateHostOutcome(std::move(result.GetError()));
}

CreateRepositoryLinkOutcome CodeStarconnectionsClient::CreateRepositoryLink(const CreateRepositoryLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRepositoryLinkOutcome(result.GetResultWithOwnership())
                            : CreateRepositoryLinkOutcome(std::move(result.GetError()));
}

CreateSyncConfigurationOutcome CodeStarconnectionsClient::CreateSyncConfiguration(const CreateSyncConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSyncConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateSyncConfigurationOutcome(std::move(result.GetError()));
}

DeleteConnectionOutcome CodeStarconnectionsClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteConnectionOutcome(std::move(result.GetError()));
}

DeleteHostOutcome CodeStarconnectionsClient::DeleteHost(const DeleteHostRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHostOutcome(result.GetResultWithOwnership()) : DeleteHostOutcome(std::move(result.GetError()));
}

DeleteRepositoryLinkOutcome CodeStarconnectionsClient::DeleteRepositoryLink(const DeleteRepositoryLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRepositoryLinkOutcome(result.GetResultWithOwnership())
                            : DeleteRepositoryLinkOutcome(std::move(result.GetError()));
}

DeleteSyncConfigurationOutcome CodeStarconnectionsClient::DeleteSyncConfiguration(const DeleteSyncConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSyncConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteSyncConfigurationOutcome(std::move(result.GetError()));
}

GetConnectionOutcome CodeStarconnectionsClient::GetConnection(const GetConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConnectionOutcome(result.GetResultWithOwnership()) : GetConnectionOutcome(std::move(result.GetError()));
}

GetHostOutcome CodeStarconnectionsClient::GetHost(const GetHostRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetHostOutcome(result.GetResultWithOwnership()) : GetHostOutcome(std::move(result.GetError()));
}

GetRepositoryLinkOutcome CodeStarconnectionsClient::GetRepositoryLink(const GetRepositoryLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRepositoryLinkOutcome(result.GetResultWithOwnership())
                            : GetRepositoryLinkOutcome(std::move(result.GetError()));
}

GetRepositorySyncStatusOutcome CodeStarconnectionsClient::GetRepositorySyncStatus(const GetRepositorySyncStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRepositorySyncStatusOutcome(result.GetResultWithOwnership())
                            : GetRepositorySyncStatusOutcome(std::move(result.GetError()));
}

GetResourceSyncStatusOutcome CodeStarconnectionsClient::GetResourceSyncStatus(const GetResourceSyncStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceSyncStatusOutcome(result.GetResultWithOwnership())
                            : GetResourceSyncStatusOutcome(std::move(result.GetError()));
}

GetSyncBlockerSummaryOutcome CodeStarconnectionsClient::GetSyncBlockerSummary(const GetSyncBlockerSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSyncBlockerSummaryOutcome(result.GetResultWithOwnership())
                            : GetSyncBlockerSummaryOutcome(std::move(result.GetError()));
}

GetSyncConfigurationOutcome CodeStarconnectionsClient::GetSyncConfiguration(const GetSyncConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSyncConfigurationOutcome(result.GetResultWithOwnership())
                            : GetSyncConfigurationOutcome(std::move(result.GetError()));
}

ListConnectionsOutcome CodeStarconnectionsClient::ListConnections(const ListConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectionsOutcome(result.GetResultWithOwnership())
                            : ListConnectionsOutcome(std::move(result.GetError()));
}

ListHostsOutcome CodeStarconnectionsClient::ListHosts(const ListHostsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListHostsOutcome(result.GetResultWithOwnership()) : ListHostsOutcome(std::move(result.GetError()));
}

ListRepositoryLinksOutcome CodeStarconnectionsClient::ListRepositoryLinks(const ListRepositoryLinksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRepositoryLinksOutcome(result.GetResultWithOwnership())
                            : ListRepositoryLinksOutcome(std::move(result.GetError()));
}

ListRepositorySyncDefinitionsOutcome CodeStarconnectionsClient::ListRepositorySyncDefinitions(
    const ListRepositorySyncDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRepositorySyncDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListRepositorySyncDefinitionsOutcome(std::move(result.GetError()));
}

ListSyncConfigurationsOutcome CodeStarconnectionsClient::ListSyncConfigurations(const ListSyncConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSyncConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListSyncConfigurationsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome CodeStarconnectionsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

TagResourceOutcome CodeStarconnectionsClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome CodeStarconnectionsClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateHostOutcome CodeStarconnectionsClient::UpdateHost(const UpdateHostRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateHostOutcome(result.GetResultWithOwnership()) : UpdateHostOutcome(std::move(result.GetError()));
}

UpdateRepositoryLinkOutcome CodeStarconnectionsClient::UpdateRepositoryLink(const UpdateRepositoryLinkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRepositoryLinkOutcome(result.GetResultWithOwnership())
                            : UpdateRepositoryLinkOutcome(std::move(result.GetError()));
}

UpdateSyncBlockerOutcome CodeStarconnectionsClient::UpdateSyncBlocker(const UpdateSyncBlockerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSyncBlockerOutcome(result.GetResultWithOwnership())
                            : UpdateSyncBlockerOutcome(std::move(result.GetError()));
}

UpdateSyncConfigurationOutcome CodeStarconnectionsClient::UpdateSyncConfiguration(const UpdateSyncConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSyncConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateSyncConfigurationOutcome(std::move(result.GetError()));
}
