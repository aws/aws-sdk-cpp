/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
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

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClient.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorErrorMarshaller.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MigrationHubOrchestratorClient::SERVICE_NAME = "migrationhub-orchestrator";
const char* MigrationHubOrchestratorClient::ALLOCATION_TAG = "MigrationHubOrchestratorClient";

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration,
                                                               std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const AWSCredentials& credentials,
                                                               std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider,
                                                               const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider,
                                                               const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MigrationHubOrchestratorClient::~MigrationHubOrchestratorClient()
{
}

std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase>& MigrationHubOrchestratorClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MigrationHubOrchestratorClient::init(const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MigrationHubOrchestrator");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MigrationHubOrchestratorClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateWorkflowOutcome MigrationHubOrchestratorClient::CreateWorkflow(const CreateWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  return CreateWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowOutcomeCallable MigrationHubOrchestratorClient::CreateWorkflowCallable(const CreateWorkflowRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateWorkflow, request, m_executor.get());
}

void MigrationHubOrchestratorClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateWorkflow, request, handler, context, m_executor.get());
}

CreateWorkflowStepOutcome MigrationHubOrchestratorClient::CreateWorkflowStep(const CreateWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep");
  return CreateWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::CreateWorkflowStepCallable(const CreateWorkflowStepRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateWorkflowStep, request, m_executor.get());
}

void MigrationHubOrchestratorClient::CreateWorkflowStepAsync(const CreateWorkflowStepRequest& request, const CreateWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateWorkflowStep, request, handler, context, m_executor.get());
}

CreateWorkflowStepGroupOutcome MigrationHubOrchestratorClient::CreateWorkflowStepGroup(const CreateWorkflowStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroups");
  return CreateWorkflowStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowStepGroupOutcomeCallable MigrationHubOrchestratorClient::CreateWorkflowStepGroupCallable(const CreateWorkflowStepGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateWorkflowStepGroup, request, m_executor.get());
}

void MigrationHubOrchestratorClient::CreateWorkflowStepGroupAsync(const CreateWorkflowStepGroupRequest& request, const CreateWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateWorkflowStepGroup, request, handler, context, m_executor.get());
}

DeleteWorkflowOutcome MigrationHubOrchestratorClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: Id, is not set");
    return DeleteWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowOutcomeCallable MigrationHubOrchestratorClient::DeleteWorkflowCallable(const DeleteWorkflowRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteWorkflow, request, m_executor.get());
}

void MigrationHubOrchestratorClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteWorkflow, request, handler, context, m_executor.get());
}

DeleteWorkflowStepOutcome MigrationHubOrchestratorClient::DeleteWorkflowStep(const DeleteWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::DeleteWorkflowStepCallable(const DeleteWorkflowStepRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteWorkflowStep, request, m_executor.get());
}

void MigrationHubOrchestratorClient::DeleteWorkflowStepAsync(const DeleteWorkflowStepRequest& request, const DeleteWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteWorkflowStep, request, handler, context, m_executor.get());
}

DeleteWorkflowStepGroupOutcome MigrationHubOrchestratorClient::DeleteWorkflowStepGroup(const DeleteWorkflowStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteWorkflowStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowStepGroupOutcomeCallable MigrationHubOrchestratorClient::DeleteWorkflowStepGroupCallable(const DeleteWorkflowStepGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteWorkflowStepGroup, request, m_executor.get());
}

void MigrationHubOrchestratorClient::DeleteWorkflowStepGroupAsync(const DeleteWorkflowStepGroupRequest& request, const DeleteWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteWorkflowStepGroup, request, handler, context, m_executor.get());
}

GetTemplateOutcome MigrationHubOrchestratorClient::GetTemplate(const GetTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: Id, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflowtemplate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateOutcomeCallable MigrationHubOrchestratorClient::GetTemplateCallable(const GetTemplateRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetTemplate, request, m_executor.get());
}

void MigrationHubOrchestratorClient::GetTemplateAsync(const GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetTemplate, request, handler, context, m_executor.get());
}

GetTemplateStepOutcome MigrationHubOrchestratorClient::GetTemplateStep(const GetTemplateStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplateStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemplateStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templatestep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetTemplateStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateStepOutcomeCallable MigrationHubOrchestratorClient::GetTemplateStepCallable(const GetTemplateStepRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetTemplateStep, request, m_executor.get());
}

void MigrationHubOrchestratorClient::GetTemplateStepAsync(const GetTemplateStepRequest& request, const GetTemplateStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetTemplateStep, request, handler, context, m_executor.get());
}

GetTemplateStepGroupOutcome MigrationHubOrchestratorClient::GetTemplateStepGroup(const GetTemplateStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplateStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemplateStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stepgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetTemplateStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateStepGroupOutcomeCallable MigrationHubOrchestratorClient::GetTemplateStepGroupCallable(const GetTemplateStepGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetTemplateStepGroup, request, m_executor.get());
}

void MigrationHubOrchestratorClient::GetTemplateStepGroupAsync(const GetTemplateStepGroupRequest& request, const GetTemplateStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetTemplateStepGroup, request, handler, context, m_executor.get());
}

GetWorkflowOutcome MigrationHubOrchestratorClient::GetWorkflow(const GetWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: Id, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowOutcomeCallable MigrationHubOrchestratorClient::GetWorkflowCallable(const GetWorkflowRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetWorkflow, request, m_executor.get());
}

void MigrationHubOrchestratorClient::GetWorkflowAsync(const GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetWorkflow, request, handler, context, m_executor.get());
}

GetWorkflowStepOutcome MigrationHubOrchestratorClient::GetWorkflowStep(const GetWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::GetWorkflowStepCallable(const GetWorkflowStepRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetWorkflowStep, request, m_executor.get());
}

void MigrationHubOrchestratorClient::GetWorkflowStepAsync(const GetWorkflowStepRequest& request, const GetWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetWorkflowStep, request, handler, context, m_executor.get());
}

GetWorkflowStepGroupOutcome MigrationHubOrchestratorClient::GetWorkflowStepGroup(const GetWorkflowStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetWorkflowStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowStepGroupOutcomeCallable MigrationHubOrchestratorClient::GetWorkflowStepGroupCallable(const GetWorkflowStepGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetWorkflowStepGroup, request, m_executor.get());
}

void MigrationHubOrchestratorClient::GetWorkflowStepGroupAsync(const GetWorkflowStepGroupRequest& request, const GetWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetWorkflowStepGroup, request, handler, context, m_executor.get());
}

ListPluginsOutcome MigrationHubOrchestratorClient::ListPlugins(const ListPluginsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPlugins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPlugins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/plugins");
  return ListPluginsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPluginsOutcomeCallable MigrationHubOrchestratorClient::ListPluginsCallable(const ListPluginsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListPlugins, request, m_executor.get());
}

void MigrationHubOrchestratorClient::ListPluginsAsync(const ListPluginsRequest& request, const ListPluginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListPlugins, request, handler, context, m_executor.get());
}

ListTagsForResourceOutcome MigrationHubOrchestratorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MigrationHubOrchestratorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource, request, m_executor.get());
}

void MigrationHubOrchestratorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource, request, handler, context, m_executor.get());
}

ListTemplateStepGroupsOutcome MigrationHubOrchestratorClient::ListTemplateStepGroups(const ListTemplateStepGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateStepGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateStepGroups", "Required field: TemplateId, is not set");
    return ListTemplateStepGroupsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateStepGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templatestepgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return ListTemplateStepGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateStepGroupsOutcomeCallable MigrationHubOrchestratorClient::ListTemplateStepGroupsCallable(const ListTemplateStepGroupsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTemplateStepGroups, request, m_executor.get());
}

void MigrationHubOrchestratorClient::ListTemplateStepGroupsAsync(const ListTemplateStepGroupsRequest& request, const ListTemplateStepGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTemplateStepGroups, request, handler, context, m_executor.get());
}

ListTemplateStepsOutcome MigrationHubOrchestratorClient::ListTemplateSteps(const ListTemplateStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templatesteps");
  return ListTemplateStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateStepsOutcomeCallable MigrationHubOrchestratorClient::ListTemplateStepsCallable(const ListTemplateStepsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTemplateSteps, request, m_executor.get());
}

void MigrationHubOrchestratorClient::ListTemplateStepsAsync(const ListTemplateStepsRequest& request, const ListTemplateStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTemplateSteps, request, handler, context, m_executor.get());
}

ListTemplatesOutcome MigrationHubOrchestratorClient::ListTemplates(const ListTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflowtemplates");
  return ListTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplatesOutcomeCallable MigrationHubOrchestratorClient::ListTemplatesCallable(const ListTemplatesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTemplates, request, m_executor.get());
}

void MigrationHubOrchestratorClient::ListTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTemplates, request, handler, context, m_executor.get());
}

ListWorkflowStepGroupsOutcome MigrationHubOrchestratorClient::ListWorkflowStepGroups(const ListWorkflowStepGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflowStepGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflowStepGroups", "Required field: WorkflowId, is not set");
    return ListWorkflowStepGroupsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflowStepGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroups");
  return ListWorkflowStepGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowStepGroupsOutcomeCallable MigrationHubOrchestratorClient::ListWorkflowStepGroupsCallable(const ListWorkflowStepGroupsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListWorkflowStepGroups, request, m_executor.get());
}

void MigrationHubOrchestratorClient::ListWorkflowStepGroupsAsync(const ListWorkflowStepGroupsRequest& request, const ListWorkflowStepGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListWorkflowStepGroups, request, handler, context, m_executor.get());
}

ListWorkflowStepsOutcome MigrationHubOrchestratorClient::ListWorkflowSteps(const ListWorkflowStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflowSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflowSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowsteps");
  return ListWorkflowStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowStepsOutcomeCallable MigrationHubOrchestratorClient::ListWorkflowStepsCallable(const ListWorkflowStepsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListWorkflowSteps, request, m_executor.get());
}

void MigrationHubOrchestratorClient::ListWorkflowStepsAsync(const ListWorkflowStepsRequest& request, const ListWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListWorkflowSteps, request, handler, context, m_executor.get());
}

ListWorkflowsOutcome MigrationHubOrchestratorClient::ListWorkflows(const ListWorkflowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflows");
  return ListWorkflowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowsOutcomeCallable MigrationHubOrchestratorClient::ListWorkflowsCallable(const ListWorkflowsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListWorkflows, request, m_executor.get());
}

void MigrationHubOrchestratorClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListWorkflows, request, handler, context, m_executor.get());
}

RetryWorkflowStepOutcome MigrationHubOrchestratorClient::RetryWorkflowStep(const RetryWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetryWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetryWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/retryworkflowstep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return RetryWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::RetryWorkflowStepCallable(const RetryWorkflowStepRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(RetryWorkflowStep, request, m_executor.get());
}

void MigrationHubOrchestratorClient::RetryWorkflowStepAsync(const RetryWorkflowStepRequest& request, const RetryWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(RetryWorkflowStep, request, handler, context, m_executor.get());
}

StartWorkflowOutcome MigrationHubOrchestratorClient::StartWorkflow(const StartWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartWorkflow", "Required field: Id, is not set");
    return StartWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  return StartWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartWorkflowOutcomeCallable MigrationHubOrchestratorClient::StartWorkflowCallable(const StartWorkflowRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(StartWorkflow, request, m_executor.get());
}

void MigrationHubOrchestratorClient::StartWorkflowAsync(const StartWorkflowRequest& request, const StartWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(StartWorkflow, request, handler, context, m_executor.get());
}

StopWorkflowOutcome MigrationHubOrchestratorClient::StopWorkflow(const StopWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopWorkflow", "Required field: Id, is not set");
    return StopWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  return StopWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopWorkflowOutcomeCallable MigrationHubOrchestratorClient::StopWorkflowCallable(const StopWorkflowRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(StopWorkflow, request, m_executor.get());
}

void MigrationHubOrchestratorClient::StopWorkflowAsync(const StopWorkflowRequest& request, const StopWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(StopWorkflow, request, handler, context, m_executor.get());
}

TagResourceOutcome MigrationHubOrchestratorClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MigrationHubOrchestratorClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void MigrationHubOrchestratorClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

UntagResourceOutcome MigrationHubOrchestratorClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MigrationHubOrchestratorClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void MigrationHubOrchestratorClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

UpdateWorkflowOutcome MigrationHubOrchestratorClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflow", "Required field: Id, is not set");
    return UpdateWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowOutcomeCallable MigrationHubOrchestratorClient::UpdateWorkflowCallable(const UpdateWorkflowRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateWorkflow, request, m_executor.get());
}

void MigrationHubOrchestratorClient::UpdateWorkflowAsync(const UpdateWorkflowRequest& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateWorkflow, request, handler, context, m_executor.get());
}

UpdateWorkflowStepOutcome MigrationHubOrchestratorClient::UpdateWorkflowStep(const UpdateWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStep", "Required field: Id, is not set");
    return UpdateWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowStepOutcomeCallable MigrationHubOrchestratorClient::UpdateWorkflowStepCallable(const UpdateWorkflowStepRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateWorkflowStep, request, m_executor.get());
}

void MigrationHubOrchestratorClient::UpdateWorkflowStepAsync(const UpdateWorkflowStepRequest& request, const UpdateWorkflowStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateWorkflowStep, request, handler, context, m_executor.get());
}

UpdateWorkflowStepGroupOutcome MigrationHubOrchestratorClient::UpdateWorkflowStepGroup(const UpdateWorkflowStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateWorkflowStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowStepGroupOutcomeCallable MigrationHubOrchestratorClient::UpdateWorkflowStepGroupCallable(const UpdateWorkflowStepGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateWorkflowStepGroup, request, m_executor.get());
}

void MigrationHubOrchestratorClient::UpdateWorkflowStepGroupAsync(const UpdateWorkflowStepGroupRequest& request, const UpdateWorkflowStepGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateWorkflowStepGroup, request, handler, context, m_executor.get());
}

