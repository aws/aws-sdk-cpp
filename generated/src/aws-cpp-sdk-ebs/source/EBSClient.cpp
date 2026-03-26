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
#include <aws/ebs/EBSClient.h>
#include <aws/ebs/EBSEndpointProvider.h>
#include <aws/ebs/EBSErrorMarshaller.h>
#include <aws/ebs/model/CompleteSnapshotRequest.h>
#include <aws/ebs/model/GetSnapshotBlockRequest.h>
#include <aws/ebs/model/ListChangedBlocksRequest.h>
#include <aws/ebs/model/ListSnapshotBlocksRequest.h>
#include <aws/ebs/model/PutSnapshotBlockRequest.h>
#include <aws/ebs/model/StartSnapshotRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EBS;
using namespace Aws::EBS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EBS {
const char SERVICE_NAME[] = "ebs";
const char ALLOCATION_TAG[] = "EBSClient";
}  // namespace EBS
}  // namespace Aws
const char* EBSClient::GetServiceName() { return SERVICE_NAME; }
const char* EBSClient::GetAllocationTag() { return ALLOCATION_TAG; }

EBSClient::EBSClient(const EBS::EBSClientConfiguration& clientConfiguration, std::shared_ptr<EBSEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EBSClient::EBSClient(const AWSCredentials& credentials, std::shared_ptr<EBSEndpointProviderBase> endpointProvider,
                     const EBS::EBSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EBSClient::EBSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<EBSEndpointProviderBase> endpointProvider, const EBS::EBSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EBSClient::EBSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EBSClient::EBSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EBSClient::EBSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EBSClient::~EBSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EBSEndpointProviderBase>& EBSClient::accessEndpointProvider() { return m_endpointProvider; }

void EBSClient::init(const EBS::EBSClientConfiguration& config) {
  AWSClient::SetServiceClientName("EBS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ebs");
}

void EBSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EBSClient::InvokeOperationOutcome EBSClient::InvokeServiceOperation(
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

CompleteSnapshotOutcome EBSClient::CompleteSnapshot(const CompleteSnapshotRequest& request) const {
  if (!request.SnapshotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteSnapshot", "Required field: SnapshotId, is not set");
    return CompleteSnapshotOutcome(
        Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  if (!request.ChangedBlocksCountHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteSnapshot", "Required field: ChangedBlocksCount, is not set");
    return CompleteSnapshotOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ChangedBlocksCount]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/completion/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  };

  return CompleteSnapshotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSnapshotBlockOutcome EBSClient::GetSnapshotBlock(const GetSnapshotBlockRequest& request) const {
  AWS_OPERATION_GUARD(GetSnapshotBlock);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSnapshotBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SnapshotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSnapshotBlock", "Required field: SnapshotId, is not set");
    return GetSnapshotBlockOutcome(
        Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  if (!request.BlockIndexHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSnapshotBlock", "Required field: BlockIndex, is not set");
    return GetSnapshotBlockOutcome(
        Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlockIndex]", false));
  }
  if (!request.BlockTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSnapshotBlock", "Required field: BlockToken, is not set");
    return GetSnapshotBlockOutcome(
        Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlockToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSnapshotBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSnapshotBlock, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSnapshotBlock",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSnapshotBlockOutcome>(
      [&]() -> GetSnapshotBlockOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSnapshotBlock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/blocks/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBlockIndex());
        return GetSnapshotBlockOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChangedBlocksOutcome EBSClient::ListChangedBlocks(const ListChangedBlocksRequest& request) const {
  if (!request.SecondSnapshotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChangedBlocks", "Required field: SecondSnapshotId, is not set");
    return ListChangedBlocksOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [SecondSnapshotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecondSnapshotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/changedblocks");
  };

  return ListChangedBlocksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSnapshotBlocksOutcome EBSClient::ListSnapshotBlocks(const ListSnapshotBlocksRequest& request) const {
  if (!request.SnapshotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSnapshotBlocks", "Required field: SnapshotId, is not set");
    return ListSnapshotBlocksOutcome(
        Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/blocks");
  };

  return ListSnapshotBlocksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutSnapshotBlockOutcome EBSClient::PutSnapshotBlock(const PutSnapshotBlockRequest& request) const {
  if (!request.SnapshotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: SnapshotId, is not set");
    return PutSnapshotBlockOutcome(
        Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  if (!request.BlockIndexHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: BlockIndex, is not set");
    return PutSnapshotBlockOutcome(
        Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlockIndex]", false));
  }
  if (!request.DataLengthHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: DataLength, is not set");
    return PutSnapshotBlockOutcome(
        Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataLength]", false));
  }
  if (!request.ChecksumHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: Checksum, is not set");
    return PutSnapshotBlockOutcome(
        Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Checksum]", false));
  }
  if (!request.ChecksumAlgorithmHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutSnapshotBlock", "Required field: ChecksumAlgorithm, is not set");
    return PutSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ChecksumAlgorithm]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/blocks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBlockIndex());
  };

  return PutSnapshotBlockOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartSnapshotOutcome EBSClient::StartSnapshot(const StartSnapshotRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  return StartSnapshotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
