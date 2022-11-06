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

#include <aws/databrew/GlueDataBrewClient.h>
#include <aws/databrew/GlueDataBrewErrorMarshaller.h>
#include <aws/databrew/GlueDataBrewEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* GlueDataBrewClient::SERVICE_NAME = "databrew";
const char* GlueDataBrewClient::ALLOCATION_TAG = "GlueDataBrewClient";

GlueDataBrewClient::GlueDataBrewClient(const GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration,
                                       std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const AWSCredentials& credentials,
                                       std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider,
                                       const GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider,
                                       const GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  GlueDataBrewClient::GlueDataBrewClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
GlueDataBrewClient::~GlueDataBrewClient()
{
}

std::shared_ptr<GlueDataBrewEndpointProviderBase>& GlueDataBrewClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GlueDataBrewClient::init(const GlueDataBrew::GlueDataBrewClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DataBrew");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void GlueDataBrewClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchDeleteRecipeVersionOutcome GlueDataBrewClient::BatchDeleteRecipeVersion(const BatchDeleteRecipeVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteRecipeVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteRecipeVersion", "Required field: Name, is not set");
    return BatchDeleteRecipeVersionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteRecipeVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batchDeleteRecipeVersion");
  return BatchDeleteRecipeVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteRecipeVersionOutcomeCallable GlueDataBrewClient::BatchDeleteRecipeVersionCallable(const BatchDeleteRecipeVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteRecipeVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteRecipeVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::BatchDeleteRecipeVersionAsync(const BatchDeleteRecipeVersionRequest& request, const BatchDeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDeleteRecipeVersion(request), context);
    } );
}

CreateDatasetOutcome GlueDataBrewClient::CreateDataset(const CreateDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  return CreateDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable GlueDataBrewClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataset(request), context);
    } );
}

CreateProfileJobOutcome GlueDataBrewClient::CreateProfileJob(const CreateProfileJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProfileJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProfileJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profileJobs");
  return CreateProfileJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProfileJobOutcomeCallable GlueDataBrewClient::CreateProfileJobCallable(const CreateProfileJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfileJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::CreateProfileJobAsync(const CreateProfileJobRequest& request, const CreateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProfileJob(request), context);
    } );
}

CreateProjectOutcome GlueDataBrewClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable GlueDataBrewClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProject(request), context);
    } );
}

CreateRecipeOutcome GlueDataBrewClient::CreateRecipe(const CreateRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipes");
  return CreateRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecipeOutcomeCallable GlueDataBrewClient::CreateRecipeCallable(const CreateRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::CreateRecipeAsync(const CreateRecipeRequest& request, const CreateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRecipe(request), context);
    } );
}

CreateRecipeJobOutcome GlueDataBrewClient::CreateRecipeJob(const CreateRecipeJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRecipeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRecipeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipeJobs");
  return CreateRecipeJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecipeJobOutcomeCallable GlueDataBrewClient::CreateRecipeJobCallable(const CreateRecipeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecipeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecipeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::CreateRecipeJobAsync(const CreateRecipeJobRequest& request, const CreateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRecipeJob(request), context);
    } );
}

CreateRulesetOutcome GlueDataBrewClient::CreateRuleset(const CreateRulesetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRuleset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRuleset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets");
  return CreateRulesetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRulesetOutcomeCallable GlueDataBrewClient::CreateRulesetCallable(const CreateRulesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRulesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::CreateRulesetAsync(const CreateRulesetRequest& request, const CreateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRuleset(request), context);
    } );
}

CreateScheduleOutcome GlueDataBrewClient::CreateSchedule(const CreateScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules");
  return CreateScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateScheduleOutcomeCallable GlueDataBrewClient::CreateScheduleCallable(const CreateScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::CreateScheduleAsync(const CreateScheduleRequest& request, const CreateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSchedule(request), context);
    } );
}

DeleteDatasetOutcome GlueDataBrewClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: Name, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable GlueDataBrewClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataset(request), context);
    } );
}

DeleteJobOutcome GlueDataBrewClient::DeleteJob(const DeleteJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: Name, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobOutcomeCallable GlueDataBrewClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJob(request), context);
    } );
}

DeleteProjectOutcome GlueDataBrewClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: Name, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable GlueDataBrewClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProject(request), context);
    } );
}

DeleteRecipeVersionOutcome GlueDataBrewClient::DeleteRecipeVersion(const DeleteRecipeVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRecipeVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRecipeVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipeVersion/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecipeVersion());
  return DeleteRecipeVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecipeVersionOutcomeCallable GlueDataBrewClient::DeleteRecipeVersionCallable(const DeleteRecipeVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecipeVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecipeVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DeleteRecipeVersionAsync(const DeleteRecipeVersionRequest& request, const DeleteRecipeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRecipeVersion(request), context);
    } );
}

DeleteRulesetOutcome GlueDataBrewClient::DeleteRuleset(const DeleteRulesetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRuleset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRuleset", "Required field: Name, is not set");
    return DeleteRulesetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRuleset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteRulesetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRulesetOutcomeCallable GlueDataBrewClient::DeleteRulesetCallable(const DeleteRulesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRulesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DeleteRulesetAsync(const DeleteRulesetRequest& request, const DeleteRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRuleset(request), context);
    } );
}

DeleteScheduleOutcome GlueDataBrewClient::DeleteSchedule(const DeleteScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchedule", "Required field: Name, is not set");
    return DeleteScheduleOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteScheduleOutcomeCallable GlueDataBrewClient::DeleteScheduleCallable(const DeleteScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DeleteScheduleAsync(const DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSchedule(request), context);
    } );
}

DescribeDatasetOutcome GlueDataBrewClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: Name, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DescribeDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable GlueDataBrewClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataset(request), context);
    } );
}

DescribeJobOutcome GlueDataBrewClient::DescribeJob(const DescribeJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: Name, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DescribeJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobOutcomeCallable GlueDataBrewClient::DescribeJobCallable(const DescribeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJob(request), context);
    } );
}

DescribeJobRunOutcome GlueDataBrewClient::DescribeJobRun(const DescribeJobRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobRun/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRunId());
  return DescribeJobRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobRunOutcomeCallable GlueDataBrewClient::DescribeJobRunCallable(const DescribeJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DescribeJobRunAsync(const DescribeJobRunRequest& request, const DescribeJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeJobRun(request), context);
    } );
}

DescribeProjectOutcome GlueDataBrewClient::DescribeProject(const DescribeProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProject", "Required field: Name, is not set");
    return DescribeProjectOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DescribeProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcomeCallable GlueDataBrewClient::DescribeProjectCallable(const DescribeProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProject(request), context);
    } );
}

DescribeRecipeOutcome GlueDataBrewClient::DescribeRecipe(const DescribeRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRecipe", "Required field: Name, is not set");
    return DescribeRecipeOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DescribeRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecipeOutcomeCallable GlueDataBrewClient::DescribeRecipeCallable(const DescribeRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DescribeRecipeAsync(const DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRecipe(request), context);
    } );
}

DescribeRulesetOutcome GlueDataBrewClient::DescribeRuleset(const DescribeRulesetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRuleset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRuleset", "Required field: Name, is not set");
    return DescribeRulesetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRuleset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DescribeRulesetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRulesetOutcomeCallable GlueDataBrewClient::DescribeRulesetCallable(const DescribeRulesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRulesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRuleset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DescribeRulesetAsync(const DescribeRulesetRequest& request, const DescribeRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRuleset(request), context);
    } );
}

DescribeScheduleOutcome GlueDataBrewClient::DescribeSchedule(const DescribeScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSchedule", "Required field: Name, is not set");
    return DescribeScheduleOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DescribeScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeScheduleOutcomeCallable GlueDataBrewClient::DescribeScheduleCallable(const DescribeScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::DescribeScheduleAsync(const DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSchedule(request), context);
    } );
}

ListDatasetsOutcome GlueDataBrewClient::ListDatasets(const ListDatasetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  return ListDatasetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable GlueDataBrewClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasets(request), context);
    } );
}

ListJobRunsOutcome GlueDataBrewClient::ListJobRuns(const ListJobRunsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: Name, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobRuns");
  return ListJobRunsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobRunsOutcomeCallable GlueDataBrewClient::ListJobRunsCallable(const ListJobRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::ListJobRunsAsync(const ListJobRunsRequest& request, const ListJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobRuns(request), context);
    } );
}

ListJobsOutcome GlueDataBrewClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  return ListJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable GlueDataBrewClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobs(request), context);
    } );
}

ListProjectsOutcome GlueDataBrewClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable GlueDataBrewClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProjects(request), context);
    } );
}

ListRecipeVersionsOutcome GlueDataBrewClient::ListRecipeVersions(const ListRecipeVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecipeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecipeVersions", "Required field: Name, is not set");
    return ListRecipeVersionsOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecipeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipeVersions");
  return ListRecipeVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecipeVersionsOutcomeCallable GlueDataBrewClient::ListRecipeVersionsCallable(const ListRecipeVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecipeVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecipeVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::ListRecipeVersionsAsync(const ListRecipeVersionsRequest& request, const ListRecipeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecipeVersions(request), context);
    } );
}

ListRecipesOutcome GlueDataBrewClient::ListRecipes(const ListRecipesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecipes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecipes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipes");
  return ListRecipesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecipesOutcomeCallable GlueDataBrewClient::ListRecipesCallable(const ListRecipesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecipesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecipes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::ListRecipesAsync(const ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecipes(request), context);
    } );
}

ListRulesetsOutcome GlueDataBrewClient::ListRulesets(const ListRulesetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRulesets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRulesets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets");
  return ListRulesetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRulesetsOutcomeCallable GlueDataBrewClient::ListRulesetsCallable(const ListRulesetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRulesets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::ListRulesetsAsync(const ListRulesetsRequest& request, const ListRulesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRulesets(request), context);
    } );
}

ListSchedulesOutcome GlueDataBrewClient::ListSchedules(const ListSchedulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules");
  return ListSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSchedulesOutcomeCallable GlueDataBrewClient::ListSchedulesCallable(const ListSchedulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchedulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchedules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::ListSchedulesAsync(const ListSchedulesRequest& request, const ListSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSchedules(request), context);
    } );
}

ListTagsForResourceOutcome GlueDataBrewClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable GlueDataBrewClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PublishRecipeOutcome GlueDataBrewClient::PublishRecipe(const PublishRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PublishRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PublishRecipe", "Required field: Name, is not set");
    return PublishRecipeOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PublishRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/publishRecipe");
  return PublishRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PublishRecipeOutcomeCallable GlueDataBrewClient::PublishRecipeCallable(const PublishRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::PublishRecipeAsync(const PublishRecipeRequest& request, const PublishRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PublishRecipe(request), context);
    } );
}

SendProjectSessionActionOutcome GlueDataBrewClient::SendProjectSessionAction(const SendProjectSessionActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendProjectSessionAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendProjectSessionAction", "Required field: Name, is not set");
    return SendProjectSessionActionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendProjectSessionAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sendProjectSessionAction");
  return SendProjectSessionActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

SendProjectSessionActionOutcomeCallable GlueDataBrewClient::SendProjectSessionActionCallable(const SendProjectSessionActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendProjectSessionActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendProjectSessionAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::SendProjectSessionActionAsync(const SendProjectSessionActionRequest& request, const SendProjectSessionActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendProjectSessionAction(request), context);
    } );
}

StartJobRunOutcome GlueDataBrewClient::StartJobRun(const StartJobRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartJobRun", "Required field: Name, is not set");
    return StartJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/startJobRun");
  return StartJobRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartJobRunOutcomeCallable GlueDataBrewClient::StartJobRunCallable(const StartJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::StartJobRunAsync(const StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartJobRun(request), context);
    } );
}

StartProjectSessionOutcome GlueDataBrewClient::StartProjectSession(const StartProjectSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartProjectSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartProjectSession", "Required field: Name, is not set");
    return StartProjectSessionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartProjectSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/startProjectSession");
  return StartProjectSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartProjectSessionOutcomeCallable GlueDataBrewClient::StartProjectSessionCallable(const StartProjectSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartProjectSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartProjectSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::StartProjectSessionAsync(const StartProjectSessionRequest& request, const StartProjectSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartProjectSession(request), context);
    } );
}

StopJobRunOutcome GlueDataBrewClient::StopJobRun(const StopJobRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobRun/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRunId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stopJobRun");
  return StopJobRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopJobRunOutcomeCallable GlueDataBrewClient::StopJobRunCallable(const StopJobRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopJobRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopJobRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::StopJobRunAsync(const StopJobRunRequest& request, const StopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopJobRun(request), context);
    } );
}

TagResourceOutcome GlueDataBrewClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GlueDataBrewClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome GlueDataBrewClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GlueDataBrewClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDatasetOutcome GlueDataBrewClient::UpdateDataset(const UpdateDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataset", "Required field: Name, is not set");
    return UpdateDatasetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetOutcomeCallable GlueDataBrewClient::UpdateDatasetCallable(const UpdateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::UpdateDatasetAsync(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDataset(request), context);
    } );
}

UpdateProfileJobOutcome GlueDataBrewClient::UpdateProfileJob(const UpdateProfileJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProfileJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfileJob", "Required field: Name, is not set");
    return UpdateProfileJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProfileJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profileJobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateProfileJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProfileJobOutcomeCallable GlueDataBrewClient::UpdateProfileJobCallable(const UpdateProfileJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfileJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::UpdateProfileJobAsync(const UpdateProfileJobRequest& request, const UpdateProfileJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProfileJob(request), context);
    } );
}

UpdateProjectOutcome GlueDataBrewClient::UpdateProject(const UpdateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: Name, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable GlueDataBrewClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProject(request), context);
    } );
}

UpdateRecipeOutcome GlueDataBrewClient::UpdateRecipe(const UpdateRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecipe", "Required field: Name, is not set");
    return UpdateRecipeOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecipeOutcomeCallable GlueDataBrewClient::UpdateRecipeCallable(const UpdateRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::UpdateRecipeAsync(const UpdateRecipeRequest& request, const UpdateRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRecipe(request), context);
    } );
}

UpdateRecipeJobOutcome GlueDataBrewClient::UpdateRecipeJob(const UpdateRecipeJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecipeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecipeJob", "Required field: Name, is not set");
    return UpdateRecipeJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRecipeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recipeJobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateRecipeJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecipeJobOutcomeCallable GlueDataBrewClient::UpdateRecipeJobCallable(const UpdateRecipeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecipeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecipeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::UpdateRecipeJobAsync(const UpdateRecipeJobRequest& request, const UpdateRecipeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRecipeJob(request), context);
    } );
}

UpdateRulesetOutcome GlueDataBrewClient::UpdateRuleset(const UpdateRulesetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRuleset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRuleset", "Required field: Name, is not set");
    return UpdateRulesetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRuleset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateRulesetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRulesetOutcomeCallable GlueDataBrewClient::UpdateRulesetCallable(const UpdateRulesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRulesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::UpdateRulesetAsync(const UpdateRulesetRequest& request, const UpdateRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRuleset(request), context);
    } );
}

UpdateScheduleOutcome GlueDataBrewClient::UpdateSchedule(const UpdateScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSchedule", "Required field: Name, is not set");
    return UpdateScheduleOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateScheduleOutcomeCallable GlueDataBrewClient::UpdateScheduleCallable(const UpdateScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlueDataBrewClient::UpdateScheduleAsync(const UpdateScheduleRequest& request, const UpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSchedule(request), context);
    } );
}

