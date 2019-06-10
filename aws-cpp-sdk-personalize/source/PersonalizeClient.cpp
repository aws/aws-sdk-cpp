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

#include <aws/personalize/PersonalizeClient.h>
#include <aws/personalize/PersonalizeEndpoint.h>
#include <aws/personalize/PersonalizeErrorMarshaller.h>
#include <aws/personalize/model/CreateCampaignRequest.h>
#include <aws/personalize/model/CreateDatasetRequest.h>
#include <aws/personalize/model/CreateDatasetGroupRequest.h>
#include <aws/personalize/model/CreateDatasetImportJobRequest.h>
#include <aws/personalize/model/CreateEventTrackerRequest.h>
#include <aws/personalize/model/CreateSchemaRequest.h>
#include <aws/personalize/model/CreateSolutionRequest.h>
#include <aws/personalize/model/CreateSolutionVersionRequest.h>
#include <aws/personalize/model/DeleteCampaignRequest.h>
#include <aws/personalize/model/DeleteDatasetRequest.h>
#include <aws/personalize/model/DeleteDatasetGroupRequest.h>
#include <aws/personalize/model/DeleteEventTrackerRequest.h>
#include <aws/personalize/model/DeleteSchemaRequest.h>
#include <aws/personalize/model/DeleteSolutionRequest.h>
#include <aws/personalize/model/DescribeAlgorithmRequest.h>
#include <aws/personalize/model/DescribeCampaignRequest.h>
#include <aws/personalize/model/DescribeDatasetRequest.h>
#include <aws/personalize/model/DescribeDatasetGroupRequest.h>
#include <aws/personalize/model/DescribeDatasetImportJobRequest.h>
#include <aws/personalize/model/DescribeEventTrackerRequest.h>
#include <aws/personalize/model/DescribeFeatureTransformationRequest.h>
#include <aws/personalize/model/DescribeRecipeRequest.h>
#include <aws/personalize/model/DescribeSchemaRequest.h>
#include <aws/personalize/model/DescribeSolutionRequest.h>
#include <aws/personalize/model/DescribeSolutionVersionRequest.h>
#include <aws/personalize/model/GetSolutionMetricsRequest.h>
#include <aws/personalize/model/ListCampaignsRequest.h>
#include <aws/personalize/model/ListDatasetGroupsRequest.h>
#include <aws/personalize/model/ListDatasetImportJobsRequest.h>
#include <aws/personalize/model/ListDatasetsRequest.h>
#include <aws/personalize/model/ListEventTrackersRequest.h>
#include <aws/personalize/model/ListRecipesRequest.h>
#include <aws/personalize/model/ListSchemasRequest.h>
#include <aws/personalize/model/ListSolutionVersionsRequest.h>
#include <aws/personalize/model/ListSolutionsRequest.h>
#include <aws/personalize/model/UpdateCampaignRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Personalize;
using namespace Aws::Personalize::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "personalize";
static const char* ALLOCATION_TAG = "PersonalizeClient";


PersonalizeClient::PersonalizeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PersonalizeClient::~PersonalizeClient()
{
}

void PersonalizeClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PersonalizeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PersonalizeClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateCampaignOutcome PersonalizeClient::CreateCampaign(const CreateCampaignRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCampaignOutcome(CreateCampaignResult(outcome.GetResult()));
  }
  else
  {
    return CreateCampaignOutcome(outcome.GetError());
  }
}

CreateCampaignOutcomeCallable PersonalizeClient::CreateCampaignCallable(const CreateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateCampaignAsync(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCampaignAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::CreateCampaignAsyncHelper(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCampaign(request), context);
}

CreateDatasetOutcome PersonalizeClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
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

CreateDatasetOutcomeCallable PersonalizeClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::CreateDatasetAsyncHelper(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataset(request), context);
}

CreateDatasetGroupOutcome PersonalizeClient::CreateDatasetGroup(const CreateDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDatasetGroupOutcome(CreateDatasetGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateDatasetGroupOutcome(outcome.GetError());
  }
}

CreateDatasetGroupOutcomeCallable PersonalizeClient::CreateDatasetGroupCallable(const CreateDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateDatasetGroupAsync(const CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetGroupAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::CreateDatasetGroupAsyncHelper(const CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDatasetGroup(request), context);
}

CreateDatasetImportJobOutcome PersonalizeClient::CreateDatasetImportJob(const CreateDatasetImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDatasetImportJobOutcome(CreateDatasetImportJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateDatasetImportJobOutcome(outcome.GetError());
  }
}

CreateDatasetImportJobOutcomeCallable PersonalizeClient::CreateDatasetImportJobCallable(const CreateDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateDatasetImportJobAsync(const CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetImportJobAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::CreateDatasetImportJobAsyncHelper(const CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDatasetImportJob(request), context);
}

CreateEventTrackerOutcome PersonalizeClient::CreateEventTracker(const CreateEventTrackerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateEventTrackerOutcome(CreateEventTrackerResult(outcome.GetResult()));
  }
  else
  {
    return CreateEventTrackerOutcome(outcome.GetError());
  }
}

CreateEventTrackerOutcomeCallable PersonalizeClient::CreateEventTrackerCallable(const CreateEventTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateEventTrackerAsync(const CreateEventTrackerRequest& request, const CreateEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEventTrackerAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::CreateEventTrackerAsyncHelper(const CreateEventTrackerRequest& request, const CreateEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventTracker(request), context);
}

CreateSchemaOutcome PersonalizeClient::CreateSchema(const CreateSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSchemaOutcome(CreateSchemaResult(outcome.GetResult()));
  }
  else
  {
    return CreateSchemaOutcome(outcome.GetError());
  }
}

CreateSchemaOutcomeCallable PersonalizeClient::CreateSchemaCallable(const CreateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateSchemaAsync(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSchemaAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::CreateSchemaAsyncHelper(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSchema(request), context);
}

CreateSolutionOutcome PersonalizeClient::CreateSolution(const CreateSolutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSolutionOutcome(CreateSolutionResult(outcome.GetResult()));
  }
  else
  {
    return CreateSolutionOutcome(outcome.GetError());
  }
}

CreateSolutionOutcomeCallable PersonalizeClient::CreateSolutionCallable(const CreateSolutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSolutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSolution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateSolutionAsync(const CreateSolutionRequest& request, const CreateSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSolutionAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::CreateSolutionAsyncHelper(const CreateSolutionRequest& request, const CreateSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSolution(request), context);
}

CreateSolutionVersionOutcome PersonalizeClient::CreateSolutionVersion(const CreateSolutionVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSolutionVersionOutcome(CreateSolutionVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateSolutionVersionOutcome(outcome.GetError());
  }
}

CreateSolutionVersionOutcomeCallable PersonalizeClient::CreateSolutionVersionCallable(const CreateSolutionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSolutionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSolutionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateSolutionVersionAsync(const CreateSolutionVersionRequest& request, const CreateSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSolutionVersionAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::CreateSolutionVersionAsyncHelper(const CreateSolutionVersionRequest& request, const CreateSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSolutionVersion(request), context);
}

DeleteCampaignOutcome PersonalizeClient::DeleteCampaign(const DeleteCampaignRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCampaignOutcome(NoResult());
  }
  else
  {
    return DeleteCampaignOutcome(outcome.GetError());
  }
}

DeleteCampaignOutcomeCallable PersonalizeClient::DeleteCampaignCallable(const DeleteCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteCampaignAsync(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCampaignAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DeleteCampaignAsyncHelper(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCampaign(request), context);
}

DeleteDatasetOutcome PersonalizeClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatasetOutcome(NoResult());
  }
  else
  {
    return DeleteDatasetOutcome(outcome.GetError());
  }
}

DeleteDatasetOutcomeCallable PersonalizeClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DeleteDatasetAsyncHelper(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataset(request), context);
}

DeleteDatasetGroupOutcome PersonalizeClient::DeleteDatasetGroup(const DeleteDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDatasetGroupOutcome(NoResult());
  }
  else
  {
    return DeleteDatasetGroupOutcome(outcome.GetError());
  }
}

DeleteDatasetGroupOutcomeCallable PersonalizeClient::DeleteDatasetGroupCallable(const DeleteDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteDatasetGroupAsync(const DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetGroupAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DeleteDatasetGroupAsyncHelper(const DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDatasetGroup(request), context);
}

DeleteEventTrackerOutcome PersonalizeClient::DeleteEventTracker(const DeleteEventTrackerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEventTrackerOutcome(NoResult());
  }
  else
  {
    return DeleteEventTrackerOutcome(outcome.GetError());
  }
}

DeleteEventTrackerOutcomeCallable PersonalizeClient::DeleteEventTrackerCallable(const DeleteEventTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteEventTrackerAsync(const DeleteEventTrackerRequest& request, const DeleteEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventTrackerAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DeleteEventTrackerAsyncHelper(const DeleteEventTrackerRequest& request, const DeleteEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventTracker(request), context);
}

DeleteSchemaOutcome PersonalizeClient::DeleteSchema(const DeleteSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSchemaOutcome(NoResult());
  }
  else
  {
    return DeleteSchemaOutcome(outcome.GetError());
  }
}

DeleteSchemaOutcomeCallable PersonalizeClient::DeleteSchemaCallable(const DeleteSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteSchemaAsync(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSchemaAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DeleteSchemaAsyncHelper(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSchema(request), context);
}

DeleteSolutionOutcome PersonalizeClient::DeleteSolution(const DeleteSolutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSolutionOutcome(NoResult());
  }
  else
  {
    return DeleteSolutionOutcome(outcome.GetError());
  }
}

DeleteSolutionOutcomeCallable PersonalizeClient::DeleteSolutionCallable(const DeleteSolutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSolutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSolution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteSolutionAsync(const DeleteSolutionRequest& request, const DeleteSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSolutionAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DeleteSolutionAsyncHelper(const DeleteSolutionRequest& request, const DeleteSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSolution(request), context);
}

DescribeAlgorithmOutcome PersonalizeClient::DescribeAlgorithm(const DescribeAlgorithmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAlgorithmOutcome(DescribeAlgorithmResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAlgorithmOutcome(outcome.GetError());
  }
}

DescribeAlgorithmOutcomeCallable PersonalizeClient::DescribeAlgorithmCallable(const DescribeAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeAlgorithmAsync(const DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAlgorithmAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeAlgorithmAsyncHelper(const DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAlgorithm(request), context);
}

DescribeCampaignOutcome PersonalizeClient::DescribeCampaign(const DescribeCampaignRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCampaignOutcome(DescribeCampaignResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCampaignOutcome(outcome.GetError());
  }
}

DescribeCampaignOutcomeCallable PersonalizeClient::DescribeCampaignCallable(const DescribeCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeCampaignAsync(const DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCampaignAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeCampaignAsyncHelper(const DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCampaign(request), context);
}

DescribeDatasetOutcome PersonalizeClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDatasetOutcome(DescribeDatasetResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDatasetOutcome(outcome.GetError());
  }
}

DescribeDatasetOutcomeCallable PersonalizeClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatasetAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeDatasetAsyncHelper(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataset(request), context);
}

DescribeDatasetGroupOutcome PersonalizeClient::DescribeDatasetGroup(const DescribeDatasetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDatasetGroupOutcome(DescribeDatasetGroupResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDatasetGroupOutcome(outcome.GetError());
  }
}

DescribeDatasetGroupOutcomeCallable PersonalizeClient::DescribeDatasetGroupCallable(const DescribeDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeDatasetGroupAsync(const DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatasetGroupAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeDatasetGroupAsyncHelper(const DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDatasetGroup(request), context);
}

DescribeDatasetImportJobOutcome PersonalizeClient::DescribeDatasetImportJob(const DescribeDatasetImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDatasetImportJobOutcome(DescribeDatasetImportJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDatasetImportJobOutcome(outcome.GetError());
  }
}

DescribeDatasetImportJobOutcomeCallable PersonalizeClient::DescribeDatasetImportJobCallable(const DescribeDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeDatasetImportJobAsync(const DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatasetImportJobAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeDatasetImportJobAsyncHelper(const DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDatasetImportJob(request), context);
}

DescribeEventTrackerOutcome PersonalizeClient::DescribeEventTracker(const DescribeEventTrackerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventTrackerOutcome(DescribeEventTrackerResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventTrackerOutcome(outcome.GetError());
  }
}

DescribeEventTrackerOutcomeCallable PersonalizeClient::DescribeEventTrackerCallable(const DescribeEventTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeEventTrackerAsync(const DescribeEventTrackerRequest& request, const DescribeEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventTrackerAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeEventTrackerAsyncHelper(const DescribeEventTrackerRequest& request, const DescribeEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventTracker(request), context);
}

DescribeFeatureTransformationOutcome PersonalizeClient::DescribeFeatureTransformation(const DescribeFeatureTransformationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFeatureTransformationOutcome(DescribeFeatureTransformationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFeatureTransformationOutcome(outcome.GetError());
  }
}

DescribeFeatureTransformationOutcomeCallable PersonalizeClient::DescribeFeatureTransformationCallable(const DescribeFeatureTransformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFeatureTransformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFeatureTransformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeFeatureTransformationAsync(const DescribeFeatureTransformationRequest& request, const DescribeFeatureTransformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFeatureTransformationAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeFeatureTransformationAsyncHelper(const DescribeFeatureTransformationRequest& request, const DescribeFeatureTransformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFeatureTransformation(request), context);
}

DescribeRecipeOutcome PersonalizeClient::DescribeRecipe(const DescribeRecipeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRecipeOutcome(DescribeRecipeResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRecipeOutcome(outcome.GetError());
  }
}

DescribeRecipeOutcomeCallable PersonalizeClient::DescribeRecipeCallable(const DescribeRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeRecipeAsync(const DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRecipeAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeRecipeAsyncHelper(const DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRecipe(request), context);
}

DescribeSchemaOutcome PersonalizeClient::DescribeSchema(const DescribeSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSchemaOutcome(DescribeSchemaResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSchemaOutcome(outcome.GetError());
  }
}

DescribeSchemaOutcomeCallable PersonalizeClient::DescribeSchemaCallable(const DescribeSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeSchemaAsync(const DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSchemaAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeSchemaAsyncHelper(const DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSchema(request), context);
}

DescribeSolutionOutcome PersonalizeClient::DescribeSolution(const DescribeSolutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSolutionOutcome(DescribeSolutionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSolutionOutcome(outcome.GetError());
  }
}

DescribeSolutionOutcomeCallable PersonalizeClient::DescribeSolutionCallable(const DescribeSolutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSolutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSolution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeSolutionAsync(const DescribeSolutionRequest& request, const DescribeSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSolutionAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeSolutionAsyncHelper(const DescribeSolutionRequest& request, const DescribeSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSolution(request), context);
}

DescribeSolutionVersionOutcome PersonalizeClient::DescribeSolutionVersion(const DescribeSolutionVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSolutionVersionOutcome(DescribeSolutionVersionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSolutionVersionOutcome(outcome.GetError());
  }
}

DescribeSolutionVersionOutcomeCallable PersonalizeClient::DescribeSolutionVersionCallable(const DescribeSolutionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSolutionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSolutionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeSolutionVersionAsync(const DescribeSolutionVersionRequest& request, const DescribeSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSolutionVersionAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::DescribeSolutionVersionAsyncHelper(const DescribeSolutionVersionRequest& request, const DescribeSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSolutionVersion(request), context);
}

GetSolutionMetricsOutcome PersonalizeClient::GetSolutionMetrics(const GetSolutionMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSolutionMetricsOutcome(GetSolutionMetricsResult(outcome.GetResult()));
  }
  else
  {
    return GetSolutionMetricsOutcome(outcome.GetError());
  }
}

GetSolutionMetricsOutcomeCallable PersonalizeClient::GetSolutionMetricsCallable(const GetSolutionMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSolutionMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSolutionMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::GetSolutionMetricsAsync(const GetSolutionMetricsRequest& request, const GetSolutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSolutionMetricsAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::GetSolutionMetricsAsyncHelper(const GetSolutionMetricsRequest& request, const GetSolutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSolutionMetrics(request), context);
}

ListCampaignsOutcome PersonalizeClient::ListCampaigns(const ListCampaignsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCampaignsOutcome(ListCampaignsResult(outcome.GetResult()));
  }
  else
  {
    return ListCampaignsOutcome(outcome.GetError());
  }
}

ListCampaignsOutcomeCallable PersonalizeClient::ListCampaignsCallable(const ListCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListCampaignsAsync(const ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCampaignsAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::ListCampaignsAsyncHelper(const ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCampaigns(request), context);
}

ListDatasetGroupsOutcome PersonalizeClient::ListDatasetGroups(const ListDatasetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatasetGroupsOutcome(ListDatasetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListDatasetGroupsOutcome(outcome.GetError());
  }
}

ListDatasetGroupsOutcomeCallable PersonalizeClient::ListDatasetGroupsCallable(const ListDatasetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListDatasetGroupsAsync(const ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetGroupsAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::ListDatasetGroupsAsyncHelper(const ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasetGroups(request), context);
}

ListDatasetImportJobsOutcome PersonalizeClient::ListDatasetImportJobs(const ListDatasetImportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatasetImportJobsOutcome(ListDatasetImportJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListDatasetImportJobsOutcome(outcome.GetError());
  }
}

ListDatasetImportJobsOutcomeCallable PersonalizeClient::ListDatasetImportJobsCallable(const ListDatasetImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListDatasetImportJobsAsync(const ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetImportJobsAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::ListDatasetImportJobsAsyncHelper(const ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasetImportJobs(request), context);
}

ListDatasetsOutcome PersonalizeClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDatasetsOutcome(ListDatasetsResult(outcome.GetResult()));
  }
  else
  {
    return ListDatasetsOutcome(outcome.GetError());
  }
}

ListDatasetsOutcomeCallable PersonalizeClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetsAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::ListDatasetsAsyncHelper(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasets(request), context);
}

ListEventTrackersOutcome PersonalizeClient::ListEventTrackers(const ListEventTrackersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEventTrackersOutcome(ListEventTrackersResult(outcome.GetResult()));
  }
  else
  {
    return ListEventTrackersOutcome(outcome.GetError());
  }
}

ListEventTrackersOutcomeCallable PersonalizeClient::ListEventTrackersCallable(const ListEventTrackersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventTrackersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventTrackers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListEventTrackersAsync(const ListEventTrackersRequest& request, const ListEventTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEventTrackersAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::ListEventTrackersAsyncHelper(const ListEventTrackersRequest& request, const ListEventTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEventTrackers(request), context);
}

ListRecipesOutcome PersonalizeClient::ListRecipes(const ListRecipesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRecipesOutcome(ListRecipesResult(outcome.GetResult()));
  }
  else
  {
    return ListRecipesOutcome(outcome.GetError());
  }
}

ListRecipesOutcomeCallable PersonalizeClient::ListRecipesCallable(const ListRecipesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecipesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecipes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListRecipesAsync(const ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecipesAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::ListRecipesAsyncHelper(const ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecipes(request), context);
}

ListSchemasOutcome PersonalizeClient::ListSchemas(const ListSchemasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSchemasOutcome(ListSchemasResult(outcome.GetResult()));
  }
  else
  {
    return ListSchemasOutcome(outcome.GetError());
  }
}

ListSchemasOutcomeCallable PersonalizeClient::ListSchemasCallable(const ListSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListSchemasAsync(const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSchemasAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::ListSchemasAsyncHelper(const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSchemas(request), context);
}

ListSolutionVersionsOutcome PersonalizeClient::ListSolutionVersions(const ListSolutionVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSolutionVersionsOutcome(ListSolutionVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListSolutionVersionsOutcome(outcome.GetError());
  }
}

ListSolutionVersionsOutcomeCallable PersonalizeClient::ListSolutionVersionsCallable(const ListSolutionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSolutionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSolutionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListSolutionVersionsAsync(const ListSolutionVersionsRequest& request, const ListSolutionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSolutionVersionsAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::ListSolutionVersionsAsyncHelper(const ListSolutionVersionsRequest& request, const ListSolutionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSolutionVersions(request), context);
}

ListSolutionsOutcome PersonalizeClient::ListSolutions(const ListSolutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSolutionsOutcome(ListSolutionsResult(outcome.GetResult()));
  }
  else
  {
    return ListSolutionsOutcome(outcome.GetError());
  }
}

ListSolutionsOutcomeCallable PersonalizeClient::ListSolutionsCallable(const ListSolutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSolutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSolutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListSolutionsAsync(const ListSolutionsRequest& request, const ListSolutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSolutionsAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::ListSolutionsAsyncHelper(const ListSolutionsRequest& request, const ListSolutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSolutions(request), context);
}

UpdateCampaignOutcome PersonalizeClient::UpdateCampaign(const UpdateCampaignRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCampaignOutcome(UpdateCampaignResult(outcome.GetResult()));
  }
  else
  {
    return UpdateCampaignOutcome(outcome.GetError());
  }
}

UpdateCampaignOutcomeCallable PersonalizeClient::UpdateCampaignCallable(const UpdateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::UpdateCampaignAsync(const UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCampaignAsyncHelper( request, handler, context ); } );
}

void PersonalizeClient::UpdateCampaignAsyncHelper(const UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCampaign(request), context);
}

