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

#include <aws/elastictranscoder/ElasticTranscoderClient.h>
#include <aws/elastictranscoder/ElasticTranscoderEndpoint.h>
#include <aws/elastictranscoder/ElasticTranscoderErrorMarshaller.h>
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

static const char* SERVICE_NAME = "elastictranscoder";
static const char* ALLOCATION_TAG = "ElasticTranscoderClient";

ElasticTranscoderClient::ElasticTranscoderClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticTranscoderClient::ElasticTranscoderClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticTranscoderClient::ElasticTranscoderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticTranscoderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticTranscoderClient::~ElasticTranscoderClient()
{
}

void ElasticTranscoderClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Elastic Transcoder");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ElasticTranscoderEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ElasticTranscoderClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CancelJobOutcome ElasticTranscoderClient::CancelJob(const CancelJobRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: Id, is not set");
    return CancelJobOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/jobs/");
  uri.AddPathSegment(request.GetId());
  return CancelJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelJobOutcomeCallable ElasticTranscoderClient::CancelJobCallable(const CancelJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientCancelJobAsyncHelper(ElasticTranscoderClient const * const clientThis, const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelJob(request), context);
}

void ElasticTranscoderClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientCancelJobAsyncHelper( this, request, handler, context ); } );
}

CreateJobOutcome ElasticTranscoderClient::CreateJob(const CreateJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/jobs");
  return CreateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcomeCallable ElasticTranscoderClient::CreateJobCallable(const CreateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientCreateJobAsyncHelper(ElasticTranscoderClient const * const clientThis, const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateJob(request), context);
}

void ElasticTranscoderClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientCreateJobAsyncHelper( this, request, handler, context ); } );
}

CreatePipelineOutcome ElasticTranscoderClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/pipelines");
  return CreatePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePipelineOutcomeCallable ElasticTranscoderClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientCreatePipelineAsyncHelper(ElasticTranscoderClient const * const clientThis, const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePipeline(request), context);
}

void ElasticTranscoderClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientCreatePipelineAsyncHelper( this, request, handler, context ); } );
}

CreatePresetOutcome ElasticTranscoderClient::CreatePreset(const CreatePresetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/presets");
  return CreatePresetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePresetOutcomeCallable ElasticTranscoderClient::CreatePresetCallable(const CreatePresetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePresetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePreset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientCreatePresetAsyncHelper(ElasticTranscoderClient const * const clientThis, const CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePreset(request), context);
}

void ElasticTranscoderClient::CreatePresetAsync(const CreatePresetRequest& request, const CreatePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientCreatePresetAsyncHelper( this, request, handler, context ); } );
}

DeletePipelineOutcome ElasticTranscoderClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePipeline", "Required field: Id, is not set");
    return DeletePipelineOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/pipelines/");
  uri.AddPathSegment(request.GetId());
  return DeletePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePipelineOutcomeCallable ElasticTranscoderClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientDeletePipelineAsyncHelper(ElasticTranscoderClient const * const clientThis, const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePipeline(request), context);
}

void ElasticTranscoderClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientDeletePipelineAsyncHelper( this, request, handler, context ); } );
}

DeletePresetOutcome ElasticTranscoderClient::DeletePreset(const DeletePresetRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePreset", "Required field: Id, is not set");
    return DeletePresetOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/presets/");
  uri.AddPathSegment(request.GetId());
  return DeletePresetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePresetOutcomeCallable ElasticTranscoderClient::DeletePresetCallable(const DeletePresetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePresetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePreset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientDeletePresetAsyncHelper(ElasticTranscoderClient const * const clientThis, const DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePreset(request), context);
}

void ElasticTranscoderClient::DeletePresetAsync(const DeletePresetRequest& request, const DeletePresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientDeletePresetAsyncHelper( this, request, handler, context ); } );
}

ListJobsByPipelineOutcome ElasticTranscoderClient::ListJobsByPipeline(const ListJobsByPipelineRequest& request) const
{
  if (!request.PipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobsByPipeline", "Required field: PipelineId, is not set");
    return ListJobsByPipelineOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/jobsByPipeline/");
  uri.AddPathSegment(request.GetPipelineId());
  return ListJobsByPipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsByPipelineOutcomeCallable ElasticTranscoderClient::ListJobsByPipelineCallable(const ListJobsByPipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsByPipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobsByPipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientListJobsByPipelineAsyncHelper(ElasticTranscoderClient const * const clientThis, const ListJobsByPipelineRequest& request, const ListJobsByPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobsByPipeline(request), context);
}

void ElasticTranscoderClient::ListJobsByPipelineAsync(const ListJobsByPipelineRequest& request, const ListJobsByPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientListJobsByPipelineAsyncHelper( this, request, handler, context ); } );
}

ListJobsByStatusOutcome ElasticTranscoderClient::ListJobsByStatus(const ListJobsByStatusRequest& request) const
{
  if (!request.StatusHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobsByStatus", "Required field: Status, is not set");
    return ListJobsByStatusOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Status]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/jobsByStatus/");
  uri.AddPathSegment(request.GetStatus());
  return ListJobsByStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsByStatusOutcomeCallable ElasticTranscoderClient::ListJobsByStatusCallable(const ListJobsByStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsByStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobsByStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientListJobsByStatusAsyncHelper(ElasticTranscoderClient const * const clientThis, const ListJobsByStatusRequest& request, const ListJobsByStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobsByStatus(request), context);
}

void ElasticTranscoderClient::ListJobsByStatusAsync(const ListJobsByStatusRequest& request, const ListJobsByStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientListJobsByStatusAsyncHelper( this, request, handler, context ); } );
}

ListPipelinesOutcome ElasticTranscoderClient::ListPipelines(const ListPipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/pipelines");
  return ListPipelinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPipelinesOutcomeCallable ElasticTranscoderClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientListPipelinesAsyncHelper(ElasticTranscoderClient const * const clientThis, const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPipelines(request), context);
}

void ElasticTranscoderClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientListPipelinesAsyncHelper( this, request, handler, context ); } );
}

ListPresetsOutcome ElasticTranscoderClient::ListPresets(const ListPresetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/presets");
  return ListPresetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPresetsOutcomeCallable ElasticTranscoderClient::ListPresetsCallable(const ListPresetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPresetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPresets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientListPresetsAsyncHelper(ElasticTranscoderClient const * const clientThis, const ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPresets(request), context);
}

void ElasticTranscoderClient::ListPresetsAsync(const ListPresetsRequest& request, const ListPresetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientListPresetsAsyncHelper( this, request, handler, context ); } );
}

ReadJobOutcome ElasticTranscoderClient::ReadJob(const ReadJobRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReadJob", "Required field: Id, is not set");
    return ReadJobOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/jobs/");
  uri.AddPathSegment(request.GetId());
  return ReadJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ReadJobOutcomeCallable ElasticTranscoderClient::ReadJobCallable(const ReadJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReadJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReadJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientReadJobAsyncHelper(ElasticTranscoderClient const * const clientThis, const ReadJobRequest& request, const ReadJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReadJob(request), context);
}

void ElasticTranscoderClient::ReadJobAsync(const ReadJobRequest& request, const ReadJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientReadJobAsyncHelper( this, request, handler, context ); } );
}

ReadPipelineOutcome ElasticTranscoderClient::ReadPipeline(const ReadPipelineRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReadPipeline", "Required field: Id, is not set");
    return ReadPipelineOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/pipelines/");
  uri.AddPathSegment(request.GetId());
  return ReadPipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ReadPipelineOutcomeCallable ElasticTranscoderClient::ReadPipelineCallable(const ReadPipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReadPipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReadPipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientReadPipelineAsyncHelper(ElasticTranscoderClient const * const clientThis, const ReadPipelineRequest& request, const ReadPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReadPipeline(request), context);
}

void ElasticTranscoderClient::ReadPipelineAsync(const ReadPipelineRequest& request, const ReadPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientReadPipelineAsyncHelper( this, request, handler, context ); } );
}

ReadPresetOutcome ElasticTranscoderClient::ReadPreset(const ReadPresetRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReadPreset", "Required field: Id, is not set");
    return ReadPresetOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/presets/");
  uri.AddPathSegment(request.GetId());
  return ReadPresetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ReadPresetOutcomeCallable ElasticTranscoderClient::ReadPresetCallable(const ReadPresetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReadPresetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReadPreset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientReadPresetAsyncHelper(ElasticTranscoderClient const * const clientThis, const ReadPresetRequest& request, const ReadPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReadPreset(request), context);
}

void ElasticTranscoderClient::ReadPresetAsync(const ReadPresetRequest& request, const ReadPresetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientReadPresetAsyncHelper( this, request, handler, context ); } );
}

UpdatePipelineOutcome ElasticTranscoderClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipeline", "Required field: Id, is not set");
    return UpdatePipelineOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/pipelines/");
  uri.AddPathSegment(request.GetId());
  return UpdatePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineOutcomeCallable ElasticTranscoderClient::UpdatePipelineCallable(const UpdatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientUpdatePipelineAsyncHelper(ElasticTranscoderClient const * const clientThis, const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePipeline(request), context);
}

void ElasticTranscoderClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientUpdatePipelineAsyncHelper( this, request, handler, context ); } );
}

UpdatePipelineNotificationsOutcome ElasticTranscoderClient::UpdatePipelineNotifications(const UpdatePipelineNotificationsRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipelineNotifications", "Required field: Id, is not set");
    return UpdatePipelineNotificationsOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/pipelines/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/notifications");
  return UpdatePipelineNotificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineNotificationsOutcomeCallable ElasticTranscoderClient::UpdatePipelineNotificationsCallable(const UpdatePipelineNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipelineNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientUpdatePipelineNotificationsAsyncHelper(ElasticTranscoderClient const * const clientThis, const UpdatePipelineNotificationsRequest& request, const UpdatePipelineNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePipelineNotifications(request), context);
}

void ElasticTranscoderClient::UpdatePipelineNotificationsAsync(const UpdatePipelineNotificationsRequest& request, const UpdatePipelineNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientUpdatePipelineNotificationsAsyncHelper( this, request, handler, context ); } );
}

UpdatePipelineStatusOutcome ElasticTranscoderClient::UpdatePipelineStatus(const UpdatePipelineStatusRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipelineStatus", "Required field: Id, is not set");
    return UpdatePipelineStatusOutcome(Aws::Client::AWSError<ElasticTranscoderErrors>(ElasticTranscoderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2012-09-25/pipelines/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/status");
  return UpdatePipelineStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineStatusOutcomeCallable ElasticTranscoderClient::UpdatePipelineStatusCallable(const UpdatePipelineStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipelineStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticTranscoderClientUpdatePipelineStatusAsyncHelper(ElasticTranscoderClient const * const clientThis, const UpdatePipelineStatusRequest& request, const UpdatePipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePipelineStatus(request), context);
}

void ElasticTranscoderClient::UpdatePipelineStatusAsync(const UpdatePipelineStatusRequest& request, const UpdatePipelineStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticTranscoderClientUpdatePipelineStatusAsyncHelper( this, request, handler, context ); } );
}

