/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTAnalyticsClient::IoTAnalyticsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTAnalyticsClient::IoTAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTAnalyticsClient::~IoTAnalyticsClient()
{
}

void IoTAnalyticsClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/messages/batch";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchPutMessageOutcome(BatchPutMessageResult(outcome.GetResult()));
  }
  else
  {
    return BatchPutMessageOutcome(outcome.GetError());
  }
}

BatchPutMessageOutcomeCallable IoTAnalyticsClient::BatchPutMessageCallable(const BatchPutMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::BatchPutMessageAsync(const BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchPutMessageAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::BatchPutMessageAsyncHelper(const BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchPutMessage(request), context);
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
  Aws::StringStream ss;
  ss << "/pipelines/";
  ss << request.GetPipelineName();
  ss << "/reprocessing/";
  ss << request.GetReprocessingId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelPipelineReprocessingOutcome(CancelPipelineReprocessingResult(outcome.GetResult()));
  }
  else
  {
    return CancelPipelineReprocessingOutcome(outcome.GetError());
  }
}

CancelPipelineReprocessingOutcomeCallable IoTAnalyticsClient::CancelPipelineReprocessingCallable(const CancelPipelineReprocessingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelPipelineReprocessingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelPipelineReprocessing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::CancelPipelineReprocessingAsync(const CancelPipelineReprocessingRequest& request, const CancelPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelPipelineReprocessingAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::CancelPipelineReprocessingAsyncHelper(const CancelPipelineReprocessingRequest& request, const CancelPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelPipelineReprocessing(request), context);
}

CreateChannelOutcome IoTAnalyticsClient::CreateChannel(const CreateChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateChannelOutcome(CreateChannelResult(outcome.GetResult()));
  }
  else
  {
    return CreateChannelOutcome(outcome.GetError());
  }
}

CreateChannelOutcomeCallable IoTAnalyticsClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::CreateChannelAsyncHelper(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannel(request), context);
}

CreateDatasetOutcome IoTAnalyticsClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datasets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDatasetOutcome(CreateDatasetResult(outcome.GetResult()));
  }
  else
  {
    return CreateDatasetOutcome(outcome.GetError());
  }
}

CreateDatasetOutcomeCallable IoTAnalyticsClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::CreateDatasetAsyncHelper(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataset(request), context);
}

CreateDatasetContentOutcome IoTAnalyticsClient::CreateDatasetContent(const CreateDatasetContentRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDatasetContent", "Required field: DatasetName, is not set");
    return CreateDatasetContentOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/content";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDatasetContentOutcome(CreateDatasetContentResult(outcome.GetResult()));
  }
  else
  {
    return CreateDatasetContentOutcome(outcome.GetError());
  }
}

CreateDatasetContentOutcomeCallable IoTAnalyticsClient::CreateDatasetContentCallable(const CreateDatasetContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::CreateDatasetContentAsync(const CreateDatasetContentRequest& request, const CreateDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetContentAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::CreateDatasetContentAsyncHelper(const CreateDatasetContentRequest& request, const CreateDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDatasetContent(request), context);
}

CreateDatastoreOutcome IoTAnalyticsClient::CreateDatastore(const CreateDatastoreRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datastores";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDatastoreOutcome(CreateDatastoreResult(outcome.GetResult()));
  }
  else
  {
    return CreateDatastoreOutcome(outcome.GetError());
  }
}

CreateDatastoreOutcomeCallable IoTAnalyticsClient::CreateDatastoreCallable(const CreateDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::CreateDatastoreAsync(const CreateDatastoreRequest& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatastoreAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::CreateDatastoreAsyncHelper(const CreateDatastoreRequest& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDatastore(request), context);
}

CreatePipelineOutcome IoTAnalyticsClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/pipelines";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePipelineOutcome(CreatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return CreatePipelineOutcome(outcome.GetError());
  }
}

CreatePipelineOutcomeCallable IoTAnalyticsClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePipelineAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::CreatePipelineAsyncHelper(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePipeline(request), context);
}

DeleteChannelOutcome IoTAnalyticsClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteChannelOutcome(NoResult());
  }
  else
  {
    return DeleteChannelOutcome(outcome.GetError());
  }
}

DeleteChannelOutcomeCallable IoTAnalyticsClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DeleteChannelAsyncHelper(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannel(request), context);
}

DeleteDatasetOutcome IoTAnalyticsClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetName, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datasets/";
  ss << request.GetDatasetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatasetOutcome(NoResult());
  }
  else
  {
    return DeleteDatasetOutcome(outcome.GetError());
  }
}

DeleteDatasetOutcomeCallable IoTAnalyticsClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DeleteDatasetAsyncHelper(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataset(request), context);
}

DeleteDatasetContentOutcome IoTAnalyticsClient::DeleteDatasetContent(const DeleteDatasetContentRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDatasetContent", "Required field: DatasetName, is not set");
    return DeleteDatasetContentOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/content";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatasetContentOutcome(NoResult());
  }
  else
  {
    return DeleteDatasetContentOutcome(outcome.GetError());
  }
}

DeleteDatasetContentOutcomeCallable IoTAnalyticsClient::DeleteDatasetContentCallable(const DeleteDatasetContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DeleteDatasetContentAsync(const DeleteDatasetContentRequest& request, const DeleteDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetContentAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DeleteDatasetContentAsyncHelper(const DeleteDatasetContentRequest& request, const DeleteDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDatasetContent(request), context);
}

DeleteDatastoreOutcome IoTAnalyticsClient::DeleteDatastore(const DeleteDatastoreRequest& request) const
{
  if (!request.DatastoreNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDatastore", "Required field: DatastoreName, is not set");
    return DeleteDatastoreOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datastores/";
  ss << request.GetDatastoreName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatastoreOutcome(NoResult());
  }
  else
  {
    return DeleteDatastoreOutcome(outcome.GetError());
  }
}

DeleteDatastoreOutcomeCallable IoTAnalyticsClient::DeleteDatastoreCallable(const DeleteDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DeleteDatastoreAsync(const DeleteDatastoreRequest& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatastoreAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DeleteDatastoreAsyncHelper(const DeleteDatastoreRequest& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDatastore(request), context);
}

DeletePipelineOutcome IoTAnalyticsClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePipeline", "Required field: PipelineName, is not set");
    return DeletePipelineOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/pipelines/";
  ss << request.GetPipelineName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePipelineOutcome(NoResult());
  }
  else
  {
    return DeletePipelineOutcome(outcome.GetError());
  }
}

DeletePipelineOutcomeCallable IoTAnalyticsClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePipelineAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DeletePipelineAsyncHelper(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePipeline(request), context);
}

DescribeChannelOutcome IoTAnalyticsClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelName, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeChannelOutcome(DescribeChannelResult(outcome.GetResult()));
  }
  else
  {
    return DescribeChannelOutcome(outcome.GetError());
  }
}

DescribeChannelOutcomeCallable IoTAnalyticsClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DescribeChannelAsyncHelper(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannel(request), context);
}

DescribeDatasetOutcome IoTAnalyticsClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: DatasetName, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datasets/";
  ss << request.GetDatasetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDatasetOutcome(DescribeDatasetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDatasetOutcome(outcome.GetError());
  }
}

DescribeDatasetOutcomeCallable IoTAnalyticsClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatasetAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DescribeDatasetAsyncHelper(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataset(request), context);
}

DescribeDatastoreOutcome IoTAnalyticsClient::DescribeDatastore(const DescribeDatastoreRequest& request) const
{
  if (!request.DatastoreNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDatastore", "Required field: DatastoreName, is not set");
    return DescribeDatastoreOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datastores/";
  ss << request.GetDatastoreName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDatastoreOutcome(DescribeDatastoreResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDatastoreOutcome(outcome.GetError());
  }
}

DescribeDatastoreOutcomeCallable IoTAnalyticsClient::DescribeDatastoreCallable(const DescribeDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DescribeDatastoreAsync(const DescribeDatastoreRequest& request, const DescribeDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatastoreAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DescribeDatastoreAsyncHelper(const DescribeDatastoreRequest& request, const DescribeDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDatastore(request), context);
}

DescribeLoggingOptionsOutcome IoTAnalyticsClient::DescribeLoggingOptions(const DescribeLoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/logging";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLoggingOptionsOutcome(DescribeLoggingOptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoggingOptionsOutcome(outcome.GetError());
  }
}

DescribeLoggingOptionsOutcomeCallable IoTAnalyticsClient::DescribeLoggingOptionsCallable(const DescribeLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DescribeLoggingOptionsAsync(const DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoggingOptionsAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DescribeLoggingOptionsAsyncHelper(const DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoggingOptions(request), context);
}

DescribePipelineOutcome IoTAnalyticsClient::DescribePipeline(const DescribePipelineRequest& request) const
{
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePipeline", "Required field: PipelineName, is not set");
    return DescribePipelineOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/pipelines/";
  ss << request.GetPipelineName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePipelineOutcome(DescribePipelineResult(outcome.GetResult()));
  }
  else
  {
    return DescribePipelineOutcome(outcome.GetError());
  }
}

DescribePipelineOutcomeCallable IoTAnalyticsClient::DescribePipelineCallable(const DescribePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::DescribePipelineAsync(const DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePipelineAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::DescribePipelineAsyncHelper(const DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePipeline(request), context);
}

GetDatasetContentOutcome IoTAnalyticsClient::GetDatasetContent(const GetDatasetContentRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDatasetContent", "Required field: DatasetName, is not set");
    return GetDatasetContentOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/content";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDatasetContentOutcome(GetDatasetContentResult(outcome.GetResult()));
  }
  else
  {
    return GetDatasetContentOutcome(outcome.GetError());
  }
}

GetDatasetContentOutcomeCallable IoTAnalyticsClient::GetDatasetContentCallable(const GetDatasetContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatasetContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDatasetContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::GetDatasetContentAsync(const GetDatasetContentRequest& request, const GetDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDatasetContentAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::GetDatasetContentAsyncHelper(const GetDatasetContentRequest& request, const GetDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDatasetContent(request), context);
}

ListChannelsOutcome IoTAnalyticsClient::ListChannels(const ListChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListChannelsOutcome(ListChannelsResult(outcome.GetResult()));
  }
  else
  {
    return ListChannelsOutcome(outcome.GetError());
  }
}

ListChannelsOutcomeCallable IoTAnalyticsClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::ListChannelsAsyncHelper(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannels(request), context);
}

ListDatasetContentsOutcome IoTAnalyticsClient::ListDatasetContents(const ListDatasetContentsRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDatasetContents", "Required field: DatasetName, is not set");
    return ListDatasetContentsOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datasets/";
  ss << request.GetDatasetName();
  ss << "/contents";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatasetContentsOutcome(ListDatasetContentsResult(outcome.GetResult()));
  }
  else
  {
    return ListDatasetContentsOutcome(outcome.GetError());
  }
}

ListDatasetContentsOutcomeCallable IoTAnalyticsClient::ListDatasetContentsCallable(const ListDatasetContentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetContentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetContents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::ListDatasetContentsAsync(const ListDatasetContentsRequest& request, const ListDatasetContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetContentsAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::ListDatasetContentsAsyncHelper(const ListDatasetContentsRequest& request, const ListDatasetContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasetContents(request), context);
}

ListDatasetsOutcome IoTAnalyticsClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datasets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatasetsOutcome(ListDatasetsResult(outcome.GetResult()));
  }
  else
  {
    return ListDatasetsOutcome(outcome.GetError());
  }
}

ListDatasetsOutcomeCallable IoTAnalyticsClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetsAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::ListDatasetsAsyncHelper(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasets(request), context);
}

ListDatastoresOutcome IoTAnalyticsClient::ListDatastores(const ListDatastoresRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datastores";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatastoresOutcome(ListDatastoresResult(outcome.GetResult()));
  }
  else
  {
    return ListDatastoresOutcome(outcome.GetError());
  }
}

ListDatastoresOutcomeCallable IoTAnalyticsClient::ListDatastoresCallable(const ListDatastoresRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatastoresOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatastores(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::ListDatastoresAsync(const ListDatastoresRequest& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatastoresAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::ListDatastoresAsyncHelper(const ListDatastoresRequest& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatastores(request), context);
}

ListPipelinesOutcome IoTAnalyticsClient::ListPipelines(const ListPipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/pipelines";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPipelinesOutcome(ListPipelinesResult(outcome.GetResult()));
  }
  else
  {
    return ListPipelinesOutcome(outcome.GetError());
  }
}

ListPipelinesOutcomeCallable IoTAnalyticsClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPipelinesAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::ListPipelinesAsyncHelper(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPipelines(request), context);
}

ListTagsForResourceOutcome IoTAnalyticsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable IoTAnalyticsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutLoggingOptionsOutcome IoTAnalyticsClient::PutLoggingOptions(const PutLoggingOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/logging";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutLoggingOptionsOutcome(NoResult());
  }
  else
  {
    return PutLoggingOptionsOutcome(outcome.GetError());
  }
}

PutLoggingOptionsOutcomeCallable IoTAnalyticsClient::PutLoggingOptionsCallable(const PutLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::PutLoggingOptionsAsync(const PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutLoggingOptionsAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::PutLoggingOptionsAsyncHelper(const PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLoggingOptions(request), context);
}

RunPipelineActivityOutcome IoTAnalyticsClient::RunPipelineActivity(const RunPipelineActivityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/pipelineactivities/run";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RunPipelineActivityOutcome(RunPipelineActivityResult(outcome.GetResult()));
  }
  else
  {
    return RunPipelineActivityOutcome(outcome.GetError());
  }
}

RunPipelineActivityOutcomeCallable IoTAnalyticsClient::RunPipelineActivityCallable(const RunPipelineActivityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RunPipelineActivityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RunPipelineActivity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::RunPipelineActivityAsync(const RunPipelineActivityRequest& request, const RunPipelineActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RunPipelineActivityAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::RunPipelineActivityAsyncHelper(const RunPipelineActivityRequest& request, const RunPipelineActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunPipelineActivity(request), context);
}

SampleChannelDataOutcome IoTAnalyticsClient::SampleChannelData(const SampleChannelDataRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SampleChannelData", "Required field: ChannelName, is not set");
    return SampleChannelDataOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelName();
  ss << "/sample";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SampleChannelDataOutcome(SampleChannelDataResult(outcome.GetResult()));
  }
  else
  {
    return SampleChannelDataOutcome(outcome.GetError());
  }
}

SampleChannelDataOutcomeCallable IoTAnalyticsClient::SampleChannelDataCallable(const SampleChannelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SampleChannelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SampleChannelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::SampleChannelDataAsync(const SampleChannelDataRequest& request, const SampleChannelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SampleChannelDataAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::SampleChannelDataAsyncHelper(const SampleChannelDataRequest& request, const SampleChannelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SampleChannelData(request), context);
}

StartPipelineReprocessingOutcome IoTAnalyticsClient::StartPipelineReprocessing(const StartPipelineReprocessingRequest& request) const
{
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartPipelineReprocessing", "Required field: PipelineName, is not set");
    return StartPipelineReprocessingOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/pipelines/";
  ss << request.GetPipelineName();
  ss << "/reprocessing";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartPipelineReprocessingOutcome(StartPipelineReprocessingResult(outcome.GetResult()));
  }
  else
  {
    return StartPipelineReprocessingOutcome(outcome.GetError());
  }
}

StartPipelineReprocessingOutcomeCallable IoTAnalyticsClient::StartPipelineReprocessingCallable(const StartPipelineReprocessingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPipelineReprocessingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPipelineReprocessing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::StartPipelineReprocessingAsync(const StartPipelineReprocessingRequest& request, const StartPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartPipelineReprocessingAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::StartPipelineReprocessingAsyncHelper(const StartPipelineReprocessingRequest& request, const StartPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartPipelineReprocessing(request), context);
}

TagResourceOutcome IoTAnalyticsClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable IoTAnalyticsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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
  Aws::StringStream ss;
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable IoTAnalyticsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateChannelOutcome IoTAnalyticsClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateChannelOutcome(NoResult());
  }
  else
  {
    return UpdateChannelOutcome(outcome.GetError());
  }
}

UpdateChannelOutcomeCallable IoTAnalyticsClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::UpdateChannelAsyncHelper(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannel(request), context);
}

UpdateDatasetOutcome IoTAnalyticsClient::UpdateDataset(const UpdateDatasetRequest& request) const
{
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataset", "Required field: DatasetName, is not set");
    return UpdateDatasetOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datasets/";
  ss << request.GetDatasetName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDatasetOutcome(NoResult());
  }
  else
  {
    return UpdateDatasetOutcome(outcome.GetError());
  }
}

UpdateDatasetOutcomeCallable IoTAnalyticsClient::UpdateDatasetCallable(const UpdateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::UpdateDatasetAsync(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDatasetAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::UpdateDatasetAsyncHelper(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDataset(request), context);
}

UpdateDatastoreOutcome IoTAnalyticsClient::UpdateDatastore(const UpdateDatastoreRequest& request) const
{
  if (!request.DatastoreNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDatastore", "Required field: DatastoreName, is not set");
    return UpdateDatastoreOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/datastores/";
  ss << request.GetDatastoreName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDatastoreOutcome(NoResult());
  }
  else
  {
    return UpdateDatastoreOutcome(outcome.GetError());
  }
}

UpdateDatastoreOutcomeCallable IoTAnalyticsClient::UpdateDatastoreCallable(const UpdateDatastoreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatastoreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatastore(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::UpdateDatastoreAsync(const UpdateDatastoreRequest& request, const UpdateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDatastoreAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::UpdateDatastoreAsyncHelper(const UpdateDatastoreRequest& request, const UpdateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDatastore(request), context);
}

UpdatePipelineOutcome IoTAnalyticsClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipeline", "Required field: PipelineName, is not set");
    return UpdatePipelineOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/pipelines/";
  ss << request.GetPipelineName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePipelineOutcome(NoResult());
  }
  else
  {
    return UpdatePipelineOutcome(outcome.GetError());
  }
}

UpdatePipelineOutcomeCallable IoTAnalyticsClient::UpdatePipelineCallable(const UpdatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTAnalyticsClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePipelineAsyncHelper( request, handler, context ); } );
}

void IoTAnalyticsClient::UpdatePipelineAsyncHelper(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePipeline(request), context);
}

