/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/CognitoSyncClient.h>
#include <aws/cognito-sync/CognitoSyncEndpointProvider.h>
#include <aws/cognito-sync/CognitoSyncErrorMarshaller.h>
#include <aws/cognito-sync/model/BulkPublishRequest.h>
#include <aws/cognito-sync/model/DeleteDatasetRequest.h>
#include <aws/cognito-sync/model/DescribeDatasetRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityUsageRequest.h>
#include <aws/cognito-sync/model/GetBulkPublishDetailsRequest.h>
#include <aws/cognito-sync/model/GetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/GetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/ListDatasetsRequest.h>
#include <aws/cognito-sync/model/ListIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/ListRecordsRequest.h>
#include <aws/cognito-sync/model/RegisterDeviceRequest.h>
#include <aws/cognito-sync/model/SetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/SetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/SubscribeToDatasetRequest.h>
#include <aws/cognito-sync/model/UnsubscribeFromDatasetRequest.h>
#include <aws/cognito-sync/model/UpdateRecordsRequest.h>
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
using namespace Aws::CognitoSync;
using namespace Aws::CognitoSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CognitoSync {
const char SERVICE_NAME[] = "cognito-sync";
const char ALLOCATION_TAG[] = "CognitoSyncClient";
}  // namespace CognitoSync
}  // namespace Aws
const char* CognitoSyncClient::GetServiceName() { return SERVICE_NAME; }
const char* CognitoSyncClient::GetAllocationTag() { return ALLOCATION_TAG; }

CognitoSyncClient::CognitoSyncClient(const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration,
                                     std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials, std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider,
                                     const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider,
                                     const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CognitoSyncClient::CognitoSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CognitoSyncClient::~CognitoSyncClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CognitoSyncEndpointProviderBase>& CognitoSyncClient::accessEndpointProvider() { return m_endpointProvider; }

void CognitoSyncClient::init(const CognitoSync::CognitoSyncClientConfiguration& config) {
  AWSClient::SetServiceClientName("Cognito Sync");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cognito-sync");
}

void CognitoSyncClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CognitoSyncClient::InvokeOperationOutcome CognitoSyncClient::InvokeServiceOperation(
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

BulkPublishOutcome CognitoSyncClient::BulkPublish(const BulkPublishRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BulkPublish", "Required field: IdentityPoolId, is not set");
    return BulkPublishOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BulkPublish, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BulkPublish, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BulkPublish",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BulkPublishOutcome>(
      [&]() -> BulkPublishOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BulkPublish, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/bulkpublish");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? BulkPublishOutcome(BulkPublishResult(result.GetResultWithOwnership()))
                                  : BulkPublishOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDatasetOutcome CognitoSyncClient::DeleteDataset(const DeleteDatasetRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: IdentityPoolId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: IdentityId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetName, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatasetName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataset",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDatasetOutcome>(
      [&]() -> DeleteDatasetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteDatasetOutcome(DeleteDatasetResult(result.GetResultWithOwnership()))
                                  : DeleteDatasetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDatasetOutcome CognitoSyncClient::DescribeDataset(const DescribeDatasetRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: IdentityPoolId, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: IdentityId, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: DatasetName, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DatasetName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDataset",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDatasetOutcome>(
      [&]() -> DescribeDatasetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DescribeDatasetOutcome(DescribeDatasetResult(result.GetResultWithOwnership()))
                                  : DescribeDatasetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIdentityPoolUsageOutcome CognitoSyncClient::DescribeIdentityPoolUsage(const DescribeIdentityPoolUsageRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIdentityPoolUsage", "Required field: IdentityPoolId, is not set");
    return DescribeIdentityPoolUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(
        CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIdentityPoolUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIdentityPoolUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeIdentityPoolUsage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIdentityPoolUsageOutcome>(
      [&]() -> DescribeIdentityPoolUsageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityPoolUsage, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DescribeIdentityPoolUsageOutcome(DescribeIdentityPoolUsageResult(result.GetResultWithOwnership()))
                                  : DescribeIdentityPoolUsageOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeIdentityUsageOutcome CognitoSyncClient::DescribeIdentityUsage(const DescribeIdentityUsageRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIdentityUsage", "Required field: IdentityPoolId, is not set");
    return DescribeIdentityUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIdentityUsage", "Required field: IdentityId, is not set");
    return DescribeIdentityUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [IdentityId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeIdentityUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeIdentityUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeIdentityUsage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeIdentityUsageOutcome>(
      [&]() -> DescribeIdentityUsageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DescribeIdentityUsageOutcome(DescribeIdentityUsageResult(result.GetResultWithOwnership()))
                                  : DescribeIdentityUsageOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBulkPublishDetailsOutcome CognitoSyncClient::GetBulkPublishDetails(const GetBulkPublishDetailsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBulkPublishDetails", "Required field: IdentityPoolId, is not set");
    return GetBulkPublishDetailsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBulkPublishDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBulkPublishDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBulkPublishDetails",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBulkPublishDetailsOutcome>(
      [&]() -> GetBulkPublishDetailsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBulkPublishDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/getBulkPublishDetails");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetBulkPublishDetailsOutcome(GetBulkPublishDetailsResult(result.GetResultWithOwnership()))
                                  : GetBulkPublishDetailsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCognitoEventsOutcome CognitoSyncClient::GetCognitoEvents(const GetCognitoEventsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return GetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetCognitoEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCognitoEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCognitoEvents",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCognitoEventsOutcome>(
      [&]() -> GetCognitoEventsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCognitoEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/events");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetCognitoEventsOutcome(GetCognitoEventsResult(result.GetResultWithOwnership()))
                                  : GetCognitoEventsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIdentityPoolConfigurationOutcome CognitoSyncClient::GetIdentityPoolConfiguration(
    const GetIdentityPoolConfigurationRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return GetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(
        CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetIdentityPoolConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIdentityPoolConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIdentityPoolConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIdentityPoolConfigurationOutcome>(
      [&]() -> GetIdentityPoolConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIdentityPoolConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetIdentityPoolConfigurationOutcome(GetIdentityPoolConfigurationResult(result.GetResultWithOwnership()))
                                  : GetIdentityPoolConfigurationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDatasetsOutcome CognitoSyncClient::ListDatasets(const ListDatasetsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDatasets", "Required field: IdentityPoolId, is not set");
    return ListDatasetsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDatasets", "Required field: IdentityId, is not set");
    return ListDatasetsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IdentityId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDatasets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDatasets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDatasets",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDatasetsOutcome>(
      [&]() -> ListDatasetsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListDatasetsOutcome(ListDatasetsResult(result.GetResultWithOwnership()))
                                  : ListDatasetsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIdentityPoolUsageOutcome CognitoSyncClient::ListIdentityPoolUsage(const ListIdentityPoolUsageRequest& request) const {
  AWS_OPERATION_GUARD(ListIdentityPoolUsage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIdentityPoolUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIdentityPoolUsage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIdentityPoolUsage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIdentityPoolUsageOutcome>(
      [&]() -> ListIdentityPoolUsageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityPoolUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListIdentityPoolUsageOutcome(ListIdentityPoolUsageResult(result.GetResultWithOwnership()))
                                  : ListIdentityPoolUsageOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRecordsOutcome CognitoSyncClient::ListRecords(const ListRecordsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: IdentityPoolId, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: IdentityId, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: DatasetName, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DatasetName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRecords",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRecordsOutcome>(
      [&]() -> ListRecordsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/records");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListRecordsOutcome(ListRecordsResult(result.GetResultWithOwnership()))
                                  : ListRecordsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterDeviceOutcome CognitoSyncClient::RegisterDevice(const RegisterDeviceRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterDevice", "Required field: IdentityPoolId, is not set");
    return RegisterDeviceOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterDevice", "Required field: IdentityId, is not set");
    return RegisterDeviceOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IdentityId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RegisterDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RegisterDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RegisterDevice",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RegisterDeviceOutcome>(
      [&]() -> RegisterDeviceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identity/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/device");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? RegisterDeviceOutcome(RegisterDeviceResult(result.GetResultWithOwnership()))
                                  : RegisterDeviceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetCognitoEventsOutcome CognitoSyncClient::SetCognitoEvents(const SetCognitoEventsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return SetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SetCognitoEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetCognitoEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetCognitoEvents",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetCognitoEventsOutcome>(
      [&]() -> SetCognitoEventsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetCognitoEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/events");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return SetCognitoEventsOutcome(result);
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetIdentityPoolConfigurationOutcome CognitoSyncClient::SetIdentityPoolConfiguration(
    const SetIdentityPoolConfigurationRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return SetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(
        CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SetIdentityPoolConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SetIdentityPoolConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SetIdentityPoolConfiguration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SetIdentityPoolConfigurationOutcome>(
      [&]() -> SetIdentityPoolConfigurationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetIdentityPoolConfiguration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? SetIdentityPoolConfigurationOutcome(SetIdentityPoolConfigurationResult(result.GetResultWithOwnership()))
                                  : SetIdentityPoolConfigurationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SubscribeToDatasetOutcome CognitoSyncClient::SubscribeToDataset(const SubscribeToDatasetRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: IdentityPoolId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: IdentityId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: DatasetName, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DatasetName]", false));
  }
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: DeviceId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SubscribeToDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SubscribeToDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SubscribeToDataset",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SubscribeToDatasetOutcome>(
      [&]() -> SubscribeToDatasetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SubscribeToDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? SubscribeToDatasetOutcome(SubscribeToDatasetResult(result.GetResultWithOwnership()))
                                  : SubscribeToDatasetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UnsubscribeFromDatasetOutcome CognitoSyncClient::UnsubscribeFromDataset(const UnsubscribeFromDatasetRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: IdentityPoolId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: IdentityId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: DatasetName, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DatasetName]", false));
  }
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: DeviceId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UnsubscribeFromDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UnsubscribeFromDataset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UnsubscribeFromDataset",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UnsubscribeFromDatasetOutcome>(
      [&]() -> UnsubscribeFromDatasetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnsubscribeFromDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UnsubscribeFromDatasetOutcome(UnsubscribeFromDatasetResult(result.GetResultWithOwnership()))
                                  : UnsubscribeFromDatasetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRecordsOutcome CognitoSyncClient::UpdateRecords(const UpdateRecordsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: IdentityPoolId, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: IdentityId, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: DatasetName, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatasetName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRecords",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRecordsOutcome>(
      [&]() -> UpdateRecordsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateRecordsOutcome(UpdateRecordsResult(result.GetResultWithOwnership()))
                                  : UpdateRecordsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
