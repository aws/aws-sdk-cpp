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
#include <aws/codepipeline/model/GetPipelineExecutionRequest.h>
#include <aws/codepipeline/model/GetPipelineStateRequest.h>
#include <aws/codepipeline/model/GetThirdPartyJobDetailsRequest.h>
#include <aws/codepipeline/model/ListActionTypesRequest.h>
#include <aws/codepipeline/model/ListPipelinesRequest.h>
#include <aws/codepipeline/model/PollForJobsRequest.h>
#include <aws/codepipeline/model/PollForThirdPartyJobsRequest.h>
#include <aws/codepipeline/model/PutActionRevisionRequest.h>
#include <aws/codepipeline/model/PutApprovalResultRequest.h>
#include <aws/codepipeline/model/PutJobFailureResultRequest.h>
#include <aws/codepipeline/model/PutJobSuccessResultRequest.h>
#include <aws/codepipeline/model/PutThirdPartyJobFailureResultRequest.h>
#include <aws/codepipeline/model/PutThirdPartyJobSuccessResultRequest.h>
#include <aws/codepipeline/model/RetryStageExecutionRequest.h>
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
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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

  if(config.endpointOverride.empty())
  {
    ss << CodePipelineEndpoint::ForRegion(config.region, config.useDualStack);
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
  auto task = Aws::MakeShared< std::packaged_task< AcknowledgeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcknowledgeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::AcknowledgeJobAsync(const AcknowledgeJobRequest& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcknowledgeJobAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< AcknowledgeThirdPartyJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcknowledgeThirdPartyJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::AcknowledgeThirdPartyJobAsync(const AcknowledgeThirdPartyJobRequest& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcknowledgeThirdPartyJobAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomActionTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomActionType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::CreateCustomActionTypeAsync(const CreateCustomActionTypeRequest& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomActionTypeAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< CreatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePipelineAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomActionTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomActionType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::DeleteCustomActionTypeAsync(const DeleteCustomActionTypeRequest& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomActionTypeAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeletePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePipelineAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< DisableStageTransitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableStageTransition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::DisableStageTransitionAsync(const DisableStageTransitionRequest& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableStageTransitionAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< EnableStageTransitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableStageTransition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::EnableStageTransitionAsync(const EnableStageTransitionRequest& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableStageTransitionAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< GetJobDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::GetJobDetailsAsync(const GetJobDetailsRequest& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetJobDetailsAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< GetPipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::GetPipelineAsync(const GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPipelineAsyncHelper( request, handler, context ); } );
}

void CodePipelineClient::GetPipelineAsyncHelper(const GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPipeline(request), context);
}

GetPipelineExecutionOutcome CodePipelineClient::GetPipelineExecution(const GetPipelineExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetPipelineExecutionOutcome(GetPipelineExecutionResult(outcome.GetResult()));
  }
  else
  {
    return GetPipelineExecutionOutcome(outcome.GetError());
  }
}

GetPipelineExecutionOutcomeCallable CodePipelineClient::GetPipelineExecutionCallable(const GetPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::GetPipelineExecutionAsync(const GetPipelineExecutionRequest& request, const GetPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPipelineExecutionAsyncHelper( request, handler, context ); } );
}

void CodePipelineClient::GetPipelineExecutionAsyncHelper(const GetPipelineExecutionRequest& request, const GetPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPipelineExecution(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< GetPipelineStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPipelineState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::GetPipelineStateAsync(const GetPipelineStateRequest& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPipelineStateAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< GetThirdPartyJobDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetThirdPartyJobDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::GetThirdPartyJobDetailsAsync(const GetThirdPartyJobDetailsRequest& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetThirdPartyJobDetailsAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListActionTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActionTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::ListActionTypesAsync(const ListActionTypesRequest& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListActionTypesAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPipelinesAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< PollForJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::PollForJobsAsync(const PollForJobsRequest& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PollForJobsAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< PollForThirdPartyJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForThirdPartyJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::PollForThirdPartyJobsAsync(const PollForThirdPartyJobsRequest& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PollForThirdPartyJobsAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< PutActionRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutActionRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::PutActionRevisionAsync(const PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutActionRevisionAsyncHelper( request, handler, context ); } );
}

void CodePipelineClient::PutActionRevisionAsyncHelper(const PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutActionRevision(request), context);
}

PutApprovalResultOutcome CodePipelineClient::PutApprovalResult(const PutApprovalResultRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutApprovalResultOutcome(PutApprovalResultResult(outcome.GetResult()));
  }
  else
  {
    return PutApprovalResultOutcome(outcome.GetError());
  }
}

PutApprovalResultOutcomeCallable CodePipelineClient::PutApprovalResultCallable(const PutApprovalResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutApprovalResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutApprovalResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::PutApprovalResultAsync(const PutApprovalResultRequest& request, const PutApprovalResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutApprovalResultAsyncHelper( request, handler, context ); } );
}

void CodePipelineClient::PutApprovalResultAsyncHelper(const PutApprovalResultRequest& request, const PutApprovalResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutApprovalResult(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< PutJobFailureResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutJobFailureResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::PutJobFailureResultAsync(const PutJobFailureResultRequest& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutJobFailureResultAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< PutJobSuccessResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutJobSuccessResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::PutJobSuccessResultAsync(const PutJobSuccessResultRequest& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutJobSuccessResultAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< PutThirdPartyJobFailureResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutThirdPartyJobFailureResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::PutThirdPartyJobFailureResultAsync(const PutThirdPartyJobFailureResultRequest& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutThirdPartyJobFailureResultAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< PutThirdPartyJobSuccessResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutThirdPartyJobSuccessResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::PutThirdPartyJobSuccessResultAsync(const PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutThirdPartyJobSuccessResultAsyncHelper( request, handler, context ); } );
}

void CodePipelineClient::PutThirdPartyJobSuccessResultAsyncHelper(const PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutThirdPartyJobSuccessResult(request), context);
}

RetryStageExecutionOutcome CodePipelineClient::RetryStageExecution(const RetryStageExecutionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RetryStageExecutionOutcome(RetryStageExecutionResult(outcome.GetResult()));
  }
  else
  {
    return RetryStageExecutionOutcome(outcome.GetError());
  }
}

RetryStageExecutionOutcomeCallable CodePipelineClient::RetryStageExecutionCallable(const RetryStageExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryStageExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryStageExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::RetryStageExecutionAsync(const RetryStageExecutionRequest& request, const RetryStageExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RetryStageExecutionAsyncHelper( request, handler, context ); } );
}

void CodePipelineClient::RetryStageExecutionAsyncHelper(const RetryStageExecutionRequest& request, const RetryStageExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetryStageExecution(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< StartPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::StartPipelineExecutionAsync(const StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartPipelineExecutionAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePipelineAsyncHelper( request, handler, context ); } );
}

void CodePipelineClient::UpdatePipelineAsyncHelper(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePipeline(request), context);
}

