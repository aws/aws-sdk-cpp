/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/backupstorage/BackupStorageClient.h>
#include <aws/backupstorage/BackupStorageErrorMarshaller.h>
#include <aws/backupstorage/BackupStorageEndpointProvider.h>
#include <aws/backupstorage/model/DeleteObjectRequest.h>
#include <aws/backupstorage/model/GetChunkRequest.h>
#include <aws/backupstorage/model/GetObjectMetadataRequest.h>
#include <aws/backupstorage/model/ListChunksRequest.h>
#include <aws/backupstorage/model/ListObjectsRequest.h>
#include <aws/backupstorage/model/NotifyObjectCompleteRequest.h>
#include <aws/backupstorage/model/PutChunkRequest.h>
#include <aws/backupstorage/model/PutObjectRequest.h>
#include <aws/backupstorage/model/StartObjectRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BackupStorage;
using namespace Aws::BackupStorage::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace BackupStorage
  {
    const char SERVICE_NAME[] = "backup-storage";
    const char ALLOCATION_TAG[] = "BackupStorageClient";
  }
}
const char* BackupStorageClient::GetServiceName() {return SERVICE_NAME;}
const char* BackupStorageClient::GetAllocationTag() {return ALLOCATION_TAG;}

BackupStorageClient::BackupStorageClient(const BackupStorage::BackupStorageClientConfiguration& clientConfiguration,
                                         std::shared_ptr<BackupStorageEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupStorageErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BackupStorageClient::BackupStorageClient(const AWSCredentials& credentials,
                                         std::shared_ptr<BackupStorageEndpointProviderBase> endpointProvider,
                                         const BackupStorage::BackupStorageClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BackupStorageClient::BackupStorageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<BackupStorageEndpointProviderBase> endpointProvider,
                                         const BackupStorage::BackupStorageClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  BackupStorageClient::BackupStorageClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupStorageErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<BackupStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BackupStorageClient::BackupStorageClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<BackupStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BackupStorageClient::BackupStorageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupStorageErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<BackupStorageEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
BackupStorageClient::~BackupStorageClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<BackupStorageEndpointProviderBase>& BackupStorageClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void BackupStorageClient::init(const BackupStorage::BackupStorageClientConfiguration& config)
{
  AWSClient::SetServiceClientName("BackupStorage");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void BackupStorageClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteObjectOutcome BackupStorageClient::DeleteObject(const DeleteObjectRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: BackupJobId, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.ObjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: ObjectName, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteObject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteObjectOutcome>(
    [&]()-> DeleteObjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/object/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectName());
      return DeleteObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChunkOutcome BackupStorageClient::GetChunk(const GetChunkRequest& request) const
{
  AWS_OPERATION_GUARD(GetChunk);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChunk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StorageJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChunk", "Required field: StorageJobId, is not set");
    return GetChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageJobId]", false));
  }
  if (!request.ChunkTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChunk", "Required field: ChunkToken, is not set");
    return GetChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChunkToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetChunk, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChunk, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChunk",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChunkOutcome>(
    [&]()-> GetChunkOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChunk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/chunk/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChunkToken());
      return GetChunkOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetObjectMetadataOutcome BackupStorageClient::GetObjectMetadata(const GetObjectMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(GetObjectMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetObjectMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StorageJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectMetadata", "Required field: StorageJobId, is not set");
    return GetObjectMetadataOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageJobId]", false));
  }
  if (!request.ObjectTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectMetadata", "Required field: ObjectToken, is not set");
    return GetObjectMetadataOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetObjectMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetObjectMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetObjectMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetObjectMetadataOutcome>(
    [&]()-> GetObjectMetadataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetObjectMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/object/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectToken());
      endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
      return GetObjectMetadataOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChunksOutcome BackupStorageClient::ListChunks(const ListChunksRequest& request) const
{
  AWS_OPERATION_GUARD(ListChunks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChunks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StorageJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChunks", "Required field: StorageJobId, is not set");
    return ListChunksOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageJobId]", false));
  }
  if (!request.ObjectTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChunks", "Required field: ObjectToken, is not set");
    return ListChunksOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListChunks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChunks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChunks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChunksOutcome>(
    [&]()-> ListChunksOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChunks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/chunks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectToken());
      endpointResolutionOutcome.GetResult().AddPathSegments("/list");
      return ListChunksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListObjectsOutcome BackupStorageClient::ListObjects(const ListObjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListObjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StorageJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjects", "Required field: StorageJobId, is not set");
    return ListObjectsOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageJobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListObjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListObjects",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListObjectsOutcome>(
    [&]()-> ListObjectsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/objects/list");
      return ListObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

NotifyObjectCompleteOutcome BackupStorageClient::NotifyObjectComplete(const NotifyObjectCompleteRequest& request) const
{
  AWS_OPERATION_GUARD(NotifyObjectComplete);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NotifyObjectComplete, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyObjectComplete", "Required field: BackupJobId, is not set");
    return NotifyObjectCompleteOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyObjectComplete", "Required field: UploadId, is not set");
    return NotifyObjectCompleteOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  if (!request.ObjectChecksumHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyObjectComplete", "Required field: ObjectChecksum, is not set");
    return NotifyObjectCompleteOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectChecksum]", false));
  }
  if (!request.ObjectChecksumAlgorithmHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyObjectComplete", "Required field: ObjectChecksumAlgorithm, is not set");
    return NotifyObjectCompleteOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectChecksumAlgorithm]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, NotifyObjectComplete, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, NotifyObjectComplete, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".NotifyObjectComplete",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<NotifyObjectCompleteOutcome>(
    [&]()-> NotifyObjectCompleteOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NotifyObjectComplete, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/object/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/complete");
      return NotifyObjectCompleteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutChunkOutcome BackupStorageClient::PutChunk(const PutChunkRequest& request) const
{
  AWS_OPERATION_GUARD(PutChunk);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutChunk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: BackupJobId, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: UploadId, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  if (!request.ChunkIndexHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: ChunkIndex, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChunkIndex]", false));
  }
  if (!request.LengthHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: Length, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Length]", false));
  }
  if (!request.ChecksumHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: Checksum, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Checksum]", false));
  }
  if (!request.ChecksumAlgorithmHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChunk", "Required field: ChecksumAlgorithm, is not set");
    return PutChunkOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChecksumAlgorithm]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutChunk, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutChunk, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutChunk",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutChunkOutcome>(
    [&]()-> PutChunkOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutChunk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/chunk/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUploadId());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChunkIndex());
      return PutChunkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutObjectOutcome BackupStorageClient::PutObject(const PutObjectRequest& request) const
{
  AWS_OPERATION_GUARD(PutObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: BackupJobId, is not set");
    return PutObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.ObjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: ObjectName, is not set");
    return PutObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutObject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutObjectOutcome>(
    [&]()-> PutObjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/object/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/put-object");
      return PutObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartObjectOutcome BackupStorageClient::StartObject(const StartObjectRequest& request) const
{
  AWS_OPERATION_GUARD(StartObject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartObject", "Required field: BackupJobId, is not set");
    return StartObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  if (!request.ObjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartObject", "Required field: ObjectName, is not set");
    return StartObjectOutcome(Aws::Client::AWSError<BackupStorageErrors>(BackupStorageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ObjectName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartObject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartObject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartObjectOutcome>(
    [&]()-> StartObjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartObject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupJobId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/object/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetObjectName());
      return StartObjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

