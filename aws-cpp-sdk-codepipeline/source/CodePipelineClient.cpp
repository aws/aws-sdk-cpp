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

#include <aws/codepipeline/CodePipelineClient.h>
#include <aws/codepipeline/CodePipelineEndpoint.h>
#include <aws/codepipeline/CodePipelineErrorMarshaller.h>
#include <aws/codepipeline/model/AcknowledgeJobRequest.h>
#include <aws/codepipeline/model/AcknowledgeThirdPartyJobRequest.h>
#include <aws/codepipeline/model/CreateCustomActionTypeRequest.h>
#include <aws/codepipeline/model/CreatePipelineRequest.h>
#include <aws/codepipeline/model/DeleteCustomActionTypeRequest.h>
#include <aws/codepipeline/model/DeletePipelineRequest.h>
#include <aws/codepipeline/model/DeleteWebhookRequest.h>
#include <aws/codepipeline/model/DeregisterWebhookWithThirdPartyRequest.h>
#include <aws/codepipeline/model/DisableStageTransitionRequest.h>
#include <aws/codepipeline/model/EnableStageTransitionRequest.h>
#include <aws/codepipeline/model/GetActionTypeRequest.h>
#include <aws/codepipeline/model/GetJobDetailsRequest.h>
#include <aws/codepipeline/model/GetPipelineRequest.h>
#include <aws/codepipeline/model/GetPipelineExecutionRequest.h>
#include <aws/codepipeline/model/GetPipelineStateRequest.h>
#include <aws/codepipeline/model/GetThirdPartyJobDetailsRequest.h>
#include <aws/codepipeline/model/ListActionExecutionsRequest.h>
#include <aws/codepipeline/model/ListActionTypesRequest.h>
#include <aws/codepipeline/model/ListPipelineExecutionsRequest.h>
#include <aws/codepipeline/model/ListPipelinesRequest.h>
#include <aws/codepipeline/model/ListTagsForResourceRequest.h>
#include <aws/codepipeline/model/ListWebhooksRequest.h>
#include <aws/codepipeline/model/PollForJobsRequest.h>
#include <aws/codepipeline/model/PollForThirdPartyJobsRequest.h>
#include <aws/codepipeline/model/PutActionRevisionRequest.h>
#include <aws/codepipeline/model/PutApprovalResultRequest.h>
#include <aws/codepipeline/model/PutJobFailureResultRequest.h>
#include <aws/codepipeline/model/PutJobSuccessResultRequest.h>
#include <aws/codepipeline/model/PutThirdPartyJobFailureResultRequest.h>
#include <aws/codepipeline/model/PutThirdPartyJobSuccessResultRequest.h>
#include <aws/codepipeline/model/PutWebhookRequest.h>
#include <aws/codepipeline/model/RegisterWebhookWithThirdPartyRequest.h>
#include <aws/codepipeline/model/RetryStageExecutionRequest.h>
#include <aws/codepipeline/model/StartPipelineExecutionRequest.h>
#include <aws/codepipeline/model/StopPipelineExecutionRequest.h>
#include <aws/codepipeline/model/TagResourceRequest.h>
#include <aws/codepipeline/model/UntagResourceRequest.h>
#include <aws/codepipeline/model/UpdateActionTypeRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodePipelineClient::~CodePipelineClient()
{
}

void CodePipelineClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodePipeline");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodePipelineEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodePipelineClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcknowledgeJobOutcome CodePipelineClient::AcknowledgeJob(const AcknowledgeJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcknowledgeJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcknowledgeJobOutcomeCallable CodePipelineClient::AcknowledgeJobCallable(const AcknowledgeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcknowledgeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcknowledgeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientAcknowledgeJobAsyncHelper(CodePipelineClient const * const clientThis, const AcknowledgeJobRequest& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcknowledgeJob(request), context);
}

void CodePipelineClient::AcknowledgeJobAsync(const AcknowledgeJobRequest& request, const AcknowledgeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientAcknowledgeJobAsyncHelper( this, request, handler, context ); } );
}

AcknowledgeThirdPartyJobOutcome CodePipelineClient::AcknowledgeThirdPartyJob(const AcknowledgeThirdPartyJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcknowledgeThirdPartyJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcknowledgeThirdPartyJobOutcomeCallable CodePipelineClient::AcknowledgeThirdPartyJobCallable(const AcknowledgeThirdPartyJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcknowledgeThirdPartyJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcknowledgeThirdPartyJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientAcknowledgeThirdPartyJobAsyncHelper(CodePipelineClient const * const clientThis, const AcknowledgeThirdPartyJobRequest& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcknowledgeThirdPartyJob(request), context);
}

void CodePipelineClient::AcknowledgeThirdPartyJobAsync(const AcknowledgeThirdPartyJobRequest& request, const AcknowledgeThirdPartyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientAcknowledgeThirdPartyJobAsyncHelper( this, request, handler, context ); } );
}

CreateCustomActionTypeOutcome CodePipelineClient::CreateCustomActionType(const CreateCustomActionTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCustomActionTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomActionTypeOutcomeCallable CodePipelineClient::CreateCustomActionTypeCallable(const CreateCustomActionTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomActionTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomActionType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientCreateCustomActionTypeAsyncHelper(CodePipelineClient const * const clientThis, const CreateCustomActionTypeRequest& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomActionType(request), context);
}

void CodePipelineClient::CreateCustomActionTypeAsync(const CreateCustomActionTypeRequest& request, const CreateCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientCreateCustomActionTypeAsyncHelper( this, request, handler, context ); } );
}

CreatePipelineOutcome CodePipelineClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePipelineOutcomeCallable CodePipelineClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientCreatePipelineAsyncHelper(CodePipelineClient const * const clientThis, const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePipeline(request), context);
}

void CodePipelineClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientCreatePipelineAsyncHelper( this, request, handler, context ); } );
}

DeleteCustomActionTypeOutcome CodePipelineClient::DeleteCustomActionType(const DeleteCustomActionTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCustomActionTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomActionTypeOutcomeCallable CodePipelineClient::DeleteCustomActionTypeCallable(const DeleteCustomActionTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomActionTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomActionType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientDeleteCustomActionTypeAsyncHelper(CodePipelineClient const * const clientThis, const DeleteCustomActionTypeRequest& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomActionType(request), context);
}

void CodePipelineClient::DeleteCustomActionTypeAsync(const DeleteCustomActionTypeRequest& request, const DeleteCustomActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientDeleteCustomActionTypeAsyncHelper( this, request, handler, context ); } );
}

DeletePipelineOutcome CodePipelineClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePipelineOutcomeCallable CodePipelineClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientDeletePipelineAsyncHelper(CodePipelineClient const * const clientThis, const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePipeline(request), context);
}

void CodePipelineClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientDeletePipelineAsyncHelper( this, request, handler, context ); } );
}

DeleteWebhookOutcome CodePipelineClient::DeleteWebhook(const DeleteWebhookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWebhookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWebhookOutcomeCallable CodePipelineClient::DeleteWebhookCallable(const DeleteWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientDeleteWebhookAsyncHelper(CodePipelineClient const * const clientThis, const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWebhook(request), context);
}

void CodePipelineClient::DeleteWebhookAsync(const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientDeleteWebhookAsyncHelper( this, request, handler, context ); } );
}

DeregisterWebhookWithThirdPartyOutcome CodePipelineClient::DeregisterWebhookWithThirdParty(const DeregisterWebhookWithThirdPartyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterWebhookWithThirdPartyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterWebhookWithThirdPartyOutcomeCallable CodePipelineClient::DeregisterWebhookWithThirdPartyCallable(const DeregisterWebhookWithThirdPartyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterWebhookWithThirdPartyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterWebhookWithThirdParty(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientDeregisterWebhookWithThirdPartyAsyncHelper(CodePipelineClient const * const clientThis, const DeregisterWebhookWithThirdPartyRequest& request, const DeregisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterWebhookWithThirdParty(request), context);
}

void CodePipelineClient::DeregisterWebhookWithThirdPartyAsync(const DeregisterWebhookWithThirdPartyRequest& request, const DeregisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientDeregisterWebhookWithThirdPartyAsyncHelper( this, request, handler, context ); } );
}

DisableStageTransitionOutcome CodePipelineClient::DisableStageTransition(const DisableStageTransitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableStageTransitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableStageTransitionOutcomeCallable CodePipelineClient::DisableStageTransitionCallable(const DisableStageTransitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableStageTransitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableStageTransition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientDisableStageTransitionAsyncHelper(CodePipelineClient const * const clientThis, const DisableStageTransitionRequest& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableStageTransition(request), context);
}

void CodePipelineClient::DisableStageTransitionAsync(const DisableStageTransitionRequest& request, const DisableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientDisableStageTransitionAsyncHelper( this, request, handler, context ); } );
}

EnableStageTransitionOutcome CodePipelineClient::EnableStageTransition(const EnableStageTransitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableStageTransitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableStageTransitionOutcomeCallable CodePipelineClient::EnableStageTransitionCallable(const EnableStageTransitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableStageTransitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableStageTransition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientEnableStageTransitionAsyncHelper(CodePipelineClient const * const clientThis, const EnableStageTransitionRequest& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableStageTransition(request), context);
}

void CodePipelineClient::EnableStageTransitionAsync(const EnableStageTransitionRequest& request, const EnableStageTransitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientEnableStageTransitionAsyncHelper( this, request, handler, context ); } );
}

GetActionTypeOutcome CodePipelineClient::GetActionType(const GetActionTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetActionTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetActionTypeOutcomeCallable CodePipelineClient::GetActionTypeCallable(const GetActionTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetActionTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetActionType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientGetActionTypeAsyncHelper(CodePipelineClient const * const clientThis, const GetActionTypeRequest& request, const GetActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetActionType(request), context);
}

void CodePipelineClient::GetActionTypeAsync(const GetActionTypeRequest& request, const GetActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientGetActionTypeAsyncHelper( this, request, handler, context ); } );
}

GetJobDetailsOutcome CodePipelineClient::GetJobDetails(const GetJobDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetJobDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobDetailsOutcomeCallable CodePipelineClient::GetJobDetailsCallable(const GetJobDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientGetJobDetailsAsyncHelper(CodePipelineClient const * const clientThis, const GetJobDetailsRequest& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJobDetails(request), context);
}

void CodePipelineClient::GetJobDetailsAsync(const GetJobDetailsRequest& request, const GetJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientGetJobDetailsAsyncHelper( this, request, handler, context ); } );
}

GetPipelineOutcome CodePipelineClient::GetPipeline(const GetPipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPipelineOutcomeCallable CodePipelineClient::GetPipelineCallable(const GetPipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientGetPipelineAsyncHelper(CodePipelineClient const * const clientThis, const GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPipeline(request), context);
}

void CodePipelineClient::GetPipelineAsync(const GetPipelineRequest& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientGetPipelineAsyncHelper( this, request, handler, context ); } );
}

GetPipelineExecutionOutcome CodePipelineClient::GetPipelineExecution(const GetPipelineExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPipelineExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPipelineExecutionOutcomeCallable CodePipelineClient::GetPipelineExecutionCallable(const GetPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientGetPipelineExecutionAsyncHelper(CodePipelineClient const * const clientThis, const GetPipelineExecutionRequest& request, const GetPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPipelineExecution(request), context);
}

void CodePipelineClient::GetPipelineExecutionAsync(const GetPipelineExecutionRequest& request, const GetPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientGetPipelineExecutionAsyncHelper( this, request, handler, context ); } );
}

GetPipelineStateOutcome CodePipelineClient::GetPipelineState(const GetPipelineStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPipelineStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPipelineStateOutcomeCallable CodePipelineClient::GetPipelineStateCallable(const GetPipelineStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPipelineStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPipelineState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientGetPipelineStateAsyncHelper(CodePipelineClient const * const clientThis, const GetPipelineStateRequest& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPipelineState(request), context);
}

void CodePipelineClient::GetPipelineStateAsync(const GetPipelineStateRequest& request, const GetPipelineStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientGetPipelineStateAsyncHelper( this, request, handler, context ); } );
}

GetThirdPartyJobDetailsOutcome CodePipelineClient::GetThirdPartyJobDetails(const GetThirdPartyJobDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetThirdPartyJobDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetThirdPartyJobDetailsOutcomeCallable CodePipelineClient::GetThirdPartyJobDetailsCallable(const GetThirdPartyJobDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetThirdPartyJobDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetThirdPartyJobDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientGetThirdPartyJobDetailsAsyncHelper(CodePipelineClient const * const clientThis, const GetThirdPartyJobDetailsRequest& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetThirdPartyJobDetails(request), context);
}

void CodePipelineClient::GetThirdPartyJobDetailsAsync(const GetThirdPartyJobDetailsRequest& request, const GetThirdPartyJobDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientGetThirdPartyJobDetailsAsyncHelper( this, request, handler, context ); } );
}

ListActionExecutionsOutcome CodePipelineClient::ListActionExecutions(const ListActionExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListActionExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListActionExecutionsOutcomeCallable CodePipelineClient::ListActionExecutionsCallable(const ListActionExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActionExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActionExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientListActionExecutionsAsyncHelper(CodePipelineClient const * const clientThis, const ListActionExecutionsRequest& request, const ListActionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListActionExecutions(request), context);
}

void CodePipelineClient::ListActionExecutionsAsync(const ListActionExecutionsRequest& request, const ListActionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientListActionExecutionsAsyncHelper( this, request, handler, context ); } );
}

ListActionTypesOutcome CodePipelineClient::ListActionTypes(const ListActionTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListActionTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListActionTypesOutcomeCallable CodePipelineClient::ListActionTypesCallable(const ListActionTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActionTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActionTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientListActionTypesAsyncHelper(CodePipelineClient const * const clientThis, const ListActionTypesRequest& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListActionTypes(request), context);
}

void CodePipelineClient::ListActionTypesAsync(const ListActionTypesRequest& request, const ListActionTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientListActionTypesAsyncHelper( this, request, handler, context ); } );
}

ListPipelineExecutionsOutcome CodePipelineClient::ListPipelineExecutions(const ListPipelineExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPipelineExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelineExecutionsOutcomeCallable CodePipelineClient::ListPipelineExecutionsCallable(const ListPipelineExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelineExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelineExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientListPipelineExecutionsAsyncHelper(CodePipelineClient const * const clientThis, const ListPipelineExecutionsRequest& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPipelineExecutions(request), context);
}

void CodePipelineClient::ListPipelineExecutionsAsync(const ListPipelineExecutionsRequest& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientListPipelineExecutionsAsyncHelper( this, request, handler, context ); } );
}

ListPipelinesOutcome CodePipelineClient::ListPipelines(const ListPipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPipelinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelinesOutcomeCallable CodePipelineClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientListPipelinesAsyncHelper(CodePipelineClient const * const clientThis, const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPipelines(request), context);
}

void CodePipelineClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientListPipelinesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CodePipelineClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CodePipelineClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientListTagsForResourceAsyncHelper(CodePipelineClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CodePipelineClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWebhooksOutcome CodePipelineClient::ListWebhooks(const ListWebhooksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWebhooksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWebhooksOutcomeCallable CodePipelineClient::ListWebhooksCallable(const ListWebhooksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebhooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebhooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientListWebhooksAsyncHelper(CodePipelineClient const * const clientThis, const ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWebhooks(request), context);
}

void CodePipelineClient::ListWebhooksAsync(const ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientListWebhooksAsyncHelper( this, request, handler, context ); } );
}

PollForJobsOutcome CodePipelineClient::PollForJobs(const PollForJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PollForJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PollForJobsOutcomeCallable CodePipelineClient::PollForJobsCallable(const PollForJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PollForJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientPollForJobsAsyncHelper(CodePipelineClient const * const clientThis, const PollForJobsRequest& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PollForJobs(request), context);
}

void CodePipelineClient::PollForJobsAsync(const PollForJobsRequest& request, const PollForJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientPollForJobsAsyncHelper( this, request, handler, context ); } );
}

PollForThirdPartyJobsOutcome CodePipelineClient::PollForThirdPartyJobs(const PollForThirdPartyJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PollForThirdPartyJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PollForThirdPartyJobsOutcomeCallable CodePipelineClient::PollForThirdPartyJobsCallable(const PollForThirdPartyJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PollForThirdPartyJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForThirdPartyJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientPollForThirdPartyJobsAsyncHelper(CodePipelineClient const * const clientThis, const PollForThirdPartyJobsRequest& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PollForThirdPartyJobs(request), context);
}

void CodePipelineClient::PollForThirdPartyJobsAsync(const PollForThirdPartyJobsRequest& request, const PollForThirdPartyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientPollForThirdPartyJobsAsyncHelper( this, request, handler, context ); } );
}

PutActionRevisionOutcome CodePipelineClient::PutActionRevision(const PutActionRevisionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutActionRevisionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutActionRevisionOutcomeCallable CodePipelineClient::PutActionRevisionCallable(const PutActionRevisionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutActionRevisionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutActionRevision(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientPutActionRevisionAsyncHelper(CodePipelineClient const * const clientThis, const PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutActionRevision(request), context);
}

void CodePipelineClient::PutActionRevisionAsync(const PutActionRevisionRequest& request, const PutActionRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientPutActionRevisionAsyncHelper( this, request, handler, context ); } );
}

PutApprovalResultOutcome CodePipelineClient::PutApprovalResult(const PutApprovalResultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutApprovalResultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutApprovalResultOutcomeCallable CodePipelineClient::PutApprovalResultCallable(const PutApprovalResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutApprovalResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutApprovalResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientPutApprovalResultAsyncHelper(CodePipelineClient const * const clientThis, const PutApprovalResultRequest& request, const PutApprovalResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutApprovalResult(request), context);
}

void CodePipelineClient::PutApprovalResultAsync(const PutApprovalResultRequest& request, const PutApprovalResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientPutApprovalResultAsyncHelper( this, request, handler, context ); } );
}

PutJobFailureResultOutcome CodePipelineClient::PutJobFailureResult(const PutJobFailureResultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutJobFailureResultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutJobFailureResultOutcomeCallable CodePipelineClient::PutJobFailureResultCallable(const PutJobFailureResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutJobFailureResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutJobFailureResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientPutJobFailureResultAsyncHelper(CodePipelineClient const * const clientThis, const PutJobFailureResultRequest& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutJobFailureResult(request), context);
}

void CodePipelineClient::PutJobFailureResultAsync(const PutJobFailureResultRequest& request, const PutJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientPutJobFailureResultAsyncHelper( this, request, handler, context ); } );
}

PutJobSuccessResultOutcome CodePipelineClient::PutJobSuccessResult(const PutJobSuccessResultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutJobSuccessResultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutJobSuccessResultOutcomeCallable CodePipelineClient::PutJobSuccessResultCallable(const PutJobSuccessResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutJobSuccessResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutJobSuccessResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientPutJobSuccessResultAsyncHelper(CodePipelineClient const * const clientThis, const PutJobSuccessResultRequest& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutJobSuccessResult(request), context);
}

void CodePipelineClient::PutJobSuccessResultAsync(const PutJobSuccessResultRequest& request, const PutJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientPutJobSuccessResultAsyncHelper( this, request, handler, context ); } );
}

PutThirdPartyJobFailureResultOutcome CodePipelineClient::PutThirdPartyJobFailureResult(const PutThirdPartyJobFailureResultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutThirdPartyJobFailureResultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutThirdPartyJobFailureResultOutcomeCallable CodePipelineClient::PutThirdPartyJobFailureResultCallable(const PutThirdPartyJobFailureResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutThirdPartyJobFailureResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutThirdPartyJobFailureResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientPutThirdPartyJobFailureResultAsyncHelper(CodePipelineClient const * const clientThis, const PutThirdPartyJobFailureResultRequest& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutThirdPartyJobFailureResult(request), context);
}

void CodePipelineClient::PutThirdPartyJobFailureResultAsync(const PutThirdPartyJobFailureResultRequest& request, const PutThirdPartyJobFailureResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientPutThirdPartyJobFailureResultAsyncHelper( this, request, handler, context ); } );
}

PutThirdPartyJobSuccessResultOutcome CodePipelineClient::PutThirdPartyJobSuccessResult(const PutThirdPartyJobSuccessResultRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutThirdPartyJobSuccessResultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutThirdPartyJobSuccessResultOutcomeCallable CodePipelineClient::PutThirdPartyJobSuccessResultCallable(const PutThirdPartyJobSuccessResultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutThirdPartyJobSuccessResultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutThirdPartyJobSuccessResult(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientPutThirdPartyJobSuccessResultAsyncHelper(CodePipelineClient const * const clientThis, const PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutThirdPartyJobSuccessResult(request), context);
}

void CodePipelineClient::PutThirdPartyJobSuccessResultAsync(const PutThirdPartyJobSuccessResultRequest& request, const PutThirdPartyJobSuccessResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientPutThirdPartyJobSuccessResultAsyncHelper( this, request, handler, context ); } );
}

PutWebhookOutcome CodePipelineClient::PutWebhook(const PutWebhookRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutWebhookOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutWebhookOutcomeCallable CodePipelineClient::PutWebhookCallable(const PutWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientPutWebhookAsyncHelper(CodePipelineClient const * const clientThis, const PutWebhookRequest& request, const PutWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutWebhook(request), context);
}

void CodePipelineClient::PutWebhookAsync(const PutWebhookRequest& request, const PutWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientPutWebhookAsyncHelper( this, request, handler, context ); } );
}

RegisterWebhookWithThirdPartyOutcome CodePipelineClient::RegisterWebhookWithThirdParty(const RegisterWebhookWithThirdPartyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterWebhookWithThirdPartyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterWebhookWithThirdPartyOutcomeCallable CodePipelineClient::RegisterWebhookWithThirdPartyCallable(const RegisterWebhookWithThirdPartyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterWebhookWithThirdPartyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterWebhookWithThirdParty(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientRegisterWebhookWithThirdPartyAsyncHelper(CodePipelineClient const * const clientThis, const RegisterWebhookWithThirdPartyRequest& request, const RegisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterWebhookWithThirdParty(request), context);
}

void CodePipelineClient::RegisterWebhookWithThirdPartyAsync(const RegisterWebhookWithThirdPartyRequest& request, const RegisterWebhookWithThirdPartyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientRegisterWebhookWithThirdPartyAsyncHelper( this, request, handler, context ); } );
}

RetryStageExecutionOutcome CodePipelineClient::RetryStageExecution(const RetryStageExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RetryStageExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryStageExecutionOutcomeCallable CodePipelineClient::RetryStageExecutionCallable(const RetryStageExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryStageExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryStageExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientRetryStageExecutionAsyncHelper(CodePipelineClient const * const clientThis, const RetryStageExecutionRequest& request, const RetryStageExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RetryStageExecution(request), context);
}

void CodePipelineClient::RetryStageExecutionAsync(const RetryStageExecutionRequest& request, const RetryStageExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientRetryStageExecutionAsyncHelper( this, request, handler, context ); } );
}

StartPipelineExecutionOutcome CodePipelineClient::StartPipelineExecution(const StartPipelineExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartPipelineExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartPipelineExecutionOutcomeCallable CodePipelineClient::StartPipelineExecutionCallable(const StartPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientStartPipelineExecutionAsyncHelper(CodePipelineClient const * const clientThis, const StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartPipelineExecution(request), context);
}

void CodePipelineClient::StartPipelineExecutionAsync(const StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientStartPipelineExecutionAsyncHelper( this, request, handler, context ); } );
}

StopPipelineExecutionOutcome CodePipelineClient::StopPipelineExecution(const StopPipelineExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopPipelineExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopPipelineExecutionOutcomeCallable CodePipelineClient::StopPipelineExecutionCallable(const StopPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientStopPipelineExecutionAsyncHelper(CodePipelineClient const * const clientThis, const StopPipelineExecutionRequest& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopPipelineExecution(request), context);
}

void CodePipelineClient::StopPipelineExecutionAsync(const StopPipelineExecutionRequest& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientStopPipelineExecutionAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome CodePipelineClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CodePipelineClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientTagResourceAsyncHelper(CodePipelineClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CodePipelineClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome CodePipelineClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CodePipelineClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientUntagResourceAsyncHelper(CodePipelineClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CodePipelineClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateActionTypeOutcome CodePipelineClient::UpdateActionType(const UpdateActionTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateActionTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateActionTypeOutcomeCallable CodePipelineClient::UpdateActionTypeCallable(const UpdateActionTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateActionTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateActionType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientUpdateActionTypeAsyncHelper(CodePipelineClient const * const clientThis, const UpdateActionTypeRequest& request, const UpdateActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateActionType(request), context);
}

void CodePipelineClient::UpdateActionTypeAsync(const UpdateActionTypeRequest& request, const UpdateActionTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientUpdateActionTypeAsyncHelper( this, request, handler, context ); } );
}

UpdatePipelineOutcome CodePipelineClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineOutcomeCallable CodePipelineClient::UpdatePipelineCallable(const UpdatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodePipelineClientUpdatePipelineAsyncHelper(CodePipelineClient const * const clientThis, const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePipeline(request), context);
}

void CodePipelineClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodePipelineClientUpdatePipelineAsyncHelper( this, request, handler, context ); } );
}

