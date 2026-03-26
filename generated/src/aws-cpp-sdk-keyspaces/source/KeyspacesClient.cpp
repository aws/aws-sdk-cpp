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
#include <aws/keyspaces/KeyspacesClient.h>
#include <aws/keyspaces/KeyspacesEndpointProvider.h>
#include <aws/keyspaces/KeyspacesErrorMarshaller.h>
#include <aws/keyspaces/model/CreateKeyspaceRequest.h>
#include <aws/keyspaces/model/CreateTableRequest.h>
#include <aws/keyspaces/model/CreateTypeRequest.h>
#include <aws/keyspaces/model/DeleteKeyspaceRequest.h>
#include <aws/keyspaces/model/DeleteTableRequest.h>
#include <aws/keyspaces/model/DeleteTypeRequest.h>
#include <aws/keyspaces/model/GetKeyspaceRequest.h>
#include <aws/keyspaces/model/GetTableAutoScalingSettingsRequest.h>
#include <aws/keyspaces/model/GetTableRequest.h>
#include <aws/keyspaces/model/GetTypeRequest.h>
#include <aws/keyspaces/model/ListKeyspacesRequest.h>
#include <aws/keyspaces/model/ListTablesRequest.h>
#include <aws/keyspaces/model/ListTagsForResourceRequest.h>
#include <aws/keyspaces/model/ListTypesRequest.h>
#include <aws/keyspaces/model/RestoreTableRequest.h>
#include <aws/keyspaces/model/TagResourceRequest.h>
#include <aws/keyspaces/model/UntagResourceRequest.h>
#include <aws/keyspaces/model/UpdateKeyspaceRequest.h>
#include <aws/keyspaces/model/UpdateTableRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Keyspaces;
using namespace Aws::Keyspaces::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Keyspaces {
const char SERVICE_NAME[] = "cassandra";
const char ALLOCATION_TAG[] = "KeyspacesClient";
}  // namespace Keyspaces
}  // namespace Aws
const char* KeyspacesClient::GetServiceName() { return SERVICE_NAME; }
const char* KeyspacesClient::GetAllocationTag() { return ALLOCATION_TAG; }

KeyspacesClient::KeyspacesClient(const Keyspaces::KeyspacesClientConfiguration& clientConfiguration,
                                 std::shared_ptr<KeyspacesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KeyspacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KeyspacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KeyspacesClient::KeyspacesClient(const AWSCredentials& credentials, std::shared_ptr<KeyspacesEndpointProviderBase> endpointProvider,
                                 const Keyspaces::KeyspacesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KeyspacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KeyspacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KeyspacesClient::KeyspacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<KeyspacesEndpointProviderBase> endpointProvider,
                                 const Keyspaces::KeyspacesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KeyspacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KeyspacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
KeyspacesClient::KeyspacesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KeyspacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KeyspacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KeyspacesClient::KeyspacesClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KeyspacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KeyspacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KeyspacesClient::KeyspacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KeyspacesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KeyspacesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
KeyspacesClient::~KeyspacesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<KeyspacesEndpointProviderBase>& KeyspacesClient::accessEndpointProvider() { return m_endpointProvider; }

void KeyspacesClient::init(const Keyspaces::KeyspacesClientConfiguration& config) {
  AWSClient::SetServiceClientName("Keyspaces");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cassandra");
}

void KeyspacesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
KeyspacesClient::InvokeOperationOutcome KeyspacesClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateKeyspaceOutcome KeyspacesClient::CreateKeyspace(const CreateKeyspaceRequest& request) const {
  return CreateKeyspaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTableOutcome KeyspacesClient::CreateTable(const CreateTableRequest& request) const {
  return CreateTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTypeOutcome KeyspacesClient::CreateType(const CreateTypeRequest& request) const {
  return CreateTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteKeyspaceOutcome KeyspacesClient::DeleteKeyspace(const DeleteKeyspaceRequest& request) const {
  return DeleteKeyspaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTableOutcome KeyspacesClient::DeleteTable(const DeleteTableRequest& request) const {
  return DeleteTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTypeOutcome KeyspacesClient::DeleteType(const DeleteTypeRequest& request) const {
  return DeleteTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetKeyspaceOutcome KeyspacesClient::GetKeyspace(const GetKeyspaceRequest& request) const {
  return GetKeyspaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableOutcome KeyspacesClient::GetTable(const GetTableRequest& request) const {
  return GetTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableAutoScalingSettingsOutcome KeyspacesClient::GetTableAutoScalingSettings(const GetTableAutoScalingSettingsRequest& request) const {
  return GetTableAutoScalingSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTypeOutcome KeyspacesClient::GetType(const GetTypeRequest& request) const {
  return GetTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListKeyspacesOutcome KeyspacesClient::ListKeyspaces(const ListKeyspacesRequest& request) const {
  return ListKeyspacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTablesOutcome KeyspacesClient::ListTables(const ListTablesRequest& request) const {
  return ListTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome KeyspacesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTypesOutcome KeyspacesClient::ListTypes(const ListTypesRequest& request) const {
  return ListTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreTableOutcome KeyspacesClient::RestoreTable(const RestoreTableRequest& request) const {
  return RestoreTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome KeyspacesClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome KeyspacesClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateKeyspaceOutcome KeyspacesClient::UpdateKeyspace(const UpdateKeyspaceRequest& request) const {
  return UpdateKeyspaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTableOutcome KeyspacesClient::UpdateTable(const UpdateTableRequest& request) const {
  return UpdateTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
