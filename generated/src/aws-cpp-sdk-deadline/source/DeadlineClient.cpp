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

  return AssociateMemberToFarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return AssociateMemberToFleetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return AssociateMemberToJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return AssociateMemberToQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return AssumeFleetRoleForReadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return AssumeFleetRoleForWorkerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return AssumeQueueRoleForReadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return AssumeQueueRoleForUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return AssumeQueueRoleForWorkerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return BatchGetJobEntityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CopyJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateBudgetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFarmOutcome DeadlineClient::CreateFarm(const CreateFarmRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms");
  };

  return CreateFarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateFleetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLicenseEndpointOutcome DeadlineClient::CreateLicenseEndpoint(const CreateLicenseEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints");
  };

  return CreateLicenseEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateLimitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMonitorOutcome DeadlineClient::CreateMonitor(const CreateMonitorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors");
  };

  return CreateMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateQueueEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateQueueFleetAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CreateQueueLimitAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CreateStorageProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateWorkerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteBudgetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteFarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteFleetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteLicenseEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteLimitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteMeteredProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteQueueEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteQueueFleetAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteQueueLimitAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteStorageProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteWorkerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DisassociateMemberFromFarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DisassociateMemberFromFleetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DisassociateMemberFromJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DisassociateMemberFromQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return GetBudgetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetFarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetFleetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetLicenseEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetLimitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetQueueEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetQueueFleetAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetQueueLimitAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSessionActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSessionsStatisticsAggregationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetStepOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetStorageProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetStorageProfileForQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetWorkerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAvailableMeteredProductsOutcome DeadlineClient::ListAvailableMeteredProducts(const ListAvailableMeteredProductsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/metered-products");
  };

  return ListAvailableMeteredProductsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListBudgetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListFarmMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFarmsOutcome DeadlineClient::ListFarms(const ListFarmsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/farms");
  };

  return ListFarmsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListFleetMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListFleetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListJobMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListJobParameterDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLicenseEndpointsOutcome DeadlineClient::ListLicenseEndpoints(const ListLicenseEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/license-endpoints");
  };

  return ListLicenseEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListLimitsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListMeteredProductsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMonitorsOutcome DeadlineClient::ListMonitors(const ListMonitorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2023-10-12/monitors");
  };

  return ListMonitorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListQueueEnvironmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListQueueFleetAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListQueueLimitAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListQueueMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListQueuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListSessionActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListSessionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListSessionsForWorkerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListStepConsumersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListStepDependenciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListStepsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListStorageProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListStorageProfilesForQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListWorkersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return PutMeteredProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return SearchJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return SearchStepsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return SearchTasksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return SearchWorkersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return StartSessionsStatisticsAggregationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateBudgetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateFarmOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateFleetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateLimitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateQueueEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateQueueFleetAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateQueueLimitAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateStepOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateStorageProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateWorkerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateWorkerScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
