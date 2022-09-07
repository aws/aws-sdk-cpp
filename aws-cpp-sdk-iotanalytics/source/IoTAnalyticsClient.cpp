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

#include <aws/iotanalytics/IoTAnalyticsClient.h>
#include <aws/iotanalytics/IoTAnalyticsEndpoint.h>
#include <aws/iotanalytics/IoTAnalyticsErrorMarshaller.h>
#include <aws/iotanalytics/model/BatchPutMessageRequest.h>
#include <aws/iotanalytics/model/CancelPipelineReprocessingRequest.h>
#include <aws/iotanalytics/model/CreateChannelRequest.h>
#include <aws/iotanalytics/model/CreateDatasetRequest.h>
#include <aws/iotanalytics/model/CreateDatasetContentRequest.h>
#include <aws/iotanalytics/model/CreateDatastoreRequest.h>
#include <aws/iotanalytics/model/CreatePipelineRequest.h>
#include <aws/iotanalytics/model/DeleteChannelRequest.h>
#include <aws/iotanalytics/model/DeleteDatasetRequest.h>
#include <aws/iotanalytics/model/DeleteDatasetContentRequest.h>
#include <aws/iotanalytics/model/DeleteDatastoreRequest.h>
#include <aws/iotanalytics/model/DeletePipelineRequest.h>
#include <aws/iotanalytics/model/DescribeChannelRequest.h>
#include <aws/iotanalytics/model/DescribeDatasetRequest.h>
#include <aws/iotanalytics/model/DescribeDatastoreRequest.h>
#include <aws/iotanalytics/model/DescribeLoggingOptionsRequest.h>
#include <aws/iotanalytics/model/DescribePipelineRequest.h>
#include <aws/iotanalytics/model/GetDatasetContentRequest.h>
#include <aws/iotanalytics/model/ListChannelsRequest.h>
#include <aws/iotanalytics/model/ListDatasetContentsRequest.h>
#include <aws/iotanalytics/model/ListDatasetsRequest.h>
#include <aws/iotanalytics/model/ListDatastoresRequest.h>
#include <aws/iotanalytics/model/ListPipelinesRequest.h>
#include <aws/iotanalytics/model/ListTagsForResourceRequest.h>
#include <aws/iotanalytics/model/PutLoggingOptionsRequest.h>
#include <aws/iotanalytics/model/RunPipelineActivityRequest.h>
#include <aws/iotanalytics/model/SampleChannelDataRequest.h>
#include <aws/iotanalytics/model/StartPipelineReprocessingRequest.h>
#include <aws/iotanalytics/model/TagResourceRequest.h>
#include <aws/iotanalytics/model/UntagResourceRequest.h>
#include <aws/iotanalytics/model/UpdateChannelRequest.h>
#include <aws/iotanalytics/model/UpdateDatasetRequest.h>
#include <aws/iotanalytics/model/UpdateDatastoreRequest.h>
#include <aws/iotanalytics/model/UpdatePipelineRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTAnalytics;
using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "iotanalytics";
static const char* ALLOCATION_TAG = "IoTAnalyticsClient";

IoTAnalyticsClient::IoTAnalyticsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTAnalyticsClient::IoTAnalyticsClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTAnalyticsClient::IoTAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTAnalyticsClient::~IoTAnalyticsClient()
{
}

void IoTAnalyticsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoTAnalytics");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoTAnalyticsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoTAnalyticsClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchPutMessageOutcome IoTAnalyticsClient::BatchPutMessage(const BatchPutMessageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/messages/batch");
  return BatchPutMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchPutMessageOutcomeCallable IoTAnalyticsClient::BatchPutMessageCallable(const BatchPutMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientBatchPutMessageAsyncHelper(IoTAnalyticsClient const * const clientThis, const BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchPutMessage(request), context);
}

void IoTAnalyticsClient::BatchPutMessageAsync(const BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientBatchPutMessageAsyncHelper( this, request, handler, context ); } );
}

CancelPipelineReprocessingOutcome IoTAnalyticsClient::CancelPipelineReprocessing(const CancelPipelineReprocessingRequest& request) const
{
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelPipelineReprocessing", "Required field: PipelineName, is not set");
    return CancelPipelineReprocessingOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  if (!request.ReprocessingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelPipelineReprocessing", "Required field: ReprocessingId, is not set");
    return CancelPipelineReprocessingOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReprocessingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/pipelines/");
  uri.AddPathSegment(request.GetPipelineName());
  uri.AddPathSegments("/reprocessing/");
  uri.AddPathSegment(request.GetReprocessingId());
  return CancelPipelineReprocessingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelPipelineReprocessingOutcomeCallable IoTAnalyticsClient::CancelPipelineReprocessingCallable(const CancelPipelineReprocessingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelPipelineReprocessingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelPipelineReprocessing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientCancelPipelineReprocessingAsyncHelper(IoTAnalyticsClient const * const clientThis, const CancelPipelineReprocessingRequest& request, const CancelPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelPipelineReprocessing(request), context);
}

void IoTAnalyticsClient::CancelPipelineReprocessingAsync(const CancelPipelineReprocessingRequest& request, const CancelPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientCancelPipelineReprocessingAsyncHelper( this, request, handler, context ); } );
}

CreateChannelOutcome IoTAnalyticsClient::CreateChannel(const CreateChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels");
  return CreateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcomeCallable IoTAnalyticsClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientCreateChannelAsyncHelper(IoTAnalyticsClient const * const clientThis, const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateChannel(request), context);
}

void IoTAnalyticsClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientCreateChannelAsyncHelper( this, request, handler, context ); } );
}

CreateDatasetOutcome IoTAnalyticsClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets");
  return CreateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable IoTAnalyticsClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientCreateDatasetAsyncHelper(IoTAnalyticsClient const * const clientThis, const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataset(request), context);
}

void IoTAnalyticsClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientCreateDatasetAsyncHelper( this, request, handler, context ); } );
}

CreateDatasetContentOutcome IoTAnalyticsClient::CreateDatasetContent(const CreateDatasetContentRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDatasetContent", "Required field: DatasetName, is not set");
    return CreateDatasetContentOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetName());
  uri.AddPathSegments("/content");
  return CreateDatasetContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetContentOutcomeCallable IoTAnalyticsClient::CreateDatasetContentCallable(const CreateDatasetContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientCreateDatasetContentAsyncHelper(IoTAnalyticsClient const * const clientThis, const CreateDatasetContentRequest& request, const CreateDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDatasetContent(request), context);
}

void IoTAnalyticsClient::CreateDatasetContentAsync(const CreateDatasetContentRequest& request, const CreateDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientCreateDatasetContentAsyncHelper( this, request, handler, context ); } );
}

CreateDatastoreOutcome IoTAnalyticsClient::CreateDatastore(const CreateDatastoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datastores");
  return CreateDatastoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatastoreOutcomeCallable IoTAnalyticsClient::CreateDatastoreCallable(const CreateDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientCreateDatastoreAsyncHelper(IoTAnalyticsClient const * const clientThis, const CreateDatastoreRequest& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDatastore(request), context);
}

void IoTAnalyticsClient::CreateDatastoreAsync(const CreateDatastoreRequest& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientCreateDatastoreAsyncHelper( this, request, handler, context ); } );
}

CreatePipelineOutcome IoTAnalyticsClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/pipelines");
  return CreatePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePipelineOutcomeCallable IoTAnalyticsClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientCreatePipelineAsyncHelper(IoTAnalyticsClient const * const clientThis, const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePipeline(request), context);
}

void IoTAnalyticsClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientCreatePipelineAsyncHelper( this, request, handler, context ); } );
}

DeleteChannelOutcome IoTAnalyticsClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelName());
  return DeleteChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcomeCallable IoTAnalyticsClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDeleteChannelAsyncHelper(IoTAnalyticsClient const * const clientThis, const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteChannel(request), context);
}

void IoTAnalyticsClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDeleteChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteDatasetOutcome IoTAnalyticsClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetName, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetName());
  return DeleteDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable IoTAnalyticsClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDeleteDatasetAsyncHelper(IoTAnalyticsClient const * const clientThis, const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataset(request), context);
}

void IoTAnalyticsClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDeleteDatasetAsyncHelper( this, request, handler, context ); } );
}

DeleteDatasetContentOutcome IoTAnalyticsClient::DeleteDatasetContent(const DeleteDatasetContentRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDatasetContent", "Required field: DatasetName, is not set");
    return DeleteDatasetContentOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetName());
  uri.AddPathSegments("/content");
  return DeleteDatasetContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetContentOutcomeCallable IoTAnalyticsClient::DeleteDatasetContentCallable(const DeleteDatasetContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDeleteDatasetContentAsyncHelper(IoTAnalyticsClient const * const clientThis, const DeleteDatasetContentRequest& request, const DeleteDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDatasetContent(request), context);
}

void IoTAnalyticsClient::DeleteDatasetContentAsync(const DeleteDatasetContentRequest& request, const DeleteDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDeleteDatasetContentAsyncHelper( this, request, handler, context ); } );
}

DeleteDatastoreOutcome IoTAnalyticsClient::DeleteDatastore(const DeleteDatastoreRequest& request) const
{
  if (!request.DatastoreNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDatastore", "Required field: DatastoreName, is not set");
    return DeleteDatastoreOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datastores/");
  uri.AddPathSegment(request.GetDatastoreName());
  return DeleteDatastoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatastoreOutcomeCallable IoTAnalyticsClient::DeleteDatastoreCallable(const DeleteDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDeleteDatastoreAsyncHelper(IoTAnalyticsClient const * const clientThis, const DeleteDatastoreRequest& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDatastore(request), context);
}

void IoTAnalyticsClient::DeleteDatastoreAsync(const DeleteDatastoreRequest& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDeleteDatastoreAsyncHelper( this, request, handler, context ); } );
}

DeletePipelineOutcome IoTAnalyticsClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePipeline", "Required field: PipelineName, is not set");
    return DeletePipelineOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/pipelines/");
  uri.AddPathSegment(request.GetPipelineName());
  return DeletePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePipelineOutcomeCallable IoTAnalyticsClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDeletePipelineAsyncHelper(IoTAnalyticsClient const * const clientThis, const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePipeline(request), context);
}

void IoTAnalyticsClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDeletePipelineAsyncHelper( this, request, handler, context ); } );
}

DescribeChannelOutcome IoTAnalyticsClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelName, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelName());
  return DescribeChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelOutcomeCallable IoTAnalyticsClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDescribeChannelAsyncHelper(IoTAnalyticsClient const * const clientThis, const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeChannel(request), context);
}

void IoTAnalyticsClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDescribeChannelAsyncHelper( this, request, handler, context ); } );
}

DescribeDatasetOutcome IoTAnalyticsClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: DatasetName, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetName());
  return DescribeDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable IoTAnalyticsClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDescribeDatasetAsyncHelper(IoTAnalyticsClient const * const clientThis, const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataset(request), context);
}

void IoTAnalyticsClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDescribeDatasetAsyncHelper( this, request, handler, context ); } );
}

DescribeDatastoreOutcome IoTAnalyticsClient::DescribeDatastore(const DescribeDatastoreRequest& request) const
{
  if (!request.DatastoreNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDatastore", "Required field: DatastoreName, is not set");
    return DescribeDatastoreOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datastores/");
  uri.AddPathSegment(request.GetDatastoreName());
  return DescribeDatastoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatastoreOutcomeCallable IoTAnalyticsClient::DescribeDatastoreCallable(const DescribeDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDescribeDatastoreAsyncHelper(IoTAnalyticsClient const * const clientThis, const DescribeDatastoreRequest& request, const DescribeDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDatastore(request), context);
}

void IoTAnalyticsClient::DescribeDatastoreAsync(const DescribeDatastoreRequest& request, const DescribeDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDescribeDatastoreAsyncHelper( this, request, handler, context ); } );
}

DescribeLoggingOptionsOutcome IoTAnalyticsClient::DescribeLoggingOptions(const DescribeLoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/logging");
  return DescribeLoggingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLoggingOptionsOutcomeCallable IoTAnalyticsClient::DescribeLoggingOptionsCallable(const DescribeLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDescribeLoggingOptionsAsyncHelper(IoTAnalyticsClient const * const clientThis, const DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoggingOptions(request), context);
}

void IoTAnalyticsClient::DescribeLoggingOptionsAsync(const DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDescribeLoggingOptionsAsyncHelper( this, request, handler, context ); } );
}

DescribePipelineOutcome IoTAnalyticsClient::DescribePipeline(const DescribePipelineRequest& request) const
{
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePipeline", "Required field: PipelineName, is not set");
    return DescribePipelineOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/pipelines/");
  uri.AddPathSegment(request.GetPipelineName());
  return DescribePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePipelineOutcomeCallable IoTAnalyticsClient::DescribePipelineCallable(const DescribePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientDescribePipelineAsyncHelper(IoTAnalyticsClient const * const clientThis, const DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePipeline(request), context);
}

void IoTAnalyticsClient::DescribePipelineAsync(const DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientDescribePipelineAsyncHelper( this, request, handler, context ); } );
}

GetDatasetContentOutcome IoTAnalyticsClient::GetDatasetContent(const GetDatasetContentRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDatasetContent", "Required field: DatasetName, is not set");
    return GetDatasetContentOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetName());
  uri.AddPathSegments("/content");
  return GetDatasetContentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatasetContentOutcomeCallable IoTAnalyticsClient::GetDatasetContentCallable(const GetDatasetContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatasetContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatasetContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientGetDatasetContentAsyncHelper(IoTAnalyticsClient const * const clientThis, const GetDatasetContentRequest& request, const GetDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDatasetContent(request), context);
}

void IoTAnalyticsClient::GetDatasetContentAsync(const GetDatasetContentRequest& request, const GetDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientGetDatasetContentAsyncHelper( this, request, handler, context ); } );
}

ListChannelsOutcome IoTAnalyticsClient::ListChannels(const ListChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels");
  return ListChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable IoTAnalyticsClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientListChannelsAsyncHelper(IoTAnalyticsClient const * const clientThis, const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListChannels(request), context);
}

void IoTAnalyticsClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientListChannelsAsyncHelper( this, request, handler, context ); } );
}

ListDatasetContentsOutcome IoTAnalyticsClient::ListDatasetContents(const ListDatasetContentsRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDatasetContents", "Required field: DatasetName, is not set");
    return ListDatasetContentsOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetName());
  uri.AddPathSegments("/contents");
  return ListDatasetContentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetContentsOutcomeCallable IoTAnalyticsClient::ListDatasetContentsCallable(const ListDatasetContentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetContentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetContents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientListDatasetContentsAsyncHelper(IoTAnalyticsClient const * const clientThis, const ListDatasetContentsRequest& request, const ListDatasetContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatasetContents(request), context);
}

void IoTAnalyticsClient::ListDatasetContentsAsync(const ListDatasetContentsRequest& request, const ListDatasetContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientListDatasetContentsAsyncHelper( this, request, handler, context ); } );
}

ListDatasetsOutcome IoTAnalyticsClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets");
  return ListDatasetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable IoTAnalyticsClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientListDatasetsAsyncHelper(IoTAnalyticsClient const * const clientThis, const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatasets(request), context);
}

void IoTAnalyticsClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientListDatasetsAsyncHelper( this, request, handler, context ); } );
}

ListDatastoresOutcome IoTAnalyticsClient::ListDatastores(const ListDatastoresRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datastores");
  return ListDatastoresOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatastoresOutcomeCallable IoTAnalyticsClient::ListDatastoresCallable(const ListDatastoresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatastoresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatastores(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientListDatastoresAsyncHelper(IoTAnalyticsClient const * const clientThis, const ListDatastoresRequest& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatastores(request), context);
}

void IoTAnalyticsClient::ListDatastoresAsync(const ListDatastoresRequest& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientListDatastoresAsyncHelper( this, request, handler, context ); } );
}

ListPipelinesOutcome IoTAnalyticsClient::ListPipelines(const ListPipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/pipelines");
  return ListPipelinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPipelinesOutcomeCallable IoTAnalyticsClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientListPipelinesAsyncHelper(IoTAnalyticsClient const * const clientThis, const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPipelines(request), context);
}

void IoTAnalyticsClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientListPipelinesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome IoTAnalyticsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoTAnalyticsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientListTagsForResourceAsyncHelper(IoTAnalyticsClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void IoTAnalyticsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutLoggingOptionsOutcome IoTAnalyticsClient::PutLoggingOptions(const PutLoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/logging");
  return PutLoggingOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutLoggingOptionsOutcomeCallable IoTAnalyticsClient::PutLoggingOptionsCallable(const PutLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientPutLoggingOptionsAsyncHelper(IoTAnalyticsClient const * const clientThis, const PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutLoggingOptions(request), context);
}

void IoTAnalyticsClient::PutLoggingOptionsAsync(const PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientPutLoggingOptionsAsyncHelper( this, request, handler, context ); } );
}

RunPipelineActivityOutcome IoTAnalyticsClient::RunPipelineActivity(const RunPipelineActivityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/pipelineactivities/run");
  return RunPipelineActivityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RunPipelineActivityOutcomeCallable IoTAnalyticsClient::RunPipelineActivityCallable(const RunPipelineActivityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunPipelineActivityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunPipelineActivity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientRunPipelineActivityAsyncHelper(IoTAnalyticsClient const * const clientThis, const RunPipelineActivityRequest& request, const RunPipelineActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RunPipelineActivity(request), context);
}

void IoTAnalyticsClient::RunPipelineActivityAsync(const RunPipelineActivityRequest& request, const RunPipelineActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientRunPipelineActivityAsyncHelper( this, request, handler, context ); } );
}

SampleChannelDataOutcome IoTAnalyticsClient::SampleChannelData(const SampleChannelDataRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SampleChannelData", "Required field: ChannelName, is not set");
    return SampleChannelDataOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelName());
  uri.AddPathSegments("/sample");
  return SampleChannelDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

SampleChannelDataOutcomeCallable IoTAnalyticsClient::SampleChannelDataCallable(const SampleChannelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SampleChannelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SampleChannelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientSampleChannelDataAsyncHelper(IoTAnalyticsClient const * const clientThis, const SampleChannelDataRequest& request, const SampleChannelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SampleChannelData(request), context);
}

void IoTAnalyticsClient::SampleChannelDataAsync(const SampleChannelDataRequest& request, const SampleChannelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientSampleChannelDataAsyncHelper( this, request, handler, context ); } );
}

StartPipelineReprocessingOutcome IoTAnalyticsClient::StartPipelineReprocessing(const StartPipelineReprocessingRequest& request) const
{
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartPipelineReprocessing", "Required field: PipelineName, is not set");
    return StartPipelineReprocessingOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/pipelines/");
  uri.AddPathSegment(request.GetPipelineName());
  uri.AddPathSegments("/reprocessing");
  return StartPipelineReprocessingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartPipelineReprocessingOutcomeCallable IoTAnalyticsClient::StartPipelineReprocessingCallable(const StartPipelineReprocessingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPipelineReprocessingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPipelineReprocessing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientStartPipelineReprocessingAsyncHelper(IoTAnalyticsClient const * const clientThis, const StartPipelineReprocessingRequest& request, const StartPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartPipelineReprocessing(request), context);
}

void IoTAnalyticsClient::StartPipelineReprocessingAsync(const StartPipelineReprocessingRequest& request, const StartPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientStartPipelineReprocessingAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome IoTAnalyticsClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoTAnalyticsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientTagResourceAsyncHelper(IoTAnalyticsClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void IoTAnalyticsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome IoTAnalyticsClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoTAnalyticsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientUntagResourceAsyncHelper(IoTAnalyticsClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void IoTAnalyticsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateChannelOutcome IoTAnalyticsClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetChannelName());
  return UpdateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcomeCallable IoTAnalyticsClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientUpdateChannelAsyncHelper(IoTAnalyticsClient const * const clientThis, const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateChannel(request), context);
}

void IoTAnalyticsClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientUpdateChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateDatasetOutcome IoTAnalyticsClient::UpdateDataset(const UpdateDatasetRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataset", "Required field: DatasetName, is not set");
    return UpdateDatasetOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetName());
  return UpdateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetOutcomeCallable IoTAnalyticsClient::UpdateDatasetCallable(const UpdateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientUpdateDatasetAsyncHelper(IoTAnalyticsClient const * const clientThis, const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataset(request), context);
}

void IoTAnalyticsClient::UpdateDatasetAsync(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientUpdateDatasetAsyncHelper( this, request, handler, context ); } );
}

UpdateDatastoreOutcome IoTAnalyticsClient::UpdateDatastore(const UpdateDatastoreRequest& request) const
{
  if (!request.DatastoreNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDatastore", "Required field: DatastoreName, is not set");
    return UpdateDatastoreOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datastores/");
  uri.AddPathSegment(request.GetDatastoreName());
  return UpdateDatastoreOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatastoreOutcomeCallable IoTAnalyticsClient::UpdateDatastoreCallable(const UpdateDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientUpdateDatastoreAsyncHelper(IoTAnalyticsClient const * const clientThis, const UpdateDatastoreRequest& request, const UpdateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDatastore(request), context);
}

void IoTAnalyticsClient::UpdateDatastoreAsync(const UpdateDatastoreRequest& request, const UpdateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientUpdateDatastoreAsyncHelper( this, request, handler, context ); } );
}

UpdatePipelineOutcome IoTAnalyticsClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipeline", "Required field: PipelineName, is not set");
    return UpdatePipelineOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/pipelines/");
  uri.AddPathSegment(request.GetPipelineName());
  return UpdatePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineOutcomeCallable IoTAnalyticsClient::UpdatePipelineCallable(const UpdatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClientUpdatePipelineAsyncHelper(IoTAnalyticsClient const * const clientThis, const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePipeline(request), context);
}

void IoTAnalyticsClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IoTAnalyticsClientUpdatePipelineAsyncHelper( this, request, handler, context ); } );
}

