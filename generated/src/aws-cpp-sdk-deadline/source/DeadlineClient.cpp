/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/deadline/DeadlineClient.h>
#include <aws/deadline/DeadlineEndpointProvider.h>
#include <aws/deadline/DeadlineErrorMarshaller.h>
#include <aws/deadline/model/AssociateMemberToFarmRequest.h>
#include <aws/deadline/model/AssociateMemberToFleetRequest.h>
#include <aws/deadline/model/AssociateMemberToJobRequest.h>
#include <aws/deadline/model/AssociateMemberToQueueRequest.h>
#include <aws/deadline/model/AssumeFleetRoleForReadRequest.h>
#include <aws/deadline/model/AssumeFleetRoleForWorkerRequest.h>
#include <aws/deadline/model/AssumeQueueRoleForReadRequest.h>
#include <aws/deadline/model/AssumeQueueRoleForUserRequest.h>
#include <aws/deadline/model/AssumeQueueRoleForWorkerRequest.h>
#include <aws/deadline/model/BatchGetJobEntityRequest.h>
#include <aws/deadline/model/CopyJobTemplateRequest.h>
#include <aws/deadline/model/CreateBudgetRequest.h>
#include <aws/deadline/model/CreateFarmRequest.h>
#include <aws/deadline/model/CreateFleetRequest.h>
#include <aws/deadline/model/CreateJobRequest.h>
#include <aws/deadline/model/CreateLicenseEndpointRequest.h>
#include <aws/deadline/model/CreateLimitRequest.h>
#include <aws/deadline/model/CreateMonitorRequest.h>
#include <aws/deadline/model/CreateQueueEnvironmentRequest.h>
#include <aws/deadline/model/CreateQueueFleetAssociationRequest.h>
#include <aws/deadline/model/CreateQueueLimitAssociationRequest.h>
#include <aws/deadline/model/CreateQueueRequest.h>
#include <aws/deadline/model/CreateStorageProfileRequest.h>
#include <aws/deadline/model/CreateWorkerRequest.h>
#include <aws/deadline/model/DeleteBudgetRequest.h>
#include <aws/deadline/model/DeleteFarmRequest.h>
#include <aws/deadline/model/DeleteFleetRequest.h>
#include <aws/deadline/model/DeleteLicenseEndpointRequest.h>
#include <aws/deadline/model/DeleteLimitRequest.h>
#include <aws/deadline/model/DeleteMeteredProductRequest.h>
#include <aws/deadline/model/DeleteMonitorRequest.h>
#include <aws/deadline/model/DeleteQueueEnvironmentRequest.h>
#include <aws/deadline/model/DeleteQueueFleetAssociationRequest.h>
#include <aws/deadline/model/DeleteQueueLimitAssociationRequest.h>
#include <aws/deadline/model/DeleteQueueRequest.h>
#include <aws/deadline/model/DeleteStorageProfileRequest.h>
#include <aws/deadline/model/DeleteWorkerRequest.h>
#include <aws/deadline/model/DisassociateMemberFromFarmRequest.h>
#include <aws/deadline/model/DisassociateMemberFromFleetRequest.h>
#include <aws/deadline/model/DisassociateMemberFromJobRequest.h>
#include <aws/deadline/model/DisassociateMemberFromQueueRequest.h>
#include <aws/deadline/model/GetBudgetRequest.h>
#include <aws/deadline/model/GetFarmRequest.h>
#include <aws/deadline/model/GetFleetRequest.h>
#include <aws/deadline/model/GetJobRequest.h>
#include <aws/deadline/model/GetLicenseEndpointRequest.h>
#include <aws/deadline/model/GetLimitRequest.h>
#include <aws/deadline/model/GetMonitorRequest.h>
#include <aws/deadline/model/GetQueueEnvironmentRequest.h>
#include <aws/deadline/model/GetQueueFleetAssociationRequest.h>
#include <aws/deadline/model/GetQueueLimitAssociationRequest.h>
#include <aws/deadline/model/GetQueueRequest.h>
#include <aws/deadline/model/GetSessionActionRequest.h>
#include <aws/deadline/model/GetSessionRequest.h>
#include <aws/deadline/model/GetSessionsStatisticsAggregationRequest.h>
#include <aws/deadline/model/GetStepRequest.h>
#include <aws/deadline/model/GetStorageProfileForQueueRequest.h>
#include <aws/deadline/model/GetStorageProfileRequest.h>
#include <aws/deadline/model/GetTaskRequest.h>
#include <aws/deadline/model/GetWorkerRequest.h>
#include <aws/deadline/model/ListAvailableMeteredProductsRequest.h>
#include <aws/deadline/model/ListBudgetsRequest.h>
#include <aws/deadline/model/ListFarmMembersRequest.h>
#include <aws/deadline/model/ListFarmsRequest.h>
#include <aws/deadline/model/ListFleetMembersRequest.h>
#include <aws/deadline/model/ListFleetsRequest.h>
#include <aws/deadline/model/ListJobMembersRequest.h>
#include <aws/deadline/model/ListJobParameterDefinitionsRequest.h>
#include <aws/deadline/model/ListJobsRequest.h>
#include <aws/deadline/model/ListLicenseEndpointsRequest.h>
#include <aws/deadline/model/ListLimitsRequest.h>
#include <aws/deadline/model/ListMeteredProductsRequest.h>
#include <aws/deadline/model/ListMonitorsRequest.h>
#include <aws/deadline/model/ListQueueEnvironmentsRequest.h>
#include <aws/deadline/model/ListQueueFleetAssociationsRequest.h>
#include <aws/deadline/model/ListQueueLimitAssociationsRequest.h>
#include <aws/deadline/model/ListQueueMembersRequest.h>
#include <aws/deadline/model/ListQueuesRequest.h>
#include <aws/deadline/model/ListSessionActionsRequest.h>
#include <aws/deadline/model/ListSessionsForWorkerRequest.h>
#include <aws/deadline/model/ListSessionsRequest.h>
#include <aws/deadline/model/ListStepConsumersRequest.h>
#include <aws/deadline/model/ListStepDependenciesRequest.h>
#include <aws/deadline/model/ListStepsRequest.h>
#include <aws/deadline/model/ListStorageProfilesForQueueRequest.h>
#include <aws/deadline/model/ListStorageProfilesRequest.h>
#include <aws/deadline/model/ListTagsForResourceRequest.h>
#include <aws/deadline/model/ListTasksRequest.h>
#include <aws/deadline/model/ListWorkersRequest.h>
#include <aws/deadline/model/PutMeteredProductRequest.h>
#include <aws/deadline/model/SearchJobsRequest.h>
#include <aws/deadline/model/SearchStepsRequest.h>
#include <aws/deadline/model/SearchTasksRequest.h>
#include <aws/deadline/model/SearchWorkersRequest.h>
#include <aws/deadline/model/StartSessionsStatisticsAggregationRequest.h>
#include <aws/deadline/model/TagResourceRequest.h>
#include <aws/deadline/model/UntagResourceRequest.h>
#include <aws/deadline/model/UpdateBudgetRequest.h>
#include <aws/deadline/model/UpdateFarmRequest.h>
#include <aws/deadline/model/UpdateFleetRequest.h>
#include <aws/deadline/model/UpdateJobRequest.h>
#include <aws/deadline/model/UpdateLimitRequest.h>
#include <aws/deadline/model/UpdateMonitorRequest.h>
#include <aws/deadline/model/UpdateQueueEnvironmentRequest.h>
#include <aws/deadline/model/UpdateQueueFleetAssociationRequest.h>
#include <aws/deadline/model/UpdateQueueLimitAssociationRequest.h>
#include <aws/deadline/model/UpdateQueueRequest.h>
#include <aws/deadline/model/UpdateSessionRequest.h>
#include <aws/deadline/model/UpdateStepRequest.h>
#include <aws/deadline/model/UpdateStorageProfileRequest.h>
#include <aws/deadline/model/UpdateTaskRequest.h>
#include <aws/deadline/model/UpdateWorkerRequest.h>
#include <aws/deadline/model/UpdateWorkerScheduleRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::deadline;
using namespace Aws::deadline::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace deadline {
const char SERVICE_NAME[] = "deadline";
const char ALLOCATION_TAG[] = "DeadlineClient";
}  // namespace deadline
}  // namespace Aws
const char* DeadlineClient::GetServiceName() { return SERVICE_NAME; }
const char* DeadlineClient::GetAllocationTag() { return ALLOCATION_TAG; }

DeadlineClient::DeadlineClient(const deadline::DeadlineClientConfiguration& clientConfiguration,
                               std::shared_ptr<DeadlineEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DeadlineClient::DeadlineClient(const AWSCredentials& credentials, std::shared_ptr<DeadlineEndpointProviderBase> endpointProvider,
                               const deadline::DeadlineClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DeadlineClient::DeadlineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<DeadlineEndpointProviderBase> endpointProvider,
                               const deadline::DeadlineClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DeadlineClient::DeadlineClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DeadlineClient::DeadlineClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DeadlineClient::DeadlineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DeadlineClient::~DeadlineClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DeadlineEndpointProviderBase>& DeadlineClient::accessEndpointProvider() { return m_endpointProvider; }

void DeadlineClient::init(const deadline::DeadlineClientConfiguration& config) {
  AWSClient::SetServiceClientName("deadline");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "deadline");
}

void DeadlineClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DeadlineClient::InvokeOperationOutcome DeadlineClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateMemberToFarmOutcome DeadlineClient::AssociateMemberToFarm(const AssociateMemberToFarmRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFarm", "Required field: FarmId, is not set");
    return AssociateMemberToFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FarmId]", false));
  }
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFarm", "Required field: PrincipalId, is not set");
    return AssociateMemberToFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateMemberToFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateMemberToFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateMemberToFarm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateMemberToFarmOutcome>(
      [&]() -> AssociateMemberToFarmOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateMemberToFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), AssociateMemberToFarmOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? AssociateMemberToFarmOutcome(AssociateMemberToFarmResult(result.GetResultWithOwnership()))
                                  : AssociateMemberToFarmOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateMemberToFleetOutcome DeadlineClient::AssociateMemberToFleet(const AssociateMemberToFleetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFleet", "Required field: FarmId, is not set");
    return AssociateMemberToFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFleet", "Required field: FleetId, is not set");
    return AssociateMemberToFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FleetId]", false));
  }
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFleet", "Required field: PrincipalId, is not set");
    return AssociateMemberToFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateMemberToFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateMemberToFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateMemberToFleet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateMemberToFleetOutcome>(
      [&]() -> AssociateMemberToFleetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateMemberToFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), AssociateMemberToFleetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? AssociateMemberToFleetOutcome(AssociateMemberToFleetResult(result.GetResultWithOwnership()))
                                  : AssociateMemberToFleetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateMemberToJobOutcome DeadlineClient::AssociateMemberToJob(const AssociateMemberToJobRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToJob", "Required field: FarmId, is not set");
    return AssociateMemberToJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToJob", "Required field: QueueId, is not set");
    return AssociateMemberToJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToJob", "Required field: JobId, is not set");
    return AssociateMemberToJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [JobId]", false));
  }
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToJob", "Required field: PrincipalId, is not set");
    return AssociateMemberToJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateMemberToJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateMemberToJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateMemberToJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateMemberToJobOutcome>(
      [&]() -> AssociateMemberToJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateMemberToJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), AssociateMemberToJobOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? AssociateMemberToJobOutcome(AssociateMemberToJobResult(result.GetResultWithOwnership()))
                                  : AssociateMemberToJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateMemberToQueueOutcome DeadlineClient::AssociateMemberToQueue(const AssociateMemberToQueueRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToQueue", "Required field: FarmId, is not set");
    return AssociateMemberToQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToQueue", "Required field: QueueId, is not set");
    return AssociateMemberToQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [QueueId]", false));
  }
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateMemberToQueue", "Required field: PrincipalId, is not set");
    return AssociateMemberToQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateMemberToQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateMemberToQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateMemberToQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateMemberToQueueOutcome>(
      [&]() -> AssociateMemberToQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateMemberToQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), AssociateMemberToQueueOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? AssociateMemberToQueueOutcome(AssociateMemberToQueueResult(result.GetResultWithOwnership()))
                                  : AssociateMemberToQueueOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeFleetRoleForReadOutcome DeadlineClient::AssumeFleetRoleForRead(const AssumeFleetRoleForReadRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForRead", "Required field: FarmId, is not set");
    return AssumeFleetRoleForReadOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForRead", "Required field: FleetId, is not set");
    return AssumeFleetRoleForReadOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssumeFleetRoleForRead, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeFleetRoleForRead, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeFleetRoleForRead",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeFleetRoleForReadOutcome>(
      [&]() -> AssumeFleetRoleForReadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeFleetRoleForRead, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), AssumeFleetRoleForReadOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/read-roles");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? AssumeFleetRoleForReadOutcome(AssumeFleetRoleForReadResult(result.GetResultWithOwnership()))
                                  : AssumeFleetRoleForReadOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeFleetRoleForWorkerOutcome DeadlineClient::AssumeFleetRoleForWorker(const AssumeFleetRoleForWorkerRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForWorker", "Required field: FarmId, is not set");
    return AssumeFleetRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForWorker", "Required field: FleetId, is not set");
    return AssumeFleetRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForWorker", "Required field: WorkerId, is not set");
    return AssumeFleetRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssumeFleetRoleForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeFleetRoleForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeFleetRoleForWorker",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeFleetRoleForWorkerOutcome>(
      [&]() -> AssumeFleetRoleForWorkerOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeFleetRoleForWorker, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("scheduling.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), AssumeFleetRoleForWorkerOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleet-roles");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? AssumeFleetRoleForWorkerOutcome(AssumeFleetRoleForWorkerResult(result.GetResultWithOwnership()))
                                  : AssumeFleetRoleForWorkerOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeQueueRoleForReadOutcome DeadlineClient::AssumeQueueRoleForRead(const AssumeQueueRoleForReadRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForRead", "Required field: FarmId, is not set");
    return AssumeQueueRoleForReadOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForRead", "Required field: QueueId, is not set");
    return AssumeQueueRoleForReadOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssumeQueueRoleForRead, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeQueueRoleForRead, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeQueueRoleForRead",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeQueueRoleForReadOutcome>(
      [&]() -> AssumeQueueRoleForReadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeQueueRoleForRead, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), AssumeQueueRoleForReadOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/read-roles");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? AssumeQueueRoleForReadOutcome(AssumeQueueRoleForReadResult(result.GetResultWithOwnership()))
                                  : AssumeQueueRoleForReadOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeQueueRoleForUserOutcome DeadlineClient::AssumeQueueRoleForUser(const AssumeQueueRoleForUserRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForUser", "Required field: FarmId, is not set");
    return AssumeQueueRoleForUserOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForUser", "Required field: QueueId, is not set");
    return AssumeQueueRoleForUserOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssumeQueueRoleForUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeQueueRoleForUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeQueueRoleForUser",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeQueueRoleForUserOutcome>(
      [&]() -> AssumeQueueRoleForUserOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeQueueRoleForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), AssumeQueueRoleForUserOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/user-roles");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? AssumeQueueRoleForUserOutcome(AssumeQueueRoleForUserResult(result.GetResultWithOwnership()))
                                  : AssumeQueueRoleForUserOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeQueueRoleForWorkerOutcome DeadlineClient::AssumeQueueRoleForWorker(const AssumeQueueRoleForWorkerRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForWorker", "Required field: FarmId, is not set");
    return AssumeQueueRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForWorker", "Required field: FleetId, is not set");
    return AssumeQueueRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForWorker", "Required field: WorkerId, is not set");
    return AssumeQueueRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [WorkerId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForWorker", "Required field: QueueId, is not set");
    return AssumeQueueRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssumeQueueRoleForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeQueueRoleForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeQueueRoleForWorker",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeQueueRoleForWorkerOutcome>(
      [&]() -> AssumeQueueRoleForWorkerOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeQueueRoleForWorker, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("scheduling.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), AssumeQueueRoleForWorkerOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-roles");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? AssumeQueueRoleForWorkerOutcome(AssumeQueueRoleForWorkerResult(result.GetResultWithOwnership()))
                                  : AssumeQueueRoleForWorkerOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetJobEntityOutcome DeadlineClient::BatchGetJobEntity(const BatchGetJobEntityRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetJobEntity", "Required field: FarmId, is not set");
    return BatchGetJobEntityOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetJobEntity", "Required field: FleetId, is not set");
    return BatchGetJobEntityOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetJobEntity", "Required field: WorkerId, is not set");
    return BatchGetJobEntityOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetJobEntity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetJobEntity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetJobEntity",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetJobEntityOutcome>(
      [&]() -> BatchGetJobEntityOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetJobEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("scheduling.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), BatchGetJobEntityOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/batchGetJobEntity");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? BatchGetJobEntityOutcome(BatchGetJobEntityResult(result.GetResultWithOwnership()))
                                  : BatchGetJobEntityOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CopyJobTemplateOutcome DeadlineClient::CopyJobTemplate(const CopyJobTemplateRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyJobTemplate", "Required field: FarmId, is not set");
    return CopyJobTemplateOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FarmId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyJobTemplate", "Required field: JobId, is not set");
    return CopyJobTemplateOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [JobId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyJobTemplate", "Required field: QueueId, is not set");
    return CopyJobTemplateOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CopyJobTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CopyJobTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CopyJobTemplate",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CopyJobTemplateOutcome>(
      [&]() -> CopyJobTemplateOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CopyJobTemplateOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/template");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CopyJobTemplateOutcome(CopyJobTemplateResult(result.GetResultWithOwnership()))
                                  : CopyJobTemplateOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBudgetOutcome DeadlineClient::CreateBudget(const CreateBudgetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBudget", "Required field: FarmId, is not set");
    return CreateBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBudget",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBudgetOutcome>(
      [&]() -> CreateBudgetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateBudgetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/budgets");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateBudgetOutcome(CreateBudgetResult(result.GetResultWithOwnership()))
                                  : CreateBudgetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFarmOutcome DeadlineClient::CreateFarm(const CreateFarmRequest& request) const {
  AWS_OPERATION_GUARD(CreateFarm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFarm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFarmOutcome>(
      [&]() -> CreateFarmOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateFarmOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateFarmOutcome(CreateFarmResult(result.GetResultWithOwnership()))
                                  : CreateFarmOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFleetOutcome DeadlineClient::CreateFleet(const CreateFleetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFleet", "Required field: FarmId, is not set");
    return CreateFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFleet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFleetOutcome>(
      [&]() -> CreateFleetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateFleetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateFleetOutcome(CreateFleetResult(result.GetResultWithOwnership()))
                                  : CreateFleetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateJobOutcome DeadlineClient::CreateJob(const CreateJobRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: FarmId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: QueueId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateJobOutcome>(
      [&]() -> CreateJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateJobOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateJobOutcome(CreateJobResult(result.GetResultWithOwnership()))
                                  : CreateJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLicenseEndpointOutcome DeadlineClient::CreateLicenseEndpoint(const CreateLicenseEndpointRequest& request) const {
  AWS_OPERATION_GUARD(CreateLicenseEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLicenseEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateLicenseEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateLicenseEndpointOutcome>(
      [&]() -> CreateLicenseEndpointOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLicenseEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateLicenseEndpointOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateLicenseEndpointOutcome(CreateLicenseEndpointResult(result.GetResultWithOwnership()))
                                  : CreateLicenseEndpointOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLimitOutcome DeadlineClient::CreateLimit(const CreateLimitRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLimit", "Required field: FarmId, is not set");
    return CreateLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateLimit",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateLimitOutcome>(
      [&]() -> CreateLimitOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateLimitOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/limits");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateLimitOutcome(CreateLimitResult(result.GetResultWithOwnership()))
                                  : CreateLimitOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMonitorOutcome DeadlineClient::CreateMonitor(const CreateMonitorRequest& request) const {
  AWS_OPERATION_GUARD(CreateMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMonitor",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMonitorOutcome>(
      [&]() -> CreateMonitorOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateMonitorOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateMonitorOutcome(CreateMonitorResult(result.GetResultWithOwnership()))
                                  : CreateMonitorOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQueueOutcome DeadlineClient::CreateQueue(const CreateQueueRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueue", "Required field: FarmId, is not set");
    return CreateQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQueueOutcome>(
      [&]() -> CreateQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateQueueOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateQueueOutcome(CreateQueueResult(result.GetResultWithOwnership()))
                                  : CreateQueueOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQueueEnvironmentOutcome DeadlineClient::CreateQueueEnvironment(const CreateQueueEnvironmentRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueueEnvironment", "Required field: FarmId, is not set");
    return CreateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueueEnvironment", "Required field: QueueId, is not set");
    return CreateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQueueEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQueueEnvironmentOutcome>(
      [&]() -> CreateQueueEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQueueEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateQueueEnvironmentOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateQueueEnvironmentOutcome(CreateQueueEnvironmentResult(result.GetResultWithOwnership()))
                                  : CreateQueueEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQueueFleetAssociationOutcome DeadlineClient::CreateQueueFleetAssociation(const CreateQueueFleetAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueueFleetAssociation", "Required field: FarmId, is not set");
    return CreateQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQueueFleetAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQueueFleetAssociationOutcome>(
      [&]() -> CreateQueueFleetAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQueueFleetAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateQueueFleetAssociationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateQueueFleetAssociationOutcome(CreateQueueFleetAssociationResult(result.GetResultWithOwnership()))
                                  : CreateQueueFleetAssociationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQueueLimitAssociationOutcome DeadlineClient::CreateQueueLimitAssociation(const CreateQueueLimitAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueueLimitAssociation", "Required field: FarmId, is not set");
    return CreateQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQueueLimitAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQueueLimitAssociationOutcome>(
      [&]() -> CreateQueueLimitAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQueueLimitAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateQueueLimitAssociationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateQueueLimitAssociationOutcome(CreateQueueLimitAssociationResult(result.GetResultWithOwnership()))
                                  : CreateQueueLimitAssociationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateStorageProfileOutcome DeadlineClient::CreateStorageProfile(const CreateStorageProfileRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateStorageProfile", "Required field: FarmId, is not set");
    return CreateStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateStorageProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateStorageProfileOutcome>(
      [&]() -> CreateStorageProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStorageProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateStorageProfileOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateStorageProfileOutcome(CreateStorageProfileResult(result.GetResultWithOwnership()))
                                  : CreateStorageProfileOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkerOutcome DeadlineClient::CreateWorker(const CreateWorkerRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorker", "Required field: FarmId, is not set");
    return CreateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorker", "Required field: FleetId, is not set");
    return CreateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorker",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkerOutcome>(
      [&]() -> CreateWorkerOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("scheduling.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateWorkerOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateWorkerOutcome(CreateWorkerResult(result.GetResultWithOwnership()))
                                  : CreateWorkerOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBudgetOutcome DeadlineClient::DeleteBudget(const DeleteBudgetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBudget", "Required field: FarmId, is not set");
    return DeleteBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FarmId]", false));
  }
  if (!request.BudgetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBudget", "Required field: BudgetId, is not set");
    return DeleteBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [BudgetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBudget",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBudgetOutcome>(
      [&]() -> DeleteBudgetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteBudgetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/budgets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBudgetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteBudgetOutcome(DeleteBudgetResult(result.GetResultWithOwnership()))
                                  : DeleteBudgetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFarmOutcome DeadlineClient::DeleteFarm(const DeleteFarmRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFarm", "Required field: FarmId, is not set");
    return DeleteFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFarm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFarmOutcome>(
      [&]() -> DeleteFarmOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteFarmOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteFarmOutcome(DeleteFarmResult(result.GetResultWithOwnership()))
                                  : DeleteFarmOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFleetOutcome DeadlineClient::DeleteFleet(const DeleteFleetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFleet", "Required field: FarmId, is not set");
    return DeleteFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFleet", "Required field: FleetId, is not set");
    return DeleteFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFleet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFleetOutcome>(
      [&]() -> DeleteFleetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteFleetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteFleetOutcome(DeleteFleetResult(result.GetResultWithOwnership()))
                                  : DeleteFleetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLicenseEndpointOutcome DeadlineClient::DeleteLicenseEndpoint(const DeleteLicenseEndpointRequest& request) const {
  if (!request.LicenseEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLicenseEndpoint", "Required field: LicenseEndpointId, is not set");
    return DeleteLicenseEndpointOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [LicenseEndpointId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteLicenseEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteLicenseEndpointOutcome>(
      [&]() -> DeleteLicenseEndpointOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLicenseEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteLicenseEndpointOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteLicenseEndpointOutcome(DeleteLicenseEndpointResult(result.GetResultWithOwnership()))
                                  : DeleteLicenseEndpointOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLimitOutcome DeadlineClient::DeleteLimit(const DeleteLimitRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLimit", "Required field: FarmId, is not set");
    return DeleteLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.LimitIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLimit", "Required field: LimitId, is not set");
    return DeleteLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteLimit",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteLimitOutcome>(
      [&]() -> DeleteLimitOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteLimitOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/limits/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteLimitOutcome(DeleteLimitResult(result.GetResultWithOwnership()))
                                  : DeleteLimitOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMeteredProductOutcome DeadlineClient::DeleteMeteredProduct(const DeleteMeteredProductRequest& request) const {
  if (!request.LicenseEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMeteredProduct", "Required field: LicenseEndpointId, is not set");
    return DeleteMeteredProductOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [LicenseEndpointId]", false));
  }
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMeteredProduct", "Required field: ProductId, is not set");
    return DeleteMeteredProductOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProductId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMeteredProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMeteredProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMeteredProduct",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMeteredProductOutcome>(
      [&]() -> DeleteMeteredProductOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMeteredProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteMeteredProductOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/metered-products/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteMeteredProductOutcome(DeleteMeteredProductResult(result.GetResultWithOwnership()))
                                  : DeleteMeteredProductOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMonitorOutcome DeadlineClient::DeleteMonitor(const DeleteMonitorRequest& request) const {
  if (!request.MonitorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMonitor", "Required field: MonitorId, is not set");
    return DeleteMonitorOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [MonitorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMonitor",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMonitorOutcome>(
      [&]() -> DeleteMonitorOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteMonitorOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteMonitorOutcome(DeleteMonitorResult(result.GetResultWithOwnership()))
                                  : DeleteMonitorOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueueOutcome DeadlineClient::DeleteQueue(const DeleteQueueRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueue", "Required field: FarmId, is not set");
    return DeleteQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueue", "Required field: QueueId, is not set");
    return DeleteQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueueOutcome>(
      [&]() -> DeleteQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteQueueOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteQueueOutcome(DeleteQueueResult(result.GetResultWithOwnership()))
                                  : DeleteQueueOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueueEnvironmentOutcome DeadlineClient::DeleteQueueEnvironment(const DeleteQueueEnvironmentRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueueEnvironment", "Required field: FarmId, is not set");
    return DeleteQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueueEnvironment", "Required field: QueueId, is not set");
    return DeleteQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [QueueId]", false));
  }
  if (!request.QueueEnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueueEnvironment", "Required field: QueueEnvironmentId, is not set");
    return DeleteQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [QueueEnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueueEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueueEnvironmentOutcome>(
      [&]() -> DeleteQueueEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueueEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteQueueEnvironmentOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueEnvironmentId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteQueueEnvironmentOutcome(DeleteQueueEnvironmentResult(result.GetResultWithOwnership()))
                                  : DeleteQueueEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueueFleetAssociationOutcome DeadlineClient::DeleteQueueFleetAssociation(const DeleteQueueFleetAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueueFleetAssociation", "Required field: FarmId, is not set");
    return DeleteQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueueFleetAssociation", "Required field: QueueId, is not set");
    return DeleteQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [QueueId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueueFleetAssociation", "Required field: FleetId, is not set");
    return DeleteQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueueFleetAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueueFleetAssociationOutcome>(
      [&]() -> DeleteQueueFleetAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueueFleetAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteQueueFleetAssociationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteQueueFleetAssociationOutcome(DeleteQueueFleetAssociationResult(result.GetResultWithOwnership()))
                                  : DeleteQueueFleetAssociationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueueLimitAssociationOutcome DeadlineClient::DeleteQueueLimitAssociation(const DeleteQueueLimitAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueueLimitAssociation", "Required field: FarmId, is not set");
    return DeleteQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueueLimitAssociation", "Required field: QueueId, is not set");
    return DeleteQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [QueueId]", false));
  }
  if (!request.LimitIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueueLimitAssociation", "Required field: LimitId, is not set");
    return DeleteQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueueLimitAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueueLimitAssociationOutcome>(
      [&]() -> DeleteQueueLimitAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueueLimitAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteQueueLimitAssociationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteQueueLimitAssociationOutcome(DeleteQueueLimitAssociationResult(result.GetResultWithOwnership()))
                                  : DeleteQueueLimitAssociationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteStorageProfileOutcome DeadlineClient::DeleteStorageProfile(const DeleteStorageProfileRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStorageProfile", "Required field: FarmId, is not set");
    return DeleteStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FarmId]", false));
  }
  if (!request.StorageProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStorageProfile", "Required field: StorageProfileId, is not set");
    return DeleteStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [StorageProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteStorageProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteStorageProfileOutcome>(
      [&]() -> DeleteStorageProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStorageProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteStorageProfileOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageProfileId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteStorageProfileOutcome(DeleteStorageProfileResult(result.GetResultWithOwnership()))
                                  : DeleteStorageProfileOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWorkerOutcome DeadlineClient::DeleteWorker(const DeleteWorkerRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorker", "Required field: FarmId, is not set");
    return DeleteWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorker", "Required field: FleetId, is not set");
    return DeleteWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorker", "Required field: WorkerId, is not set");
    return DeleteWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWorker",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWorkerOutcome>(
      [&]() -> DeleteWorkerOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteWorkerOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteWorkerOutcome(DeleteWorkerResult(result.GetResultWithOwnership()))
                                  : DeleteWorkerOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateMemberFromFarmOutcome DeadlineClient::DisassociateMemberFromFarm(const DisassociateMemberFromFarmRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFarm", "Required field: FarmId, is not set");
    return DisassociateMemberFromFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FarmId]", false));
  }
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFarm", "Required field: PrincipalId, is not set");
    return DisassociateMemberFromFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DisassociateMemberFromFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateMemberFromFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateMemberFromFarm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateMemberFromFarmOutcome>(
      [&]() -> DisassociateMemberFromFarmOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateMemberFromFarm, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DisassociateMemberFromFarmOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DisassociateMemberFromFarmOutcome(DisassociateMemberFromFarmResult(result.GetResultWithOwnership()))
                                  : DisassociateMemberFromFarmOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateMemberFromFleetOutcome DeadlineClient::DisassociateMemberFromFleet(const DisassociateMemberFromFleetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFleet", "Required field: FarmId, is not set");
    return DisassociateMemberFromFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFleet", "Required field: FleetId, is not set");
    return DisassociateMemberFromFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FleetId]", false));
  }
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFleet", "Required field: PrincipalId, is not set");
    return DisassociateMemberFromFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DisassociateMemberFromFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateMemberFromFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateMemberFromFleet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateMemberFromFleetOutcome>(
      [&]() -> DisassociateMemberFromFleetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateMemberFromFleet, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DisassociateMemberFromFleetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DisassociateMemberFromFleetOutcome(DisassociateMemberFromFleetResult(result.GetResultWithOwnership()))
                                  : DisassociateMemberFromFleetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateMemberFromJobOutcome DeadlineClient::DisassociateMemberFromJob(const DisassociateMemberFromJobRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromJob", "Required field: FarmId, is not set");
    return DisassociateMemberFromJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromJob", "Required field: QueueId, is not set");
    return DisassociateMemberFromJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromJob", "Required field: JobId, is not set");
    return DisassociateMemberFromJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [JobId]", false));
  }
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromJob", "Required field: PrincipalId, is not set");
    return DisassociateMemberFromJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DisassociateMemberFromJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateMemberFromJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateMemberFromJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateMemberFromJobOutcome>(
      [&]() -> DisassociateMemberFromJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateMemberFromJob, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DisassociateMemberFromJobOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DisassociateMemberFromJobOutcome(DisassociateMemberFromJobResult(result.GetResultWithOwnership()))
                                  : DisassociateMemberFromJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateMemberFromQueueOutcome DeadlineClient::DisassociateMemberFromQueue(const DisassociateMemberFromQueueRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromQueue", "Required field: FarmId, is not set");
    return DisassociateMemberFromQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromQueue", "Required field: QueueId, is not set");
    return DisassociateMemberFromQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [QueueId]", false));
  }
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromQueue", "Required field: PrincipalId, is not set");
    return DisassociateMemberFromQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DisassociateMemberFromQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateMemberFromQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateMemberFromQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateMemberFromQueueOutcome>(
      [&]() -> DisassociateMemberFromQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateMemberFromQueue, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DisassociateMemberFromQueueOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DisassociateMemberFromQueueOutcome(DisassociateMemberFromQueueResult(result.GetResultWithOwnership()))
                                  : DisassociateMemberFromQueueOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBudgetOutcome DeadlineClient::GetBudget(const GetBudgetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBudget", "Required field: FarmId, is not set");
    return GetBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FarmId]", false));
  }
  if (!request.BudgetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBudget", "Required field: BudgetId, is not set");
    return GetBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [BudgetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBudget",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBudgetOutcome>(
      [&]() -> GetBudgetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetBudgetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/budgets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBudgetId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetBudgetOutcome(GetBudgetResult(result.GetResultWithOwnership()))
                                  : GetBudgetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFarmOutcome DeadlineClient::GetFarm(const GetFarmRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFarm", "Required field: FarmId, is not set");
    return GetFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFarm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFarmOutcome>(
      [&]() -> GetFarmOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetFarmOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetFarmOutcome(GetFarmResult(result.GetResultWithOwnership())) : GetFarmOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFleetOutcome DeadlineClient::GetFleet(const GetFleetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFleet", "Required field: FarmId, is not set");
    return GetFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFleet", "Required field: FleetId, is not set");
    return GetFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFleet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFleetOutcome>(
      [&]() -> GetFleetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetFleetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetFleetOutcome(GetFleetResult(result.GetResultWithOwnership())) : GetFleetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetJobOutcome DeadlineClient::GetJob(const GetJobRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: FarmId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: QueueId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: JobId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetJobOutcome>(
      [&]() -> GetJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetJobOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetJobOutcome(GetJobResult(result.GetResultWithOwnership())) : GetJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLicenseEndpointOutcome DeadlineClient::GetLicenseEndpoint(const GetLicenseEndpointRequest& request) const {
  if (!request.LicenseEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLicenseEndpoint", "Required field: LicenseEndpointId, is not set");
    return GetLicenseEndpointOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [LicenseEndpointId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLicenseEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLicenseEndpointOutcome>(
      [&]() -> GetLicenseEndpointOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLicenseEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetLicenseEndpointOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetLicenseEndpointOutcome(GetLicenseEndpointResult(result.GetResultWithOwnership()))
                                  : GetLicenseEndpointOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLimitOutcome DeadlineClient::GetLimit(const GetLimitRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLimit", "Required field: FarmId, is not set");
    return GetLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [FarmId]", false));
  }
  if (!request.LimitIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLimit", "Required field: LimitId, is not set");
    return GetLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLimit",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLimitOutcome>(
      [&]() -> GetLimitOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetLimitOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/limits/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetLimitOutcome(GetLimitResult(result.GetResultWithOwnership())) : GetLimitOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMonitorOutcome DeadlineClient::GetMonitor(const GetMonitorRequest& request) const {
  if (!request.MonitorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMonitor", "Required field: MonitorId, is not set");
    return GetMonitorOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [MonitorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMonitor",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMonitorOutcome>(
      [&]() -> GetMonitorOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMonitorOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetMonitorOutcome(GetMonitorResult(result.GetResultWithOwnership()))
                                  : GetMonitorOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueueOutcome DeadlineClient::GetQueue(const GetQueueRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueue", "Required field: FarmId, is not set");
    return GetQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueue", "Required field: QueueId, is not set");
    return GetQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueueOutcome>(
      [&]() -> GetQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetQueueOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetQueueOutcome(GetQueueResult(result.GetResultWithOwnership())) : GetQueueOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueueEnvironmentOutcome DeadlineClient::GetQueueEnvironment(const GetQueueEnvironmentRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueueEnvironment", "Required field: FarmId, is not set");
    return GetQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueueEnvironment", "Required field: QueueId, is not set");
    return GetQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [QueueId]", false));
  }
  if (!request.QueueEnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueueEnvironment", "Required field: QueueEnvironmentId, is not set");
    return GetQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [QueueEnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueueEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueueEnvironmentOutcome>(
      [&]() -> GetQueueEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueueEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetQueueEnvironmentOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueEnvironmentId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetQueueEnvironmentOutcome(GetQueueEnvironmentResult(result.GetResultWithOwnership()))
                                  : GetQueueEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueueFleetAssociationOutcome DeadlineClient::GetQueueFleetAssociation(const GetQueueFleetAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueueFleetAssociation", "Required field: FarmId, is not set");
    return GetQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueueFleetAssociation", "Required field: QueueId, is not set");
    return GetQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [QueueId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueueFleetAssociation", "Required field: FleetId, is not set");
    return GetQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueueFleetAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueueFleetAssociationOutcome>(
      [&]() -> GetQueueFleetAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueueFleetAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetQueueFleetAssociationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetQueueFleetAssociationOutcome(GetQueueFleetAssociationResult(result.GetResultWithOwnership()))
                                  : GetQueueFleetAssociationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueueLimitAssociationOutcome DeadlineClient::GetQueueLimitAssociation(const GetQueueLimitAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueueLimitAssociation", "Required field: FarmId, is not set");
    return GetQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueueLimitAssociation", "Required field: QueueId, is not set");
    return GetQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [QueueId]", false));
  }
  if (!request.LimitIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueueLimitAssociation", "Required field: LimitId, is not set");
    return GetQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueueLimitAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueueLimitAssociationOutcome>(
      [&]() -> GetQueueLimitAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueueLimitAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetQueueLimitAssociationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetQueueLimitAssociationOutcome(GetQueueLimitAssociationResult(result.GetResultWithOwnership()))
                                  : GetQueueLimitAssociationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionOutcome DeadlineClient::GetSession(const GetSessionRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: FarmId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: QueueId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: JobId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [JobId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSession",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionOutcome>(
      [&]() -> GetSessionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetSessionOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetSessionOutcome(GetSessionResult(result.GetResultWithOwnership()))
                                  : GetSessionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionActionOutcome DeadlineClient::GetSessionAction(const GetSessionActionRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSessionAction", "Required field: FarmId, is not set");
    return GetSessionActionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSessionAction", "Required field: QueueId, is not set");
    return GetSessionActionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSessionAction", "Required field: JobId, is not set");
    return GetSessionActionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [JobId]", false));
  }
  if (!request.SessionActionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSessionAction", "Required field: SessionActionId, is not set");
    return GetSessionActionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SessionActionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSessionAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSessionAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSessionAction",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionActionOutcome>(
      [&]() -> GetSessionActionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSessionAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetSessionActionOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/session-actions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionActionId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetSessionActionOutcome(GetSessionActionResult(result.GetResultWithOwnership()))
                                  : GetSessionActionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionsStatisticsAggregationOutcome DeadlineClient::GetSessionsStatisticsAggregation(
    const GetSessionsStatisticsAggregationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSessionsStatisticsAggregation", "Required field: FarmId, is not set");
    return GetSessionsStatisticsAggregationOutcome(Aws::Client::AWSError<DeadlineErrors>(
        DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.AggregationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSessionsStatisticsAggregation", "Required field: AggregationId, is not set");
    return GetSessionsStatisticsAggregationOutcome(Aws::Client::AWSError<DeadlineErrors>(
        DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AggregationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSessionsStatisticsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSessionsStatisticsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSessionsStatisticsAggregation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionsStatisticsAggregationOutcome>(
      [&]() -> GetSessionsStatisticsAggregationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSessionsStatisticsAggregation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetSessionsStatisticsAggregationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions-statistics-aggregation");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess()
                   ? GetSessionsStatisticsAggregationOutcome(GetSessionsStatisticsAggregationResult(result.GetResultWithOwnership()))
                   : GetSessionsStatisticsAggregationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStepOutcome DeadlineClient::GetStep(const GetStepRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStep", "Required field: FarmId, is not set");
    return GetStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStep", "Required field: QueueId, is not set");
    return GetStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStep", "Required field: JobId, is not set");
    return GetStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStep", "Required field: StepId, is not set");
    return GetStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStep",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStepOutcome>(
      [&]() -> GetStepOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetStepOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetStepOutcome(GetStepResult(result.GetResultWithOwnership())) : GetStepOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStorageProfileOutcome DeadlineClient::GetStorageProfile(const GetStorageProfileRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageProfile", "Required field: FarmId, is not set");
    return GetStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [FarmId]", false));
  }
  if (!request.StorageProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageProfile", "Required field: StorageProfileId, is not set");
    return GetStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [StorageProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStorageProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStorageProfileOutcome>(
      [&]() -> GetStorageProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStorageProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetStorageProfileOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageProfileId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetStorageProfileOutcome(GetStorageProfileResult(result.GetResultWithOwnership()))
                                  : GetStorageProfileOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStorageProfileForQueueOutcome DeadlineClient::GetStorageProfileForQueue(const GetStorageProfileForQueueRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageProfileForQueue", "Required field: FarmId, is not set");
    return GetStorageProfileForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageProfileForQueue", "Required field: QueueId, is not set");
    return GetStorageProfileForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [QueueId]", false));
  }
  if (!request.StorageProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetStorageProfileForQueue", "Required field: StorageProfileId, is not set");
    return GetStorageProfileForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [StorageProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetStorageProfileForQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStorageProfileForQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStorageProfileForQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStorageProfileForQueueOutcome>(
      [&]() -> GetStorageProfileForQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStorageProfileForQueue, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetStorageProfileForQueueOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageProfileId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetStorageProfileForQueueOutcome(GetStorageProfileForQueueResult(result.GetResultWithOwnership()))
                                  : GetStorageProfileForQueueOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTaskOutcome DeadlineClient::GetTask(const GetTaskRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: FarmId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: QueueId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: JobId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: StepId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [StepId]", false));
  }
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: TaskId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [TaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTask",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTaskOutcome>(
      [&]() -> GetTaskOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetTaskOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tasks/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetTaskOutcome(GetTaskResult(result.GetResultWithOwnership())) : GetTaskOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWorkerOutcome DeadlineClient::GetWorker(const GetWorkerRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorker", "Required field: FarmId, is not set");
    return GetWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorker", "Required field: FleetId, is not set");
    return GetWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorker", "Required field: WorkerId, is not set");
    return GetWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWorker",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWorkerOutcome>(
      [&]() -> GetWorkerOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetWorkerOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetWorkerOutcome(GetWorkerResult(result.GetResultWithOwnership()))
                                  : GetWorkerOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAvailableMeteredProductsOutcome DeadlineClient::ListAvailableMeteredProducts(const ListAvailableMeteredProductsRequest& request) const {
  AWS_OPERATION_GUARD(ListAvailableMeteredProducts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAvailableMeteredProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAvailableMeteredProducts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAvailableMeteredProducts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAvailableMeteredProducts",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAvailableMeteredProductsOutcome>(
      [&]() -> ListAvailableMeteredProductsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAvailableMeteredProducts, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListAvailableMeteredProductsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/metered-products");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListAvailableMeteredProductsOutcome(ListAvailableMeteredProductsResult(result.GetResultWithOwnership()))
                                  : ListAvailableMeteredProductsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBudgetsOutcome DeadlineClient::ListBudgets(const ListBudgetsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBudgets", "Required field: FarmId, is not set");
    return ListBudgetsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBudgets",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBudgetsOutcome>(
      [&]() -> ListBudgetsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBudgets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListBudgetsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/budgets");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListBudgetsOutcome(ListBudgetsResult(result.GetResultWithOwnership()))
                                  : ListBudgetsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFarmMembersOutcome DeadlineClient::ListFarmMembers(const ListFarmMembersRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFarmMembers", "Required field: FarmId, is not set");
    return ListFarmMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFarmMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFarmMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFarmMembers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFarmMembersOutcome>(
      [&]() -> ListFarmMembersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFarmMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListFarmMembersOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListFarmMembersOutcome(ListFarmMembersResult(result.GetResultWithOwnership()))
                                  : ListFarmMembersOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFarmsOutcome DeadlineClient::ListFarms(const ListFarmsRequest& request) const {
  AWS_OPERATION_GUARD(ListFarms);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFarms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFarms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFarms",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFarmsOutcome>(
      [&]() -> ListFarmsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListFarmsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListFarmsOutcome(ListFarmsResult(result.GetResultWithOwnership()))
                                  : ListFarmsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFleetMembersOutcome DeadlineClient::ListFleetMembers(const ListFleetMembersRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFleetMembers", "Required field: FarmId, is not set");
    return ListFleetMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFleetMembers", "Required field: FleetId, is not set");
    return ListFleetMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFleetMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFleetMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFleetMembers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFleetMembersOutcome>(
      [&]() -> ListFleetMembersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFleetMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListFleetMembersOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListFleetMembersOutcome(ListFleetMembersResult(result.GetResultWithOwnership()))
                                  : ListFleetMembersOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFleetsOutcome DeadlineClient::ListFleets(const ListFleetsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFleets", "Required field: FarmId, is not set");
    return ListFleetsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFleets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFleets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFleets",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFleetsOutcome>(
      [&]() -> ListFleetsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListFleetsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListFleetsOutcome(ListFleetsResult(result.GetResultWithOwnership()))
                                  : ListFleetsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobMembersOutcome DeadlineClient::ListJobMembers(const ListJobMembersRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobMembers", "Required field: FarmId, is not set");
    return ListJobMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobMembers", "Required field: QueueId, is not set");
    return ListJobMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobMembers", "Required field: JobId, is not set");
    return ListJobMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListJobMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobMembers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobMembersOutcome>(
      [&]() -> ListJobMembersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListJobMembersOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListJobMembersOutcome(ListJobMembersResult(result.GetResultWithOwnership()))
                                  : ListJobMembersOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobParameterDefinitionsOutcome DeadlineClient::ListJobParameterDefinitions(const ListJobParameterDefinitionsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobParameterDefinitions", "Required field: FarmId, is not set");
    return ListJobParameterDefinitionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobParameterDefinitions", "Required field: JobId, is not set");
    return ListJobParameterDefinitionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [JobId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobParameterDefinitions", "Required field: QueueId, is not set");
    return ListJobParameterDefinitionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListJobParameterDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobParameterDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobParameterDefinitions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobParameterDefinitionsOutcome>(
      [&]() -> ListJobParameterDefinitionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobParameterDefinitions, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListJobParameterDefinitionsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/parameter-definitions");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListJobParameterDefinitionsOutcome(ListJobParameterDefinitionsResult(result.GetResultWithOwnership()))
                                  : ListJobParameterDefinitionsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobsOutcome DeadlineClient::ListJobs(const ListJobsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: FarmId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: QueueId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobsOutcome>(
      [&]() -> ListJobsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListJobsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListJobsOutcome(ListJobsResult(result.GetResultWithOwnership())) : ListJobsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLicenseEndpointsOutcome DeadlineClient::ListLicenseEndpoints(const ListLicenseEndpointsRequest& request) const {
  AWS_OPERATION_GUARD(ListLicenseEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLicenseEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListLicenseEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLicenseEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLicenseEndpoints",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLicenseEndpointsOutcome>(
      [&]() -> ListLicenseEndpointsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLicenseEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListLicenseEndpointsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListLicenseEndpointsOutcome(ListLicenseEndpointsResult(result.GetResultWithOwnership()))
                                  : ListLicenseEndpointsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLimitsOutcome DeadlineClient::ListLimits(const ListLimitsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLimits", "Required field: FarmId, is not set");
    return ListLimitsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLimits",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLimitsOutcome>(
      [&]() -> ListLimitsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListLimitsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/limits");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListLimitsOutcome(ListLimitsResult(result.GetResultWithOwnership()))
                                  : ListLimitsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMeteredProductsOutcome DeadlineClient::ListMeteredProducts(const ListMeteredProductsRequest& request) const {
  if (!request.LicenseEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMeteredProducts", "Required field: LicenseEndpointId, is not set");
    return ListMeteredProductsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [LicenseEndpointId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMeteredProducts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMeteredProducts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMeteredProducts",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMeteredProductsOutcome>(
      [&]() -> ListMeteredProductsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMeteredProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListMeteredProductsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/metered-products");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListMeteredProductsOutcome(ListMeteredProductsResult(result.GetResultWithOwnership()))
                                  : ListMeteredProductsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMonitorsOutcome DeadlineClient::ListMonitors(const ListMonitorsRequest& request) const {
  AWS_OPERATION_GUARD(ListMonitors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMonitors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMonitors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMonitors",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMonitorsOutcome>(
      [&]() -> ListMonitorsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListMonitorsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListMonitorsOutcome(ListMonitorsResult(result.GetResultWithOwnership()))
                                  : ListMonitorsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueueEnvironmentsOutcome DeadlineClient::ListQueueEnvironments(const ListQueueEnvironmentsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueEnvironments", "Required field: FarmId, is not set");
    return ListQueueEnvironmentsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueEnvironments", "Required field: QueueId, is not set");
    return ListQueueEnvironmentsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListQueueEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueueEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueueEnvironments",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueueEnvironmentsOutcome>(
      [&]() -> ListQueueEnvironmentsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueueEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListQueueEnvironmentsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListQueueEnvironmentsOutcome(ListQueueEnvironmentsResult(result.GetResultWithOwnership()))
                                  : ListQueueEnvironmentsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueueFleetAssociationsOutcome DeadlineClient::ListQueueFleetAssociations(const ListQueueFleetAssociationsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueFleetAssociations", "Required field: FarmId, is not set");
    return ListQueueFleetAssociationsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListQueueFleetAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueueFleetAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueueFleetAssociations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueueFleetAssociationsOutcome>(
      [&]() -> ListQueueFleetAssociationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueueFleetAssociations, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListQueueFleetAssociationsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListQueueFleetAssociationsOutcome(ListQueueFleetAssociationsResult(result.GetResultWithOwnership()))
                                  : ListQueueFleetAssociationsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueueLimitAssociationsOutcome DeadlineClient::ListQueueLimitAssociations(const ListQueueLimitAssociationsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueLimitAssociations", "Required field: FarmId, is not set");
    return ListQueueLimitAssociationsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListQueueLimitAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueueLimitAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueueLimitAssociations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueueLimitAssociationsOutcome>(
      [&]() -> ListQueueLimitAssociationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueueLimitAssociations, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListQueueLimitAssociationsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListQueueLimitAssociationsOutcome(ListQueueLimitAssociationsResult(result.GetResultWithOwnership()))
                                  : ListQueueLimitAssociationsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueueMembersOutcome DeadlineClient::ListQueueMembers(const ListQueueMembersRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueMembers", "Required field: FarmId, is not set");
    return ListQueueMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueMembers", "Required field: QueueId, is not set");
    return ListQueueMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListQueueMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueueMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueueMembers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueueMembersOutcome>(
      [&]() -> ListQueueMembersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueueMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListQueueMembersOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/members");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListQueueMembersOutcome(ListQueueMembersResult(result.GetResultWithOwnership()))
                                  : ListQueueMembersOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueuesOutcome DeadlineClient::ListQueues(const ListQueuesRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueues", "Required field: FarmId, is not set");
    return ListQueuesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueues",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueuesOutcome>(
      [&]() -> ListQueuesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListQueuesOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListQueuesOutcome(ListQueuesResult(result.GetResultWithOwnership()))
                                  : ListQueuesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionActionsOutcome DeadlineClient::ListSessionActions(const ListSessionActionsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessionActions", "Required field: FarmId, is not set");
    return ListSessionActionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessionActions", "Required field: QueueId, is not set");
    return ListSessionActionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessionActions", "Required field: JobId, is not set");
    return ListSessionActionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSessionActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessionActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessionActions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionActionsOutcome>(
      [&]() -> ListSessionActionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSessionActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListSessionActionsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/session-actions");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListSessionActionsOutcome(ListSessionActionsResult(result.GetResultWithOwnership()))
                                  : ListSessionActionsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionsOutcome DeadlineClient::ListSessions(const ListSessionsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: FarmId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: QueueId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: JobId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionsOutcome>(
      [&]() -> ListSessionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListSessionsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListSessionsOutcome(ListSessionsResult(result.GetResultWithOwnership()))
                                  : ListSessionsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionsForWorkerOutcome DeadlineClient::ListSessionsForWorker(const ListSessionsForWorkerRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessionsForWorker", "Required field: FarmId, is not set");
    return ListSessionsForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessionsForWorker", "Required field: FleetId, is not set");
    return ListSessionsForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessionsForWorker", "Required field: WorkerId, is not set");
    return ListSessionsForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSessionsForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessionsForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessionsForWorker",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionsForWorkerOutcome>(
      [&]() -> ListSessionsForWorkerOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSessionsForWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListSessionsForWorkerOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListSessionsForWorkerOutcome(ListSessionsForWorkerResult(result.GetResultWithOwnership()))
                                  : ListSessionsForWorkerOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStepConsumersOutcome DeadlineClient::ListStepConsumers(const ListStepConsumersRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStepConsumers", "Required field: FarmId, is not set");
    return ListStepConsumersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStepConsumers", "Required field: QueueId, is not set");
    return ListStepConsumersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStepConsumers", "Required field: JobId, is not set");
    return ListStepConsumersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStepConsumers", "Required field: StepId, is not set");
    return ListStepConsumersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListStepConsumers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStepConsumers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStepConsumers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStepConsumersOutcome>(
      [&]() -> ListStepConsumersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStepConsumers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListStepConsumersOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/consumers");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListStepConsumersOutcome(ListStepConsumersResult(result.GetResultWithOwnership()))
                                  : ListStepConsumersOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStepDependenciesOutcome DeadlineClient::ListStepDependencies(const ListStepDependenciesRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStepDependencies", "Required field: FarmId, is not set");
    return ListStepDependenciesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStepDependencies", "Required field: QueueId, is not set");
    return ListStepDependenciesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStepDependencies", "Required field: JobId, is not set");
    return ListStepDependenciesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStepDependencies", "Required field: StepId, is not set");
    return ListStepDependenciesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListStepDependencies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStepDependencies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStepDependencies",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStepDependenciesOutcome>(
      [&]() -> ListStepDependenciesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStepDependencies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListStepDependenciesOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/dependencies");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListStepDependenciesOutcome(ListStepDependenciesResult(result.GetResultWithOwnership()))
                                  : ListStepDependenciesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStepsOutcome DeadlineClient::ListSteps(const ListStepsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSteps", "Required field: FarmId, is not set");
    return ListStepsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSteps", "Required field: QueueId, is not set");
    return ListStepsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSteps", "Required field: JobId, is not set");
    return ListStepsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSteps",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStepsOutcome>(
      [&]() -> ListStepsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListStepsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/steps");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListStepsOutcome(ListStepsResult(result.GetResultWithOwnership()))
                                  : ListStepsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStorageProfilesOutcome DeadlineClient::ListStorageProfiles(const ListStorageProfilesRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStorageProfiles", "Required field: FarmId, is not set");
    return ListStorageProfilesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListStorageProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStorageProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStorageProfiles",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStorageProfilesOutcome>(
      [&]() -> ListStorageProfilesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStorageProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListStorageProfilesOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListStorageProfilesOutcome(ListStorageProfilesResult(result.GetResultWithOwnership()))
                                  : ListStorageProfilesOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStorageProfilesForQueueOutcome DeadlineClient::ListStorageProfilesForQueue(const ListStorageProfilesForQueueRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStorageProfilesForQueue", "Required field: FarmId, is not set");
    return ListStorageProfilesForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStorageProfilesForQueue", "Required field: QueueId, is not set");
    return ListStorageProfilesForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListStorageProfilesForQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStorageProfilesForQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStorageProfilesForQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStorageProfilesForQueueOutcome>(
      [&]() -> ListStorageProfilesForQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStorageProfilesForQueue, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListStorageProfilesForQueueOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListStorageProfilesForQueueOutcome(ListStorageProfilesForQueueResult(result.GetResultWithOwnership()))
                                  : ListStorageProfilesForQueueOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome DeadlineClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
      [&]() -> ListTagsForResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListTagsForResourceOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListTagsForResourceOutcome(ListTagsForResourceResult(result.GetResultWithOwnership()))
                                  : ListTagsForResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTasksOutcome DeadlineClient::ListTasks(const ListTasksRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTasks", "Required field: FarmId, is not set");
    return ListTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTasks", "Required field: QueueId, is not set");
    return ListTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTasks", "Required field: JobId, is not set");
    return ListTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTasks", "Required field: StepId, is not set");
    return ListTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTasks",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTasksOutcome>(
      [&]() -> ListTasksOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListTasksOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListTasksOutcome(ListTasksResult(result.GetResultWithOwnership()))
                                  : ListTasksOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkersOutcome DeadlineClient::ListWorkers(const ListWorkersRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkers", "Required field: FarmId, is not set");
    return ListWorkersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkers", "Required field: FleetId, is not set");
    return ListWorkersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkersOutcome>(
      [&]() -> ListWorkersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListWorkersOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListWorkersOutcome(ListWorkersResult(result.GetResultWithOwnership()))
                                  : ListWorkersOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutMeteredProductOutcome DeadlineClient::PutMeteredProduct(const PutMeteredProductRequest& request) const {
  if (!request.LicenseEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMeteredProduct", "Required field: LicenseEndpointId, is not set");
    return PutMeteredProductOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LicenseEndpointId]", false));
  }
  if (!request.ProductIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMeteredProduct", "Required field: ProductId, is not set");
    return PutMeteredProductOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProductId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutMeteredProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutMeteredProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutMeteredProduct",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutMeteredProductOutcome>(
      [&]() -> PutMeteredProductOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMeteredProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutMeteredProductOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/metered-products/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? PutMeteredProductOutcome(PutMeteredProductResult(result.GetResultWithOwnership()))
                                  : PutMeteredProductOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchJobsOutcome DeadlineClient::SearchJobs(const SearchJobsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchJobs", "Required field: FarmId, is not set");
    return SearchJobsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchJobsOutcome>(
      [&]() -> SearchJobsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SearchJobsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search/jobs");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? SearchJobsOutcome(SearchJobsResult(result.GetResultWithOwnership()))
                                  : SearchJobsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchStepsOutcome DeadlineClient::SearchSteps(const SearchStepsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchSteps", "Required field: FarmId, is not set");
    return SearchStepsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchSteps",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchStepsOutcome>(
      [&]() -> SearchStepsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SearchStepsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search/steps");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? SearchStepsOutcome(SearchStepsResult(result.GetResultWithOwnership()))
                                  : SearchStepsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchTasksOutcome DeadlineClient::SearchTasks(const SearchTasksRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchTasks", "Required field: FarmId, is not set");
    return SearchTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchTasks",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchTasksOutcome>(
      [&]() -> SearchTasksOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SearchTasksOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search/tasks");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? SearchTasksOutcome(SearchTasksResult(result.GetResultWithOwnership()))
                                  : SearchTasksOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchWorkersOutcome DeadlineClient::SearchWorkers(const SearchWorkersRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchWorkers", "Required field: FarmId, is not set");
    return SearchWorkersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchWorkers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchWorkers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchWorkers",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchWorkersOutcome>(
      [&]() -> SearchWorkersOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchWorkers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SearchWorkersOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/search/workers");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? SearchWorkersOutcome(SearchWorkersResult(result.GetResultWithOwnership()))
                                  : SearchWorkersOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartSessionsStatisticsAggregationOutcome DeadlineClient::StartSessionsStatisticsAggregation(
    const StartSessionsStatisticsAggregationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSessionsStatisticsAggregation", "Required field: FarmId, is not set");
    return StartSessionsStatisticsAggregationOutcome(Aws::Client::AWSError<DeadlineErrors>(
        DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartSessionsStatisticsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartSessionsStatisticsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartSessionsStatisticsAggregation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartSessionsStatisticsAggregationOutcome>(
      [&]() -> StartSessionsStatisticsAggregationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSessionsStatisticsAggregation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), StartSessionsStatisticsAggregationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions-statistics-aggregation");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess()
                   ? StartSessionsStatisticsAggregationOutcome(StartSessionsStatisticsAggregationResult(result.GetResultWithOwnership()))
                   : StartSessionsStatisticsAggregationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome DeadlineClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
      [&]() -> TagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), TagResourceOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? TagResourceOutcome(TagResourceResult(result.GetResultWithOwnership()))
                                  : TagResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome DeadlineClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
      [&]() -> UntagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UntagResourceOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UntagResourceOutcome(UntagResourceResult(result.GetResultWithOwnership()))
                                  : UntagResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBudgetOutcome DeadlineClient::UpdateBudget(const UpdateBudgetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBudget", "Required field: FarmId, is not set");
    return UpdateBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FarmId]", false));
  }
  if (!request.BudgetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBudget", "Required field: BudgetId, is not set");
    return UpdateBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [BudgetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBudget",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBudgetOutcome>(
      [&]() -> UpdateBudgetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateBudgetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/budgets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBudgetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateBudgetOutcome(UpdateBudgetResult(result.GetResultWithOwnership()))
                                  : UpdateBudgetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFarmOutcome DeadlineClient::UpdateFarm(const UpdateFarmRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFarm", "Required field: FarmId, is not set");
    return UpdateFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFarm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFarmOutcome>(
      [&]() -> UpdateFarmOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateFarmOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateFarmOutcome(UpdateFarmResult(result.GetResultWithOwnership()))
                                  : UpdateFarmOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFleetOutcome DeadlineClient::UpdateFleet(const UpdateFleetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFleet", "Required field: FarmId, is not set");
    return UpdateFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFleet", "Required field: FleetId, is not set");
    return UpdateFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFleet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFleetOutcome>(
      [&]() -> UpdateFleetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateFleetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateFleetOutcome(UpdateFleetResult(result.GetResultWithOwnership()))
                                  : UpdateFleetOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateJobOutcome DeadlineClient::UpdateJob(const UpdateJobRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJob", "Required field: FarmId, is not set");
    return UpdateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJob", "Required field: QueueId, is not set");
    return UpdateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJob", "Required field: JobId, is not set");
    return UpdateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateJobOutcome>(
      [&]() -> UpdateJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateJobOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateJobOutcome(UpdateJobResult(result.GetResultWithOwnership()))
                                  : UpdateJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateLimitOutcome DeadlineClient::UpdateLimit(const UpdateLimitRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLimit", "Required field: FarmId, is not set");
    return UpdateLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.LimitIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLimit", "Required field: LimitId, is not set");
    return UpdateLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateLimit",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateLimitOutcome>(
      [&]() -> UpdateLimitOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateLimitOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/limits/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateLimitOutcome(UpdateLimitResult(result.GetResultWithOwnership()))
                                  : UpdateLimitOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMonitorOutcome DeadlineClient::UpdateMonitor(const UpdateMonitorRequest& request) const {
  if (!request.MonitorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMonitor", "Required field: MonitorId, is not set");
    return UpdateMonitorOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [MonitorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMonitor",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMonitorOutcome>(
      [&]() -> UpdateMonitorOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateMonitorOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateMonitorOutcome(UpdateMonitorResult(result.GetResultWithOwnership()))
                                  : UpdateMonitorOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQueueOutcome DeadlineClient::UpdateQueue(const UpdateQueueRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueue", "Required field: FarmId, is not set");
    return UpdateQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueue", "Required field: QueueId, is not set");
    return UpdateQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQueueOutcome>(
      [&]() -> UpdateQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateQueueOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateQueueOutcome(UpdateQueueResult(result.GetResultWithOwnership()))
                                  : UpdateQueueOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQueueEnvironmentOutcome DeadlineClient::UpdateQueueEnvironment(const UpdateQueueEnvironmentRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueueEnvironment", "Required field: FarmId, is not set");
    return UpdateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueueEnvironment", "Required field: QueueId, is not set");
    return UpdateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [QueueId]", false));
  }
  if (!request.QueueEnvironmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueueEnvironment", "Required field: QueueEnvironmentId, is not set");
    return UpdateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [QueueEnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQueueEnvironment",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQueueEnvironmentOutcome>(
      [&]() -> UpdateQueueEnvironmentOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueueEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateQueueEnvironmentOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueEnvironmentId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateQueueEnvironmentOutcome(UpdateQueueEnvironmentResult(result.GetResultWithOwnership()))
                                  : UpdateQueueEnvironmentOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQueueFleetAssociationOutcome DeadlineClient::UpdateQueueFleetAssociation(const UpdateQueueFleetAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueueFleetAssociation", "Required field: FarmId, is not set");
    return UpdateQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueueFleetAssociation", "Required field: QueueId, is not set");
    return UpdateQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [QueueId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueueFleetAssociation", "Required field: FleetId, is not set");
    return UpdateQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQueueFleetAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQueueFleetAssociationOutcome>(
      [&]() -> UpdateQueueFleetAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueueFleetAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateQueueFleetAssociationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateQueueFleetAssociationOutcome(UpdateQueueFleetAssociationResult(result.GetResultWithOwnership()))
                                  : UpdateQueueFleetAssociationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQueueLimitAssociationOutcome DeadlineClient::UpdateQueueLimitAssociation(const UpdateQueueLimitAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueueLimitAssociation", "Required field: FarmId, is not set");
    return UpdateQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueueLimitAssociation", "Required field: QueueId, is not set");
    return UpdateQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [QueueId]", false));
  }
  if (!request.LimitIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQueueLimitAssociation", "Required field: LimitId, is not set");
    return UpdateQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQueueLimitAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQueueLimitAssociationOutcome>(
      [&]() -> UpdateQueueLimitAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueueLimitAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateQueueLimitAssociationOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateQueueLimitAssociationOutcome(UpdateQueueLimitAssociationResult(result.GetResultWithOwnership()))
                                  : UpdateQueueLimitAssociationOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSessionOutcome DeadlineClient::UpdateSession(const UpdateSessionRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: FarmId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: QueueId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: JobId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [JobId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: SessionId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSession",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSessionOutcome>(
      [&]() -> UpdateSessionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateSessionOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateSessionOutcome(UpdateSessionResult(result.GetResultWithOwnership()))
                                  : UpdateSessionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateStepOutcome DeadlineClient::UpdateStep(const UpdateStepRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStep", "Required field: FarmId, is not set");
    return UpdateStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStep", "Required field: QueueId, is not set");
    return UpdateStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStep", "Required field: JobId, is not set");
    return UpdateStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStep", "Required field: StepId, is not set");
    return UpdateStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateStep",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateStepOutcome>(
      [&]() -> UpdateStepOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateStepOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateStepOutcome(UpdateStepResult(result.GetResultWithOwnership()))
                                  : UpdateStepOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateStorageProfileOutcome DeadlineClient::UpdateStorageProfile(const UpdateStorageProfileRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStorageProfile", "Required field: FarmId, is not set");
    return UpdateStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FarmId]", false));
  }
  if (!request.StorageProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStorageProfile", "Required field: StorageProfileId, is not set");
    return UpdateStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [StorageProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateStorageProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateStorageProfileOutcome>(
      [&]() -> UpdateStorageProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStorageProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateStorageProfileOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageProfileId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateStorageProfileOutcome(UpdateStorageProfileResult(result.GetResultWithOwnership()))
                                  : UpdateStorageProfileOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTaskOutcome DeadlineClient::UpdateTask(const UpdateTaskRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: FarmId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: QueueId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: JobId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: StepId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [StepId]", false));
  }
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: TaskId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [TaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTask",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTaskOutcome>(
      [&]() -> UpdateTaskOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("management.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateTaskOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tasks/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateTaskOutcome(UpdateTaskResult(result.GetResultWithOwnership()))
                                  : UpdateTaskOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWorkerOutcome DeadlineClient::UpdateWorker(const UpdateWorkerRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorker", "Required field: FarmId, is not set");
    return UpdateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorker", "Required field: FleetId, is not set");
    return UpdateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorker", "Required field: WorkerId, is not set");
    return UpdateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWorker",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWorkerOutcome>(
      [&]() -> UpdateWorkerOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("scheduling.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateWorkerOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateWorkerOutcome(UpdateWorkerResult(result.GetResultWithOwnership()))
                                  : UpdateWorkerOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWorkerScheduleOutcome DeadlineClient::UpdateWorkerSchedule(const UpdateWorkerScheduleRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkerSchedule", "Required field: FarmId, is not set");
    return UpdateWorkerScheduleOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkerSchedule", "Required field: FleetId, is not set");
    return UpdateWorkerScheduleOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkerSchedule", "Required field: WorkerId, is not set");
    return UpdateWorkerScheduleOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateWorkerSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWorkerSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWorkerSchedule",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWorkerScheduleOutcome>(
      [&]() -> UpdateWorkerScheduleOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkerSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("scheduling.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateWorkerScheduleOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/schedule");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateWorkerScheduleOutcome(UpdateWorkerScheduleResult(result.GetResultWithOwnership()))
                                  : UpdateWorkerScheduleOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
