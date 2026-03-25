/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/CodePipelineClient.h>
#include <aws/codepipeline/CodePipelineEndpointProvider.h>
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
#include <aws/codepipeline/model/GetPipelineExecutionRequest.h>
#include <aws/codepipeline/model/GetPipelineRequest.h>
#include <aws/codepipeline/model/GetPipelineStateRequest.h>
#include <aws/codepipeline/model/GetThirdPartyJobDetailsRequest.h>
#include <aws/codepipeline/model/ListActionExecutionsRequest.h>
#include <aws/codepipeline/model/ListActionTypesRequest.h>
#include <aws/codepipeline/model/ListDeployActionExecutionTargetsRequest.h>
#include <aws/codepipeline/model/ListPipelineExecutionsRequest.h>
#include <aws/codepipeline/model/ListPipelinesRequest.h>
#include <aws/codepipeline/model/ListRuleExecutionsRequest.h>
#include <aws/codepipeline/model/ListRuleTypesRequest.h>
#include <aws/codepipeline/model/ListTagsForResourceRequest.h>
#include <aws/codepipeline/model/ListWebhooksRequest.h>
#include <aws/codepipeline/model/OverrideStageConditionRequest.h>
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
#include <aws/codepipeline/model/RollbackStageRequest.h>
#include <aws/codepipeline/model/StartPipelineExecutionRequest.h>
#include <aws/codepipeline/model/StopPipelineExecutionRequest.h>
#include <aws/codepipeline/model/TagResourceRequest.h>
#include <aws/codepipeline/model/UntagResourceRequest.h>
#include <aws/codepipeline/model/UpdateActionTypeRequest.h>
#include <aws/codepipeline/model/UpdatePipelineRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodePipeline;
using namespace Aws::CodePipeline::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CodePipeline {
const char SERVICE_NAME[] = "codepipeline";
const char ALLOCATION_TAG[] = "CodePipelineClient";
}  // namespace CodePipeline
}  // namespace Aws
const char* CodePipelineClient::GetServiceName() { return SERVICE_NAME; }
const char* CodePipelineClient::GetAllocationTag() { return ALLOCATION_TAG; }

CodePipelineClient::CodePipelineClient(const CodePipeline::CodePipelineClientConfiguration& clientConfiguration,
                                       std::shared_ptr<CodePipelineEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodePipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const AWSCredentials& credentials,
                                       std::shared_ptr<CodePipelineEndpointProviderBase> endpointProvider,
                                       const CodePipeline::CodePipelineClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodePipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<CodePipelineEndpointProviderBase> endpointProvider,
                                       const CodePipeline::CodePipelineClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CodePipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CodePipelineClient::CodePipelineClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodePipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodePipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CodePipelineClient::CodePipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CodePipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CodePipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CodePipelineClient::~CodePipelineClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CodePipelineEndpointProviderBase>& CodePipelineClient::accessEndpointProvider() { return m_endpointProvider; }

void CodePipelineClient::init(const CodePipeline::CodePipelineClientConfiguration& config) {
  AWSClient::SetServiceClientName("CodePipeline");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "codepipeline");
}

void CodePipelineClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CodePipelineClient::InvokeOperationOutcome CodePipelineClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                      Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AcknowledgeJobOutcome CodePipelineClient::AcknowledgeJob(const AcknowledgeJobRequest& request) const {
  return AcknowledgeJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AcknowledgeThirdPartyJobOutcome CodePipelineClient::AcknowledgeThirdPartyJob(const AcknowledgeThirdPartyJobRequest& request) const {
  return AcknowledgeThirdPartyJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomActionTypeOutcome CodePipelineClient::CreateCustomActionType(const CreateCustomActionTypeRequest& request) const {
  return CreateCustomActionTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePipelineOutcome CodePipelineClient::CreatePipeline(const CreatePipelineRequest& request) const {
  return CreatePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomActionTypeOutcome CodePipelineClient::DeleteCustomActionType(const DeleteCustomActionTypeRequest& request) const {
  return DeleteCustomActionTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePipelineOutcome CodePipelineClient::DeletePipeline(const DeletePipelineRequest& request) const {
  return DeletePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWebhookOutcome CodePipelineClient::DeleteWebhook(const DeleteWebhookRequest& request) const {
  return DeleteWebhookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterWebhookWithThirdPartyOutcome CodePipelineClient::DeregisterWebhookWithThirdParty(
    const DeregisterWebhookWithThirdPartyRequest& request) const {
  return DeregisterWebhookWithThirdPartyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableStageTransitionOutcome CodePipelineClient::DisableStageTransition(const DisableStageTransitionRequest& request) const {
  return DisableStageTransitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableStageTransitionOutcome CodePipelineClient::EnableStageTransition(const EnableStageTransitionRequest& request) const {
  return EnableStageTransitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetActionTypeOutcome CodePipelineClient::GetActionType(const GetActionTypeRequest& request) const {
  return GetActionTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobDetailsOutcome CodePipelineClient::GetJobDetails(const GetJobDetailsRequest& request) const {
  return GetJobDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPipelineOutcome CodePipelineClient::GetPipeline(const GetPipelineRequest& request) const {
  return GetPipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPipelineExecutionOutcome CodePipelineClient::GetPipelineExecution(const GetPipelineExecutionRequest& request) const {
  return GetPipelineExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPipelineStateOutcome CodePipelineClient::GetPipelineState(const GetPipelineStateRequest& request) const {
  return GetPipelineStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetThirdPartyJobDetailsOutcome CodePipelineClient::GetThirdPartyJobDetails(const GetThirdPartyJobDetailsRequest& request) const {
  return GetThirdPartyJobDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListActionExecutionsOutcome CodePipelineClient::ListActionExecutions(const ListActionExecutionsRequest& request) const {
  return ListActionExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListActionTypesOutcome CodePipelineClient::ListActionTypes(const ListActionTypesRequest& request) const {
  return ListActionTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDeployActionExecutionTargetsOutcome CodePipelineClient::ListDeployActionExecutionTargets(
    const ListDeployActionExecutionTargetsRequest& request) const {
  return ListDeployActionExecutionTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPipelineExecutionsOutcome CodePipelineClient::ListPipelineExecutions(const ListPipelineExecutionsRequest& request) const {
  return ListPipelineExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPipelinesOutcome CodePipelineClient::ListPipelines(const ListPipelinesRequest& request) const {
  return ListPipelinesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRuleExecutionsOutcome CodePipelineClient::ListRuleExecutions(const ListRuleExecutionsRequest& request) const {
  return ListRuleExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRuleTypesOutcome CodePipelineClient::ListRuleTypes(const ListRuleTypesRequest& request) const {
  return ListRuleTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CodePipelineClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWebhooksOutcome CodePipelineClient::ListWebhooks(const ListWebhooksRequest& request) const {
  return ListWebhooksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

OverrideStageConditionOutcome CodePipelineClient::OverrideStageCondition(const OverrideStageConditionRequest& request) const {
  return OverrideStageConditionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PollForJobsOutcome CodePipelineClient::PollForJobs(const PollForJobsRequest& request) const {
  return PollForJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PollForThirdPartyJobsOutcome CodePipelineClient::PollForThirdPartyJobs(const PollForThirdPartyJobsRequest& request) const {
  return PollForThirdPartyJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutActionRevisionOutcome CodePipelineClient::PutActionRevision(const PutActionRevisionRequest& request) const {
  return PutActionRevisionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutApprovalResultOutcome CodePipelineClient::PutApprovalResult(const PutApprovalResultRequest& request) const {
  return PutApprovalResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutJobFailureResultOutcome CodePipelineClient::PutJobFailureResult(const PutJobFailureResultRequest& request) const {
  return PutJobFailureResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutJobSuccessResultOutcome CodePipelineClient::PutJobSuccessResult(const PutJobSuccessResultRequest& request) const {
  return PutJobSuccessResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutThirdPartyJobFailureResultOutcome CodePipelineClient::PutThirdPartyJobFailureResult(
    const PutThirdPartyJobFailureResultRequest& request) const {
  return PutThirdPartyJobFailureResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutThirdPartyJobSuccessResultOutcome CodePipelineClient::PutThirdPartyJobSuccessResult(
    const PutThirdPartyJobSuccessResultRequest& request) const {
  return PutThirdPartyJobSuccessResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutWebhookOutcome CodePipelineClient::PutWebhook(const PutWebhookRequest& request) const {
  return PutWebhookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterWebhookWithThirdPartyOutcome CodePipelineClient::RegisterWebhookWithThirdParty(
    const RegisterWebhookWithThirdPartyRequest& request) const {
  return RegisterWebhookWithThirdPartyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RetryStageExecutionOutcome CodePipelineClient::RetryStageExecution(const RetryStageExecutionRequest& request) const {
  return RetryStageExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RollbackStageOutcome CodePipelineClient::RollbackStage(const RollbackStageRequest& request) const {
  return RollbackStageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartPipelineExecutionOutcome CodePipelineClient::StartPipelineExecution(const StartPipelineExecutionRequest& request) const {
  return StartPipelineExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopPipelineExecutionOutcome CodePipelineClient::StopPipelineExecution(const StopPipelineExecutionRequest& request) const {
  return StopPipelineExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CodePipelineClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CodePipelineClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateActionTypeOutcome CodePipelineClient::UpdateActionType(const UpdateActionTypeRequest& request) const {
  return UpdateActionTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePipelineOutcome CodePipelineClient::UpdatePipeline(const UpdatePipelineRequest& request) const {
  return UpdatePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
