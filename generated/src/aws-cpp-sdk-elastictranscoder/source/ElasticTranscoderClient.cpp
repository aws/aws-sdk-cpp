﻿/**
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

#include <aws/elastictranscoder/ElasticTranscoderClient.h>
#include <aws/elastictranscoder/ElasticTranscoderErrorMarshaller.h>
#include <aws/elastictranscoder/ElasticTranscoderEndpointProvider.h>
#include <aws/elastictranscoder/model/CancelJobRequest.h>
#include <aws/elastictranscoder/model/CreateJobRequest.h>
#include <aws/elastictranscoder/model/CreatePipelineRequest.h>
#include <aws/elastictranscoder/model/CreatePresetRequest.h>
#include <aws/elastictranscoder/model/DeletePipelineRequest.h>
#include <aws/elastictranscoder/model/DeletePresetRequest.h>
#include <aws/elastictranscoder/model/ListJobsByPipelineRequest.h>
#include <aws/elastictranscoder/model/ListJobsByStatusRequest.h>
#include <aws/elastictranscoder/model/ListPipelinesRequest.h>
#include <aws/elastictranscoder/model/ListPresetsRequest.h>
#include <aws/elastictranscoder/model/ReadJobRequest.h>
#include <aws/elastictranscoder/model/ReadPipelineRequest.h>
#include <aws/elastictranscoder/model/ReadPresetRequest.h>
#include <aws/elastictranscoder/model/UpdatePipelineRequest.h>
#include <aws/elastictranscoder/model/UpdatePipelineNotificationsRequest.h>
#include <aws/elastictranscoder/model/UpdatePipelineStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticTranscoder;
using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ElasticTranscoderClient::SERVICE_NAME = "elastictranscoder";
const char* ElasticTranscoderClient::ALLOCATION_TAG = "ElasticTranscoderClient";

ElasticTranscoderClient::ElasticTranscoderClient(const ElasticTranscoder::ElasticTranscoderClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<ElasticTranscoderEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElasticTranscoderClient::ElasticTranscoderClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<ElasticTranscoderEndpointProviderBase> endpointProvider,
                                                 const ElasticTranscoder::ElasticTranscoderClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ElasticTranscoderClient::ElasticTranscoderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<ElasticTranscoderEndpointProviderBase> endpointProvider,
                                                 const ElasticTranscoder::ElasticTranscoderClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ElasticTranscoderClient::ElasticTranscoderClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ElasticTranscoderEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElasticTranscoderClient::ElasticTranscoderClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElasticTranscoderEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ElasticTranscoderClient::ElasticTranscoderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ElasticTranscoderEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ElasticTranscoderClient::~ElasticTranscoderClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ElasticTranscoderEndpointProviderBase>& ElasticTranscoderClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ElasticTranscoderClient::init(const ElasticTranscoder::ElasticTranscoderClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Elastic Transcoder");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ElasticTranscoderClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelJobOutcome ElasticTranscoderClient::CancelJob(const CancelJobRequest& request) const
{
  AWS_OPERATION_GUARD(CancelJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: Id, is not set");
    return CancelJobOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return CancelJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcome ElasticTranscoderClient::CreateJob(const CreateJobRequest& request) const
{
  AWS_OPERATION_GUARD(CreateJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/jobs");
  return CreateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePipelineOutcome ElasticTranscoderClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/pipelines");
  return CreatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePresetOutcome ElasticTranscoderClient::CreatePreset(const CreatePresetRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePreset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/presets");
  return CreatePresetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePipelineOutcome ElasticTranscoderClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePipeline", "Required field: Id, is not set");
    return DeletePipelineOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeletePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePresetOutcome ElasticTranscoderClient::DeletePreset(const DeletePresetRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePreset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePreset", "Required field: Id, is not set");
    return DeletePresetOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/presets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeletePresetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

ListJobsByPipelineOutcome ElasticTranscoderClient::ListJobsByPipeline(const ListJobsByPipelineRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobsByPipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobsByPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobsByPipeline", "Required field: PipelineId, is not set");
    return ListJobsByPipelineOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobsByPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/jobsByPipeline/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineId());
  return ListJobsByPipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsByStatusOutcome ElasticTranscoderClient::ListJobsByStatus(const ListJobsByStatusRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobsByStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobsByStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StatusHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobsByStatus", "Required field: Status, is not set");
    return ListJobsByStatusOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Status]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobsByStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/jobsByStatus/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatus());
  return ListJobsByStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPipelinesOutcome ElasticTranscoderClient::ListPipelines(const ListPipelinesRequest& request) const
{
  AWS_OPERATION_GUARD(ListPipelines);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/pipelines");
  return ListPipelinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPresetsOutcome ElasticTranscoderClient::ListPresets(const ListPresetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPresets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPresets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPresets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/presets");
  return ListPresetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ReadJobOutcome ElasticTranscoderClient::ReadJob(const ReadJobRequest& request) const
{
  AWS_OPERATION_GUARD(ReadJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReadJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReadJob", "Required field: Id, is not set");
    return ReadJobOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReadJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return ReadJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ReadPipelineOutcome ElasticTranscoderClient::ReadPipeline(const ReadPipelineRequest& request) const
{
  AWS_OPERATION_GUARD(ReadPipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReadPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReadPipeline", "Required field: Id, is not set");
    return ReadPipelineOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReadPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return ReadPipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ReadPresetOutcome ElasticTranscoderClient::ReadPreset(const ReadPresetRequest& request) const
{
  AWS_OPERATION_GUARD(ReadPreset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReadPreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReadPreset", "Required field: Id, is not set");
    return ReadPresetOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReadPreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/presets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return ReadPresetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineOutcome ElasticTranscoderClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePipeline);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipeline", "Required field: Id, is not set");
    return UpdatePipelineOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineNotificationsOutcome ElasticTranscoderClient::UpdatePipelineNotifications(const UpdatePipelineNotificationsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePipelineNotifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePipelineNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipelineNotifications", "Required field: Id, is not set");
    return UpdatePipelineNotificationsOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePipelineNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/notifications");
  return UpdatePipelineNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineStatusOutcome ElasticTranscoderClient::UpdatePipelineStatus(const UpdatePipelineStatusRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePipelineStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePipelineStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipelineStatus", "Required field: Id, is not set");
    return UpdatePipelineStatusOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePipelineStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2012-09-25/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return UpdatePipelineStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

