/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/BCMDataExportsClient.h>
#include <aws/bcm-data-exports/BCMDataExportsEndpointProvider.h>
#include <aws/bcm-data-exports/BCMDataExportsErrorMarshaller.h>
#include <aws/bcm-data-exports/model/CreateExportRequest.h>
#include <aws/bcm-data-exports/model/DeleteExportRequest.h>
#include <aws/bcm-data-exports/model/GetExecutionRequest.h>
#include <aws/bcm-data-exports/model/GetExportRequest.h>
#include <aws/bcm-data-exports/model/GetTableRequest.h>
#include <aws/bcm-data-exports/model/ListExecutionsRequest.h>
#include <aws/bcm-data-exports/model/ListExportsRequest.h>
#include <aws/bcm-data-exports/model/ListTablesRequest.h>
#include <aws/bcm-data-exports/model/ListTagsForResourceRequest.h>
#include <aws/bcm-data-exports/model/TagResourceRequest.h>
#include <aws/bcm-data-exports/model/UntagResourceRequest.h>
#include <aws/bcm-data-exports/model/UpdateExportRequest.h>
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
using namespace Aws::BCMDataExports;
using namespace Aws::BCMDataExports::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BCMDataExports {
const char SERVICE_NAME[] = "bcm-data-exports";
const char ALLOCATION_TAG[] = "BCMDataExportsClient";
}  // namespace BCMDataExports
}  // namespace Aws
const char* BCMDataExportsClient::GetServiceName() { return SERVICE_NAME; }
const char* BCMDataExportsClient::GetAllocationTag() { return ALLOCATION_TAG; }

BCMDataExportsClient::BCMDataExportsClient(const BCMDataExports::BCMDataExportsClientConfiguration& clientConfiguration,
                                           std::shared_ptr<BCMDataExportsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMDataExportsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BCMDataExportsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BCMDataExportsClient::BCMDataExportsClient(const AWSCredentials& credentials,
                                           std::shared_ptr<BCMDataExportsEndpointProviderBase> endpointProvider,
                                           const BCMDataExports::BCMDataExportsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMDataExportsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BCMDataExportsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BCMDataExportsClient::BCMDataExportsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<BCMDataExportsEndpointProviderBase> endpointProvider,
                                           const BCMDataExports::BCMDataExportsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMDataExportsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BCMDataExportsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
BCMDataExportsClient::BCMDataExportsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMDataExportsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BCMDataExportsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BCMDataExportsClient::BCMDataExportsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMDataExportsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BCMDataExportsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BCMDataExportsClient::BCMDataExportsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMDataExportsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BCMDataExportsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
BCMDataExportsClient::~BCMDataExportsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BCMDataExportsEndpointProviderBase>& BCMDataExportsClient::accessEndpointProvider() { return m_endpointProvider; }

void BCMDataExportsClient::init(const BCMDataExports::BCMDataExportsClientConfiguration& config) {
  AWSClient::SetServiceClientName("BCM Data Exports");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "bcm-data-exports");
}

void BCMDataExportsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BCMDataExportsClient::InvokeOperationOutcome BCMDataExportsClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateExportOutcome BCMDataExportsClient::CreateExport(const CreateExportRequest& request) const {
  return CreateExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteExportOutcome BCMDataExportsClient::DeleteExport(const DeleteExportRequest& request) const {
  return DeleteExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetExecutionOutcome BCMDataExportsClient::GetExecution(const GetExecutionRequest& request) const {
  return GetExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetExportOutcome BCMDataExportsClient::GetExport(const GetExportRequest& request) const {
  return GetExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableOutcome BCMDataExportsClient::GetTable(const GetTableRequest& request) const {
  return GetTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExecutionsOutcome BCMDataExportsClient::ListExecutions(const ListExecutionsRequest& request) const {
  return ListExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExportsOutcome BCMDataExportsClient::ListExports(const ListExportsRequest& request) const {
  return ListExportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTablesOutcome BCMDataExportsClient::ListTables(const ListTablesRequest& request) const {
  return ListTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome BCMDataExportsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome BCMDataExportsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome BCMDataExportsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateExportOutcome BCMDataExportsClient::UpdateExport(const UpdateExportRequest& request) const {
  return UpdateExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
