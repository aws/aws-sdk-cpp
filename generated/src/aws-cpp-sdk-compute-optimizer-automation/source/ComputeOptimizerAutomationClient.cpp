/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationClient.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationEndpointProvider.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationErrorMarshaller.h>
#include <aws/compute-optimizer-automation/model/AssociateAccountsRequest.h>
#include <aws/compute-optimizer-automation/model/CreateAutomationRuleRequest.h>
#include <aws/compute-optimizer-automation/model/DeleteAutomationRuleRequest.h>
#include <aws/compute-optimizer-automation/model/DisassociateAccountsRequest.h>
#include <aws/compute-optimizer-automation/model/GetAutomationEventRequest.h>
#include <aws/compute-optimizer-automation/model/GetAutomationRuleRequest.h>
#include <aws/compute-optimizer-automation/model/GetEnrollmentConfigurationRequest.h>
#include <aws/compute-optimizer-automation/model/ListAccountsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventStepsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventSummariesRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulesRequest.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionSummariesRequest.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionsRequest.h>
#include <aws/compute-optimizer-automation/model/ListTagsForResourceRequest.h>
#include <aws/compute-optimizer-automation/model/RollbackAutomationEventRequest.h>
#include <aws/compute-optimizer-automation/model/StartAutomationEventRequest.h>
#include <aws/compute-optimizer-automation/model/TagResourceRequest.h>
#include <aws/compute-optimizer-automation/model/UntagResourceRequest.h>
#include <aws/compute-optimizer-automation/model/UpdateAutomationRuleRequest.h>
#include <aws/compute-optimizer-automation/model/UpdateEnrollmentConfigurationRequest.h>
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
using namespace Aws::ComputeOptimizerAutomation;
using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ComputeOptimizerAutomation {
const char SERVICE_NAME[] = "aco-automation";
const char ALLOCATION_TAG[] = "ComputeOptimizerAutomationClient";
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
const char* ComputeOptimizerAutomationClient::GetServiceName() { return SERVICE_NAME; }
const char* ComputeOptimizerAutomationClient::GetAllocationTag() { return ALLOCATION_TAG; }

ComputeOptimizerAutomationClient::ComputeOptimizerAutomationClient(
    const ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration& clientConfiguration,
    std::shared_ptr<ComputeOptimizerAutomationEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerAutomationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ComputeOptimizerAutomationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComputeOptimizerAutomationClient::ComputeOptimizerAutomationClient(
    const AWSCredentials& credentials, std::shared_ptr<ComputeOptimizerAutomationEndpointProviderBase> endpointProvider,
    const ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerAutomationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ComputeOptimizerAutomationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComputeOptimizerAutomationClient::ComputeOptimizerAutomationClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<ComputeOptimizerAutomationEndpointProviderBase> endpointProvider,
    const ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerAutomationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ComputeOptimizerAutomationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ComputeOptimizerAutomationClient::ComputeOptimizerAutomationClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerAutomationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComputeOptimizerAutomationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComputeOptimizerAutomationClient::ComputeOptimizerAutomationClient(const AWSCredentials& credentials,
                                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerAutomationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComputeOptimizerAutomationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComputeOptimizerAutomationClient::ComputeOptimizerAutomationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerAutomationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComputeOptimizerAutomationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ComputeOptimizerAutomationClient::~ComputeOptimizerAutomationClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ComputeOptimizerAutomationEndpointProviderBase>& ComputeOptimizerAutomationClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void ComputeOptimizerAutomationClient::init(const ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration& config) {
  AWSClient::SetServiceClientName("Compute Optimizer Automation");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "aco-automation");
}

void ComputeOptimizerAutomationClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ComputeOptimizerAutomationClient::InvokeOperationOutcome ComputeOptimizerAutomationClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

AssociateAccountsOutcome ComputeOptimizerAutomationClient::AssociateAccounts(const AssociateAccountsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateAccountsOutcome(result.GetResultWithOwnership())
                            : AssociateAccountsOutcome(std::move(result.GetError()));
}

CreateAutomationRuleOutcome ComputeOptimizerAutomationClient::CreateAutomationRule(const CreateAutomationRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAutomationRuleOutcome(result.GetResultWithOwnership())
                            : CreateAutomationRuleOutcome(std::move(result.GetError()));
}

DeleteAutomationRuleOutcome ComputeOptimizerAutomationClient::DeleteAutomationRule(const DeleteAutomationRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAutomationRuleOutcome(result.GetResultWithOwnership())
                            : DeleteAutomationRuleOutcome(std::move(result.GetError()));
}

DisassociateAccountsOutcome ComputeOptimizerAutomationClient::DisassociateAccounts(const DisassociateAccountsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateAccountsOutcome(result.GetResultWithOwnership())
                            : DisassociateAccountsOutcome(std::move(result.GetError()));
}

GetAutomationEventOutcome ComputeOptimizerAutomationClient::GetAutomationEvent(const GetAutomationEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAutomationEventOutcome(result.GetResultWithOwnership())
                            : GetAutomationEventOutcome(std::move(result.GetError()));
}

GetAutomationRuleOutcome ComputeOptimizerAutomationClient::GetAutomationRule(const GetAutomationRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAutomationRuleOutcome(result.GetResultWithOwnership())
                            : GetAutomationRuleOutcome(std::move(result.GetError()));
}

GetEnrollmentConfigurationOutcome ComputeOptimizerAutomationClient::GetEnrollmentConfiguration(
    const GetEnrollmentConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEnrollmentConfigurationOutcome(result.GetResultWithOwnership())
                            : GetEnrollmentConfigurationOutcome(std::move(result.GetError()));
}

ListAccountsOutcome ComputeOptimizerAutomationClient::ListAccounts(const ListAccountsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountsOutcome(result.GetResultWithOwnership()) : ListAccountsOutcome(std::move(result.GetError()));
}

ListAutomationEventStepsOutcome ComputeOptimizerAutomationClient::ListAutomationEventSteps(
    const ListAutomationEventStepsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAutomationEventStepsOutcome(result.GetResultWithOwnership())
                            : ListAutomationEventStepsOutcome(std::move(result.GetError()));
}

ListAutomationEventSummariesOutcome ComputeOptimizerAutomationClient::ListAutomationEventSummaries(
    const ListAutomationEventSummariesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAutomationEventSummariesOutcome(result.GetResultWithOwnership())
                            : ListAutomationEventSummariesOutcome(std::move(result.GetError()));
}

ListAutomationEventsOutcome ComputeOptimizerAutomationClient::ListAutomationEvents(const ListAutomationEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAutomationEventsOutcome(result.GetResultWithOwnership())
                            : ListAutomationEventsOutcome(std::move(result.GetError()));
}

ListAutomationRulePreviewOutcome ComputeOptimizerAutomationClient::ListAutomationRulePreview(
    const ListAutomationRulePreviewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAutomationRulePreviewOutcome(result.GetResultWithOwnership())
                            : ListAutomationRulePreviewOutcome(std::move(result.GetError()));
}

ListAutomationRulePreviewSummariesOutcome ComputeOptimizerAutomationClient::ListAutomationRulePreviewSummaries(
    const ListAutomationRulePreviewSummariesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAutomationRulePreviewSummariesOutcome(result.GetResultWithOwnership())
                            : ListAutomationRulePreviewSummariesOutcome(std::move(result.GetError()));
}

ListAutomationRulesOutcome ComputeOptimizerAutomationClient::ListAutomationRules(const ListAutomationRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAutomationRulesOutcome(result.GetResultWithOwnership())
                            : ListAutomationRulesOutcome(std::move(result.GetError()));
}

ListRecommendedActionSummariesOutcome ComputeOptimizerAutomationClient::ListRecommendedActionSummaries(
    const ListRecommendedActionSummariesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRecommendedActionSummariesOutcome(result.GetResultWithOwnership())
                            : ListRecommendedActionSummariesOutcome(std::move(result.GetError()));
}

ListRecommendedActionsOutcome ComputeOptimizerAutomationClient::ListRecommendedActions(const ListRecommendedActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRecommendedActionsOutcome(result.GetResultWithOwnership())
                            : ListRecommendedActionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ComputeOptimizerAutomationClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RollbackAutomationEventOutcome ComputeOptimizerAutomationClient::RollbackAutomationEvent(
    const RollbackAutomationEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RollbackAutomationEventOutcome(result.GetResultWithOwnership())
                            : RollbackAutomationEventOutcome(std::move(result.GetError()));
}

StartAutomationEventOutcome ComputeOptimizerAutomationClient::StartAutomationEvent(const StartAutomationEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAutomationEventOutcome(result.GetResultWithOwnership())
                            : StartAutomationEventOutcome(std::move(result.GetError()));
}

TagResourceOutcome ComputeOptimizerAutomationClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ComputeOptimizerAutomationClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAutomationRuleOutcome ComputeOptimizerAutomationClient::UpdateAutomationRule(const UpdateAutomationRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAutomationRuleOutcome(result.GetResultWithOwnership())
                            : UpdateAutomationRuleOutcome(std::move(result.GetError()));
}

UpdateEnrollmentConfigurationOutcome ComputeOptimizerAutomationClient::UpdateEnrollmentConfiguration(
    const UpdateEnrollmentConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEnrollmentConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateEnrollmentConfigurationOutcome(std::move(result.GetError()));
}
