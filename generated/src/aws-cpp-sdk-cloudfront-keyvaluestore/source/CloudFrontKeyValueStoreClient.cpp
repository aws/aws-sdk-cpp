/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreClient.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreEndpointProvider.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreErrorMarshaller.h>
#include <aws/cloudfront-keyvaluestore/model/DeleteKeyRequest.h>
#include <aws/cloudfront-keyvaluestore/model/DescribeKeyValueStoreRequest.h>
#include <aws/cloudfront-keyvaluestore/model/GetKeyRequest.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysRequest.h>
#include <aws/cloudfront-keyvaluestore/model/PutKeyRequest.h>
#include <aws/cloudfront-keyvaluestore/model/UpdateKeysRequest.h>
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
using namespace Aws::CloudFrontKeyValueStore;
using namespace Aws::CloudFrontKeyValueStore::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudFrontKeyValueStore {
const char SERVICE_NAME[] = "cloudfront-keyvaluestore";
const char ALLOCATION_TAG[] = "CloudFrontKeyValueStoreClient";
}  // namespace CloudFrontKeyValueStore
}  // namespace Aws
const char* CloudFrontKeyValueStoreClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudFrontKeyValueStoreClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudFrontKeyValueStoreClient::CloudFrontKeyValueStoreClient(
    const CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration& clientConfiguration,
    std::shared_ptr<CloudFrontKeyValueStoreEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontKeyValueStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudFrontKeyValueStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFrontKeyValueStoreClient::CloudFrontKeyValueStoreClient(
    const AWSCredentials& credentials, std::shared_ptr<CloudFrontKeyValueStoreEndpointProviderBase> endpointProvider,
    const CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontKeyValueStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudFrontKeyValueStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFrontKeyValueStoreClient::CloudFrontKeyValueStoreClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<CloudFrontKeyValueStoreEndpointProviderBase> endpointProvider,
    const CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontKeyValueStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudFrontKeyValueStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudFrontKeyValueStoreClient::CloudFrontKeyValueStoreClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontKeyValueStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudFrontKeyValueStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFrontKeyValueStoreClient::CloudFrontKeyValueStoreClient(const AWSCredentials& credentials,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontKeyValueStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudFrontKeyValueStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudFrontKeyValueStoreClient::CloudFrontKeyValueStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudFrontKeyValueStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudFrontKeyValueStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudFrontKeyValueStoreClient::~CloudFrontKeyValueStoreClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudFrontKeyValueStoreEndpointProviderBase>& CloudFrontKeyValueStoreClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void CloudFrontKeyValueStoreClient::init(const CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudFront KeyValueStore");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cloudfront-keyvaluestore");
}

void CloudFrontKeyValueStoreClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudFrontKeyValueStoreClient::InvokeOperationOutcome CloudFrontKeyValueStoreClient::InvokeServiceOperation(
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

DeleteKeyOutcome CloudFrontKeyValueStoreClient::DeleteKey(const DeleteKeyRequest& request) const {
  if (!request.KvsARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKey", "Required field: KvsARN, is not set");
    return DeleteKeyOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KvsARN]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKey", "Required field: Key, is not set");
    return DeleteKeyOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKey", "Required field: IfMatch, is not set");
    return DeleteKeyOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKey",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKeyOutcome>(
      [&]() -> DeleteKeyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/key-value-stores/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKvsARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKey());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteKeyOutcome(DeleteKeyResult(result.GetResultWithOwnership()))
                                  : DeleteKeyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeKeyValueStoreOutcome CloudFrontKeyValueStoreClient::DescribeKeyValueStore(const DescribeKeyValueStoreRequest& request) const {
  if (!request.KvsARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeKeyValueStore", "Required field: KvsARN, is not set");
    return DescribeKeyValueStoreOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KvsARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeKeyValueStore, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeKeyValueStore, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeKeyValueStore",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeKeyValueStoreOutcome>(
      [&]() -> DescribeKeyValueStoreOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeKeyValueStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/key-value-stores/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKvsARN());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DescribeKeyValueStoreOutcome(DescribeKeyValueStoreResult(result.GetResultWithOwnership()))
                                  : DescribeKeyValueStoreOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKeyOutcome CloudFrontKeyValueStoreClient::GetKey(const GetKeyRequest& request) const {
  if (!request.KvsARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKey", "Required field: KvsARN, is not set");
    return GetKeyOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KvsARN]", false));
  }
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKey", "Required field: Key, is not set");
    return GetKeyOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(CloudFrontKeyValueStoreErrors::MISSING_PARAMETER,
                                                                              "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKey",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKeyOutcome>(
      [&]() -> GetKeyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/key-value-stores/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKvsARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKey());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetKeyOutcome(GetKeyResult(result.GetResultWithOwnership())) : GetKeyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKeysOutcome CloudFrontKeyValueStoreClient::ListKeys(const ListKeysRequest& request) const {
  if (!request.KvsARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKeys", "Required field: KvsARN, is not set");
    return ListKeysOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KvsARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKeys",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKeysOutcome>(
      [&]() -> ListKeysOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/key-value-stores/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKvsARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/keys");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListKeysOutcome(ListKeysResult(result.GetResultWithOwnership())) : ListKeysOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutKeyOutcome CloudFrontKeyValueStoreClient::PutKey(const PutKeyRequest& request) const {
  if (!request.KeyHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutKey", "Required field: Key, is not set");
    return PutKeyOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(CloudFrontKeyValueStoreErrors::MISSING_PARAMETER,
                                                                              "MISSING_PARAMETER", "Missing required field [Key]", false));
  }
  if (!request.KvsARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutKey", "Required field: KvsARN, is not set");
    return PutKeyOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KvsARN]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutKey", "Required field: IfMatch, is not set");
    return PutKeyOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutKey",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutKeyOutcome>(
      [&]() -> PutKeyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/key-value-stores/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKvsARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/keys/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKey());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? PutKeyOutcome(PutKeyResult(result.GetResultWithOwnership())) : PutKeyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKeysOutcome CloudFrontKeyValueStoreClient::UpdateKeys(const UpdateKeysRequest& request) const {
  if (!request.KvsARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKeys", "Required field: KvsARN, is not set");
    return UpdateKeysOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KvsARN]", false));
  }
  if (!request.IfMatchHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKeys", "Required field: IfMatch, is not set");
    return UpdateKeysOutcome(Aws::Client::AWSError<CloudFrontKeyValueStoreErrors>(
        CloudFrontKeyValueStoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKeys, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKeys",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKeysOutcome>(
      [&]() -> UpdateKeysOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/key-value-stores/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKvsARN());
        endpointResolutionOutcome.GetResult().AddPathSegments("/keys");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateKeysOutcome(UpdateKeysResult(result.GetResultWithOwnership()))
                                  : UpdateKeysOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
