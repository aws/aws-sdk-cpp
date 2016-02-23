/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/CodePipelineClient.h>
#include <aws/codepipeline/CodePipelineEndpoint.h>
#include <aws/codepipeline/CodePipelineErrorMarshaller.h>
#include <aws/codepipeline/model/AcknowledgeJobRequest.h>
#include <aws/codepipeline/model/AcknowledgeThirdPartyJobRequest.h>
#include <aws/codepipeline/model/CreateCustomActionTypeRequest.h>
#include <aws/codepipeline/model/CreatePipelineRequest.h>
#include <aws/codepipeline/model/DeleteCustomActionTypeRequest.h>
#include <aws/codepipeline/model/DeletePipelineRequest.h>
#include <aws/codepipeline/model/DisableStageTransitionRequest.h>
#include <aws/codepipeline/model/EnableStageTransitionRequest.h>
#include <aws/codepipeline/model/GetJobDetailsRequest.h>
#include <aws/codepipeline/model/GetPipelineRequest.h>
#include <aws/codepipeline/model/GetPipelineStateRequest.h>
#include <aws/codepipeline/model/GetThirdPartyJobDetailsRequest.h>
#include <aws/codepipeline/model/ListActionTypesRequest.h>
#include <aws/codepipeline/model/ListPipelinesRequest.h>
#include <aws/codepipeline/model/PollForJobsRequest.h>
#include <aws/codepipeline/model/PollForThirdPartyJobsRequest.h>
#include <aws/codepipeline/model/PutActionRevisionRequest.h>
#include <aws/codepipeline/model/PutJobFailureResultRequest.h>
#include <aws/codepipeline/model/PutJobSuccessResultRequest.h>
#include <aws/codepipeline/model/PutThirdPartyJobFailureResultRequest.h>
#include <aws/codepipeline/model/PutThirdPartyJobSuccessResultRequest.h>
#include <aws/codepipeline/model/StartPipelineExecutionRequest.h>
#include <aws/codepipeline/model/UpdatePipelineRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodePipeline;
using namespace Aws::CodePipeline::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codepipeline";
static const char* ALLOCATION_TAG = "CodePipelineClient";

CodePipelineClient::CodePipelineClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodePipelineClient::~CodePipelineClient()
{
}

void CodePipelineClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << CodePipelineEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
AcknowledgeJobOutcome CodePipelineClient::AcknowledgeJob(const AcknowledgeJobRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AcknowledgeJobOutcome(AcknowledgeJobResult(outcome.GetResult()));
  }
  else
  {
    return AcknowledgeJobOutcome(outcome.GetError());
  }
}

AcknowledgeJobOutcomeCallable CodePipelineClient::AcknowledgeJobCallable(const AcknowledgeJobRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::AcknowledgeJob, this, request);
}

void CodePipelineClient::AcknowledgeJobAsync(const AcknowledgeJobRequest& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::AcknowledgeJobAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::AcknowledgeJobAsyncHelper(const AcknowledgeJobRequest& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcknowledgeJob(request), context);
}

AcknowledgeThirdPartyJobOutcome CodePipelineClient::AcknowledgeThirdPartyJob(const AcknowledgeThirdPartyJobRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AcknowledgeThirdPartyJobOutcome(AcknowledgeThirdPartyJobResult(outcome.GetResult()));
  }
  else
  {
    return AcknowledgeThirdPartyJobOutcome(outcome.GetError());
  }
}

AcknowledgeThirdPartyJobOutcomeCallable CodePipelineClient::AcknowledgeThirdPartyJobCallable(const AcknowledgeThirdPartyJobRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::AcknowledgeThirdPartyJob, this, request);
}

void CodePipelineClient::AcknowledgeThirdPartyJobAsync(const AcknowledgeThirdPartyJobRequest& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::AcknowledgeThirdPartyJobAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::AcknowledgeThirdPartyJobAsyncHelper(const AcknowledgeThirdPartyJobRequest& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcknowledgeThirdPartyJob(request), context);
}

CreateCustomActionTypeOutcome CodePipelineClient::CreateCustomActionType(const CreateCustomActionTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCustomActionTypeOutcome(CreateCustomActionTypeResult(outcome.GetResult()));
  }
  else
  {
    return CreateCustomActionTypeOutcome(outcome.GetError());
  }
}

CreateCustomActionTypeOutcomeCallable CodePipelineClient::CreateCustomActionTypeCallable(const CreateCustomActionTypeRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::CreateCustomActionType, this, request);
}

void CodePipelineClient::CreateCustomActionTypeAsync(const CreateCustomActionTypeRequest& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::CreateCustomActionTypeAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::CreateCustomActionTypeAsyncHelper(const CreateCustomActionTypeRequest& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomActionType(request), context);
}

CreatePipelineOutcome CodePipelineClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePipelineOutcome(CreatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return CreatePipelineOutcome(outcome.GetError());
  }
}

CreatePipelineOutcomeCallable CodePipelineClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::CreatePipeline, this, request);
}

void CodePipelineClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::CreatePipelineAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::CreatePipelineAsyncHelper(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePipeline(request), context);
}

DeleteCustomActionTypeOutcome CodePipelineClient::DeleteCustomActionType(const DeleteCustomActionTypeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteCustomActionTypeOutcome(NoResult());
  }
  else
  {
    return DeleteCustomActionTypeOutcome(outcome.GetError());
  }
}

DeleteCustomActionTypeOutcomeCallable CodePipelineClient::DeleteCustomActionTypeCallable(const DeleteCustomActionTypeRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::DeleteCustomActionType, this, request);
}

void CodePipelineClient::DeleteCustomActionTypeAsync(const DeleteCustomActionTypeRequest& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::DeleteCustomActionTypeAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::DeleteCustomActionTypeAsyncHelper(const DeleteCustomActionTypeRequest& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomActionType(request), context);
}

DeletePipelineOutcome CodePipelineClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeletePipelineOutcome(NoResult());
  }
  else
  {
    return DeletePipelineOutcome(outcome.GetError());
  }
}

DeletePipelineOutcomeCallable CodePipelineClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::DeletePipeline, this, request);
}

void CodePipelineClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::DeletePipelineAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::DeletePipelineAsyncHelper(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePipeline(request), context);
}

DisableStageTransitionOutcome CodePipelineClient::DisableStageTransition(const DisableStageTransitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableStageTransitionOutcome(NoResult());
  }
  else
  {
    return DisableStageTransitionOutcome(outcome.GetError());
  }
}

DisableStageTransitionOutcomeCallable CodePipelineClient::DisableStageTransitionCallable(const DisableStageTransitionRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::DisableStageTransition, this, request);
}

void CodePipelineClient::DisableStageTransitionAsync(const DisableStageTransitionRequest& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::DisableStageTransitionAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::DisableStageTransitionAsyncHelper(const DisableStageTransitionRequest& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableStageTransition(request), context);
}

EnableStageTransitionOutcome CodePipelineClient::EnableStageTransition(const EnableStageTransitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableStageTransitionOutcome(NoResult());
  }
  else
  {
    return EnableStageTransitionOutcome(outcome.GetError());
  }
}

EnableStageTransitionOutcomeCallable CodePipelineClient::EnableStageTransitionCallable(const EnableStageTransitionRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::EnableStageTransition, this, request);
}

void CodePipelineClient::EnableStageTransitionAsync(const EnableStageTransitionRequest& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::EnableStageTransitionAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::EnableStageTransitionAsyncHelper(const EnableStageTransitionRequest& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableStageTransition(request), context);
}

GetJobDetailsOutcome CodePipelineClient::GetJobDetails(const GetJobDetailsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetJobDetailsOutcome(GetJobDetailsResult(outcome.GetResult()));
  }
  else
  {
    return GetJobDetailsOutcome(outcome.GetError());
  }
}

GetJobDetailsOutcomeCallable CodePipelineClient::GetJobDetailsCallable(const GetJobDetailsRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::GetJobDetails, this, request);
}

void CodePipelineClient::GetJobDetailsAsync(const GetJobDetailsRequest& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::GetJobDetailsAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::GetJobDetailsAsyncHelper(const GetJobDetailsRequest& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJobDetails(request), context);
}

GetPipelineOutcome CodePipelineClient::GetPipeline(const GetPipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetPipelineOutcome(GetPipelineResult(outcome.GetResult()));
  }
  else
  {
    return GetPipelineOutcome(outcome.GetError());
  }
}

GetPipelineOutcomeCallable CodePipelineClient::GetPipelineCallable(const GetPipelineRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::GetPipeline, this, request);
}

void CodePipelineClient::GetPipelineAsync(const GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::GetPipelineAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::GetPipelineAsyncHelper(const GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPipeline(request), context);
}

GetPipelineStateOutcome CodePipelineClient::GetPipelineState(const GetPipelineStateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetPipelineStateOutcome(GetPipelineStateResult(outcome.GetResult()));
  }
  else
  {
    return GetPipelineStateOutcome(outcome.GetError());
  }
}

GetPipelineStateOutcomeCallable CodePipelineClient::GetPipelineStateCallable(const GetPipelineStateRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::GetPipelineState, this, request);
}

void CodePipelineClient::GetPipelineStateAsync(const GetPipelineStateRequest& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::GetPipelineStateAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::GetPipelineStateAsyncHelper(const GetPipelineStateRequest& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPipelineState(request), context);
}

GetThirdPartyJobDetailsOutcome CodePipelineClient::GetThirdPartyJobDetails(const GetThirdPartyJobDetailsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetThirdPartyJobDetailsOutcome(GetThirdPartyJobDetailsResult(outcome.GetResult()));
  }
  else
  {
    return GetThirdPartyJobDetailsOutcome(outcome.GetError());
  }
}

GetThirdPartyJobDetailsOutcomeCallable CodePipelineClient::GetThirdPartyJobDetailsCallable(const GetThirdPartyJobDetailsRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::GetThirdPartyJobDetails, this, request);
}

void CodePipelineClient::GetThirdPartyJobDetailsAsync(const GetThirdPartyJobDetailsRequest& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::GetThirdPartyJobDetailsAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::GetThirdPartyJobDetailsAsyncHelper(const GetThirdPartyJobDetailsRequest& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetThirdPartyJobDetails(request), context);
}

ListActionTypesOutcome CodePipelineClient::ListActionTypes(const ListActionTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListActionTypesOutcome(ListActionTypesResult(outcome.GetResult()));
  }
  else
  {
    return ListActionTypesOutcome(outcome.GetError());
  }
}

ListActionTypesOutcomeCallable CodePipelineClient::ListActionTypesCallable(const ListActionTypesRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::ListActionTypes, this, request);
}

void CodePipelineClient::ListActionTypesAsync(const ListActionTypesRequest& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::ListActionTypesAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::ListActionTypesAsyncHelper(const ListActionTypesRequest& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListActionTypes(request), context);
}

ListPipelinesOutcome CodePipelineClient::ListPipelines(const ListPipelinesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPipelinesOutcome(ListPipelinesResult(outcome.GetResult()));
  }
  else
  {
    return ListPipelinesOutcome(outcome.GetError());
  }
}

ListPipelinesOutcomeCallable CodePipelineClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::ListPipelines, this, request);
}

void CodePipelineClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::ListPipelinesAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::ListPipelinesAsyncHelper(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPipelines(request), context);
}

PollForJobsOutcome CodePipelineClient::PollForJobs(const PollForJobsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PollForJobsOutcome(PollForJobsResult(outcome.GetResult()));
  }
  else
  {
    return PollForJobsOutcome(outcome.GetError());
  }
}

PollForJobsOutcomeCallable CodePipelineClient::PollForJobsCallable(const PollForJobsRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::PollForJobs, this, request);
}

void CodePipelineClient::PollForJobsAsync(const PollForJobsRequest& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::PollForJobsAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::PollForJobsAsyncHelper(const PollForJobsRequest& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PollForJobs(request), context);
}

PollForThirdPartyJobsOutcome CodePipelineClient::PollForThirdPartyJobs(const PollForThirdPartyJobsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PollForThirdPartyJobsOutcome(PollForThirdPartyJobsResult(outcome.GetResult()));
  }
  else
  {
    return PollForThirdPartyJobsOutcome(outcome.GetError());
  }
}

PollForThirdPartyJobsOutcomeCallable CodePipelineClient::PollForThirdPartyJobsCallable(const PollForThirdPartyJobsRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::PollForThirdPartyJobs, this, request);
}

void CodePipelineClient::PollForThirdPartyJobsAsync(const PollForThirdPartyJobsRequest& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::PollForThirdPartyJobsAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::PollForThirdPartyJobsAsyncHelper(const PollForThirdPartyJobsRequest& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PollForThirdPartyJobs(request), context);
}

PutActionRevisionOutcome CodePipelineClient::PutActionRevision(const PutActionRevisionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutActionRevisionOutcome(PutActionRevisionResult(outcome.GetResult()));
  }
  else
  {
    return PutActionRevisionOutcome(outcome.GetError());
  }
}

PutActionRevisionOutcomeCallable CodePipelineClient::PutActionRevisionCallable(const PutActionRevisionRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::PutActionRevision, this, request);
}

void CodePipelineClient::PutActionRevisionAsync(const PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::PutActionRevisionAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::PutActionRevisionAsyncHelper(const PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutActionRevision(request), context);
}

PutJobFailureResultOutcome CodePipelineClient::PutJobFailureResult(const PutJobFailureResultRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutJobFailureResultOutcome(NoResult());
  }
  else
  {
    return PutJobFailureResultOutcome(outcome.GetError());
  }
}

PutJobFailureResultOutcomeCallable CodePipelineClient::PutJobFailureResultCallable(const PutJobFailureResultRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::PutJobFailureResult, this, request);
}

void CodePipelineClient::PutJobFailureResultAsync(const PutJobFailureResultRequest& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::PutJobFailureResultAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::PutJobFailureResultAsyncHelper(const PutJobFailureResultRequest& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutJobFailureResult(request), context);
}

PutJobSuccessResultOutcome CodePipelineClient::PutJobSuccessResult(const PutJobSuccessResultRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutJobSuccessResultOutcome(NoResult());
  }
  else
  {
    return PutJobSuccessResultOutcome(outcome.GetError());
  }
}

PutJobSuccessResultOutcomeCallable CodePipelineClient::PutJobSuccessResultCallable(const PutJobSuccessResultRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::PutJobSuccessResult, this, request);
}

void CodePipelineClient::PutJobSuccessResultAsync(const PutJobSuccessResultRequest& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::PutJobSuccessResultAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::PutJobSuccessResultAsyncHelper(const PutJobSuccessResultRequest& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutJobSuccessResult(request), context);
}

PutThirdPartyJobFailureResultOutcome CodePipelineClient::PutThirdPartyJobFailureResult(const PutThirdPartyJobFailureResultRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutThirdPartyJobFailureResultOutcome(NoResult());
  }
  else
  {
    return PutThirdPartyJobFailureResultOutcome(outcome.GetError());
  }
}

PutThirdPartyJobFailureResultOutcomeCallable CodePipelineClient::PutThirdPartyJobFailureResultCallable(const PutThirdPartyJobFailureResultRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::PutThirdPartyJobFailureResult, this, request);
}

void CodePipelineClient::PutThirdPartyJobFailureResultAsync(const PutThirdPartyJobFailureResultRequest& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::PutThirdPartyJobFailureResultAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::PutThirdPartyJobFailureResultAsyncHelper(const PutThirdPartyJobFailureResultRequest& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutThirdPartyJobFailureResult(request), context);
}

PutThirdPartyJobSuccessResultOutcome CodePipelineClient::PutThirdPartyJobSuccessResult(const PutThirdPartyJobSuccessResultRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutThirdPartyJobSuccessResultOutcome(NoResult());
  }
  else
  {
    return PutThirdPartyJobSuccessResultOutcome(outcome.GetError());
  }
}

PutThirdPartyJobSuccessResultOutcomeCallable CodePipelineClient::PutThirdPartyJobSuccessResultCallable(const PutThirdPartyJobSuccessResultRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::PutThirdPartyJobSuccessResult, this, request);
}

void CodePipelineClient::PutThirdPartyJobSuccessResultAsync(const PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::PutThirdPartyJobSuccessResultAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::PutThirdPartyJobSuccessResultAsyncHelper(const PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutThirdPartyJobSuccessResult(request), context);
}

StartPipelineExecutionOutcome CodePipelineClient::StartPipelineExecution(const StartPipelineExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartPipelineExecutionOutcome(StartPipelineExecutionResult(outcome.GetResult()));
  }
  else
  {
    return StartPipelineExecutionOutcome(outcome.GetError());
  }
}

StartPipelineExecutionOutcomeCallable CodePipelineClient::StartPipelineExecutionCallable(const StartPipelineExecutionRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::StartPipelineExecution, this, request);
}

void CodePipelineClient::StartPipelineExecutionAsync(const StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::StartPipelineExecutionAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::StartPipelineExecutionAsyncHelper(const StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartPipelineExecution(request), context);
}

UpdatePipelineOutcome CodePipelineClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdatePipelineOutcome(UpdatePipelineResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePipelineOutcome(outcome.GetError());
  }
}

UpdatePipelineOutcomeCallable CodePipelineClient::UpdatePipelineCallable(const UpdatePipelineRequest& request) const
{
  return std::async(std::launch::async, &CodePipelineClient::UpdatePipeline, this, request);
}

void CodePipelineClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CodePipelineClient::UpdatePipelineAsyncHelper, this, request, handler, context);
}

void CodePipelineClient::UpdatePipelineAsyncHelper(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePipeline(request), context);
}

