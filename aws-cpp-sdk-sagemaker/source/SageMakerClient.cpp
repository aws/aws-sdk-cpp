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

#include <aws/sagemaker/SageMakerClient.h>
#include <aws/sagemaker/SageMakerEndpoint.h>
#include <aws/sagemaker/SageMakerErrorMarshaller.h>
#include <aws/sagemaker/model/AddTagsRequest.h>
#include <aws/sagemaker/model/AssociateTrialComponentRequest.h>
#include <aws/sagemaker/model/CreateAlgorithmRequest.h>
#include <aws/sagemaker/model/CreateAppRequest.h>
#include <aws/sagemaker/model/CreateAutoMLJobRequest.h>
#include <aws/sagemaker/model/CreateCodeRepositoryRequest.h>
#include <aws/sagemaker/model/CreateCompilationJobRequest.h>
#include <aws/sagemaker/model/CreateDomainRequest.h>
#include <aws/sagemaker/model/CreateEndpointRequest.h>
#include <aws/sagemaker/model/CreateEndpointConfigRequest.h>
#include <aws/sagemaker/model/CreateExperimentRequest.h>
#include <aws/sagemaker/model/CreateFlowDefinitionRequest.h>
#include <aws/sagemaker/model/CreateHumanTaskUiRequest.h>
#include <aws/sagemaker/model/CreateHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/CreateLabelingJobRequest.h>
#include <aws/sagemaker/model/CreateModelRequest.h>
#include <aws/sagemaker/model/CreateModelPackageRequest.h>
#include <aws/sagemaker/model/CreateMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/CreateNotebookInstanceRequest.h>
#include <aws/sagemaker/model/CreateNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/CreatePresignedDomainUrlRequest.h>
#include <aws/sagemaker/model/CreatePresignedNotebookInstanceUrlRequest.h>
#include <aws/sagemaker/model/CreateProcessingJobRequest.h>
#include <aws/sagemaker/model/CreateTrainingJobRequest.h>
#include <aws/sagemaker/model/CreateTransformJobRequest.h>
#include <aws/sagemaker/model/CreateTrialRequest.h>
#include <aws/sagemaker/model/CreateTrialComponentRequest.h>
#include <aws/sagemaker/model/CreateUserProfileRequest.h>
#include <aws/sagemaker/model/CreateWorkteamRequest.h>
#include <aws/sagemaker/model/DeleteAlgorithmRequest.h>
#include <aws/sagemaker/model/DeleteAppRequest.h>
#include <aws/sagemaker/model/DeleteCodeRepositoryRequest.h>
#include <aws/sagemaker/model/DeleteDomainRequest.h>
#include <aws/sagemaker/model/DeleteEndpointRequest.h>
#include <aws/sagemaker/model/DeleteEndpointConfigRequest.h>
#include <aws/sagemaker/model/DeleteExperimentRequest.h>
#include <aws/sagemaker/model/DeleteFlowDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteModelRequest.h>
#include <aws/sagemaker/model/DeleteModelPackageRequest.h>
#include <aws/sagemaker/model/DeleteMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/DeleteNotebookInstanceRequest.h>
#include <aws/sagemaker/model/DeleteNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DeleteTagsRequest.h>
#include <aws/sagemaker/model/DeleteTrialRequest.h>
#include <aws/sagemaker/model/DeleteTrialComponentRequest.h>
#include <aws/sagemaker/model/DeleteUserProfileRequest.h>
#include <aws/sagemaker/model/DeleteWorkteamRequest.h>
#include <aws/sagemaker/model/DescribeAlgorithmRequest.h>
#include <aws/sagemaker/model/DescribeAppRequest.h>
#include <aws/sagemaker/model/DescribeAutoMLJobRequest.h>
#include <aws/sagemaker/model/DescribeCodeRepositoryRequest.h>
#include <aws/sagemaker/model/DescribeCompilationJobRequest.h>
#include <aws/sagemaker/model/DescribeDomainRequest.h>
#include <aws/sagemaker/model/DescribeEndpointRequest.h>
#include <aws/sagemaker/model/DescribeEndpointConfigRequest.h>
#include <aws/sagemaker/model/DescribeExperimentRequest.h>
#include <aws/sagemaker/model/DescribeFlowDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeHumanTaskUiRequest.h>
#include <aws/sagemaker/model/DescribeHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/DescribeLabelingJobRequest.h>
#include <aws/sagemaker/model/DescribeModelRequest.h>
#include <aws/sagemaker/model/DescribeModelPackageRequest.h>
#include <aws/sagemaker/model/DescribeMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceRequest.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DescribeProcessingJobRequest.h>
#include <aws/sagemaker/model/DescribeSubscribedWorkteamRequest.h>
#include <aws/sagemaker/model/DescribeTrainingJobRequest.h>
#include <aws/sagemaker/model/DescribeTransformJobRequest.h>
#include <aws/sagemaker/model/DescribeTrialRequest.h>
#include <aws/sagemaker/model/DescribeTrialComponentRequest.h>
#include <aws/sagemaker/model/DescribeUserProfileRequest.h>
#include <aws/sagemaker/model/DescribeWorkforceRequest.h>
#include <aws/sagemaker/model/DescribeWorkteamRequest.h>
#include <aws/sagemaker/model/DisassociateTrialComponentRequest.h>
#include <aws/sagemaker/model/GetSearchSuggestionsRequest.h>
#include <aws/sagemaker/model/ListAlgorithmsRequest.h>
#include <aws/sagemaker/model/ListAppsRequest.h>
#include <aws/sagemaker/model/ListAutoMLJobsRequest.h>
#include <aws/sagemaker/model/ListCandidatesForAutoMLJobRequest.h>
#include <aws/sagemaker/model/ListCodeRepositoriesRequest.h>
#include <aws/sagemaker/model/ListCompilationJobsRequest.h>
#include <aws/sagemaker/model/ListDomainsRequest.h>
#include <aws/sagemaker/model/ListEndpointConfigsRequest.h>
#include <aws/sagemaker/model/ListEndpointsRequest.h>
#include <aws/sagemaker/model/ListExperimentsRequest.h>
#include <aws/sagemaker/model/ListFlowDefinitionsRequest.h>
#include <aws/sagemaker/model/ListHumanTaskUisRequest.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamRequest.h>
#include <aws/sagemaker/model/ListModelPackagesRequest.h>
#include <aws/sagemaker/model/ListModelsRequest.h>
#include <aws/sagemaker/model/ListMonitoringExecutionsRequest.h>
#include <aws/sagemaker/model/ListMonitoringSchedulesRequest.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsRequest.h>
#include <aws/sagemaker/model/ListNotebookInstancesRequest.h>
#include <aws/sagemaker/model/ListProcessingJobsRequest.h>
#include <aws/sagemaker/model/ListSubscribedWorkteamsRequest.h>
#include <aws/sagemaker/model/ListTagsRequest.h>
#include <aws/sagemaker/model/ListTrainingJobsRequest.h>
#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/ListTransformJobsRequest.h>
#include <aws/sagemaker/model/ListTrialComponentsRequest.h>
#include <aws/sagemaker/model/ListTrialsRequest.h>
#include <aws/sagemaker/model/ListUserProfilesRequest.h>
#include <aws/sagemaker/model/ListWorkteamsRequest.h>
#include <aws/sagemaker/model/RenderUiTemplateRequest.h>
#include <aws/sagemaker/model/SearchRequest.h>
#include <aws/sagemaker/model/StartMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/StartNotebookInstanceRequest.h>
#include <aws/sagemaker/model/StopAutoMLJobRequest.h>
#include <aws/sagemaker/model/StopCompilationJobRequest.h>
#include <aws/sagemaker/model/StopHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/StopLabelingJobRequest.h>
#include <aws/sagemaker/model/StopMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/StopNotebookInstanceRequest.h>
#include <aws/sagemaker/model/StopProcessingJobRequest.h>
#include <aws/sagemaker/model/StopTrainingJobRequest.h>
#include <aws/sagemaker/model/StopTransformJobRequest.h>
#include <aws/sagemaker/model/UpdateCodeRepositoryRequest.h>
#include <aws/sagemaker/model/UpdateDomainRequest.h>
#include <aws/sagemaker/model/UpdateEndpointRequest.h>
#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesRequest.h>
#include <aws/sagemaker/model/UpdateExperimentRequest.h>
#include <aws/sagemaker/model/UpdateMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceRequest.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/UpdateTrialRequest.h>
#include <aws/sagemaker/model/UpdateTrialComponentRequest.h>
#include <aws/sagemaker/model/UpdateUserProfileRequest.h>
#include <aws/sagemaker/model/UpdateWorkforceRequest.h>
#include <aws/sagemaker/model/UpdateWorkteamRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMaker;
using namespace Aws::SageMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "sagemaker";
static const char* ALLOCATION_TAG = "SageMakerClient";


SageMakerClient::SageMakerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SageMakerClient::SageMakerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SageMakerClient::SageMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SageMakerClient::~SageMakerClient()
{
}

void SageMakerClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SageMakerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SageMakerClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddTagsOutcome SageMakerClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable SageMakerClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

AssociateTrialComponentOutcome SageMakerClient::AssociateTrialComponent(const AssociateTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateTrialComponentOutcome(AssociateTrialComponentResult(outcome.GetResult()));
  }
  else
  {
    return AssociateTrialComponentOutcome(outcome.GetError());
  }
}

AssociateTrialComponentOutcomeCallable SageMakerClient::AssociateTrialComponentCallable(const AssociateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::AssociateTrialComponentAsync(const AssociateTrialComponentRequest& request, const AssociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateTrialComponentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::AssociateTrialComponentAsyncHelper(const AssociateTrialComponentRequest& request, const AssociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateTrialComponent(request), context);
}

CreateAlgorithmOutcome SageMakerClient::CreateAlgorithm(const CreateAlgorithmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAlgorithmOutcome(CreateAlgorithmResult(outcome.GetResult()));
  }
  else
  {
    return CreateAlgorithmOutcome(outcome.GetError());
  }
}

CreateAlgorithmOutcomeCallable SageMakerClient::CreateAlgorithmCallable(const CreateAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateAlgorithmAsync(const CreateAlgorithmRequest& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAlgorithmAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateAlgorithmAsyncHelper(const CreateAlgorithmRequest& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlgorithm(request), context);
}

CreateAppOutcome SageMakerClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAppOutcome(CreateAppResult(outcome.GetResult()));
  }
  else
  {
    return CreateAppOutcome(outcome.GetError());
  }
}

CreateAppOutcomeCallable SageMakerClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAppAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateAppAsyncHelper(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApp(request), context);
}

CreateAutoMLJobOutcome SageMakerClient::CreateAutoMLJob(const CreateAutoMLJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAutoMLJobOutcome(CreateAutoMLJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateAutoMLJobOutcome(outcome.GetError());
  }
}

CreateAutoMLJobOutcomeCallable SageMakerClient::CreateAutoMLJobCallable(const CreateAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateAutoMLJobAsync(const CreateAutoMLJobRequest& request, const CreateAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAutoMLJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateAutoMLJobAsyncHelper(const CreateAutoMLJobRequest& request, const CreateAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAutoMLJob(request), context);
}

CreateCodeRepositoryOutcome SageMakerClient::CreateCodeRepository(const CreateCodeRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCodeRepositoryOutcome(CreateCodeRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return CreateCodeRepositoryOutcome(outcome.GetError());
  }
}

CreateCodeRepositoryOutcomeCallable SageMakerClient::CreateCodeRepositoryCallable(const CreateCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateCodeRepositoryAsync(const CreateCodeRepositoryRequest& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCodeRepositoryAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateCodeRepositoryAsyncHelper(const CreateCodeRepositoryRequest& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCodeRepository(request), context);
}

CreateCompilationJobOutcome SageMakerClient::CreateCompilationJob(const CreateCompilationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCompilationJobOutcome(CreateCompilationJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateCompilationJobOutcome(outcome.GetError());
  }
}

CreateCompilationJobOutcomeCallable SageMakerClient::CreateCompilationJobCallable(const CreateCompilationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCompilationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCompilationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateCompilationJobAsync(const CreateCompilationJobRequest& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCompilationJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateCompilationJobAsyncHelper(const CreateCompilationJobRequest& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCompilationJob(request), context);
}

CreateDomainOutcome SageMakerClient::CreateDomain(const CreateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDomainOutcome(CreateDomainResult(outcome.GetResult()));
  }
  else
  {
    return CreateDomainOutcome(outcome.GetError());
  }
}

CreateDomainOutcomeCallable SageMakerClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateDomainAsyncHelper(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomain(request), context);
}

CreateEndpointOutcome SageMakerClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateEndpointOutcome(CreateEndpointResult(outcome.GetResult()));
  }
  else
  {
    return CreateEndpointOutcome(outcome.GetError());
  }
}

CreateEndpointOutcomeCallable SageMakerClient::CreateEndpointCallable(const CreateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateEndpointAsync(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEndpointAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateEndpointAsyncHelper(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEndpoint(request), context);
}

CreateEndpointConfigOutcome SageMakerClient::CreateEndpointConfig(const CreateEndpointConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateEndpointConfigOutcome(CreateEndpointConfigResult(outcome.GetResult()));
  }
  else
  {
    return CreateEndpointConfigOutcome(outcome.GetError());
  }
}

CreateEndpointConfigOutcomeCallable SageMakerClient::CreateEndpointConfigCallable(const CreateEndpointConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpointConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateEndpointConfigAsync(const CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEndpointConfigAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateEndpointConfigAsyncHelper(const CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEndpointConfig(request), context);
}

CreateExperimentOutcome SageMakerClient::CreateExperiment(const CreateExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateExperimentOutcome(CreateExperimentResult(outcome.GetResult()));
  }
  else
  {
    return CreateExperimentOutcome(outcome.GetError());
  }
}

CreateExperimentOutcomeCallable SageMakerClient::CreateExperimentCallable(const CreateExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateExperimentAsync(const CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateExperimentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateExperimentAsyncHelper(const CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateExperiment(request), context);
}

CreateFlowDefinitionOutcome SageMakerClient::CreateFlowDefinition(const CreateFlowDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFlowDefinitionOutcome(CreateFlowDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return CreateFlowDefinitionOutcome(outcome.GetError());
  }
}

CreateFlowDefinitionOutcomeCallable SageMakerClient::CreateFlowDefinitionCallable(const CreateFlowDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFlowDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateFlowDefinitionAsync(const CreateFlowDefinitionRequest& request, const CreateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFlowDefinitionAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateFlowDefinitionAsyncHelper(const CreateFlowDefinitionRequest& request, const CreateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFlowDefinition(request), context);
}

CreateHumanTaskUiOutcome SageMakerClient::CreateHumanTaskUi(const CreateHumanTaskUiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateHumanTaskUiOutcome(CreateHumanTaskUiResult(outcome.GetResult()));
  }
  else
  {
    return CreateHumanTaskUiOutcome(outcome.GetError());
  }
}

CreateHumanTaskUiOutcomeCallable SageMakerClient::CreateHumanTaskUiCallable(const CreateHumanTaskUiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHumanTaskUiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHumanTaskUi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateHumanTaskUiAsync(const CreateHumanTaskUiRequest& request, const CreateHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHumanTaskUiAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateHumanTaskUiAsyncHelper(const CreateHumanTaskUiRequest& request, const CreateHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHumanTaskUi(request), context);
}

CreateHyperParameterTuningJobOutcome SageMakerClient::CreateHyperParameterTuningJob(const CreateHyperParameterTuningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateHyperParameterTuningJobOutcome(CreateHyperParameterTuningJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateHyperParameterTuningJobOutcome(outcome.GetError());
  }
}

CreateHyperParameterTuningJobOutcomeCallable SageMakerClient::CreateHyperParameterTuningJobCallable(const CreateHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateHyperParameterTuningJobAsync(const CreateHyperParameterTuningJobRequest& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHyperParameterTuningJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateHyperParameterTuningJobAsyncHelper(const CreateHyperParameterTuningJobRequest& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHyperParameterTuningJob(request), context);
}

CreateLabelingJobOutcome SageMakerClient::CreateLabelingJob(const CreateLabelingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLabelingJobOutcome(CreateLabelingJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateLabelingJobOutcome(outcome.GetError());
  }
}

CreateLabelingJobOutcomeCallable SageMakerClient::CreateLabelingJobCallable(const CreateLabelingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLabelingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLabelingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateLabelingJobAsync(const CreateLabelingJobRequest& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLabelingJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateLabelingJobAsyncHelper(const CreateLabelingJobRequest& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLabelingJob(request), context);
}

CreateModelOutcome SageMakerClient::CreateModel(const CreateModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateModelOutcome(CreateModelResult(outcome.GetResult()));
  }
  else
  {
    return CreateModelOutcome(outcome.GetError());
  }
}

CreateModelOutcomeCallable SageMakerClient::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateModelAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateModelAsyncHelper(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateModel(request), context);
}

CreateModelPackageOutcome SageMakerClient::CreateModelPackage(const CreateModelPackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateModelPackageOutcome(CreateModelPackageResult(outcome.GetResult()));
  }
  else
  {
    return CreateModelPackageOutcome(outcome.GetError());
  }
}

CreateModelPackageOutcomeCallable SageMakerClient::CreateModelPackageCallable(const CreateModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelPackageAsync(const CreateModelPackageRequest& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateModelPackageAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateModelPackageAsyncHelper(const CreateModelPackageRequest& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateModelPackage(request), context);
}

CreateMonitoringScheduleOutcome SageMakerClient::CreateMonitoringSchedule(const CreateMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMonitoringScheduleOutcome(CreateMonitoringScheduleResult(outcome.GetResult()));
  }
  else
  {
    return CreateMonitoringScheduleOutcome(outcome.GetError());
  }
}

CreateMonitoringScheduleOutcomeCallable SageMakerClient::CreateMonitoringScheduleCallable(const CreateMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateMonitoringScheduleAsync(const CreateMonitoringScheduleRequest& request, const CreateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMonitoringScheduleAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateMonitoringScheduleAsyncHelper(const CreateMonitoringScheduleRequest& request, const CreateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMonitoringSchedule(request), context);
}

CreateNotebookInstanceOutcome SageMakerClient::CreateNotebookInstance(const CreateNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNotebookInstanceOutcome(CreateNotebookInstanceResult(outcome.GetResult()));
  }
  else
  {
    return CreateNotebookInstanceOutcome(outcome.GetError());
  }
}

CreateNotebookInstanceOutcomeCallable SageMakerClient::CreateNotebookInstanceCallable(const CreateNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateNotebookInstanceAsync(const CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNotebookInstanceAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateNotebookInstanceAsyncHelper(const CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNotebookInstance(request), context);
}

CreateNotebookInstanceLifecycleConfigOutcome SageMakerClient::CreateNotebookInstanceLifecycleConfig(const CreateNotebookInstanceLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNotebookInstanceLifecycleConfigOutcome(CreateNotebookInstanceLifecycleConfigResult(outcome.GetResult()));
  }
  else
  {
    return CreateNotebookInstanceLifecycleConfigOutcome(outcome.GetError());
  }
}

CreateNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::CreateNotebookInstanceLifecycleConfigCallable(const CreateNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateNotebookInstanceLifecycleConfigAsync(const CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNotebookInstanceLifecycleConfigAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateNotebookInstanceLifecycleConfigAsyncHelper(const CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNotebookInstanceLifecycleConfig(request), context);
}

CreatePresignedDomainUrlOutcome SageMakerClient::CreatePresignedDomainUrl(const CreatePresignedDomainUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePresignedDomainUrlOutcome(CreatePresignedDomainUrlResult(outcome.GetResult()));
  }
  else
  {
    return CreatePresignedDomainUrlOutcome(outcome.GetError());
  }
}

CreatePresignedDomainUrlOutcomeCallable SageMakerClient::CreatePresignedDomainUrlCallable(const CreatePresignedDomainUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePresignedDomainUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePresignedDomainUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreatePresignedDomainUrlAsync(const CreatePresignedDomainUrlRequest& request, const CreatePresignedDomainUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePresignedDomainUrlAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreatePresignedDomainUrlAsyncHelper(const CreatePresignedDomainUrlRequest& request, const CreatePresignedDomainUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePresignedDomainUrl(request), context);
}

CreatePresignedNotebookInstanceUrlOutcome SageMakerClient::CreatePresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePresignedNotebookInstanceUrlOutcome(CreatePresignedNotebookInstanceUrlResult(outcome.GetResult()));
  }
  else
  {
    return CreatePresignedNotebookInstanceUrlOutcome(outcome.GetError());
  }
}

CreatePresignedNotebookInstanceUrlOutcomeCallable SageMakerClient::CreatePresignedNotebookInstanceUrlCallable(const CreatePresignedNotebookInstanceUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePresignedNotebookInstanceUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePresignedNotebookInstanceUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreatePresignedNotebookInstanceUrlAsync(const CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePresignedNotebookInstanceUrlAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreatePresignedNotebookInstanceUrlAsyncHelper(const CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePresignedNotebookInstanceUrl(request), context);
}

CreateProcessingJobOutcome SageMakerClient::CreateProcessingJob(const CreateProcessingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProcessingJobOutcome(CreateProcessingJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateProcessingJobOutcome(outcome.GetError());
  }
}

CreateProcessingJobOutcomeCallable SageMakerClient::CreateProcessingJobCallable(const CreateProcessingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProcessingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProcessingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateProcessingJobAsync(const CreateProcessingJobRequest& request, const CreateProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProcessingJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateProcessingJobAsyncHelper(const CreateProcessingJobRequest& request, const CreateProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProcessingJob(request), context);
}

CreateTrainingJobOutcome SageMakerClient::CreateTrainingJob(const CreateTrainingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTrainingJobOutcome(CreateTrainingJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrainingJobOutcome(outcome.GetError());
  }
}

CreateTrainingJobOutcomeCallable SageMakerClient::CreateTrainingJobCallable(const CreateTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateTrainingJobAsync(const CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrainingJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateTrainingJobAsyncHelper(const CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrainingJob(request), context);
}

CreateTransformJobOutcome SageMakerClient::CreateTransformJob(const CreateTransformJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTransformJobOutcome(CreateTransformJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateTransformJobOutcome(outcome.GetError());
  }
}

CreateTransformJobOutcomeCallable SageMakerClient::CreateTransformJobCallable(const CreateTransformJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransformJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransformJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateTransformJobAsync(const CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTransformJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateTransformJobAsyncHelper(const CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTransformJob(request), context);
}

CreateTrialOutcome SageMakerClient::CreateTrial(const CreateTrialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTrialOutcome(CreateTrialResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrialOutcome(outcome.GetError());
  }
}

CreateTrialOutcomeCallable SageMakerClient::CreateTrialCallable(const CreateTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateTrialAsync(const CreateTrialRequest& request, const CreateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrialAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateTrialAsyncHelper(const CreateTrialRequest& request, const CreateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrial(request), context);
}

CreateTrialComponentOutcome SageMakerClient::CreateTrialComponent(const CreateTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTrialComponentOutcome(CreateTrialComponentResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrialComponentOutcome(outcome.GetError());
  }
}

CreateTrialComponentOutcomeCallable SageMakerClient::CreateTrialComponentCallable(const CreateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateTrialComponentAsync(const CreateTrialComponentRequest& request, const CreateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrialComponentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateTrialComponentAsyncHelper(const CreateTrialComponentRequest& request, const CreateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrialComponent(request), context);
}

CreateUserProfileOutcome SageMakerClient::CreateUserProfile(const CreateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserProfileOutcome(CreateUserProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserProfileOutcome(outcome.GetError());
  }
}

CreateUserProfileOutcomeCallable SageMakerClient::CreateUserProfileCallable(const CreateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateUserProfileAsync(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserProfileAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateUserProfileAsyncHelper(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUserProfile(request), context);
}

CreateWorkteamOutcome SageMakerClient::CreateWorkteam(const CreateWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateWorkteamOutcome(CreateWorkteamResult(outcome.GetResult()));
  }
  else
  {
    return CreateWorkteamOutcome(outcome.GetError());
  }
}

CreateWorkteamOutcomeCallable SageMakerClient::CreateWorkteamCallable(const CreateWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateWorkteamAsync(const CreateWorkteamRequest& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorkteamAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::CreateWorkteamAsyncHelper(const CreateWorkteamRequest& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorkteam(request), context);
}

DeleteAlgorithmOutcome SageMakerClient::DeleteAlgorithm(const DeleteAlgorithmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAlgorithmOutcome(NoResult());
  }
  else
  {
    return DeleteAlgorithmOutcome(outcome.GetError());
  }
}

DeleteAlgorithmOutcomeCallable SageMakerClient::DeleteAlgorithmCallable(const DeleteAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteAlgorithmAsync(const DeleteAlgorithmRequest& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAlgorithmAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteAlgorithmAsyncHelper(const DeleteAlgorithmRequest& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlgorithm(request), context);
}

DeleteAppOutcome SageMakerClient::DeleteApp(const DeleteAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAppOutcome(NoResult());
  }
  else
  {
    return DeleteAppOutcome(outcome.GetError());
  }
}

DeleteAppOutcomeCallable SageMakerClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteAppAsyncHelper(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApp(request), context);
}

DeleteCodeRepositoryOutcome SageMakerClient::DeleteCodeRepository(const DeleteCodeRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCodeRepositoryOutcome(NoResult());
  }
  else
  {
    return DeleteCodeRepositoryOutcome(outcome.GetError());
  }
}

DeleteCodeRepositoryOutcomeCallable SageMakerClient::DeleteCodeRepositoryCallable(const DeleteCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteCodeRepositoryAsync(const DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCodeRepositoryAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteCodeRepositoryAsyncHelper(const DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCodeRepository(request), context);
}

DeleteDomainOutcome SageMakerClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDomainOutcome(NoResult());
  }
  else
  {
    return DeleteDomainOutcome(outcome.GetError());
  }
}

DeleteDomainOutcomeCallable SageMakerClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteDomainAsyncHelper(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomain(request), context);
}

DeleteEndpointOutcome SageMakerClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEndpointOutcome(NoResult());
  }
  else
  {
    return DeleteEndpointOutcome(outcome.GetError());
  }
}

DeleteEndpointOutcomeCallable SageMakerClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEndpointAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteEndpointAsyncHelper(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEndpoint(request), context);
}

DeleteEndpointConfigOutcome SageMakerClient::DeleteEndpointConfig(const DeleteEndpointConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEndpointConfigOutcome(NoResult());
  }
  else
  {
    return DeleteEndpointConfigOutcome(outcome.GetError());
  }
}

DeleteEndpointConfigOutcomeCallable SageMakerClient::DeleteEndpointConfigCallable(const DeleteEndpointConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpointConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteEndpointConfigAsync(const DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEndpointConfigAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteEndpointConfigAsyncHelper(const DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEndpointConfig(request), context);
}

DeleteExperimentOutcome SageMakerClient::DeleteExperiment(const DeleteExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteExperimentOutcome(DeleteExperimentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteExperimentOutcome(outcome.GetError());
  }
}

DeleteExperimentOutcomeCallable SageMakerClient::DeleteExperimentCallable(const DeleteExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteExperimentAsync(const DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteExperimentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteExperimentAsyncHelper(const DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteExperiment(request), context);
}

DeleteFlowDefinitionOutcome SageMakerClient::DeleteFlowDefinition(const DeleteFlowDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFlowDefinitionOutcome(DeleteFlowDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFlowDefinitionOutcome(outcome.GetError());
  }
}

DeleteFlowDefinitionOutcomeCallable SageMakerClient::DeleteFlowDefinitionCallable(const DeleteFlowDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFlowDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteFlowDefinitionAsync(const DeleteFlowDefinitionRequest& request, const DeleteFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFlowDefinitionAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteFlowDefinitionAsyncHelper(const DeleteFlowDefinitionRequest& request, const DeleteFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFlowDefinition(request), context);
}

DeleteModelOutcome SageMakerClient::DeleteModel(const DeleteModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteModelOutcome(NoResult());
  }
  else
  {
    return DeleteModelOutcome(outcome.GetError());
  }
}

DeleteModelOutcomeCallable SageMakerClient::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteModelAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteModelAsyncHelper(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteModel(request), context);
}

DeleteModelPackageOutcome SageMakerClient::DeleteModelPackage(const DeleteModelPackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteModelPackageOutcome(NoResult());
  }
  else
  {
    return DeleteModelPackageOutcome(outcome.GetError());
  }
}

DeleteModelPackageOutcomeCallable SageMakerClient::DeleteModelPackageCallable(const DeleteModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelPackageAsync(const DeleteModelPackageRequest& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteModelPackageAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteModelPackageAsyncHelper(const DeleteModelPackageRequest& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteModelPackage(request), context);
}

DeleteMonitoringScheduleOutcome SageMakerClient::DeleteMonitoringSchedule(const DeleteMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMonitoringScheduleOutcome(NoResult());
  }
  else
  {
    return DeleteMonitoringScheduleOutcome(outcome.GetError());
  }
}

DeleteMonitoringScheduleOutcomeCallable SageMakerClient::DeleteMonitoringScheduleCallable(const DeleteMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteMonitoringScheduleAsync(const DeleteMonitoringScheduleRequest& request, const DeleteMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMonitoringScheduleAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteMonitoringScheduleAsyncHelper(const DeleteMonitoringScheduleRequest& request, const DeleteMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMonitoringSchedule(request), context);
}

DeleteNotebookInstanceOutcome SageMakerClient::DeleteNotebookInstance(const DeleteNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNotebookInstanceOutcome(NoResult());
  }
  else
  {
    return DeleteNotebookInstanceOutcome(outcome.GetError());
  }
}

DeleteNotebookInstanceOutcomeCallable SageMakerClient::DeleteNotebookInstanceCallable(const DeleteNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteNotebookInstanceAsync(const DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNotebookInstanceAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteNotebookInstanceAsyncHelper(const DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNotebookInstance(request), context);
}

DeleteNotebookInstanceLifecycleConfigOutcome SageMakerClient::DeleteNotebookInstanceLifecycleConfig(const DeleteNotebookInstanceLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNotebookInstanceLifecycleConfigOutcome(NoResult());
  }
  else
  {
    return DeleteNotebookInstanceLifecycleConfigOutcome(outcome.GetError());
  }
}

DeleteNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::DeleteNotebookInstanceLifecycleConfigCallable(const DeleteNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteNotebookInstanceLifecycleConfigAsync(const DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNotebookInstanceLifecycleConfigAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteNotebookInstanceLifecycleConfigAsyncHelper(const DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNotebookInstanceLifecycleConfig(request), context);
}

DeleteTagsOutcome SageMakerClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTagsOutcome(DeleteTagsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTagsOutcome(outcome.GetError());
  }
}

DeleteTagsOutcomeCallable SageMakerClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DeleteTrialOutcome SageMakerClient::DeleteTrial(const DeleteTrialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTrialOutcome(DeleteTrialResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTrialOutcome(outcome.GetError());
  }
}

DeleteTrialOutcomeCallable SageMakerClient::DeleteTrialCallable(const DeleteTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteTrialAsync(const DeleteTrialRequest& request, const DeleteTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrialAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteTrialAsyncHelper(const DeleteTrialRequest& request, const DeleteTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrial(request), context);
}

DeleteTrialComponentOutcome SageMakerClient::DeleteTrialComponent(const DeleteTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTrialComponentOutcome(DeleteTrialComponentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTrialComponentOutcome(outcome.GetError());
  }
}

DeleteTrialComponentOutcomeCallable SageMakerClient::DeleteTrialComponentCallable(const DeleteTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteTrialComponentAsync(const DeleteTrialComponentRequest& request, const DeleteTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrialComponentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteTrialComponentAsyncHelper(const DeleteTrialComponentRequest& request, const DeleteTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrialComponent(request), context);
}

DeleteUserProfileOutcome SageMakerClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserProfileOutcome(NoResult());
  }
  else
  {
    return DeleteUserProfileOutcome(outcome.GetError());
  }
}

DeleteUserProfileOutcomeCallable SageMakerClient::DeleteUserProfileCallable(const DeleteUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteUserProfileAsync(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserProfileAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteUserProfileAsyncHelper(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserProfile(request), context);
}

DeleteWorkteamOutcome SageMakerClient::DeleteWorkteam(const DeleteWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteWorkteamOutcome(DeleteWorkteamResult(outcome.GetResult()));
  }
  else
  {
    return DeleteWorkteamOutcome(outcome.GetError());
  }
}

DeleteWorkteamOutcomeCallable SageMakerClient::DeleteWorkteamCallable(const DeleteWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteWorkteamAsync(const DeleteWorkteamRequest& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWorkteamAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DeleteWorkteamAsyncHelper(const DeleteWorkteamRequest& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWorkteam(request), context);
}

DescribeAlgorithmOutcome SageMakerClient::DescribeAlgorithm(const DescribeAlgorithmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAlgorithmOutcome(DescribeAlgorithmResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAlgorithmOutcome(outcome.GetError());
  }
}

DescribeAlgorithmOutcomeCallable SageMakerClient::DescribeAlgorithmCallable(const DescribeAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeAlgorithmAsync(const DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAlgorithmAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeAlgorithmAsyncHelper(const DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAlgorithm(request), context);
}

DescribeAppOutcome SageMakerClient::DescribeApp(const DescribeAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAppOutcome(DescribeAppResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAppOutcome(outcome.GetError());
  }
}

DescribeAppOutcomeCallable SageMakerClient::DescribeAppCallable(const DescribeAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeAppAsync(const DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAppAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeAppAsyncHelper(const DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApp(request), context);
}

DescribeAutoMLJobOutcome SageMakerClient::DescribeAutoMLJob(const DescribeAutoMLJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAutoMLJobOutcome(DescribeAutoMLJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAutoMLJobOutcome(outcome.GetError());
  }
}

DescribeAutoMLJobOutcomeCallable SageMakerClient::DescribeAutoMLJobCallable(const DescribeAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeAutoMLJobAsync(const DescribeAutoMLJobRequest& request, const DescribeAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAutoMLJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeAutoMLJobAsyncHelper(const DescribeAutoMLJobRequest& request, const DescribeAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAutoMLJob(request), context);
}

DescribeCodeRepositoryOutcome SageMakerClient::DescribeCodeRepository(const DescribeCodeRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCodeRepositoryOutcome(DescribeCodeRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCodeRepositoryOutcome(outcome.GetError());
  }
}

DescribeCodeRepositoryOutcomeCallable SageMakerClient::DescribeCodeRepositoryCallable(const DescribeCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeCodeRepositoryAsync(const DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCodeRepositoryAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeCodeRepositoryAsyncHelper(const DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCodeRepository(request), context);
}

DescribeCompilationJobOutcome SageMakerClient::DescribeCompilationJob(const DescribeCompilationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCompilationJobOutcome(DescribeCompilationJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCompilationJobOutcome(outcome.GetError());
  }
}

DescribeCompilationJobOutcomeCallable SageMakerClient::DescribeCompilationJobCallable(const DescribeCompilationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCompilationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCompilationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeCompilationJobAsync(const DescribeCompilationJobRequest& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCompilationJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeCompilationJobAsyncHelper(const DescribeCompilationJobRequest& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCompilationJob(request), context);
}

DescribeDomainOutcome SageMakerClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDomainOutcome(DescribeDomainResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDomainOutcome(outcome.GetError());
  }
}

DescribeDomainOutcomeCallable SageMakerClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDomainAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeDomainAsyncHelper(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDomain(request), context);
}

DescribeEndpointOutcome SageMakerClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEndpointOutcome(DescribeEndpointResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEndpointOutcome(outcome.GetError());
  }
}

DescribeEndpointOutcomeCallable SageMakerClient::DescribeEndpointCallable(const DescribeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeEndpointAsync(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEndpointAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeEndpointAsyncHelper(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEndpoint(request), context);
}

DescribeEndpointConfigOutcome SageMakerClient::DescribeEndpointConfig(const DescribeEndpointConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEndpointConfigOutcome(DescribeEndpointConfigResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEndpointConfigOutcome(outcome.GetError());
  }
}

DescribeEndpointConfigOutcomeCallable SageMakerClient::DescribeEndpointConfigCallable(const DescribeEndpointConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeEndpointConfigAsync(const DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEndpointConfigAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeEndpointConfigAsyncHelper(const DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEndpointConfig(request), context);
}

DescribeExperimentOutcome SageMakerClient::DescribeExperiment(const DescribeExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeExperimentOutcome(DescribeExperimentResult(outcome.GetResult()));
  }
  else
  {
    return DescribeExperimentOutcome(outcome.GetError());
  }
}

DescribeExperimentOutcomeCallable SageMakerClient::DescribeExperimentCallable(const DescribeExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeExperimentAsync(const DescribeExperimentRequest& request, const DescribeExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExperimentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeExperimentAsyncHelper(const DescribeExperimentRequest& request, const DescribeExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExperiment(request), context);
}

DescribeFlowDefinitionOutcome SageMakerClient::DescribeFlowDefinition(const DescribeFlowDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFlowDefinitionOutcome(DescribeFlowDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFlowDefinitionOutcome(outcome.GetError());
  }
}

DescribeFlowDefinitionOutcomeCallable SageMakerClient::DescribeFlowDefinitionCallable(const DescribeFlowDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlowDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeFlowDefinitionAsync(const DescribeFlowDefinitionRequest& request, const DescribeFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFlowDefinitionAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeFlowDefinitionAsyncHelper(const DescribeFlowDefinitionRequest& request, const DescribeFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFlowDefinition(request), context);
}

DescribeHumanTaskUiOutcome SageMakerClient::DescribeHumanTaskUi(const DescribeHumanTaskUiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeHumanTaskUiOutcome(DescribeHumanTaskUiResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHumanTaskUiOutcome(outcome.GetError());
  }
}

DescribeHumanTaskUiOutcomeCallable SageMakerClient::DescribeHumanTaskUiCallable(const DescribeHumanTaskUiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHumanTaskUiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHumanTaskUi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeHumanTaskUiAsync(const DescribeHumanTaskUiRequest& request, const DescribeHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHumanTaskUiAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeHumanTaskUiAsyncHelper(const DescribeHumanTaskUiRequest& request, const DescribeHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHumanTaskUi(request), context);
}

DescribeHyperParameterTuningJobOutcome SageMakerClient::DescribeHyperParameterTuningJob(const DescribeHyperParameterTuningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeHyperParameterTuningJobOutcome(DescribeHyperParameterTuningJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHyperParameterTuningJobOutcome(outcome.GetError());
  }
}

DescribeHyperParameterTuningJobOutcomeCallable SageMakerClient::DescribeHyperParameterTuningJobCallable(const DescribeHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeHyperParameterTuningJobAsync(const DescribeHyperParameterTuningJobRequest& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHyperParameterTuningJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeHyperParameterTuningJobAsyncHelper(const DescribeHyperParameterTuningJobRequest& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHyperParameterTuningJob(request), context);
}

DescribeLabelingJobOutcome SageMakerClient::DescribeLabelingJob(const DescribeLabelingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLabelingJobOutcome(DescribeLabelingJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLabelingJobOutcome(outcome.GetError());
  }
}

DescribeLabelingJobOutcomeCallable SageMakerClient::DescribeLabelingJobCallable(const DescribeLabelingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLabelingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLabelingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeLabelingJobAsync(const DescribeLabelingJobRequest& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLabelingJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeLabelingJobAsyncHelper(const DescribeLabelingJobRequest& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLabelingJob(request), context);
}

DescribeModelOutcome SageMakerClient::DescribeModel(const DescribeModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeModelOutcome(DescribeModelResult(outcome.GetResult()));
  }
  else
  {
    return DescribeModelOutcome(outcome.GetError());
  }
}

DescribeModelOutcomeCallable SageMakerClient::DescribeModelCallable(const DescribeModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeModelAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeModelAsyncHelper(const DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeModel(request), context);
}

DescribeModelPackageOutcome SageMakerClient::DescribeModelPackage(const DescribeModelPackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeModelPackageOutcome(DescribeModelPackageResult(outcome.GetResult()));
  }
  else
  {
    return DescribeModelPackageOutcome(outcome.GetError());
  }
}

DescribeModelPackageOutcomeCallable SageMakerClient::DescribeModelPackageCallable(const DescribeModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelPackageAsync(const DescribeModelPackageRequest& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeModelPackageAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeModelPackageAsyncHelper(const DescribeModelPackageRequest& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeModelPackage(request), context);
}

DescribeMonitoringScheduleOutcome SageMakerClient::DescribeMonitoringSchedule(const DescribeMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeMonitoringScheduleOutcome(DescribeMonitoringScheduleResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMonitoringScheduleOutcome(outcome.GetError());
  }
}

DescribeMonitoringScheduleOutcomeCallable SageMakerClient::DescribeMonitoringScheduleCallable(const DescribeMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeMonitoringScheduleAsync(const DescribeMonitoringScheduleRequest& request, const DescribeMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMonitoringScheduleAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeMonitoringScheduleAsyncHelper(const DescribeMonitoringScheduleRequest& request, const DescribeMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMonitoringSchedule(request), context);
}

DescribeNotebookInstanceOutcome SageMakerClient::DescribeNotebookInstance(const DescribeNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeNotebookInstanceOutcome(DescribeNotebookInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeNotebookInstanceOutcome(outcome.GetError());
  }
}

DescribeNotebookInstanceOutcomeCallable SageMakerClient::DescribeNotebookInstanceCallable(const DescribeNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeNotebookInstanceAsync(const DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNotebookInstanceAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeNotebookInstanceAsyncHelper(const DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNotebookInstance(request), context);
}

DescribeNotebookInstanceLifecycleConfigOutcome SageMakerClient::DescribeNotebookInstanceLifecycleConfig(const DescribeNotebookInstanceLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeNotebookInstanceLifecycleConfigOutcome(DescribeNotebookInstanceLifecycleConfigResult(outcome.GetResult()));
  }
  else
  {
    return DescribeNotebookInstanceLifecycleConfigOutcome(outcome.GetError());
  }
}

DescribeNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::DescribeNotebookInstanceLifecycleConfigCallable(const DescribeNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeNotebookInstanceLifecycleConfigAsync(const DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNotebookInstanceLifecycleConfigAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeNotebookInstanceLifecycleConfigAsyncHelper(const DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNotebookInstanceLifecycleConfig(request), context);
}

DescribeProcessingJobOutcome SageMakerClient::DescribeProcessingJob(const DescribeProcessingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProcessingJobOutcome(DescribeProcessingJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProcessingJobOutcome(outcome.GetError());
  }
}

DescribeProcessingJobOutcomeCallable SageMakerClient::DescribeProcessingJobCallable(const DescribeProcessingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProcessingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProcessingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeProcessingJobAsync(const DescribeProcessingJobRequest& request, const DescribeProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProcessingJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeProcessingJobAsyncHelper(const DescribeProcessingJobRequest& request, const DescribeProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProcessingJob(request), context);
}

DescribeSubscribedWorkteamOutcome SageMakerClient::DescribeSubscribedWorkteam(const DescribeSubscribedWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSubscribedWorkteamOutcome(DescribeSubscribedWorkteamResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSubscribedWorkteamOutcome(outcome.GetError());
  }
}

DescribeSubscribedWorkteamOutcomeCallable SageMakerClient::DescribeSubscribedWorkteamCallable(const DescribeSubscribedWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubscribedWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubscribedWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeSubscribedWorkteamAsync(const DescribeSubscribedWorkteamRequest& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSubscribedWorkteamAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeSubscribedWorkteamAsyncHelper(const DescribeSubscribedWorkteamRequest& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSubscribedWorkteam(request), context);
}

DescribeTrainingJobOutcome SageMakerClient::DescribeTrainingJob(const DescribeTrainingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTrainingJobOutcome(DescribeTrainingJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrainingJobOutcome(outcome.GetError());
  }
}

DescribeTrainingJobOutcomeCallable SageMakerClient::DescribeTrainingJobCallable(const DescribeTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeTrainingJobAsync(const DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTrainingJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeTrainingJobAsyncHelper(const DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrainingJob(request), context);
}

DescribeTransformJobOutcome SageMakerClient::DescribeTransformJob(const DescribeTransformJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTransformJobOutcome(DescribeTransformJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTransformJobOutcome(outcome.GetError());
  }
}

DescribeTransformJobOutcomeCallable SageMakerClient::DescribeTransformJobCallable(const DescribeTransformJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransformJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTransformJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeTransformJobAsync(const DescribeTransformJobRequest& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTransformJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeTransformJobAsyncHelper(const DescribeTransformJobRequest& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTransformJob(request), context);
}

DescribeTrialOutcome SageMakerClient::DescribeTrial(const DescribeTrialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTrialOutcome(DescribeTrialResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrialOutcome(outcome.GetError());
  }
}

DescribeTrialOutcomeCallable SageMakerClient::DescribeTrialCallable(const DescribeTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeTrialAsync(const DescribeTrialRequest& request, const DescribeTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTrialAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeTrialAsyncHelper(const DescribeTrialRequest& request, const DescribeTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrial(request), context);
}

DescribeTrialComponentOutcome SageMakerClient::DescribeTrialComponent(const DescribeTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTrialComponentOutcome(DescribeTrialComponentResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrialComponentOutcome(outcome.GetError());
  }
}

DescribeTrialComponentOutcomeCallable SageMakerClient::DescribeTrialComponentCallable(const DescribeTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeTrialComponentAsync(const DescribeTrialComponentRequest& request, const DescribeTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTrialComponentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeTrialComponentAsyncHelper(const DescribeTrialComponentRequest& request, const DescribeTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrialComponent(request), context);
}

DescribeUserProfileOutcome SageMakerClient::DescribeUserProfile(const DescribeUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUserProfileOutcome(DescribeUserProfileResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserProfileOutcome(outcome.GetError());
  }
}

DescribeUserProfileOutcomeCallable SageMakerClient::DescribeUserProfileCallable(const DescribeUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeUserProfileAsync(const DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserProfileAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeUserProfileAsyncHelper(const DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserProfile(request), context);
}

DescribeWorkforceOutcome SageMakerClient::DescribeWorkforce(const DescribeWorkforceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkforceOutcome(DescribeWorkforceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkforceOutcome(outcome.GetError());
  }
}

DescribeWorkforceOutcomeCallable SageMakerClient::DescribeWorkforceCallable(const DescribeWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeWorkforceAsync(const DescribeWorkforceRequest& request, const DescribeWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkforceAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeWorkforceAsyncHelper(const DescribeWorkforceRequest& request, const DescribeWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkforce(request), context);
}

DescribeWorkteamOutcome SageMakerClient::DescribeWorkteam(const DescribeWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkteamOutcome(DescribeWorkteamResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkteamOutcome(outcome.GetError());
  }
}

DescribeWorkteamOutcomeCallable SageMakerClient::DescribeWorkteamCallable(const DescribeWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeWorkteamAsync(const DescribeWorkteamRequest& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkteamAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DescribeWorkteamAsyncHelper(const DescribeWorkteamRequest& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkteam(request), context);
}

DisassociateTrialComponentOutcome SageMakerClient::DisassociateTrialComponent(const DisassociateTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateTrialComponentOutcome(DisassociateTrialComponentResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateTrialComponentOutcome(outcome.GetError());
  }
}

DisassociateTrialComponentOutcomeCallable SageMakerClient::DisassociateTrialComponentCallable(const DisassociateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DisassociateTrialComponentAsync(const DisassociateTrialComponentRequest& request, const DisassociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateTrialComponentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::DisassociateTrialComponentAsyncHelper(const DisassociateTrialComponentRequest& request, const DisassociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateTrialComponent(request), context);
}

GetSearchSuggestionsOutcome SageMakerClient::GetSearchSuggestions(const GetSearchSuggestionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSearchSuggestionsOutcome(GetSearchSuggestionsResult(outcome.GetResult()));
  }
  else
  {
    return GetSearchSuggestionsOutcome(outcome.GetError());
  }
}

GetSearchSuggestionsOutcomeCallable SageMakerClient::GetSearchSuggestionsCallable(const GetSearchSuggestionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSearchSuggestionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSearchSuggestions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::GetSearchSuggestionsAsync(const GetSearchSuggestionsRequest& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSearchSuggestionsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::GetSearchSuggestionsAsyncHelper(const GetSearchSuggestionsRequest& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSearchSuggestions(request), context);
}

ListAlgorithmsOutcome SageMakerClient::ListAlgorithms(const ListAlgorithmsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAlgorithmsOutcome(ListAlgorithmsResult(outcome.GetResult()));
  }
  else
  {
    return ListAlgorithmsOutcome(outcome.GetError());
  }
}

ListAlgorithmsOutcomeCallable SageMakerClient::ListAlgorithmsCallable(const ListAlgorithmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAlgorithmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAlgorithms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListAlgorithmsAsync(const ListAlgorithmsRequest& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAlgorithmsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListAlgorithmsAsyncHelper(const ListAlgorithmsRequest& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAlgorithms(request), context);
}

ListAppsOutcome SageMakerClient::ListApps(const ListAppsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAppsOutcome(ListAppsResult(outcome.GetResult()));
  }
  else
  {
    return ListAppsOutcome(outcome.GetError());
  }
}

ListAppsOutcomeCallable SageMakerClient::ListAppsCallable(const ListAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListAppsAsync(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAppsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListAppsAsyncHelper(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApps(request), context);
}

ListAutoMLJobsOutcome SageMakerClient::ListAutoMLJobs(const ListAutoMLJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAutoMLJobsOutcome(ListAutoMLJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListAutoMLJobsOutcome(outcome.GetError());
  }
}

ListAutoMLJobsOutcomeCallable SageMakerClient::ListAutoMLJobsCallable(const ListAutoMLJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAutoMLJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAutoMLJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListAutoMLJobsAsync(const ListAutoMLJobsRequest& request, const ListAutoMLJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAutoMLJobsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListAutoMLJobsAsyncHelper(const ListAutoMLJobsRequest& request, const ListAutoMLJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAutoMLJobs(request), context);
}

ListCandidatesForAutoMLJobOutcome SageMakerClient::ListCandidatesForAutoMLJob(const ListCandidatesForAutoMLJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCandidatesForAutoMLJobOutcome(ListCandidatesForAutoMLJobResult(outcome.GetResult()));
  }
  else
  {
    return ListCandidatesForAutoMLJobOutcome(outcome.GetError());
  }
}

ListCandidatesForAutoMLJobOutcomeCallable SageMakerClient::ListCandidatesForAutoMLJobCallable(const ListCandidatesForAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCandidatesForAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCandidatesForAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListCandidatesForAutoMLJobAsync(const ListCandidatesForAutoMLJobRequest& request, const ListCandidatesForAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCandidatesForAutoMLJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListCandidatesForAutoMLJobAsyncHelper(const ListCandidatesForAutoMLJobRequest& request, const ListCandidatesForAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCandidatesForAutoMLJob(request), context);
}

ListCodeRepositoriesOutcome SageMakerClient::ListCodeRepositories(const ListCodeRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCodeRepositoriesOutcome(ListCodeRepositoriesResult(outcome.GetResult()));
  }
  else
  {
    return ListCodeRepositoriesOutcome(outcome.GetError());
  }
}

ListCodeRepositoriesOutcomeCallable SageMakerClient::ListCodeRepositoriesCallable(const ListCodeRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCodeRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCodeRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListCodeRepositoriesAsync(const ListCodeRepositoriesRequest& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCodeRepositoriesAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListCodeRepositoriesAsyncHelper(const ListCodeRepositoriesRequest& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCodeRepositories(request), context);
}

ListCompilationJobsOutcome SageMakerClient::ListCompilationJobs(const ListCompilationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCompilationJobsOutcome(ListCompilationJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListCompilationJobsOutcome(outcome.GetError());
  }
}

ListCompilationJobsOutcomeCallable SageMakerClient::ListCompilationJobsCallable(const ListCompilationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCompilationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCompilationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListCompilationJobsAsync(const ListCompilationJobsRequest& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCompilationJobsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListCompilationJobsAsyncHelper(const ListCompilationJobsRequest& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCompilationJobs(request), context);
}

ListDomainsOutcome SageMakerClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDomainsOutcome(ListDomainsResult(outcome.GetResult()));
  }
  else
  {
    return ListDomainsOutcome(outcome.GetError());
  }
}

ListDomainsOutcomeCallable SageMakerClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

ListEndpointConfigsOutcome SageMakerClient::ListEndpointConfigs(const ListEndpointConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEndpointConfigsOutcome(ListEndpointConfigsResult(outcome.GetResult()));
  }
  else
  {
    return ListEndpointConfigsOutcome(outcome.GetError());
  }
}

ListEndpointConfigsOutcomeCallable SageMakerClient::ListEndpointConfigsCallable(const ListEndpointConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpointConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListEndpointConfigsAsync(const ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEndpointConfigsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListEndpointConfigsAsyncHelper(const ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEndpointConfigs(request), context);
}

ListEndpointsOutcome SageMakerClient::ListEndpoints(const ListEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEndpointsOutcome(ListEndpointsResult(outcome.GetResult()));
  }
  else
  {
    return ListEndpointsOutcome(outcome.GetError());
  }
}

ListEndpointsOutcomeCallable SageMakerClient::ListEndpointsCallable(const ListEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListEndpointsAsync(const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEndpointsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListEndpointsAsyncHelper(const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEndpoints(request), context);
}

ListExperimentsOutcome SageMakerClient::ListExperiments(const ListExperimentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListExperimentsOutcome(ListExperimentsResult(outcome.GetResult()));
  }
  else
  {
    return ListExperimentsOutcome(outcome.GetError());
  }
}

ListExperimentsOutcomeCallable SageMakerClient::ListExperimentsCallable(const ListExperimentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperimentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperiments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListExperimentsAsync(const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListExperimentsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListExperimentsAsyncHelper(const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExperiments(request), context);
}

ListFlowDefinitionsOutcome SageMakerClient::ListFlowDefinitions(const ListFlowDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFlowDefinitionsOutcome(ListFlowDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return ListFlowDefinitionsOutcome(outcome.GetError());
  }
}

ListFlowDefinitionsOutcomeCallable SageMakerClient::ListFlowDefinitionsCallable(const ListFlowDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFlowDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFlowDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListFlowDefinitionsAsync(const ListFlowDefinitionsRequest& request, const ListFlowDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFlowDefinitionsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListFlowDefinitionsAsyncHelper(const ListFlowDefinitionsRequest& request, const ListFlowDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFlowDefinitions(request), context);
}

ListHumanTaskUisOutcome SageMakerClient::ListHumanTaskUis(const ListHumanTaskUisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListHumanTaskUisOutcome(ListHumanTaskUisResult(outcome.GetResult()));
  }
  else
  {
    return ListHumanTaskUisOutcome(outcome.GetError());
  }
}

ListHumanTaskUisOutcomeCallable SageMakerClient::ListHumanTaskUisCallable(const ListHumanTaskUisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHumanTaskUisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHumanTaskUis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListHumanTaskUisAsync(const ListHumanTaskUisRequest& request, const ListHumanTaskUisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHumanTaskUisAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListHumanTaskUisAsyncHelper(const ListHumanTaskUisRequest& request, const ListHumanTaskUisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHumanTaskUis(request), context);
}

ListHyperParameterTuningJobsOutcome SageMakerClient::ListHyperParameterTuningJobs(const ListHyperParameterTuningJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListHyperParameterTuningJobsOutcome(ListHyperParameterTuningJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListHyperParameterTuningJobsOutcome(outcome.GetError());
  }
}

ListHyperParameterTuningJobsOutcomeCallable SageMakerClient::ListHyperParameterTuningJobsCallable(const ListHyperParameterTuningJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHyperParameterTuningJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHyperParameterTuningJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListHyperParameterTuningJobsAsync(const ListHyperParameterTuningJobsRequest& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHyperParameterTuningJobsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListHyperParameterTuningJobsAsyncHelper(const ListHyperParameterTuningJobsRequest& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHyperParameterTuningJobs(request), context);
}

ListLabelingJobsOutcome SageMakerClient::ListLabelingJobs(const ListLabelingJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLabelingJobsOutcome(ListLabelingJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListLabelingJobsOutcome(outcome.GetError());
  }
}

ListLabelingJobsOutcomeCallable SageMakerClient::ListLabelingJobsCallable(const ListLabelingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLabelingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLabelingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListLabelingJobsAsync(const ListLabelingJobsRequest& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLabelingJobsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListLabelingJobsAsyncHelper(const ListLabelingJobsRequest& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLabelingJobs(request), context);
}

ListLabelingJobsForWorkteamOutcome SageMakerClient::ListLabelingJobsForWorkteam(const ListLabelingJobsForWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLabelingJobsForWorkteamOutcome(ListLabelingJobsForWorkteamResult(outcome.GetResult()));
  }
  else
  {
    return ListLabelingJobsForWorkteamOutcome(outcome.GetError());
  }
}

ListLabelingJobsForWorkteamOutcomeCallable SageMakerClient::ListLabelingJobsForWorkteamCallable(const ListLabelingJobsForWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLabelingJobsForWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLabelingJobsForWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListLabelingJobsForWorkteamAsync(const ListLabelingJobsForWorkteamRequest& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLabelingJobsForWorkteamAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListLabelingJobsForWorkteamAsyncHelper(const ListLabelingJobsForWorkteamRequest& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLabelingJobsForWorkteam(request), context);
}

ListModelPackagesOutcome SageMakerClient::ListModelPackages(const ListModelPackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListModelPackagesOutcome(ListModelPackagesResult(outcome.GetResult()));
  }
  else
  {
    return ListModelPackagesOutcome(outcome.GetError());
  }
}

ListModelPackagesOutcomeCallable SageMakerClient::ListModelPackagesCallable(const ListModelPackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelPackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelPackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelPackagesAsync(const ListModelPackagesRequest& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListModelPackagesAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListModelPackagesAsyncHelper(const ListModelPackagesRequest& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListModelPackages(request), context);
}

ListModelsOutcome SageMakerClient::ListModels(const ListModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListModelsOutcome(ListModelsResult(outcome.GetResult()));
  }
  else
  {
    return ListModelsOutcome(outcome.GetError());
  }
}

ListModelsOutcomeCallable SageMakerClient::ListModelsCallable(const ListModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelsAsync(const ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListModelsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListModelsAsyncHelper(const ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListModels(request), context);
}

ListMonitoringExecutionsOutcome SageMakerClient::ListMonitoringExecutions(const ListMonitoringExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMonitoringExecutionsOutcome(ListMonitoringExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return ListMonitoringExecutionsOutcome(outcome.GetError());
  }
}

ListMonitoringExecutionsOutcomeCallable SageMakerClient::ListMonitoringExecutionsCallable(const ListMonitoringExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitoringExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitoringExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListMonitoringExecutionsAsync(const ListMonitoringExecutionsRequest& request, const ListMonitoringExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMonitoringExecutionsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListMonitoringExecutionsAsyncHelper(const ListMonitoringExecutionsRequest& request, const ListMonitoringExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMonitoringExecutions(request), context);
}

ListMonitoringSchedulesOutcome SageMakerClient::ListMonitoringSchedules(const ListMonitoringSchedulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMonitoringSchedulesOutcome(ListMonitoringSchedulesResult(outcome.GetResult()));
  }
  else
  {
    return ListMonitoringSchedulesOutcome(outcome.GetError());
  }
}

ListMonitoringSchedulesOutcomeCallable SageMakerClient::ListMonitoringSchedulesCallable(const ListMonitoringSchedulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitoringSchedulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitoringSchedules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListMonitoringSchedulesAsync(const ListMonitoringSchedulesRequest& request, const ListMonitoringSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMonitoringSchedulesAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListMonitoringSchedulesAsyncHelper(const ListMonitoringSchedulesRequest& request, const ListMonitoringSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMonitoringSchedules(request), context);
}

ListNotebookInstanceLifecycleConfigsOutcome SageMakerClient::ListNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListNotebookInstanceLifecycleConfigsOutcome(ListNotebookInstanceLifecycleConfigsResult(outcome.GetResult()));
  }
  else
  {
    return ListNotebookInstanceLifecycleConfigsOutcome(outcome.GetError());
  }
}

ListNotebookInstanceLifecycleConfigsOutcomeCallable SageMakerClient::ListNotebookInstanceLifecycleConfigsCallable(const ListNotebookInstanceLifecycleConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotebookInstanceLifecycleConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotebookInstanceLifecycleConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListNotebookInstanceLifecycleConfigsAsync(const ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNotebookInstanceLifecycleConfigsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListNotebookInstanceLifecycleConfigsAsyncHelper(const ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNotebookInstanceLifecycleConfigs(request), context);
}

ListNotebookInstancesOutcome SageMakerClient::ListNotebookInstances(const ListNotebookInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListNotebookInstancesOutcome(ListNotebookInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListNotebookInstancesOutcome(outcome.GetError());
  }
}

ListNotebookInstancesOutcomeCallable SageMakerClient::ListNotebookInstancesCallable(const ListNotebookInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotebookInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotebookInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListNotebookInstancesAsync(const ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNotebookInstancesAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListNotebookInstancesAsyncHelper(const ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNotebookInstances(request), context);
}

ListProcessingJobsOutcome SageMakerClient::ListProcessingJobs(const ListProcessingJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProcessingJobsOutcome(ListProcessingJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListProcessingJobsOutcome(outcome.GetError());
  }
}

ListProcessingJobsOutcomeCallable SageMakerClient::ListProcessingJobsCallable(const ListProcessingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProcessingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProcessingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListProcessingJobsAsync(const ListProcessingJobsRequest& request, const ListProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProcessingJobsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListProcessingJobsAsyncHelper(const ListProcessingJobsRequest& request, const ListProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProcessingJobs(request), context);
}

ListSubscribedWorkteamsOutcome SageMakerClient::ListSubscribedWorkteams(const ListSubscribedWorkteamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSubscribedWorkteamsOutcome(ListSubscribedWorkteamsResult(outcome.GetResult()));
  }
  else
  {
    return ListSubscribedWorkteamsOutcome(outcome.GetError());
  }
}

ListSubscribedWorkteamsOutcomeCallable SageMakerClient::ListSubscribedWorkteamsCallable(const ListSubscribedWorkteamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscribedWorkteamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscribedWorkteams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListSubscribedWorkteamsAsync(const ListSubscribedWorkteamsRequest& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSubscribedWorkteamsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListSubscribedWorkteamsAsyncHelper(const ListSubscribedWorkteamsRequest& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSubscribedWorkteams(request), context);
}

ListTagsOutcome SageMakerClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsOutcome(ListTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOutcome(outcome.GetError());
  }
}

ListTagsOutcomeCallable SageMakerClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

ListTrainingJobsOutcome SageMakerClient::ListTrainingJobs(const ListTrainingJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTrainingJobsOutcome(ListTrainingJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListTrainingJobsOutcome(outcome.GetError());
  }
}

ListTrainingJobsOutcomeCallable SageMakerClient::ListTrainingJobsCallable(const ListTrainingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrainingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrainingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTrainingJobsAsync(const ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrainingJobsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListTrainingJobsAsyncHelper(const ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrainingJobs(request), context);
}

ListTrainingJobsForHyperParameterTuningJobOutcome SageMakerClient::ListTrainingJobsForHyperParameterTuningJob(const ListTrainingJobsForHyperParameterTuningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTrainingJobsForHyperParameterTuningJobOutcome(ListTrainingJobsForHyperParameterTuningJobResult(outcome.GetResult()));
  }
  else
  {
    return ListTrainingJobsForHyperParameterTuningJobOutcome(outcome.GetError());
  }
}

ListTrainingJobsForHyperParameterTuningJobOutcomeCallable SageMakerClient::ListTrainingJobsForHyperParameterTuningJobCallable(const ListTrainingJobsForHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrainingJobsForHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrainingJobsForHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTrainingJobsForHyperParameterTuningJobAsync(const ListTrainingJobsForHyperParameterTuningJobRequest& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrainingJobsForHyperParameterTuningJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListTrainingJobsForHyperParameterTuningJobAsyncHelper(const ListTrainingJobsForHyperParameterTuningJobRequest& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrainingJobsForHyperParameterTuningJob(request), context);
}

ListTransformJobsOutcome SageMakerClient::ListTransformJobs(const ListTransformJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTransformJobsOutcome(ListTransformJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListTransformJobsOutcome(outcome.GetError());
  }
}

ListTransformJobsOutcomeCallable SageMakerClient::ListTransformJobsCallable(const ListTransformJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTransformJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTransformJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTransformJobsAsync(const ListTransformJobsRequest& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTransformJobsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListTransformJobsAsyncHelper(const ListTransformJobsRequest& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTransformJobs(request), context);
}

ListTrialComponentsOutcome SageMakerClient::ListTrialComponents(const ListTrialComponentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTrialComponentsOutcome(ListTrialComponentsResult(outcome.GetResult()));
  }
  else
  {
    return ListTrialComponentsOutcome(outcome.GetError());
  }
}

ListTrialComponentsOutcomeCallable SageMakerClient::ListTrialComponentsCallable(const ListTrialComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrialComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrialComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTrialComponentsAsync(const ListTrialComponentsRequest& request, const ListTrialComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrialComponentsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListTrialComponentsAsyncHelper(const ListTrialComponentsRequest& request, const ListTrialComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrialComponents(request), context);
}

ListTrialsOutcome SageMakerClient::ListTrials(const ListTrialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTrialsOutcome(ListTrialsResult(outcome.GetResult()));
  }
  else
  {
    return ListTrialsOutcome(outcome.GetError());
  }
}

ListTrialsOutcomeCallable SageMakerClient::ListTrialsCallable(const ListTrialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTrialsAsync(const ListTrialsRequest& request, const ListTrialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrialsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListTrialsAsyncHelper(const ListTrialsRequest& request, const ListTrialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrials(request), context);
}

ListUserProfilesOutcome SageMakerClient::ListUserProfiles(const ListUserProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUserProfilesOutcome(ListUserProfilesResult(outcome.GetResult()));
  }
  else
  {
    return ListUserProfilesOutcome(outcome.GetError());
  }
}

ListUserProfilesOutcomeCallable SageMakerClient::ListUserProfilesCallable(const ListUserProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListUserProfilesAsync(const ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUserProfilesAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListUserProfilesAsyncHelper(const ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUserProfiles(request), context);
}

ListWorkteamsOutcome SageMakerClient::ListWorkteams(const ListWorkteamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListWorkteamsOutcome(ListWorkteamsResult(outcome.GetResult()));
  }
  else
  {
    return ListWorkteamsOutcome(outcome.GetError());
  }
}

ListWorkteamsOutcomeCallable SageMakerClient::ListWorkteamsCallable(const ListWorkteamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkteamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkteams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListWorkteamsAsync(const ListWorkteamsRequest& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorkteamsAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::ListWorkteamsAsyncHelper(const ListWorkteamsRequest& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkteams(request), context);
}

RenderUiTemplateOutcome SageMakerClient::RenderUiTemplate(const RenderUiTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RenderUiTemplateOutcome(RenderUiTemplateResult(outcome.GetResult()));
  }
  else
  {
    return RenderUiTemplateOutcome(outcome.GetError());
  }
}

RenderUiTemplateOutcomeCallable SageMakerClient::RenderUiTemplateCallable(const RenderUiTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RenderUiTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RenderUiTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::RenderUiTemplateAsync(const RenderUiTemplateRequest& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RenderUiTemplateAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::RenderUiTemplateAsyncHelper(const RenderUiTemplateRequest& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RenderUiTemplate(request), context);
}

SearchOutcome SageMakerClient::Search(const SearchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchOutcome(SearchResult(outcome.GetResult()));
  }
  else
  {
    return SearchOutcome(outcome.GetError());
  }
}

SearchOutcomeCallable SageMakerClient::SearchCallable(const SearchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Search(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::SearchAsync(const SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::SearchAsyncHelper(const SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Search(request), context);
}

StartMonitoringScheduleOutcome SageMakerClient::StartMonitoringSchedule(const StartMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartMonitoringScheduleOutcome(NoResult());
  }
  else
  {
    return StartMonitoringScheduleOutcome(outcome.GetError());
  }
}

StartMonitoringScheduleOutcomeCallable SageMakerClient::StartMonitoringScheduleCallable(const StartMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StartMonitoringScheduleAsync(const StartMonitoringScheduleRequest& request, const StartMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartMonitoringScheduleAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StartMonitoringScheduleAsyncHelper(const StartMonitoringScheduleRequest& request, const StartMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartMonitoringSchedule(request), context);
}

StartNotebookInstanceOutcome SageMakerClient::StartNotebookInstance(const StartNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartNotebookInstanceOutcome(NoResult());
  }
  else
  {
    return StartNotebookInstanceOutcome(outcome.GetError());
  }
}

StartNotebookInstanceOutcomeCallable SageMakerClient::StartNotebookInstanceCallable(const StartNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StartNotebookInstanceAsync(const StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartNotebookInstanceAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StartNotebookInstanceAsyncHelper(const StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartNotebookInstance(request), context);
}

StopAutoMLJobOutcome SageMakerClient::StopAutoMLJob(const StopAutoMLJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopAutoMLJobOutcome(NoResult());
  }
  else
  {
    return StopAutoMLJobOutcome(outcome.GetError());
  }
}

StopAutoMLJobOutcomeCallable SageMakerClient::StopAutoMLJobCallable(const StopAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopAutoMLJobAsync(const StopAutoMLJobRequest& request, const StopAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopAutoMLJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StopAutoMLJobAsyncHelper(const StopAutoMLJobRequest& request, const StopAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopAutoMLJob(request), context);
}

StopCompilationJobOutcome SageMakerClient::StopCompilationJob(const StopCompilationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopCompilationJobOutcome(NoResult());
  }
  else
  {
    return StopCompilationJobOutcome(outcome.GetError());
  }
}

StopCompilationJobOutcomeCallable SageMakerClient::StopCompilationJobCallable(const StopCompilationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopCompilationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopCompilationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopCompilationJobAsync(const StopCompilationJobRequest& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopCompilationJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StopCompilationJobAsyncHelper(const StopCompilationJobRequest& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopCompilationJob(request), context);
}

StopHyperParameterTuningJobOutcome SageMakerClient::StopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopHyperParameterTuningJobOutcome(NoResult());
  }
  else
  {
    return StopHyperParameterTuningJobOutcome(outcome.GetError());
  }
}

StopHyperParameterTuningJobOutcomeCallable SageMakerClient::StopHyperParameterTuningJobCallable(const StopHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopHyperParameterTuningJobAsync(const StopHyperParameterTuningJobRequest& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopHyperParameterTuningJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StopHyperParameterTuningJobAsyncHelper(const StopHyperParameterTuningJobRequest& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopHyperParameterTuningJob(request), context);
}

StopLabelingJobOutcome SageMakerClient::StopLabelingJob(const StopLabelingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopLabelingJobOutcome(NoResult());
  }
  else
  {
    return StopLabelingJobOutcome(outcome.GetError());
  }
}

StopLabelingJobOutcomeCallable SageMakerClient::StopLabelingJobCallable(const StopLabelingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopLabelingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopLabelingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopLabelingJobAsync(const StopLabelingJobRequest& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopLabelingJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StopLabelingJobAsyncHelper(const StopLabelingJobRequest& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopLabelingJob(request), context);
}

StopMonitoringScheduleOutcome SageMakerClient::StopMonitoringSchedule(const StopMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopMonitoringScheduleOutcome(NoResult());
  }
  else
  {
    return StopMonitoringScheduleOutcome(outcome.GetError());
  }
}

StopMonitoringScheduleOutcomeCallable SageMakerClient::StopMonitoringScheduleCallable(const StopMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopMonitoringScheduleAsync(const StopMonitoringScheduleRequest& request, const StopMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopMonitoringScheduleAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StopMonitoringScheduleAsyncHelper(const StopMonitoringScheduleRequest& request, const StopMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopMonitoringSchedule(request), context);
}

StopNotebookInstanceOutcome SageMakerClient::StopNotebookInstance(const StopNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopNotebookInstanceOutcome(NoResult());
  }
  else
  {
    return StopNotebookInstanceOutcome(outcome.GetError());
  }
}

StopNotebookInstanceOutcomeCallable SageMakerClient::StopNotebookInstanceCallable(const StopNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopNotebookInstanceAsync(const StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopNotebookInstanceAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StopNotebookInstanceAsyncHelper(const StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopNotebookInstance(request), context);
}

StopProcessingJobOutcome SageMakerClient::StopProcessingJob(const StopProcessingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopProcessingJobOutcome(NoResult());
  }
  else
  {
    return StopProcessingJobOutcome(outcome.GetError());
  }
}

StopProcessingJobOutcomeCallable SageMakerClient::StopProcessingJobCallable(const StopProcessingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopProcessingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopProcessingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopProcessingJobAsync(const StopProcessingJobRequest& request, const StopProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopProcessingJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StopProcessingJobAsyncHelper(const StopProcessingJobRequest& request, const StopProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopProcessingJob(request), context);
}

StopTrainingJobOutcome SageMakerClient::StopTrainingJob(const StopTrainingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopTrainingJobOutcome(NoResult());
  }
  else
  {
    return StopTrainingJobOutcome(outcome.GetError());
  }
}

StopTrainingJobOutcomeCallable SageMakerClient::StopTrainingJobCallable(const StopTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopTrainingJobAsync(const StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopTrainingJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StopTrainingJobAsyncHelper(const StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopTrainingJob(request), context);
}

StopTransformJobOutcome SageMakerClient::StopTransformJob(const StopTransformJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopTransformJobOutcome(NoResult());
  }
  else
  {
    return StopTransformJobOutcome(outcome.GetError());
  }
}

StopTransformJobOutcomeCallable SageMakerClient::StopTransformJobCallable(const StopTransformJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTransformJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTransformJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopTransformJobAsync(const StopTransformJobRequest& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopTransformJobAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::StopTransformJobAsyncHelper(const StopTransformJobRequest& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopTransformJob(request), context);
}

UpdateCodeRepositoryOutcome SageMakerClient::UpdateCodeRepository(const UpdateCodeRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCodeRepositoryOutcome(UpdateCodeRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return UpdateCodeRepositoryOutcome(outcome.GetError());
  }
}

UpdateCodeRepositoryOutcomeCallable SageMakerClient::UpdateCodeRepositoryCallable(const UpdateCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateCodeRepositoryAsync(const UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCodeRepositoryAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateCodeRepositoryAsyncHelper(const UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCodeRepository(request), context);
}

UpdateDomainOutcome SageMakerClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDomainOutcome(UpdateDomainResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDomainOutcome(outcome.GetError());
  }
}

UpdateDomainOutcomeCallable SageMakerClient::UpdateDomainCallable(const UpdateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateDomainAsync(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateDomainAsyncHelper(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomain(request), context);
}

UpdateEndpointOutcome SageMakerClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEndpointOutcome(UpdateEndpointResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEndpointOutcome(outcome.GetError());
  }
}

UpdateEndpointOutcomeCallable SageMakerClient::UpdateEndpointCallable(const UpdateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateEndpointAsync(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEndpointAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateEndpointAsyncHelper(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEndpoint(request), context);
}

UpdateEndpointWeightsAndCapacitiesOutcome SageMakerClient::UpdateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEndpointWeightsAndCapacitiesOutcome(UpdateEndpointWeightsAndCapacitiesResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEndpointWeightsAndCapacitiesOutcome(outcome.GetError());
  }
}

UpdateEndpointWeightsAndCapacitiesOutcomeCallable SageMakerClient::UpdateEndpointWeightsAndCapacitiesCallable(const UpdateEndpointWeightsAndCapacitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointWeightsAndCapacitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpointWeightsAndCapacities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateEndpointWeightsAndCapacitiesAsync(const UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEndpointWeightsAndCapacitiesAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateEndpointWeightsAndCapacitiesAsyncHelper(const UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEndpointWeightsAndCapacities(request), context);
}

UpdateExperimentOutcome SageMakerClient::UpdateExperiment(const UpdateExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateExperimentOutcome(UpdateExperimentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateExperimentOutcome(outcome.GetError());
  }
}

UpdateExperimentOutcomeCallable SageMakerClient::UpdateExperimentCallable(const UpdateExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateExperimentAsync(const UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateExperimentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateExperimentAsyncHelper(const UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateExperiment(request), context);
}

UpdateMonitoringScheduleOutcome SageMakerClient::UpdateMonitoringSchedule(const UpdateMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateMonitoringScheduleOutcome(UpdateMonitoringScheduleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMonitoringScheduleOutcome(outcome.GetError());
  }
}

UpdateMonitoringScheduleOutcomeCallable SageMakerClient::UpdateMonitoringScheduleCallable(const UpdateMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateMonitoringScheduleAsync(const UpdateMonitoringScheduleRequest& request, const UpdateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMonitoringScheduleAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateMonitoringScheduleAsyncHelper(const UpdateMonitoringScheduleRequest& request, const UpdateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMonitoringSchedule(request), context);
}

UpdateNotebookInstanceOutcome SageMakerClient::UpdateNotebookInstance(const UpdateNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateNotebookInstanceOutcome(UpdateNotebookInstanceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateNotebookInstanceOutcome(outcome.GetError());
  }
}

UpdateNotebookInstanceOutcomeCallable SageMakerClient::UpdateNotebookInstanceCallable(const UpdateNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateNotebookInstanceAsync(const UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNotebookInstanceAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateNotebookInstanceAsyncHelper(const UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNotebookInstance(request), context);
}

UpdateNotebookInstanceLifecycleConfigOutcome SageMakerClient::UpdateNotebookInstanceLifecycleConfig(const UpdateNotebookInstanceLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateNotebookInstanceLifecycleConfigOutcome(UpdateNotebookInstanceLifecycleConfigResult(outcome.GetResult()));
  }
  else
  {
    return UpdateNotebookInstanceLifecycleConfigOutcome(outcome.GetError());
  }
}

UpdateNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::UpdateNotebookInstanceLifecycleConfigCallable(const UpdateNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateNotebookInstanceLifecycleConfigAsync(const UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNotebookInstanceLifecycleConfigAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateNotebookInstanceLifecycleConfigAsyncHelper(const UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNotebookInstanceLifecycleConfig(request), context);
}

UpdateTrialOutcome SageMakerClient::UpdateTrial(const UpdateTrialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTrialOutcome(UpdateTrialResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTrialOutcome(outcome.GetError());
  }
}

UpdateTrialOutcomeCallable SageMakerClient::UpdateTrialCallable(const UpdateTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateTrialAsync(const UpdateTrialRequest& request, const UpdateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrialAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateTrialAsyncHelper(const UpdateTrialRequest& request, const UpdateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrial(request), context);
}

UpdateTrialComponentOutcome SageMakerClient::UpdateTrialComponent(const UpdateTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTrialComponentOutcome(UpdateTrialComponentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTrialComponentOutcome(outcome.GetError());
  }
}

UpdateTrialComponentOutcomeCallable SageMakerClient::UpdateTrialComponentCallable(const UpdateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateTrialComponentAsync(const UpdateTrialComponentRequest& request, const UpdateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrialComponentAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateTrialComponentAsyncHelper(const UpdateTrialComponentRequest& request, const UpdateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrialComponent(request), context);
}

UpdateUserProfileOutcome SageMakerClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserProfileOutcome(UpdateUserProfileResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUserProfileOutcome(outcome.GetError());
  }
}

UpdateUserProfileOutcomeCallable SageMakerClient::UpdateUserProfileCallable(const UpdateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateUserProfileAsync(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserProfileAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateUserProfileAsyncHelper(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserProfile(request), context);
}

UpdateWorkforceOutcome SageMakerClient::UpdateWorkforce(const UpdateWorkforceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateWorkforceOutcome(UpdateWorkforceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateWorkforceOutcome(outcome.GetError());
  }
}

UpdateWorkforceOutcomeCallable SageMakerClient::UpdateWorkforceCallable(const UpdateWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateWorkforceAsync(const UpdateWorkforceRequest& request, const UpdateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateWorkforceAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateWorkforceAsyncHelper(const UpdateWorkforceRequest& request, const UpdateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateWorkforce(request), context);
}

UpdateWorkteamOutcome SageMakerClient::UpdateWorkteam(const UpdateWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateWorkteamOutcome(UpdateWorkteamResult(outcome.GetResult()));
  }
  else
  {
    return UpdateWorkteamOutcome(outcome.GetError());
  }
}

UpdateWorkteamOutcomeCallable SageMakerClient::UpdateWorkteamCallable(const UpdateWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateWorkteamAsync(const UpdateWorkteamRequest& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateWorkteamAsyncHelper( request, handler, context ); } );
}

void SageMakerClient::UpdateWorkteamAsyncHelper(const UpdateWorkteamRequest& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateWorkteam(request), context);
}

