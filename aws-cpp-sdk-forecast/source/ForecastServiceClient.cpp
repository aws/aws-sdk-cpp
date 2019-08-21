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

#include <aws/forecast/ForecastServiceClient.h>
#include <aws/forecast/ForecastServiceEndpoint.h>
#include <aws/forecast/ForecastServiceErrorMarshaller.h>
#include <aws/forecast/model/CreateDatasetRequest.h>
#include <aws/forecast/model/CreateDatasetGroupRequest.h>
#include <aws/forecast/model/CreateDatasetImportJobRequest.h>
#include <aws/forecast/model/CreateForecastRequest.h>
#include <aws/forecast/model/CreateForecastExportJobRequest.h>
#include <aws/forecast/model/CreatePredictorRequest.h>
#include <aws/forecast/model/DeleteDatasetRequest.h>
#include <aws/forecast/model/DeleteDatasetGroupRequest.h>
#include <aws/forecast/model/DeleteDatasetImportJobRequest.h>
#include <aws/forecast/model/DeleteForecastRequest.h>
#include <aws/forecast/model/DeleteForecastExportJobRequest.h>
#include <aws/forecast/model/DeletePredictorRequest.h>
#include <aws/forecast/model/DescribeDatasetRequest.h>
#include <aws/forecast/model/DescribeDatasetGroupRequest.h>
#include <aws/forecast/model/DescribeDatasetImportJobRequest.h>
#include <aws/forecast/model/DescribeForecastRequest.h>
#include <aws/forecast/model/DescribeForecastExportJobRequest.h>
#include <aws/forecast/model/DescribePredictorRequest.h>
#include <aws/forecast/model/GetAccuracyMetricsRequest.h>
#include <aws/forecast/model/ListDatasetGroupsRequest.h>
#include <aws/forecast/model/ListDatasetImportJobsRequest.h>
#include <aws/forecast/model/ListDatasetsRequest.h>
#include <aws/forecast/model/ListForecastExportJobsRequest.h>
#include <aws/forecast/model/ListForecastsRequest.h>
#include <aws/forecast/model/ListPredictorsRequest.h>
#include <aws/forecast/model/UpdateDatasetGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ForecastService;
using namespace Aws::ForecastService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "forecast";
static const char* ALLOCATION_TAG = "ForecastServiceClient";


ForecastServiceClient::ForecastServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ForecastServiceClient::ForecastServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ForecastServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ForecastServiceClient::~ForecastServiceClient()
{
}

void ForecastServiceClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ForecastServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ForecastServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateDatasetOutcome ForecastServiceClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDatasetOutcome(CreateDatasetResult(outcome.GetResult()));
  }
  else
  {
    return CreateDatasetOutcome(outcome.GetError());
  }
}

CreateDatasetOutcomeCallable ForecastServiceClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::CreateDatasetAsyncHelper(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataset(request), context);
}

CreateDatasetGroupOutcome ForecastServiceClient::CreateDatasetGroup(const CreateDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDatasetGroupOutcome(CreateDatasetGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateDatasetGroupOutcome(outcome.GetError());
  }
}

CreateDatasetGroupOutcomeCallable ForecastServiceClient::CreateDatasetGroupCallable(const CreateDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateDatasetGroupAsync(const CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetGroupAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::CreateDatasetGroupAsyncHelper(const CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDatasetGroup(request), context);
}

CreateDatasetImportJobOutcome ForecastServiceClient::CreateDatasetImportJob(const CreateDatasetImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDatasetImportJobOutcome(CreateDatasetImportJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateDatasetImportJobOutcome(outcome.GetError());
  }
}

CreateDatasetImportJobOutcomeCallable ForecastServiceClient::CreateDatasetImportJobCallable(const CreateDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateDatasetImportJobAsync(const CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetImportJobAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::CreateDatasetImportJobAsyncHelper(const CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDatasetImportJob(request), context);
}

CreateForecastOutcome ForecastServiceClient::CreateForecast(const CreateForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateForecastOutcome(CreateForecastResult(outcome.GetResult()));
  }
  else
  {
    return CreateForecastOutcome(outcome.GetError());
  }
}

CreateForecastOutcomeCallable ForecastServiceClient::CreateForecastCallable(const CreateForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateForecastAsync(const CreateForecastRequest& request, const CreateForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateForecastAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::CreateForecastAsyncHelper(const CreateForecastRequest& request, const CreateForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateForecast(request), context);
}

CreateForecastExportJobOutcome ForecastServiceClient::CreateForecastExportJob(const CreateForecastExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateForecastExportJobOutcome(CreateForecastExportJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateForecastExportJobOutcome(outcome.GetError());
  }
}

CreateForecastExportJobOutcomeCallable ForecastServiceClient::CreateForecastExportJobCallable(const CreateForecastExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateForecastExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateForecastExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreateForecastExportJobAsync(const CreateForecastExportJobRequest& request, const CreateForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateForecastExportJobAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::CreateForecastExportJobAsyncHelper(const CreateForecastExportJobRequest& request, const CreateForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateForecastExportJob(request), context);
}

CreatePredictorOutcome ForecastServiceClient::CreatePredictor(const CreatePredictorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePredictorOutcome(CreatePredictorResult(outcome.GetResult()));
  }
  else
  {
    return CreatePredictorOutcome(outcome.GetError());
  }
}

CreatePredictorOutcomeCallable ForecastServiceClient::CreatePredictorCallable(const CreatePredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::CreatePredictorAsync(const CreatePredictorRequest& request, const CreatePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePredictorAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::CreatePredictorAsyncHelper(const CreatePredictorRequest& request, const CreatePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePredictor(request), context);
}

DeleteDatasetOutcome ForecastServiceClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatasetOutcome(NoResult());
  }
  else
  {
    return DeleteDatasetOutcome(outcome.GetError());
  }
}

DeleteDatasetOutcomeCallable ForecastServiceClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DeleteDatasetAsyncHelper(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataset(request), context);
}

DeleteDatasetGroupOutcome ForecastServiceClient::DeleteDatasetGroup(const DeleteDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatasetGroupOutcome(NoResult());
  }
  else
  {
    return DeleteDatasetGroupOutcome(outcome.GetError());
  }
}

DeleteDatasetGroupOutcomeCallable ForecastServiceClient::DeleteDatasetGroupCallable(const DeleteDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteDatasetGroupAsync(const DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetGroupAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DeleteDatasetGroupAsyncHelper(const DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDatasetGroup(request), context);
}

DeleteDatasetImportJobOutcome ForecastServiceClient::DeleteDatasetImportJob(const DeleteDatasetImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatasetImportJobOutcome(NoResult());
  }
  else
  {
    return DeleteDatasetImportJobOutcome(outcome.GetError());
  }
}

DeleteDatasetImportJobOutcomeCallable ForecastServiceClient::DeleteDatasetImportJobCallable(const DeleteDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteDatasetImportJobAsync(const DeleteDatasetImportJobRequest& request, const DeleteDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetImportJobAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DeleteDatasetImportJobAsyncHelper(const DeleteDatasetImportJobRequest& request, const DeleteDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDatasetImportJob(request), context);
}

DeleteForecastOutcome ForecastServiceClient::DeleteForecast(const DeleteForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteForecastOutcome(NoResult());
  }
  else
  {
    return DeleteForecastOutcome(outcome.GetError());
  }
}

DeleteForecastOutcomeCallable ForecastServiceClient::DeleteForecastCallable(const DeleteForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteForecastAsync(const DeleteForecastRequest& request, const DeleteForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteForecastAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DeleteForecastAsyncHelper(const DeleteForecastRequest& request, const DeleteForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteForecast(request), context);
}

DeleteForecastExportJobOutcome ForecastServiceClient::DeleteForecastExportJob(const DeleteForecastExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteForecastExportJobOutcome(NoResult());
  }
  else
  {
    return DeleteForecastExportJobOutcome(outcome.GetError());
  }
}

DeleteForecastExportJobOutcomeCallable ForecastServiceClient::DeleteForecastExportJobCallable(const DeleteForecastExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteForecastExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteForecastExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeleteForecastExportJobAsync(const DeleteForecastExportJobRequest& request, const DeleteForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteForecastExportJobAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DeleteForecastExportJobAsyncHelper(const DeleteForecastExportJobRequest& request, const DeleteForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteForecastExportJob(request), context);
}

DeletePredictorOutcome ForecastServiceClient::DeletePredictor(const DeletePredictorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePredictorOutcome(NoResult());
  }
  else
  {
    return DeletePredictorOutcome(outcome.GetError());
  }
}

DeletePredictorOutcomeCallable ForecastServiceClient::DeletePredictorCallable(const DeletePredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DeletePredictorAsync(const DeletePredictorRequest& request, const DeletePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePredictorAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DeletePredictorAsyncHelper(const DeletePredictorRequest& request, const DeletePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePredictor(request), context);
}

DescribeDatasetOutcome ForecastServiceClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDatasetOutcome(DescribeDatasetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDatasetOutcome(outcome.GetError());
  }
}

DescribeDatasetOutcomeCallable ForecastServiceClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatasetAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DescribeDatasetAsyncHelper(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataset(request), context);
}

DescribeDatasetGroupOutcome ForecastServiceClient::DescribeDatasetGroup(const DescribeDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDatasetGroupOutcome(DescribeDatasetGroupResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDatasetGroupOutcome(outcome.GetError());
  }
}

DescribeDatasetGroupOutcomeCallable ForecastServiceClient::DescribeDatasetGroupCallable(const DescribeDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeDatasetGroupAsync(const DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatasetGroupAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DescribeDatasetGroupAsyncHelper(const DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDatasetGroup(request), context);
}

DescribeDatasetImportJobOutcome ForecastServiceClient::DescribeDatasetImportJob(const DescribeDatasetImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDatasetImportJobOutcome(DescribeDatasetImportJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDatasetImportJobOutcome(outcome.GetError());
  }
}

DescribeDatasetImportJobOutcomeCallable ForecastServiceClient::DescribeDatasetImportJobCallable(const DescribeDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeDatasetImportJobAsync(const DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatasetImportJobAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DescribeDatasetImportJobAsyncHelper(const DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDatasetImportJob(request), context);
}

DescribeForecastOutcome ForecastServiceClient::DescribeForecast(const DescribeForecastRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeForecastOutcome(DescribeForecastResult(outcome.GetResult()));
  }
  else
  {
    return DescribeForecastOutcome(outcome.GetError());
  }
}

DescribeForecastOutcomeCallable ForecastServiceClient::DescribeForecastCallable(const DescribeForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeForecastAsync(const DescribeForecastRequest& request, const DescribeForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeForecastAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DescribeForecastAsyncHelper(const DescribeForecastRequest& request, const DescribeForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeForecast(request), context);
}

DescribeForecastExportJobOutcome ForecastServiceClient::DescribeForecastExportJob(const DescribeForecastExportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeForecastExportJobOutcome(DescribeForecastExportJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeForecastExportJobOutcome(outcome.GetError());
  }
}

DescribeForecastExportJobOutcomeCallable ForecastServiceClient::DescribeForecastExportJobCallable(const DescribeForecastExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeForecastExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeForecastExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribeForecastExportJobAsync(const DescribeForecastExportJobRequest& request, const DescribeForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeForecastExportJobAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DescribeForecastExportJobAsyncHelper(const DescribeForecastExportJobRequest& request, const DescribeForecastExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeForecastExportJob(request), context);
}

DescribePredictorOutcome ForecastServiceClient::DescribePredictor(const DescribePredictorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePredictorOutcome(DescribePredictorResult(outcome.GetResult()));
  }
  else
  {
    return DescribePredictorOutcome(outcome.GetError());
  }
}

DescribePredictorOutcomeCallable ForecastServiceClient::DescribePredictorCallable(const DescribePredictorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePredictorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePredictor(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::DescribePredictorAsync(const DescribePredictorRequest& request, const DescribePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePredictorAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::DescribePredictorAsyncHelper(const DescribePredictorRequest& request, const DescribePredictorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePredictor(request), context);
}

GetAccuracyMetricsOutcome ForecastServiceClient::GetAccuracyMetrics(const GetAccuracyMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAccuracyMetricsOutcome(GetAccuracyMetricsResult(outcome.GetResult()));
  }
  else
  {
    return GetAccuracyMetricsOutcome(outcome.GetError());
  }
}

GetAccuracyMetricsOutcomeCallable ForecastServiceClient::GetAccuracyMetricsCallable(const GetAccuracyMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccuracyMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccuracyMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::GetAccuracyMetricsAsync(const GetAccuracyMetricsRequest& request, const GetAccuracyMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccuracyMetricsAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::GetAccuracyMetricsAsyncHelper(const GetAccuracyMetricsRequest& request, const GetAccuracyMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccuracyMetrics(request), context);
}

ListDatasetGroupsOutcome ForecastServiceClient::ListDatasetGroups(const ListDatasetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatasetGroupsOutcome(ListDatasetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListDatasetGroupsOutcome(outcome.GetError());
  }
}

ListDatasetGroupsOutcomeCallable ForecastServiceClient::ListDatasetGroupsCallable(const ListDatasetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListDatasetGroupsAsync(const ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetGroupsAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::ListDatasetGroupsAsyncHelper(const ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasetGroups(request), context);
}

ListDatasetImportJobsOutcome ForecastServiceClient::ListDatasetImportJobs(const ListDatasetImportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatasetImportJobsOutcome(ListDatasetImportJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListDatasetImportJobsOutcome(outcome.GetError());
  }
}

ListDatasetImportJobsOutcomeCallable ForecastServiceClient::ListDatasetImportJobsCallable(const ListDatasetImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListDatasetImportJobsAsync(const ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetImportJobsAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::ListDatasetImportJobsAsyncHelper(const ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasetImportJobs(request), context);
}

ListDatasetsOutcome ForecastServiceClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatasetsOutcome(ListDatasetsResult(outcome.GetResult()));
  }
  else
  {
    return ListDatasetsOutcome(outcome.GetError());
  }
}

ListDatasetsOutcomeCallable ForecastServiceClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetsAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::ListDatasetsAsyncHelper(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasets(request), context);
}

ListForecastExportJobsOutcome ForecastServiceClient::ListForecastExportJobs(const ListForecastExportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListForecastExportJobsOutcome(ListForecastExportJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListForecastExportJobsOutcome(outcome.GetError());
  }
}

ListForecastExportJobsOutcomeCallable ForecastServiceClient::ListForecastExportJobsCallable(const ListForecastExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListForecastExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListForecastExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListForecastExportJobsAsync(const ListForecastExportJobsRequest& request, const ListForecastExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListForecastExportJobsAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::ListForecastExportJobsAsyncHelper(const ListForecastExportJobsRequest& request, const ListForecastExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListForecastExportJobs(request), context);
}

ListForecastsOutcome ForecastServiceClient::ListForecasts(const ListForecastsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListForecastsOutcome(ListForecastsResult(outcome.GetResult()));
  }
  else
  {
    return ListForecastsOutcome(outcome.GetError());
  }
}

ListForecastsOutcomeCallable ForecastServiceClient::ListForecastsCallable(const ListForecastsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListForecastsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListForecasts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListForecastsAsync(const ListForecastsRequest& request, const ListForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListForecastsAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::ListForecastsAsyncHelper(const ListForecastsRequest& request, const ListForecastsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListForecasts(request), context);
}

ListPredictorsOutcome ForecastServiceClient::ListPredictors(const ListPredictorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPredictorsOutcome(ListPredictorsResult(outcome.GetResult()));
  }
  else
  {
    return ListPredictorsOutcome(outcome.GetError());
  }
}

ListPredictorsOutcomeCallable ForecastServiceClient::ListPredictorsCallable(const ListPredictorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPredictorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPredictors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::ListPredictorsAsync(const ListPredictorsRequest& request, const ListPredictorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPredictorsAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::ListPredictorsAsyncHelper(const ListPredictorsRequest& request, const ListPredictorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPredictors(request), context);
}

UpdateDatasetGroupOutcome ForecastServiceClient::UpdateDatasetGroup(const UpdateDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDatasetGroupOutcome(UpdateDatasetGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDatasetGroupOutcome(outcome.GetError());
  }
}

UpdateDatasetGroupOutcomeCallable ForecastServiceClient::UpdateDatasetGroupCallable(const UpdateDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastServiceClient::UpdateDatasetGroupAsync(const UpdateDatasetGroupRequest& request, const UpdateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDatasetGroupAsyncHelper( request, handler, context ); } );
}

void ForecastServiceClient::UpdateDatasetGroupAsyncHelper(const UpdateDatasetGroupRequest& request, const UpdateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDatasetGroup(request), context);
}

