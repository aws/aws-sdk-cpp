/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/ARCRegionswitchClient.h>
#include <aws/arc-region-switch/ARCRegionswitchEndpointProvider.h>
#include <aws/arc-region-switch/ARCRegionswitchErrorMarshaller.h>
#include <aws/arc-region-switch/model/ApprovePlanExecutionStepRequest.h>
#include <aws/arc-region-switch/model/CancelPlanExecutionRequest.h>
#include <aws/arc-region-switch/model/CreatePlanRequest.h>
#include <aws/arc-region-switch/model/DeletePlanRequest.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusRequest.h>
#include <aws/arc-region-switch/model/GetPlanExecutionRequest.h>
#include <aws/arc-region-switch/model/GetPlanInRegionRequest.h>
#include <aws/arc-region-switch/model/GetPlanRequest.h>
#include <aws/arc-region-switch/model/ListPlanExecutionEventsRequest.h>
#include <aws/arc-region-switch/model/ListPlanExecutionsRequest.h>
#include <aws/arc-region-switch/model/ListPlansInRegionRequest.h>
#include <aws/arc-region-switch/model/ListPlansRequest.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksInRegionRequest.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksRequest.h>
#include <aws/arc-region-switch/model/ListTagsForResourceRequest.h>
#include <aws/arc-region-switch/model/StartPlanExecutionRequest.h>
#include <aws/arc-region-switch/model/TagResourceRequest.h>
#include <aws/arc-region-switch/model/UntagResourceRequest.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionRequest.h>
#include <aws/arc-region-switch/model/UpdatePlanExecutionStepRequest.h>
#include <aws/arc-region-switch/model/UpdatePlanRequest.h>
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
using namespace Aws::ARCRegionswitch;
using namespace Aws::ARCRegionswitch::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ARCRegionswitch {
const char SERVICE_NAME[] = "arc-region-switch";
const char ALLOCATION_TAG[] = "ARCRegionswitchClient";
}  // namespace ARCRegionswitch
}  // namespace Aws
const char* ARCRegionswitchClient::GetServiceName() { return SERVICE_NAME; }
const char* ARCRegionswitchClient::GetAllocationTag() { return ALLOCATION_TAG; }

ARCRegionswitchClient::ARCRegionswitchClient(const ARCRegionswitch::ARCRegionswitchClientConfiguration& clientConfiguration,
                                             std::shared_ptr<ARCRegionswitchEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCRegionswitchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ARCRegionswitchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ARCRegionswitchClient::ARCRegionswitchClient(const AWSCredentials& credentials,
                                             std::shared_ptr<ARCRegionswitchEndpointProviderBase> endpointProvider,
                                             const ARCRegionswitch::ARCRegionswitchClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCRegionswitchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ARCRegionswitchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ARCRegionswitchClient::ARCRegionswitchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<ARCRegionswitchEndpointProviderBase> endpointProvider,
                                             const ARCRegionswitch::ARCRegionswitchClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCRegionswitchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ARCRegionswitchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ARCRegionswitchClient::ARCRegionswitchClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCRegionswitchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ARCRegionswitchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ARCRegionswitchClient::ARCRegionswitchClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCRegionswitchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ARCRegionswitchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ARCRegionswitchClient::ARCRegionswitchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCRegionswitchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ARCRegionswitchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ARCRegionswitchClient::~ARCRegionswitchClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ARCRegionswitchEndpointProviderBase>& ARCRegionswitchClient::accessEndpointProvider() { return m_endpointProvider; }

void ARCRegionswitchClient::init(const ARCRegionswitch::ARCRegionswitchClientConfiguration& config) {
  AWSClient::SetServiceClientName("ARC Region switch");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "arc-region-switch");
}

void ARCRegionswitchClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ARCRegionswitchClient::InvokeOperationOutcome ARCRegionswitchClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

ApprovePlanExecutionStepOutcome ARCRegionswitchClient::ApprovePlanExecutionStep(const ApprovePlanExecutionStepRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ApprovePlanExecutionStepOutcome(result.GetResultWithOwnership())
                            : ApprovePlanExecutionStepOutcome(std::move(result.GetError()));
}

CancelPlanExecutionOutcome ARCRegionswitchClient::CancelPlanExecution(const CancelPlanExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelPlanExecutionOutcome(result.GetResultWithOwnership())
                            : CancelPlanExecutionOutcome(std::move(result.GetError()));
}

CreatePlanOutcome ARCRegionswitchClient::CreatePlan(const CreatePlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePlanOutcome(result.GetResultWithOwnership()) : CreatePlanOutcome(std::move(result.GetError()));
}

DeletePlanOutcome ARCRegionswitchClient::DeletePlan(const DeletePlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePlanOutcome(result.GetResultWithOwnership()) : DeletePlanOutcome(std::move(result.GetError()));
}

GetPlanOutcome ARCRegionswitchClient::GetPlan(const GetPlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPlanOutcome(result.GetResultWithOwnership()) : GetPlanOutcome(std::move(result.GetError()));
}

GetPlanEvaluationStatusOutcome ARCRegionswitchClient::GetPlanEvaluationStatus(const GetPlanEvaluationStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPlanEvaluationStatusOutcome(result.GetResultWithOwnership())
                            : GetPlanEvaluationStatusOutcome(std::move(result.GetError()));
}

GetPlanExecutionOutcome ARCRegionswitchClient::GetPlanExecution(const GetPlanExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPlanExecutionOutcome(result.GetResultWithOwnership())
                            : GetPlanExecutionOutcome(std::move(result.GetError()));
}

GetPlanInRegionOutcome ARCRegionswitchClient::GetPlanInRegion(const GetPlanInRegionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPlanInRegionOutcome(result.GetResultWithOwnership())
                            : GetPlanInRegionOutcome(std::move(result.GetError()));
}

ListPlanExecutionEventsOutcome ARCRegionswitchClient::ListPlanExecutionEvents(const ListPlanExecutionEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPlanExecutionEventsOutcome(result.GetResultWithOwnership())
                            : ListPlanExecutionEventsOutcome(std::move(result.GetError()));
}

ListPlanExecutionsOutcome ARCRegionswitchClient::ListPlanExecutions(const ListPlanExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPlanExecutionsOutcome(result.GetResultWithOwnership())
                            : ListPlanExecutionsOutcome(std::move(result.GetError()));
}

ListPlansOutcome ARCRegionswitchClient::ListPlans(const ListPlansRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPlansOutcome(result.GetResultWithOwnership()) : ListPlansOutcome(std::move(result.GetError()));
}

ListPlansInRegionOutcome ARCRegionswitchClient::ListPlansInRegion(const ListPlansInRegionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPlansInRegionOutcome(result.GetResultWithOwnership())
                            : ListPlansInRegionOutcome(std::move(result.GetError()));
}

ListRoute53HealthChecksOutcome ARCRegionswitchClient::ListRoute53HealthChecks(const ListRoute53HealthChecksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRoute53HealthChecksOutcome(result.GetResultWithOwnership())
                            : ListRoute53HealthChecksOutcome(std::move(result.GetError()));
}

ListRoute53HealthChecksInRegionOutcome ARCRegionswitchClient::ListRoute53HealthChecksInRegion(
    const ListRoute53HealthChecksInRegionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRoute53HealthChecksInRegionOutcome(result.GetResultWithOwnership())
                            : ListRoute53HealthChecksInRegionOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ARCRegionswitchClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

StartPlanExecutionOutcome ARCRegionswitchClient::StartPlanExecution(const StartPlanExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartPlanExecutionOutcome(result.GetResultWithOwnership())
                            : StartPlanExecutionOutcome(std::move(result.GetError()));
}

TagResourceOutcome ARCRegionswitchClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ARCRegionswitchClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdatePlanOutcome ARCRegionswitchClient::UpdatePlan(const UpdatePlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePlanOutcome(result.GetResultWithOwnership()) : UpdatePlanOutcome(std::move(result.GetError()));
}

UpdatePlanExecutionOutcome ARCRegionswitchClient::UpdatePlanExecution(const UpdatePlanExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePlanExecutionOutcome(result.GetResultWithOwnership())
                            : UpdatePlanExecutionOutcome(std::move(result.GetError()));
}

UpdatePlanExecutionStepOutcome ARCRegionswitchClient::UpdatePlanExecutionStep(const UpdatePlanExecutionStepRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePlanExecutionStepOutcome(result.GetResultWithOwnership())
                            : UpdatePlanExecutionStepOutcome(std::move(result.GetError()));
}
