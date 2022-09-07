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

#include <aws/databrew/GlueDataBrewClient.h>
#include <aws/databrew/GlueDataBrewEndpoint.h>
#include <aws/databrew/GlueDataBrewErrorMarshaller.h>
#include <aws/databrew/model/BatchDeleteRecipeVersionRequest.h>
#include <aws/databrew/model/CreateDatasetRequest.h>
#include <aws/databrew/model/CreateProfileJobRequest.h>
#include <aws/databrew/model/CreateProjectRequest.h>
#include <aws/databrew/model/CreateRecipeRequest.h>
#include <aws/databrew/model/CreateRecipeJobRequest.h>
#include <aws/databrew/model/CreateRulesetRequest.h>
#include <aws/databrew/model/CreateScheduleRequest.h>
#include <aws/databrew/model/DeleteDatasetRequest.h>
#include <aws/databrew/model/DeleteJobRequest.h>
#include <aws/databrew/model/DeleteProjectRequest.h>
#include <aws/databrew/model/DeleteRecipeVersionRequest.h>
#include <aws/databrew/model/DeleteRulesetRequest.h>
#include <aws/databrew/model/DeleteScheduleRequest.h>
#include <aws/databrew/model/DescribeDatasetRequest.h>
#include <aws/databrew/model/DescribeJobRequest.h>
#include <aws/databrew/model/DescribeJobRunRequest.h>
#include <aws/databrew/model/DescribeProjectRequest.h>
#include <aws/databrew/model/DescribeRecipeRequest.h>
#include <aws/databrew/model/DescribeRulesetRequest.h>
#include <aws/databrew/model/DescribeScheduleRequest.h>
#include <aws/databrew/model/ListDatasetsRequest.h>
#include <aws/databrew/model/ListJobRunsRequest.h>
#include <aws/databrew/model/ListJobsRequest.h>
#include <aws/databrew/model/ListProjectsRequest.h>
#include <aws/databrew/model/ListRecipeVersionsRequest.h>
#include <aws/databrew/model/ListRecipesRequest.h>
#include <aws/databrew/model/ListRulesetsRequest.h>
#include <aws/databrew/model/ListSchedulesRequest.h>
#include <aws/databrew/model/ListTagsForResourceRequest.h>
#include <aws/databrew/model/PublishRecipeRequest.h>
#include <aws/databrew/model/SendProjectSessionActionRequest.h>
#include <aws/databrew/model/StartJobRunRequest.h>
#include <aws/databrew/model/StartProjectSessionRequest.h>
#include <aws/databrew/model/StopJobRunRequest.h>
#include <aws/databrew/model/TagResourceRequest.h>
#include <aws/databrew/model/UntagResourceRequest.h>
#include <aws/databrew/model/UpdateDatasetRequest.h>
#include <aws/databrew/model/UpdateProfileJobRequest.h>
#include <aws/databrew/model/UpdateProjectRequest.h>
#include <aws/databrew/model/UpdateRecipeRequest.h>
#include <aws/databrew/model/UpdateRecipeJobRequest.h>
#include <aws/databrew/model/UpdateRulesetRequest.h>
#include <aws/databrew/model/UpdateScheduleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GlueDataBrew;
using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "databrew";
static const char* ALLOCATION_TAG = "GlueDataBrewClient";

GlueDataBrewClient::GlueDataBrewClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlueDataBrewClient::~GlueDataBrewClient()
{
}

void GlueDataBrewClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DataBrew");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + GlueDataBrewEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void GlueDataBrewClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchDeleteRecipeVersionOutcome GlueDataBrewClient::BatchDeleteRecipeVersion(const BatchDeleteRecipeVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteRecipeVersion", "Required field: Name, is not set");
    return BatchDeleteRecipeVersionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipes/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/batchDeleteRecipeVersion");
  return BatchDeleteRecipeVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteRecipeVersionOutcomeCallable GlueDataBrewClient::BatchDeleteRecipeVersionCallable(const BatchDeleteRecipeVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteRecipeVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteRecipeVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientBatchDeleteRecipeVersionAsyncHelper(GlueDataBrewClient const * const clientThis, const BatchDeleteRecipeVersionRequest& request, const BatchDeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteRecipeVersion(request), context);
}

void GlueDataBrewClient::BatchDeleteRecipeVersionAsync(const BatchDeleteRecipeVersionRequest& request, const BatchDeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientBatchDeleteRecipeVersionAsyncHelper( this, request, handler, context ); } );
}

CreateDatasetOutcome GlueDataBrewClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets");
  return CreateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable GlueDataBrewClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientCreateDatasetAsyncHelper(GlueDataBrewClient const * const clientThis, const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataset(request), context);
}

void GlueDataBrewClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientCreateDatasetAsyncHelper( this, request, handler, context ); } );
}

CreateProfileJobOutcome GlueDataBrewClient::CreateProfileJob(const CreateProfileJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/profileJobs");
  return CreateProfileJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProfileJobOutcomeCallable GlueDataBrewClient::CreateProfileJobCallable(const CreateProfileJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfileJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientCreateProfileJobAsyncHelper(GlueDataBrewClient const * const clientThis, const CreateProfileJobRequest& request, const CreateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProfileJob(request), context);
}

void GlueDataBrewClient::CreateProfileJobAsync(const CreateProfileJobRequest& request, const CreateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientCreateProfileJobAsyncHelper( this, request, handler, context ); } );
}

CreateProjectOutcome GlueDataBrewClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/projects");
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable GlueDataBrewClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientCreateProjectAsyncHelper(GlueDataBrewClient const * const clientThis, const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProject(request), context);
}

void GlueDataBrewClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientCreateProjectAsyncHelper( this, request, handler, context ); } );
}

CreateRecipeOutcome GlueDataBrewClient::CreateRecipe(const CreateRecipeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipes");
  return CreateRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecipeOutcomeCallable GlueDataBrewClient::CreateRecipeCallable(const CreateRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientCreateRecipeAsyncHelper(GlueDataBrewClient const * const clientThis, const CreateRecipeRequest& request, const CreateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRecipe(request), context);
}

void GlueDataBrewClient::CreateRecipeAsync(const CreateRecipeRequest& request, const CreateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientCreateRecipeAsyncHelper( this, request, handler, context ); } );
}

CreateRecipeJobOutcome GlueDataBrewClient::CreateRecipeJob(const CreateRecipeJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipeJobs");
  return CreateRecipeJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecipeJobOutcomeCallable GlueDataBrewClient::CreateRecipeJobCallable(const CreateRecipeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecipeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecipeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientCreateRecipeJobAsyncHelper(GlueDataBrewClient const * const clientThis, const CreateRecipeJobRequest& request, const CreateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRecipeJob(request), context);
}

void GlueDataBrewClient::CreateRecipeJobAsync(const CreateRecipeJobRequest& request, const CreateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientCreateRecipeJobAsyncHelper( this, request, handler, context ); } );
}

CreateRulesetOutcome GlueDataBrewClient::CreateRuleset(const CreateRulesetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rulesets");
  return CreateRulesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRulesetOutcomeCallable GlueDataBrewClient::CreateRulesetCallable(const CreateRulesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRulesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientCreateRulesetAsyncHelper(GlueDataBrewClient const * const clientThis, const CreateRulesetRequest& request, const CreateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRuleset(request), context);
}

void GlueDataBrewClient::CreateRulesetAsync(const CreateRulesetRequest& request, const CreateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientCreateRulesetAsyncHelper( this, request, handler, context ); } );
}

CreateScheduleOutcome GlueDataBrewClient::CreateSchedule(const CreateScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/schedules");
  return CreateScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateScheduleOutcomeCallable GlueDataBrewClient::CreateScheduleCallable(const CreateScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientCreateScheduleAsyncHelper(GlueDataBrewClient const * const clientThis, const CreateScheduleRequest& request, const CreateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSchedule(request), context);
}

void GlueDataBrewClient::CreateScheduleAsync(const CreateScheduleRequest& request, const CreateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientCreateScheduleAsyncHelper( this, request, handler, context ); } );
}

DeleteDatasetOutcome GlueDataBrewClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: Name, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetName());
  return DeleteDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable GlueDataBrewClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDeleteDatasetAsyncHelper(GlueDataBrewClient const * const clientThis, const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataset(request), context);
}

void GlueDataBrewClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDeleteDatasetAsyncHelper( this, request, handler, context ); } );
}

DeleteJobOutcome GlueDataBrewClient::DeleteJob(const DeleteJobRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: Name, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetName());
  return DeleteJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobOutcomeCallable GlueDataBrewClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDeleteJobAsyncHelper(GlueDataBrewClient const * const clientThis, const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteJob(request), context);
}

void GlueDataBrewClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDeleteJobAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectOutcome GlueDataBrewClient::DeleteProject(const DeleteProjectRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: Name, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetName());
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable GlueDataBrewClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDeleteProjectAsyncHelper(GlueDataBrewClient const * const clientThis, const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProject(request), context);
}

void GlueDataBrewClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDeleteProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteRecipeVersionOutcome GlueDataBrewClient::DeleteRecipeVersion(const DeleteRecipeVersionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecipeVersion", "Required field: Name, is not set");
    return DeleteRecipeVersionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.RecipeVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecipeVersion", "Required field: RecipeVersion, is not set");
    return DeleteRecipeVersionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecipeVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipes/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/recipeVersion/");
  uri.AddPathSegment(request.GetRecipeVersion());
  return DeleteRecipeVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecipeVersionOutcomeCallable GlueDataBrewClient::DeleteRecipeVersionCallable(const DeleteRecipeVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecipeVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecipeVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDeleteRecipeVersionAsyncHelper(GlueDataBrewClient const * const clientThis, const DeleteRecipeVersionRequest& request, const DeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRecipeVersion(request), context);
}

void GlueDataBrewClient::DeleteRecipeVersionAsync(const DeleteRecipeVersionRequest& request, const DeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDeleteRecipeVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteRulesetOutcome GlueDataBrewClient::DeleteRuleset(const DeleteRulesetRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRuleset", "Required field: Name, is not set");
    return DeleteRulesetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rulesets/");
  uri.AddPathSegment(request.GetName());
  return DeleteRulesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRulesetOutcomeCallable GlueDataBrewClient::DeleteRulesetCallable(const DeleteRulesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRulesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDeleteRulesetAsyncHelper(GlueDataBrewClient const * const clientThis, const DeleteRulesetRequest& request, const DeleteRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRuleset(request), context);
}

void GlueDataBrewClient::DeleteRulesetAsync(const DeleteRulesetRequest& request, const DeleteRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDeleteRulesetAsyncHelper( this, request, handler, context ); } );
}

DeleteScheduleOutcome GlueDataBrewClient::DeleteSchedule(const DeleteScheduleRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchedule", "Required field: Name, is not set");
    return DeleteScheduleOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/schedules/");
  uri.AddPathSegment(request.GetName());
  return DeleteScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteScheduleOutcomeCallable GlueDataBrewClient::DeleteScheduleCallable(const DeleteScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDeleteScheduleAsyncHelper(GlueDataBrewClient const * const clientThis, const DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSchedule(request), context);
}

void GlueDataBrewClient::DeleteScheduleAsync(const DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDeleteScheduleAsyncHelper( this, request, handler, context ); } );
}

DescribeDatasetOutcome GlueDataBrewClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: Name, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetName());
  return DescribeDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable GlueDataBrewClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDescribeDatasetAsyncHelper(GlueDataBrewClient const * const clientThis, const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataset(request), context);
}

void GlueDataBrewClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDescribeDatasetAsyncHelper( this, request, handler, context ); } );
}

DescribeJobOutcome GlueDataBrewClient::DescribeJob(const DescribeJobRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: Name, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetName());
  return DescribeJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobOutcomeCallable GlueDataBrewClient::DescribeJobCallable(const DescribeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDescribeJobAsyncHelper(GlueDataBrewClient const * const clientThis, const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeJob(request), context);
}

void GlueDataBrewClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDescribeJobAsyncHelper( this, request, handler, context ); } );
}

DescribeJobRunOutcome GlueDataBrewClient::DescribeJobRun(const DescribeJobRunRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: Name, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.RunIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: RunId, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RunId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/jobRun/");
  uri.AddPathSegment(request.GetRunId());
  return DescribeJobRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobRunOutcomeCallable GlueDataBrewClient::DescribeJobRunCallable(const DescribeJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDescribeJobRunAsyncHelper(GlueDataBrewClient const * const clientThis, const DescribeJobRunRequest& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeJobRun(request), context);
}

void GlueDataBrewClient::DescribeJobRunAsync(const DescribeJobRunRequest& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDescribeJobRunAsyncHelper( this, request, handler, context ); } );
}

DescribeProjectOutcome GlueDataBrewClient::DescribeProject(const DescribeProjectRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProject", "Required field: Name, is not set");
    return DescribeProjectOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetName());
  return DescribeProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcomeCallable GlueDataBrewClient::DescribeProjectCallable(const DescribeProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDescribeProjectAsyncHelper(GlueDataBrewClient const * const clientThis, const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProject(request), context);
}

void GlueDataBrewClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDescribeProjectAsyncHelper( this, request, handler, context ); } );
}

DescribeRecipeOutcome GlueDataBrewClient::DescribeRecipe(const DescribeRecipeRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRecipe", "Required field: Name, is not set");
    return DescribeRecipeOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipes/");
  uri.AddPathSegment(request.GetName());
  return DescribeRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecipeOutcomeCallable GlueDataBrewClient::DescribeRecipeCallable(const DescribeRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDescribeRecipeAsyncHelper(GlueDataBrewClient const * const clientThis, const DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRecipe(request), context);
}

void GlueDataBrewClient::DescribeRecipeAsync(const DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDescribeRecipeAsyncHelper( this, request, handler, context ); } );
}

DescribeRulesetOutcome GlueDataBrewClient::DescribeRuleset(const DescribeRulesetRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRuleset", "Required field: Name, is not set");
    return DescribeRulesetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rulesets/");
  uri.AddPathSegment(request.GetName());
  return DescribeRulesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRulesetOutcomeCallable GlueDataBrewClient::DescribeRulesetCallable(const DescribeRulesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRulesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRuleset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDescribeRulesetAsyncHelper(GlueDataBrewClient const * const clientThis, const DescribeRulesetRequest& request, const DescribeRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRuleset(request), context);
}

void GlueDataBrewClient::DescribeRulesetAsync(const DescribeRulesetRequest& request, const DescribeRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDescribeRulesetAsyncHelper( this, request, handler, context ); } );
}

DescribeScheduleOutcome GlueDataBrewClient::DescribeSchedule(const DescribeScheduleRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSchedule", "Required field: Name, is not set");
    return DescribeScheduleOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/schedules/");
  uri.AddPathSegment(request.GetName());
  return DescribeScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeScheduleOutcomeCallable GlueDataBrewClient::DescribeScheduleCallable(const DescribeScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientDescribeScheduleAsyncHelper(GlueDataBrewClient const * const clientThis, const DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSchedule(request), context);
}

void GlueDataBrewClient::DescribeScheduleAsync(const DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientDescribeScheduleAsyncHelper( this, request, handler, context ); } );
}

ListDatasetsOutcome GlueDataBrewClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets");
  return ListDatasetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable GlueDataBrewClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientListDatasetsAsyncHelper(GlueDataBrewClient const * const clientThis, const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatasets(request), context);
}

void GlueDataBrewClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientListDatasetsAsyncHelper( this, request, handler, context ); } );
}

ListJobRunsOutcome GlueDataBrewClient::ListJobRuns(const ListJobRunsRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: Name, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/jobRuns");
  return ListJobRunsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobRunsOutcomeCallable GlueDataBrewClient::ListJobRunsCallable(const ListJobRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientListJobRunsAsyncHelper(GlueDataBrewClient const * const clientThis, const ListJobRunsRequest& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobRuns(request), context);
}

void GlueDataBrewClient::ListJobRunsAsync(const ListJobRunsRequest& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientListJobRunsAsyncHelper( this, request, handler, context ); } );
}

ListJobsOutcome GlueDataBrewClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs");
  return ListJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable GlueDataBrewClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientListJobsAsyncHelper(GlueDataBrewClient const * const clientThis, const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListJobs(request), context);
}

void GlueDataBrewClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientListJobsAsyncHelper( this, request, handler, context ); } );
}

ListProjectsOutcome GlueDataBrewClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/projects");
  return ListProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable GlueDataBrewClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientListProjectsAsyncHelper(GlueDataBrewClient const * const clientThis, const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProjects(request), context);
}

void GlueDataBrewClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientListProjectsAsyncHelper( this, request, handler, context ); } );
}

ListRecipeVersionsOutcome GlueDataBrewClient::ListRecipeVersions(const ListRecipeVersionsRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecipeVersions", "Required field: Name, is not set");
    return ListRecipeVersionsOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipeVersions");
  return ListRecipeVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecipeVersionsOutcomeCallable GlueDataBrewClient::ListRecipeVersionsCallable(const ListRecipeVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecipeVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecipeVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientListRecipeVersionsAsyncHelper(GlueDataBrewClient const * const clientThis, const ListRecipeVersionsRequest& request, const ListRecipeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRecipeVersions(request), context);
}

void GlueDataBrewClient::ListRecipeVersionsAsync(const ListRecipeVersionsRequest& request, const ListRecipeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientListRecipeVersionsAsyncHelper( this, request, handler, context ); } );
}

ListRecipesOutcome GlueDataBrewClient::ListRecipes(const ListRecipesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipes");
  return ListRecipesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecipesOutcomeCallable GlueDataBrewClient::ListRecipesCallable(const ListRecipesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecipesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecipes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientListRecipesAsyncHelper(GlueDataBrewClient const * const clientThis, const ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRecipes(request), context);
}

void GlueDataBrewClient::ListRecipesAsync(const ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientListRecipesAsyncHelper( this, request, handler, context ); } );
}

ListRulesetsOutcome GlueDataBrewClient::ListRulesets(const ListRulesetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rulesets");
  return ListRulesetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRulesetsOutcomeCallable GlueDataBrewClient::ListRulesetsCallable(const ListRulesetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRulesets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientListRulesetsAsyncHelper(GlueDataBrewClient const * const clientThis, const ListRulesetsRequest& request, const ListRulesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRulesets(request), context);
}

void GlueDataBrewClient::ListRulesetsAsync(const ListRulesetsRequest& request, const ListRulesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientListRulesetsAsyncHelper( this, request, handler, context ); } );
}

ListSchedulesOutcome GlueDataBrewClient::ListSchedules(const ListSchedulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/schedules");
  return ListSchedulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSchedulesOutcomeCallable GlueDataBrewClient::ListSchedulesCallable(const ListSchedulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchedulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchedules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientListSchedulesAsyncHelper(GlueDataBrewClient const * const clientThis, const ListSchedulesRequest& request, const ListSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSchedules(request), context);
}

void GlueDataBrewClient::ListSchedulesAsync(const ListSchedulesRequest& request, const ListSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientListSchedulesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome GlueDataBrewClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable GlueDataBrewClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientListTagsForResourceAsyncHelper(GlueDataBrewClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void GlueDataBrewClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PublishRecipeOutcome GlueDataBrewClient::PublishRecipe(const PublishRecipeRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PublishRecipe", "Required field: Name, is not set");
    return PublishRecipeOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipes/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/publishRecipe");
  return PublishRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PublishRecipeOutcomeCallable GlueDataBrewClient::PublishRecipeCallable(const PublishRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientPublishRecipeAsyncHelper(GlueDataBrewClient const * const clientThis, const PublishRecipeRequest& request, const PublishRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PublishRecipe(request), context);
}

void GlueDataBrewClient::PublishRecipeAsync(const PublishRecipeRequest& request, const PublishRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientPublishRecipeAsyncHelper( this, request, handler, context ); } );
}

SendProjectSessionActionOutcome GlueDataBrewClient::SendProjectSessionAction(const SendProjectSessionActionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendProjectSessionAction", "Required field: Name, is not set");
    return SendProjectSessionActionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/sendProjectSessionAction");
  return SendProjectSessionActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

SendProjectSessionActionOutcomeCallable GlueDataBrewClient::SendProjectSessionActionCallable(const SendProjectSessionActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendProjectSessionActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendProjectSessionAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientSendProjectSessionActionAsyncHelper(GlueDataBrewClient const * const clientThis, const SendProjectSessionActionRequest& request, const SendProjectSessionActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendProjectSessionAction(request), context);
}

void GlueDataBrewClient::SendProjectSessionActionAsync(const SendProjectSessionActionRequest& request, const SendProjectSessionActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientSendProjectSessionActionAsyncHelper( this, request, handler, context ); } );
}

StartJobRunOutcome GlueDataBrewClient::StartJobRun(const StartJobRunRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartJobRun", "Required field: Name, is not set");
    return StartJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/startJobRun");
  return StartJobRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartJobRunOutcomeCallable GlueDataBrewClient::StartJobRunCallable(const StartJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientStartJobRunAsyncHelper(GlueDataBrewClient const * const clientThis, const StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartJobRun(request), context);
}

void GlueDataBrewClient::StartJobRunAsync(const StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientStartJobRunAsyncHelper( this, request, handler, context ); } );
}

StartProjectSessionOutcome GlueDataBrewClient::StartProjectSession(const StartProjectSessionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartProjectSession", "Required field: Name, is not set");
    return StartProjectSessionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/startProjectSession");
  return StartProjectSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartProjectSessionOutcomeCallable GlueDataBrewClient::StartProjectSessionCallable(const StartProjectSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartProjectSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartProjectSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientStartProjectSessionAsyncHelper(GlueDataBrewClient const * const clientThis, const StartProjectSessionRequest& request, const StartProjectSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartProjectSession(request), context);
}

void GlueDataBrewClient::StartProjectSessionAsync(const StartProjectSessionRequest& request, const StartProjectSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientStartProjectSessionAsyncHelper( this, request, handler, context ); } );
}

StopJobRunOutcome GlueDataBrewClient::StopJobRun(const StopJobRunRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopJobRun", "Required field: Name, is not set");
    return StopJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.RunIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopJobRun", "Required field: RunId, is not set");
    return StopJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RunId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/jobRun/");
  uri.AddPathSegment(request.GetRunId());
  uri.AddPathSegments("/stopJobRun");
  return StopJobRunOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopJobRunOutcomeCallable GlueDataBrewClient::StopJobRunCallable(const StopJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientStopJobRunAsyncHelper(GlueDataBrewClient const * const clientThis, const StopJobRunRequest& request, const StopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopJobRun(request), context);
}

void GlueDataBrewClient::StopJobRunAsync(const StopJobRunRequest& request, const StopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientStopJobRunAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome GlueDataBrewClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GlueDataBrewClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientTagResourceAsyncHelper(GlueDataBrewClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void GlueDataBrewClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome GlueDataBrewClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GlueDataBrewClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientUntagResourceAsyncHelper(GlueDataBrewClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void GlueDataBrewClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDatasetOutcome GlueDataBrewClient::UpdateDataset(const UpdateDatasetRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataset", "Required field: Name, is not set");
    return UpdateDatasetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetName());
  return UpdateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetOutcomeCallable GlueDataBrewClient::UpdateDatasetCallable(const UpdateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientUpdateDatasetAsyncHelper(GlueDataBrewClient const * const clientThis, const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataset(request), context);
}

void GlueDataBrewClient::UpdateDatasetAsync(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientUpdateDatasetAsyncHelper( this, request, handler, context ); } );
}

UpdateProfileJobOutcome GlueDataBrewClient::UpdateProfileJob(const UpdateProfileJobRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfileJob", "Required field: Name, is not set");
    return UpdateProfileJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/profileJobs/");
  uri.AddPathSegment(request.GetName());
  return UpdateProfileJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProfileJobOutcomeCallable GlueDataBrewClient::UpdateProfileJobCallable(const UpdateProfileJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfileJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientUpdateProfileJobAsyncHelper(GlueDataBrewClient const * const clientThis, const UpdateProfileJobRequest& request, const UpdateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProfileJob(request), context);
}

void GlueDataBrewClient::UpdateProfileJobAsync(const UpdateProfileJobRequest& request, const UpdateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientUpdateProfileJobAsyncHelper( this, request, handler, context ); } );
}

UpdateProjectOutcome GlueDataBrewClient::UpdateProject(const UpdateProjectRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: Name, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetName());
  return UpdateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable GlueDataBrewClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientUpdateProjectAsyncHelper(GlueDataBrewClient const * const clientThis, const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProject(request), context);
}

void GlueDataBrewClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientUpdateProjectAsyncHelper( this, request, handler, context ); } );
}

UpdateRecipeOutcome GlueDataBrewClient::UpdateRecipe(const UpdateRecipeRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecipe", "Required field: Name, is not set");
    return UpdateRecipeOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipes/");
  uri.AddPathSegment(request.GetName());
  return UpdateRecipeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecipeOutcomeCallable GlueDataBrewClient::UpdateRecipeCallable(const UpdateRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientUpdateRecipeAsyncHelper(GlueDataBrewClient const * const clientThis, const UpdateRecipeRequest& request, const UpdateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRecipe(request), context);
}

void GlueDataBrewClient::UpdateRecipeAsync(const UpdateRecipeRequest& request, const UpdateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientUpdateRecipeAsyncHelper( this, request, handler, context ); } );
}

UpdateRecipeJobOutcome GlueDataBrewClient::UpdateRecipeJob(const UpdateRecipeJobRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecipeJob", "Required field: Name, is not set");
    return UpdateRecipeJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recipeJobs/");
  uri.AddPathSegment(request.GetName());
  return UpdateRecipeJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecipeJobOutcomeCallable GlueDataBrewClient::UpdateRecipeJobCallable(const UpdateRecipeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecipeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecipeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientUpdateRecipeJobAsyncHelper(GlueDataBrewClient const * const clientThis, const UpdateRecipeJobRequest& request, const UpdateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRecipeJob(request), context);
}

void GlueDataBrewClient::UpdateRecipeJobAsync(const UpdateRecipeJobRequest& request, const UpdateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientUpdateRecipeJobAsyncHelper( this, request, handler, context ); } );
}

UpdateRulesetOutcome GlueDataBrewClient::UpdateRuleset(const UpdateRulesetRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRuleset", "Required field: Name, is not set");
    return UpdateRulesetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rulesets/");
  uri.AddPathSegment(request.GetName());
  return UpdateRulesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRulesetOutcomeCallable GlueDataBrewClient::UpdateRulesetCallable(const UpdateRulesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRulesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientUpdateRulesetAsyncHelper(GlueDataBrewClient const * const clientThis, const UpdateRulesetRequest& request, const UpdateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRuleset(request), context);
}

void GlueDataBrewClient::UpdateRulesetAsync(const UpdateRulesetRequest& request, const UpdateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientUpdateRulesetAsyncHelper( this, request, handler, context ); } );
}

UpdateScheduleOutcome GlueDataBrewClient::UpdateSchedule(const UpdateScheduleRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSchedule", "Required field: Name, is not set");
    return UpdateScheduleOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/schedules/");
  uri.AddPathSegment(request.GetName());
  return UpdateScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateScheduleOutcomeCallable GlueDataBrewClient::UpdateScheduleCallable(const UpdateScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClientUpdateScheduleAsyncHelper(GlueDataBrewClient const * const clientThis, const UpdateScheduleRequest& request, const UpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSchedule(request), context);
}

void GlueDataBrewClient::UpdateScheduleAsync(const UpdateScheduleRequest& request, const UpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GlueDataBrewClientUpdateScheduleAsyncHelper( this, request, handler, context ); } );
}

