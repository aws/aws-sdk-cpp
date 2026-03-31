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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateMemberToFarmOutcome(result.GetResultWithOwnership())
                            : AssociateMemberToFarmOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateMemberToFleetOutcome(result.GetResultWithOwnership())
                            : AssociateMemberToFleetOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateMemberToJobOutcome(result.GetResultWithOwnership())
                            : AssociateMemberToJobOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateMemberToQueueOutcome(result.GetResultWithOwnership())
                            : AssociateMemberToQueueOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/read-roles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? AssumeFleetRoleForReadOutcome(result.GetResultWithOwnership())
                            : AssumeFleetRoleForReadOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleet-roles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? AssumeFleetRoleForWorkerOutcome(result.GetResultWithOwnership())
                            : AssumeFleetRoleForWorkerOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/read-roles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? AssumeQueueRoleForReadOutcome(result.GetResultWithOwnership())
                            : AssumeQueueRoleForReadOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-roles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? AssumeQueueRoleForUserOutcome(result.GetResultWithOwnership())
                            : AssumeQueueRoleForUserOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-roles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? AssumeQueueRoleForWorkerOutcome(result.GetResultWithOwnership())
                            : AssumeQueueRoleForWorkerOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batchGetJobEntity");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetJobEntityOutcome(result.GetResultWithOwnership())
                            : BatchGetJobEntityOutcome(std::move(result.GetError()));
}

CopyJobTemplateOutcome DeadlineClient::CopyJobTemplate(const CopyJobTemplateRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyJobTemplate", "Required field: FarmId, is not set");
    return CopyJobTemplateOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyJobTemplate", "Required field: QueueId, is not set");
    return CopyJobTemplateOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CopyJobTemplate", "Required field: JobId, is not set");
    return CopyJobTemplateOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/template");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyJobTemplateOutcome(result.GetResultWithOwnership())
                            : CopyJobTemplateOutcome(std::move(result.GetError()));
}

CreateBudgetOutcome DeadlineClient::CreateBudget(const CreateBudgetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBudget", "Required field: FarmId, is not set");
    return CreateBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/budgets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBudgetOutcome(result.GetResultWithOwnership()) : CreateBudgetOutcome(std::move(result.GetError()));
}

CreateFarmOutcome DeadlineClient::CreateFarm(const CreateFarmRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFarmOutcome(result.GetResultWithOwnership()) : CreateFarmOutcome(std::move(result.GetError()));
}

CreateFleetOutcome DeadlineClient::CreateFleet(const CreateFleetRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFleet", "Required field: FarmId, is not set");
    return CreateFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFleetOutcome(result.GetResultWithOwnership()) : CreateFleetOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateJobOutcome(result.GetResultWithOwnership()) : CreateJobOutcome(std::move(result.GetError()));
}

CreateLicenseEndpointOutcome DeadlineClient::CreateLicenseEndpoint(const CreateLicenseEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLicenseEndpointOutcome(result.GetResultWithOwnership())
                            : CreateLicenseEndpointOutcome(std::move(result.GetError()));
}

CreateLimitOutcome DeadlineClient::CreateLimit(const CreateLimitRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLimit", "Required field: FarmId, is not set");
    return CreateLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/limits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLimitOutcome(result.GetResultWithOwnership()) : CreateLimitOutcome(std::move(result.GetError()));
}

CreateMonitorOutcome DeadlineClient::CreateMonitor(const CreateMonitorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMonitorOutcome(result.GetResultWithOwnership()) : CreateMonitorOutcome(std::move(result.GetError()));
}

CreateQueueOutcome DeadlineClient::CreateQueue(const CreateQueueRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueue", "Required field: FarmId, is not set");
    return CreateQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateQueueOutcome(result.GetResultWithOwnership()) : CreateQueueOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateQueueEnvironmentOutcome(result.GetResultWithOwnership())
                            : CreateQueueEnvironmentOutcome(std::move(result.GetError()));
}

CreateQueueFleetAssociationOutcome DeadlineClient::CreateQueueFleetAssociation(const CreateQueueFleetAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueueFleetAssociation", "Required field: FarmId, is not set");
    return CreateQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateQueueFleetAssociationOutcome(result.GetResultWithOwnership())
                            : CreateQueueFleetAssociationOutcome(std::move(result.GetError()));
}

CreateQueueLimitAssociationOutcome DeadlineClient::CreateQueueLimitAssociation(const CreateQueueLimitAssociationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueueLimitAssociation", "Required field: FarmId, is not set");
    return CreateQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateQueueLimitAssociationOutcome(result.GetResultWithOwnership())
                            : CreateQueueLimitAssociationOutcome(std::move(result.GetError()));
}

CreateStorageProfileOutcome DeadlineClient::CreateStorageProfile(const CreateStorageProfileRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateStorageProfile", "Required field: FarmId, is not set");
    return CreateStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStorageProfileOutcome(result.GetResultWithOwnership())
                            : CreateStorageProfileOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkerOutcome(result.GetResultWithOwnership()) : CreateWorkerOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/budgets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBudgetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBudgetOutcome(result.GetResultWithOwnership()) : DeleteBudgetOutcome(std::move(result.GetError()));
}

DeleteFarmOutcome DeadlineClient::DeleteFarm(const DeleteFarmRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFarm", "Required field: FarmId, is not set");
    return DeleteFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFarmOutcome(result.GetResultWithOwnership()) : DeleteFarmOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFleetOutcome(result.GetResultWithOwnership()) : DeleteFleetOutcome(std::move(result.GetError()));
}

DeleteLicenseEndpointOutcome DeadlineClient::DeleteLicenseEndpoint(const DeleteLicenseEndpointRequest& request) const {
  if (!request.LicenseEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLicenseEndpoint", "Required field: LicenseEndpointId, is not set");
    return DeleteLicenseEndpointOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [LicenseEndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteLicenseEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteLicenseEndpointOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/limits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteLimitOutcome(result.GetResultWithOwnership()) : DeleteLimitOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metered-products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMeteredProductOutcome(result.GetResultWithOwnership())
                            : DeleteMeteredProductOutcome(std::move(result.GetError()));
}

DeleteMonitorOutcome DeadlineClient::DeleteMonitor(const DeleteMonitorRequest& request) const {
  if (!request.MonitorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMonitor", "Required field: MonitorId, is not set");
    return DeleteMonitorOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [MonitorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMonitorOutcome(result.GetResultWithOwnership()) : DeleteMonitorOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteQueueOutcome(result.GetResultWithOwnership()) : DeleteQueueOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteQueueEnvironmentOutcome(result.GetResultWithOwnership())
                            : DeleteQueueEnvironmentOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteQueueFleetAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteQueueFleetAssociationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteQueueLimitAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteQueueLimitAssociationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteStorageProfileOutcome(result.GetResultWithOwnership())
                            : DeleteStorageProfileOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWorkerOutcome(result.GetResultWithOwnership()) : DeleteWorkerOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateMemberFromFarmOutcome(result.GetResultWithOwnership())
                            : DisassociateMemberFromFarmOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateMemberFromFleetOutcome(result.GetResultWithOwnership())
                            : DisassociateMemberFromFleetOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateMemberFromJobOutcome(result.GetResultWithOwnership())
                            : DisassociateMemberFromJobOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateMemberFromQueueOutcome(result.GetResultWithOwnership())
                            : DisassociateMemberFromQueueOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/budgets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBudgetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBudgetOutcome(result.GetResultWithOwnership()) : GetBudgetOutcome(std::move(result.GetError()));
}

GetFarmOutcome DeadlineClient::GetFarm(const GetFarmRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFarm", "Required field: FarmId, is not set");
    return GetFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFarmOutcome(result.GetResultWithOwnership()) : GetFarmOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFleetOutcome(result.GetResultWithOwnership()) : GetFleetOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetJobOutcome(result.GetResultWithOwnership()) : GetJobOutcome(std::move(result.GetError()));
}

GetLicenseEndpointOutcome DeadlineClient::GetLicenseEndpoint(const GetLicenseEndpointRequest& request) const {
  if (!request.LicenseEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLicenseEndpoint", "Required field: LicenseEndpointId, is not set");
    return GetLicenseEndpointOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [LicenseEndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLicenseEndpointOutcome(result.GetResultWithOwnership())
                            : GetLicenseEndpointOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/limits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLimitOutcome(result.GetResultWithOwnership()) : GetLimitOutcome(std::move(result.GetError()));
}

GetMonitorOutcome DeadlineClient::GetMonitor(const GetMonitorRequest& request) const {
  if (!request.MonitorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMonitor", "Required field: MonitorId, is not set");
    return GetMonitorOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [MonitorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMonitorOutcome(result.GetResultWithOwnership()) : GetMonitorOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueueOutcome(result.GetResultWithOwnership()) : GetQueueOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueueEnvironmentOutcome(result.GetResultWithOwnership())
                            : GetQueueEnvironmentOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueueFleetAssociationOutcome(result.GetResultWithOwnership())
                            : GetQueueFleetAssociationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueueLimitAssociationOutcome(result.GetResultWithOwnership())
                            : GetQueueLimitAssociationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSessionOutcome(result.GetResultWithOwnership()) : GetSessionOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/session-actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionActionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSessionActionOutcome(result.GetResultWithOwnership())
                            : GetSessionActionOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions-statistics-aggregation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSessionsStatisticsAggregationOutcome(result.GetResultWithOwnership())
                            : GetSessionsStatisticsAggregationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetStepOutcome(result.GetResultWithOwnership()) : GetStepOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetStorageProfileOutcome(result.GetResultWithOwnership())
                            : GetStorageProfileOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetStorageProfileForQueueOutcome(result.GetResultWithOwnership())
                            : GetStorageProfileForQueueOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
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
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTaskOutcome(result.GetResultWithOwnership()) : GetTaskOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWorkerOutcome(result.GetResultWithOwnership()) : GetWorkerOutcome(std::move(result.GetError()));
}

ListAvailableMeteredProductsOutcome DeadlineClient::ListAvailableMeteredProducts(const ListAvailableMeteredProductsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/metered-products");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAvailableMeteredProductsOutcome(result.GetResultWithOwnership())
                            : ListAvailableMeteredProductsOutcome(std::move(result.GetError()));
}

ListBudgetsOutcome DeadlineClient::ListBudgets(const ListBudgetsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBudgets", "Required field: FarmId, is not set");
    return ListBudgetsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/budgets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBudgetsOutcome(result.GetResultWithOwnership()) : ListBudgetsOutcome(std::move(result.GetError()));
}

ListFarmMembersOutcome DeadlineClient::ListFarmMembers(const ListFarmMembersRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFarmMembers", "Required field: FarmId, is not set");
    return ListFarmMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFarmMembersOutcome(result.GetResultWithOwnership())
                            : ListFarmMembersOutcome(std::move(result.GetError()));
}

ListFarmsOutcome DeadlineClient::ListFarms(const ListFarmsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFarmsOutcome(result.GetResultWithOwnership()) : ListFarmsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFleetMembersOutcome(result.GetResultWithOwnership())
                            : ListFleetMembersOutcome(std::move(result.GetError()));
}

ListFleetsOutcome DeadlineClient::ListFleets(const ListFleetsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFleets", "Required field: FarmId, is not set");
    return ListFleetsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFleetsOutcome(result.GetResultWithOwnership()) : ListFleetsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListJobMembersOutcome(result.GetResultWithOwnership()) : ListJobMembersOutcome(std::move(result.GetError()));
}

ListJobParameterDefinitionsOutcome DeadlineClient::ListJobParameterDefinitions(const ListJobParameterDefinitionsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobParameterDefinitions", "Required field: FarmId, is not set");
    return ListJobParameterDefinitionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobParameterDefinitions", "Required field: QueueId, is not set");
    return ListJobParameterDefinitionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobParameterDefinitions", "Required field: JobId, is not set");
    return ListJobParameterDefinitionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/parameter-definitions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListJobParameterDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListJobParameterDefinitionsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListJobsOutcome(result.GetResultWithOwnership()) : ListJobsOutcome(std::move(result.GetError()));
}

ListLicenseEndpointsOutcome DeadlineClient::ListLicenseEndpoints(const ListLicenseEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLicenseEndpointsOutcome(result.GetResultWithOwnership())
                            : ListLicenseEndpointsOutcome(std::move(result.GetError()));
}

ListLimitsOutcome DeadlineClient::ListLimits(const ListLimitsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLimits", "Required field: FarmId, is not set");
    return ListLimitsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/limits");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLimitsOutcome(result.GetResultWithOwnership()) : ListLimitsOutcome(std::move(result.GetError()));
}

ListMeteredProductsOutcome DeadlineClient::ListMeteredProducts(const ListMeteredProductsRequest& request) const {
  if (!request.LicenseEndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMeteredProducts", "Required field: LicenseEndpointId, is not set");
    return ListMeteredProductsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [LicenseEndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metered-products");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMeteredProductsOutcome(result.GetResultWithOwnership())
                            : ListMeteredProductsOutcome(std::move(result.GetError()));
}

ListMonitorsOutcome DeadlineClient::ListMonitors(const ListMonitorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMonitorsOutcome(result.GetResultWithOwnership()) : ListMonitorsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQueueEnvironmentsOutcome(result.GetResultWithOwnership())
                            : ListQueueEnvironmentsOutcome(std::move(result.GetError()));
}

ListQueueFleetAssociationsOutcome DeadlineClient::ListQueueFleetAssociations(const ListQueueFleetAssociationsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueFleetAssociations", "Required field: FarmId, is not set");
    return ListQueueFleetAssociationsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQueueFleetAssociationsOutcome(result.GetResultWithOwnership())
                            : ListQueueFleetAssociationsOutcome(std::move(result.GetError()));
}

ListQueueLimitAssociationsOutcome DeadlineClient::ListQueueLimitAssociations(const ListQueueLimitAssociationsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueueLimitAssociations", "Required field: FarmId, is not set");
    return ListQueueLimitAssociationsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQueueLimitAssociationsOutcome(result.GetResultWithOwnership())
                            : ListQueueLimitAssociationsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQueueMembersOutcome(result.GetResultWithOwnership())
                            : ListQueueMembersOutcome(std::move(result.GetError()));
}

ListQueuesOutcome DeadlineClient::ListQueues(const ListQueuesRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueues", "Required field: FarmId, is not set");
    return ListQueuesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQueuesOutcome(result.GetResultWithOwnership()) : ListQueuesOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/session-actions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSessionActionsOutcome(result.GetResultWithOwnership())
                            : ListSessionActionsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSessionsOutcome(result.GetResultWithOwnership()) : ListSessionsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSessionsForWorkerOutcome(result.GetResultWithOwnership())
                            : ListSessionsForWorkerOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/consumers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListStepConsumersOutcome(result.GetResultWithOwnership())
                            : ListStepConsumersOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dependencies");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListStepDependenciesOutcome(result.GetResultWithOwnership())
                            : ListStepDependenciesOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/steps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListStepsOutcome(result.GetResultWithOwnership()) : ListStepsOutcome(std::move(result.GetError()));
}

ListStorageProfilesOutcome DeadlineClient::ListStorageProfiles(const ListStorageProfilesRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListStorageProfiles", "Required field: FarmId, is not set");
    return ListStorageProfilesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListStorageProfilesOutcome(result.GetResultWithOwnership())
                            : ListStorageProfilesOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListStorageProfilesForQueueOutcome(result.GetResultWithOwnership())
                            : ListStorageProfilesForQueueOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome DeadlineClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTasksOutcome(result.GetResultWithOwnership()) : ListTasksOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListWorkersOutcome(result.GetResultWithOwnership()) : ListWorkersOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLicenseEndpointId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metered-products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProductId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutMeteredProductOutcome(result.GetResultWithOwnership())
                            : PutMeteredProductOutcome(std::move(result.GetError()));
}

SearchJobsOutcome DeadlineClient::SearchJobs(const SearchJobsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchJobs", "Required field: FarmId, is not set");
    return SearchJobsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchJobsOutcome(result.GetResultWithOwnership()) : SearchJobsOutcome(std::move(result.GetError()));
}

SearchStepsOutcome DeadlineClient::SearchSteps(const SearchStepsRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchSteps", "Required field: FarmId, is not set");
    return SearchStepsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/steps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchStepsOutcome(result.GetResultWithOwnership()) : SearchStepsOutcome(std::move(result.GetError()));
}

SearchTasksOutcome DeadlineClient::SearchTasks(const SearchTasksRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchTasks", "Required field: FarmId, is not set");
    return SearchTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/tasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchTasksOutcome(result.GetResultWithOwnership()) : SearchTasksOutcome(std::move(result.GetError()));
}

SearchWorkersOutcome DeadlineClient::SearchWorkers(const SearchWorkersRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchWorkers", "Required field: FarmId, is not set");
    return SearchWorkersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/workers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchWorkersOutcome(result.GetResultWithOwnership()) : SearchWorkersOutcome(std::move(result.GetError()));
}

StartSessionsStatisticsAggregationOutcome DeadlineClient::StartSessionsStatisticsAggregation(
    const StartSessionsStatisticsAggregationRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartSessionsStatisticsAggregation", "Required field: FarmId, is not set");
    return StartSessionsStatisticsAggregationOutcome(Aws::Client::AWSError<DeadlineErrors>(
        DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions-statistics-aggregation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSessionsStatisticsAggregationOutcome(result.GetResultWithOwnership())
                            : StartSessionsStatisticsAggregationOutcome(std::move(result.GetError()));
}

TagResourceOutcome DeadlineClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/budgets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBudgetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateBudgetOutcome(result.GetResultWithOwnership()) : UpdateBudgetOutcome(std::move(result.GetError()));
}

UpdateFarmOutcome DeadlineClient::UpdateFarm(const UpdateFarmRequest& request) const {
  if (!request.FarmIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFarm", "Required field: FarmId, is not set");
    return UpdateFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FarmId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateFarmOutcome(result.GetResultWithOwnership()) : UpdateFarmOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateFleetOutcome(result.GetResultWithOwnership()) : UpdateFleetOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateJobOutcome(result.GetResultWithOwnership()) : UpdateJobOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/limits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateLimitOutcome(result.GetResultWithOwnership()) : UpdateLimitOutcome(std::move(result.GetError()));
}

UpdateMonitorOutcome DeadlineClient::UpdateMonitor(const UpdateMonitorRequest& request) const {
  if (!request.MonitorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMonitor", "Required field: MonitorId, is not set");
    return UpdateMonitorOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [MonitorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMonitorOutcome(result.GetResultWithOwnership()) : UpdateMonitorOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateQueueOutcome(result.GetResultWithOwnership()) : UpdateQueueOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueEnvironmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateQueueEnvironmentOutcome(result.GetResultWithOwnership())
                            : UpdateQueueEnvironmentOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-fleet-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateQueueFleetAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateQueueFleetAssociationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queue-limit-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLimitId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateQueueLimitAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateQueueLimitAssociationOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSessionOutcome(result.GetResultWithOwnership()) : UpdateSessionOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/steps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateStepOutcome(result.GetResultWithOwnership()) : UpdateStepOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStorageProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateStorageProfileOutcome(result.GetResultWithOwnership())
                            : UpdateStorageProfileOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
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
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateTaskOutcome(result.GetResultWithOwnership()) : UpdateTaskOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateWorkerOutcome(result.GetResultWithOwnership()) : UpdateWorkerOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFarmId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFleetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedule");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateWorkerScheduleOutcome(result.GetResultWithOwnership())
                            : UpdateWorkerScheduleOutcome(std::move(result.GetError()));
}
