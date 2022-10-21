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

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClient.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpoint.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorErrorMarshaller.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/ListPluginsRequest.h>
#include <aws/migrationhuborchestrator/model/ListTagsForResourceRequest.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepGroupsRequest.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepsRequest.h>
#include <aws/migrationhuborchestrator/model/ListTemplatesRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowsRequest.h>
#include <aws/migrationhuborchestrator/model/RetryWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/StartWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/StopWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/TagResourceRequest.h>
#include <aws/migrationhuborchestrator/model/UntagResourceRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHubOrchestrator;
using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* MigrationHubOrchestratorClient::SERVICE_NAME = "migrationhub-orchestrator";
const char* MigrationHubOrchestratorClient::ALLOCATION_TAG = "MigrationHubOrchestratorClient";

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubOrchestratorClient::~MigrationHubOrchestratorClient()
{
}

void MigrationHubOrchestratorClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MigrationHubOrchestrator");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MigrationHubOrchestratorEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MigrationHubOrchestratorClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateWorkflowOutcome MigrationHubOrchestratorClient::CreateWorkflow(const CreateWorkflowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrationworkflow/");
  return CreateWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowOutcomeCallable MigrationHubOrchestratorClient::CreateWorkflowCallable(const CreateWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkflow(request), context);
    } );
}

CreateWorkflowStepOutcome MigrationHubOrchestratorClient::CreateWorkflowStep(const CreateWorkflowStepRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflowstep");
  return CreateWorkflowStepOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::CreateWorkflowStepCallable(const CreateWorkflowStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkflowStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkflowStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::CreateWorkflowStepAsync(const CreateWorkflowStepRequest& request, const CreateWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkflowStep(request), context);
    } );
}

CreateWorkflowStepGroupOutcome MigrationHubOrchestratorClient::CreateWorkflowStepGroup(const CreateWorkflowStepGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflowstepgroups");
  return CreateWorkflowStepGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowStepGroupOutcomeCallable MigrationHubOrchestratorClient::CreateWorkflowStepGroupCallable(const CreateWorkflowStepGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkflowStepGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkflowStepGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::CreateWorkflowStepGroupAsync(const CreateWorkflowStepGroupRequest& request, const CreateWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkflowStepGroup(request), context);
    } );
}

DeleteWorkflowOutcome MigrationHubOrchestratorClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: Id, is not set");
    return DeleteWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrationworkflow/");
  uri.AddPathSegment(request.GetId());
  return DeleteWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowOutcomeCallable MigrationHubOrchestratorClient::DeleteWorkflowCallable(const DeleteWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkflow(request), context);
    } );
}

DeleteWorkflowStepOutcome MigrationHubOrchestratorClient::DeleteWorkflowStep(const DeleteWorkflowStepRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStep", "Required field: Id, is not set");
    return DeleteWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStep", "Required field: StepGroupId, is not set");
    return DeleteWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStep", "Required field: WorkflowId, is not set");
    return DeleteWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflowstep/");
  uri.AddPathSegment(request.GetId());
  return DeleteWorkflowStepOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::DeleteWorkflowStepCallable(const DeleteWorkflowStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkflowStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkflowStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::DeleteWorkflowStepAsync(const DeleteWorkflowStepRequest& request, const DeleteWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkflowStep(request), context);
    } );
}

DeleteWorkflowStepGroupOutcome MigrationHubOrchestratorClient::DeleteWorkflowStepGroup(const DeleteWorkflowStepGroupRequest& request) const
{
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStepGroup", "Required field: WorkflowId, is not set");
    return DeleteWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStepGroup", "Required field: Id, is not set");
    return DeleteWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflowstepgroup/");
  uri.AddPathSegment(request.GetId());
  return DeleteWorkflowStepGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowStepGroupOutcomeCallable MigrationHubOrchestratorClient::DeleteWorkflowStepGroupCallable(const DeleteWorkflowStepGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkflowStepGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkflowStepGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::DeleteWorkflowStepGroupAsync(const DeleteWorkflowStepGroupRequest& request, const DeleteWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkflowStepGroup(request), context);
    } );
}

GetTemplateOutcome MigrationHubOrchestratorClient::GetTemplate(const GetTemplateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: Id, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrationworkflowtemplate/");
  uri.AddPathSegment(request.GetId());
  return GetTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateOutcomeCallable MigrationHubOrchestratorClient::GetTemplateCallable(const GetTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::GetTemplateAsync(const GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemplate(request), context);
    } );
}

GetTemplateStepOutcome MigrationHubOrchestratorClient::GetTemplateStep(const GetTemplateStepRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStep", "Required field: Id, is not set");
    return GetTemplateStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStep", "Required field: TemplateId, is not set");
    return GetTemplateStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStep", "Required field: StepGroupId, is not set");
    return GetTemplateStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/templatestep/");
  uri.AddPathSegment(request.GetId());
  return GetTemplateStepOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateStepOutcomeCallable MigrationHubOrchestratorClient::GetTemplateStepCallable(const GetTemplateStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplateStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::GetTemplateStepAsync(const GetTemplateStepRequest& request, const GetTemplateStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemplateStep(request), context);
    } );
}

GetTemplateStepGroupOutcome MigrationHubOrchestratorClient::GetTemplateStepGroup(const GetTemplateStepGroupRequest& request) const
{
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStepGroup", "Required field: TemplateId, is not set");
    return GetTemplateStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStepGroup", "Required field: Id, is not set");
    return GetTemplateStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/templates/");
  uri.AddPathSegment(request.GetTemplateId());
  uri.AddPathSegments("/stepgroups/");
  uri.AddPathSegment(request.GetId());
  return GetTemplateStepGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateStepGroupOutcomeCallable MigrationHubOrchestratorClient::GetTemplateStepGroupCallable(const GetTemplateStepGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateStepGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplateStepGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::GetTemplateStepGroupAsync(const GetTemplateStepGroupRequest& request, const GetTemplateStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemplateStepGroup(request), context);
    } );
}

GetWorkflowOutcome MigrationHubOrchestratorClient::GetWorkflow(const GetWorkflowRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: Id, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrationworkflow/");
  uri.AddPathSegment(request.GetId());
  return GetWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowOutcomeCallable MigrationHubOrchestratorClient::GetWorkflowCallable(const GetWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::GetWorkflowAsync(const GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWorkflow(request), context);
    } );
}

GetWorkflowStepOutcome MigrationHubOrchestratorClient::GetWorkflowStep(const GetWorkflowStepRequest& request) const
{
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStep", "Required field: WorkflowId, is not set");
    return GetWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStep", "Required field: StepGroupId, is not set");
    return GetWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStep", "Required field: Id, is not set");
    return GetWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflowstep/");
  uri.AddPathSegment(request.GetId());
  return GetWorkflowStepOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::GetWorkflowStepCallable(const GetWorkflowStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflowStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::GetWorkflowStepAsync(const GetWorkflowStepRequest& request, const GetWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWorkflowStep(request), context);
    } );
}

GetWorkflowStepGroupOutcome MigrationHubOrchestratorClient::GetWorkflowStepGroup(const GetWorkflowStepGroupRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStepGroup", "Required field: Id, is not set");
    return GetWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStepGroup", "Required field: WorkflowId, is not set");
    return GetWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflowstepgroup/");
  uri.AddPathSegment(request.GetId());
  return GetWorkflowStepGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowStepGroupOutcomeCallable MigrationHubOrchestratorClient::GetWorkflowStepGroupCallable(const GetWorkflowStepGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkflowStepGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkflowStepGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::GetWorkflowStepGroupAsync(const GetWorkflowStepGroupRequest& request, const GetWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWorkflowStepGroup(request), context);
    } );
}

ListPluginsOutcome MigrationHubOrchestratorClient::ListPlugins(const ListPluginsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/plugins");
  return ListPluginsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPluginsOutcomeCallable MigrationHubOrchestratorClient::ListPluginsCallable(const ListPluginsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPluginsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlugins(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::ListPluginsAsync(const ListPluginsRequest& request, const ListPluginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPlugins(request), context);
    } );
}

ListTagsForResourceOutcome MigrationHubOrchestratorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MigrationHubOrchestratorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTemplateStepGroupsOutcome MigrationHubOrchestratorClient::ListTemplateStepGroups(const ListTemplateStepGroupsRequest& request) const
{
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateStepGroups", "Required field: TemplateId, is not set");
    return ListTemplateStepGroupsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/templatestepgroups/");
  uri.AddPathSegment(request.GetTemplateId());
  return ListTemplateStepGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateStepGroupsOutcomeCallable MigrationHubOrchestratorClient::ListTemplateStepGroupsCallable(const ListTemplateStepGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplateStepGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplateStepGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::ListTemplateStepGroupsAsync(const ListTemplateStepGroupsRequest& request, const ListTemplateStepGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTemplateStepGroups(request), context);
    } );
}

ListTemplateStepsOutcome MigrationHubOrchestratorClient::ListTemplateSteps(const ListTemplateStepsRequest& request) const
{
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateSteps", "Required field: TemplateId, is not set");
    return ListTemplateStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateSteps", "Required field: StepGroupId, is not set");
    return ListTemplateStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/templatesteps");
  return ListTemplateStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateStepsOutcomeCallable MigrationHubOrchestratorClient::ListTemplateStepsCallable(const ListTemplateStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplateStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplateSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::ListTemplateStepsAsync(const ListTemplateStepsRequest& request, const ListTemplateStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTemplateSteps(request), context);
    } );
}

ListTemplatesOutcome MigrationHubOrchestratorClient::ListTemplates(const ListTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrationworkflowtemplates");
  return ListTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplatesOutcomeCallable MigrationHubOrchestratorClient::ListTemplatesCallable(const ListTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::ListTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTemplates(request), context);
    } );
}

ListWorkflowStepGroupsOutcome MigrationHubOrchestratorClient::ListWorkflowStepGroups(const ListWorkflowStepGroupsRequest& request) const
{
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflowStepGroups", "Required field: WorkflowId, is not set");
    return ListWorkflowStepGroupsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflowstepgroups");
  return ListWorkflowStepGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowStepGroupsOutcomeCallable MigrationHubOrchestratorClient::ListWorkflowStepGroupsCallable(const ListWorkflowStepGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkflowStepGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkflowStepGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::ListWorkflowStepGroupsAsync(const ListWorkflowStepGroupsRequest& request, const ListWorkflowStepGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkflowStepGroups(request), context);
    } );
}

ListWorkflowStepsOutcome MigrationHubOrchestratorClient::ListWorkflowSteps(const ListWorkflowStepsRequest& request) const
{
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflowSteps", "Required field: WorkflowId, is not set");
    return ListWorkflowStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflowSteps", "Required field: StepGroupId, is not set");
    return ListWorkflowStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflow/");
  uri.AddPathSegment(request.GetWorkflowId());
  uri.AddPathSegments("/workflowstepgroups/");
  uri.AddPathSegment(request.GetStepGroupId());
  uri.AddPathSegments("/workflowsteps");
  return ListWorkflowStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowStepsOutcomeCallable MigrationHubOrchestratorClient::ListWorkflowStepsCallable(const ListWorkflowStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkflowStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkflowSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::ListWorkflowStepsAsync(const ListWorkflowStepsRequest& request, const ListWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkflowSteps(request), context);
    } );
}

ListWorkflowsOutcome MigrationHubOrchestratorClient::ListWorkflows(const ListWorkflowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrationworkflows");
  return ListWorkflowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowsOutcomeCallable MigrationHubOrchestratorClient::ListWorkflowsCallable(const ListWorkflowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkflowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkflows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkflows(request), context);
    } );
}

RetryWorkflowStepOutcome MigrationHubOrchestratorClient::RetryWorkflowStep(const RetryWorkflowStepRequest& request) const
{
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RetryWorkflowStep", "Required field: WorkflowId, is not set");
    return RetryWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RetryWorkflowStep", "Required field: StepGroupId, is not set");
    return RetryWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RetryWorkflowStep", "Required field: Id, is not set");
    return RetryWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/retryworkflowstep/");
  uri.AddPathSegment(request.GetId());
  return RetryWorkflowStepOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::RetryWorkflowStepCallable(const RetryWorkflowStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryWorkflowStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryWorkflowStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::RetryWorkflowStepAsync(const RetryWorkflowStepRequest& request, const RetryWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetryWorkflowStep(request), context);
    } );
}

StartWorkflowOutcome MigrationHubOrchestratorClient::StartWorkflow(const StartWorkflowRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartWorkflow", "Required field: Id, is not set");
    return StartWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrationworkflow/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/start");
  return StartWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartWorkflowOutcomeCallable MigrationHubOrchestratorClient::StartWorkflowCallable(const StartWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::StartWorkflowAsync(const StartWorkflowRequest& request, const StartWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartWorkflow(request), context);
    } );
}

StopWorkflowOutcome MigrationHubOrchestratorClient::StopWorkflow(const StopWorkflowRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopWorkflow", "Required field: Id, is not set");
    return StopWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrationworkflow/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/stop");
  return StopWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopWorkflowOutcomeCallable MigrationHubOrchestratorClient::StopWorkflowCallable(const StopWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::StopWorkflowAsync(const StopWorkflowRequest& request, const StopWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopWorkflow(request), context);
    } );
}

TagResourceOutcome MigrationHubOrchestratorClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MigrationHubOrchestratorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome MigrationHubOrchestratorClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MigrationHubOrchestratorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateWorkflowOutcome MigrationHubOrchestratorClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflow", "Required field: Id, is not set");
    return UpdateWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/migrationworkflow/");
  uri.AddPathSegment(request.GetId());
  return UpdateWorkflowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowOutcomeCallable MigrationHubOrchestratorClient::UpdateWorkflowCallable(const UpdateWorkflowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkflowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkflow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::UpdateWorkflowAsync(const UpdateWorkflowRequest& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkflow(request), context);
    } );
}

UpdateWorkflowStepOutcome MigrationHubOrchestratorClient::UpdateWorkflowStep(const UpdateWorkflowStepRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStep", "Required field: Id, is not set");
    return UpdateWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflowstep/");
  uri.AddPathSegment(request.GetId());
  return UpdateWorkflowStepOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::UpdateWorkflowStepCallable(const UpdateWorkflowStepRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkflowStepOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkflowStep(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::UpdateWorkflowStepAsync(const UpdateWorkflowStepRequest& request, const UpdateWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkflowStep(request), context);
    } );
}

UpdateWorkflowStepGroupOutcome MigrationHubOrchestratorClient::UpdateWorkflowStepGroup(const UpdateWorkflowStepGroupRequest& request) const
{
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStepGroup", "Required field: WorkflowId, is not set");
    return UpdateWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStepGroup", "Required field: Id, is not set");
    return UpdateWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workflowstepgroup/");
  uri.AddPathSegment(request.GetId());
  return UpdateWorkflowStepGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowStepGroupOutcomeCallable MigrationHubOrchestratorClient::UpdateWorkflowStepGroupCallable(const UpdateWorkflowStepGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkflowStepGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkflowStepGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubOrchestratorClient::UpdateWorkflowStepGroupAsync(const UpdateWorkflowStepGroupRequest& request, const UpdateWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkflowStepGroup(request), context);
    } );
}

