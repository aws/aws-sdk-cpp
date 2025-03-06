/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/deadline/DeadlineClient.h>
#include <aws/deadline/DeadlineErrorMarshaller.h>
#include <aws/deadline/DeadlineEndpointProvider.h>
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
#include <aws/deadline/model/CreateQueueRequest.h>
#include <aws/deadline/model/CreateQueueEnvironmentRequest.h>
#include <aws/deadline/model/CreateQueueFleetAssociationRequest.h>
#include <aws/deadline/model/CreateQueueLimitAssociationRequest.h>
#include <aws/deadline/model/CreateStorageProfileRequest.h>
#include <aws/deadline/model/CreateWorkerRequest.h>
#include <aws/deadline/model/DeleteBudgetRequest.h>
#include <aws/deadline/model/DeleteFarmRequest.h>
#include <aws/deadline/model/DeleteFleetRequest.h>
#include <aws/deadline/model/DeleteLicenseEndpointRequest.h>
#include <aws/deadline/model/DeleteLimitRequest.h>
#include <aws/deadline/model/DeleteMeteredProductRequest.h>
#include <aws/deadline/model/DeleteMonitorRequest.h>
#include <aws/deadline/model/DeleteQueueRequest.h>
#include <aws/deadline/model/DeleteQueueEnvironmentRequest.h>
#include <aws/deadline/model/DeleteQueueFleetAssociationRequest.h>
#include <aws/deadline/model/DeleteQueueLimitAssociationRequest.h>
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
#include <aws/deadline/model/GetQueueRequest.h>
#include <aws/deadline/model/GetQueueEnvironmentRequest.h>
#include <aws/deadline/model/GetQueueFleetAssociationRequest.h>
#include <aws/deadline/model/GetQueueLimitAssociationRequest.h>
#include <aws/deadline/model/GetSessionRequest.h>
#include <aws/deadline/model/GetSessionActionRequest.h>
#include <aws/deadline/model/GetSessionsStatisticsAggregationRequest.h>
#include <aws/deadline/model/GetStepRequest.h>
#include <aws/deadline/model/GetStorageProfileRequest.h>
#include <aws/deadline/model/GetStorageProfileForQueueRequest.h>
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
#include <aws/deadline/model/ListSessionsRequest.h>
#include <aws/deadline/model/ListSessionsForWorkerRequest.h>
#include <aws/deadline/model/ListStepConsumersRequest.h>
#include <aws/deadline/model/ListStepDependenciesRequest.h>
#include <aws/deadline/model/ListStepsRequest.h>
#include <aws/deadline/model/ListStorageProfilesRequest.h>
#include <aws/deadline/model/ListStorageProfilesForQueueRequest.h>
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
#include <aws/deadline/model/UpdateQueueRequest.h>
#include <aws/deadline/model/UpdateQueueEnvironmentRequest.h>
#include <aws/deadline/model/UpdateQueueFleetAssociationRequest.h>
#include <aws/deadline/model/UpdateQueueLimitAssociationRequest.h>
#include <aws/deadline/model/UpdateSessionRequest.h>
#include <aws/deadline/model/UpdateStepRequest.h>
#include <aws/deadline/model/UpdateStorageProfileRequest.h>
#include <aws/deadline/model/UpdateTaskRequest.h>
#include <aws/deadline/model/UpdateWorkerRequest.h>
#include <aws/deadline/model/UpdateWorkerScheduleRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::deadline;
using namespace Aws::deadline::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace deadline
  {
    const char ALLOCATION_TAG[] = "DeadlineClient";
    const char SERVICE_NAME[] = "deadline";
  }
}
const char* DeadlineClient::GetServiceName() {return SERVICE_NAME;}
const char* DeadlineClient::GetAllocationTag() {return ALLOCATION_TAG;}

DeadlineClient::DeadlineClient(const deadline::DeadlineClientConfiguration& clientConfiguration,
                           std::shared_ptr<DeadlineEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "deadline",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

DeadlineClient::DeadlineClient(const AWSCredentials& credentials,
                           std::shared_ptr<DeadlineEndpointProviderBase> endpointProvider,
                           const deadline::DeadlineClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "deadline",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

DeadlineClient::DeadlineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<DeadlineEndpointProviderBase> endpointProvider,
                           const deadline::DeadlineClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "deadline",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
DeadlineClient::DeadlineClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "deadline",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

DeadlineClient::DeadlineClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "deadline",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

DeadlineClient::DeadlineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "deadline",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DeadlineErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<DeadlineEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

DeadlineClient::~DeadlineClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<DeadlineEndpointProviderBase>& DeadlineClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void DeadlineClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
AssociateMemberToFarmOutcome DeadlineClient::AssociateMemberToFarm(const AssociateMemberToFarmRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateMemberToFarm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateMemberToFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFarm", "Required field: FarmId, is not set");
    return AssociateMemberToFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFarm", "Required field: PrincipalId, is not set");
    return AssociateMemberToFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateMemberToFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateMemberToFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateMemberToFarm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateMemberToFarmOutcome>(
    [&]()-> AssociateMemberToFarmOutcome {
      return AssociateMemberToFarmOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateMemberToFleetOutcome DeadlineClient::AssociateMemberToFleet(const AssociateMemberToFleetRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateMemberToFleet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateMemberToFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFleet", "Required field: FarmId, is not set");
    return AssociateMemberToFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFleet", "Required field: FleetId, is not set");
    return AssociateMemberToFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToFleet", "Required field: PrincipalId, is not set");
    return AssociateMemberToFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateMemberToFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateMemberToFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateMemberToFleet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateMemberToFleetOutcome>(
    [&]()-> AssociateMemberToFleetOutcome {
      return AssociateMemberToFleetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateMemberToJobOutcome DeadlineClient::AssociateMemberToJob(const AssociateMemberToJobRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateMemberToJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateMemberToJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToJob", "Required field: FarmId, is not set");
    return AssociateMemberToJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToJob", "Required field: QueueId, is not set");
    return AssociateMemberToJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToJob", "Required field: JobId, is not set");
    return AssociateMemberToJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToJob", "Required field: PrincipalId, is not set");
    return AssociateMemberToJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateMemberToJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateMemberToJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateMemberToJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateMemberToJobOutcome>(
    [&]()-> AssociateMemberToJobOutcome {
      return AssociateMemberToJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateMemberToQueueOutcome DeadlineClient::AssociateMemberToQueue(const AssociateMemberToQueueRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateMemberToQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateMemberToQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToQueue", "Required field: FarmId, is not set");
    return AssociateMemberToQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToQueue", "Required field: QueueId, is not set");
    return AssociateMemberToQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateMemberToQueue", "Required field: PrincipalId, is not set");
    return AssociateMemberToQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateMemberToQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateMemberToQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateMemberToQueue",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateMemberToQueueOutcome>(
    [&]()-> AssociateMemberToQueueOutcome {
      return AssociateMemberToQueueOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeFleetRoleForReadOutcome DeadlineClient::AssumeFleetRoleForRead(const AssumeFleetRoleForReadRequest& request) const
{
  AWS_OPERATION_GUARD(AssumeFleetRoleForRead);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeFleetRoleForRead, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForRead", "Required field: FarmId, is not set");
    return AssumeFleetRoleForReadOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForRead", "Required field: FleetId, is not set");
    return AssumeFleetRoleForReadOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeFleetRoleForRead, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeFleetRoleForRead, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeFleetRoleForRead",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeFleetRoleForReadOutcome>(
    [&]()-> AssumeFleetRoleForReadOutcome {
      return AssumeFleetRoleForReadOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/read-roles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeFleetRoleForWorkerOutcome DeadlineClient::AssumeFleetRoleForWorker(const AssumeFleetRoleForWorkerRequest& request) const
{
  AWS_OPERATION_GUARD(AssumeFleetRoleForWorker);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeFleetRoleForWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForWorker", "Required field: FarmId, is not set");
    return AssumeFleetRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForWorker", "Required field: FleetId, is not set");
    return AssumeFleetRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeFleetRoleForWorker", "Required field: WorkerId, is not set");
    return AssumeFleetRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeFleetRoleForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeFleetRoleForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeFleetRoleForWorker",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeFleetRoleForWorkerOutcome>(
    [&]()-> AssumeFleetRoleForWorkerOutcome {
      return AssumeFleetRoleForWorkerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers/");
      resolvedEndpoint.AddPathSegment(request.GetWorkerId());
      resolvedEndpoint.AddPathSegments("/fleet-roles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeQueueRoleForReadOutcome DeadlineClient::AssumeQueueRoleForRead(const AssumeQueueRoleForReadRequest& request) const
{
  AWS_OPERATION_GUARD(AssumeQueueRoleForRead);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeQueueRoleForRead, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForRead", "Required field: FarmId, is not set");
    return AssumeQueueRoleForReadOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForRead", "Required field: QueueId, is not set");
    return AssumeQueueRoleForReadOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeQueueRoleForRead, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeQueueRoleForRead, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeQueueRoleForRead",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeQueueRoleForReadOutcome>(
    [&]()-> AssumeQueueRoleForReadOutcome {
      return AssumeQueueRoleForReadOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/read-roles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeQueueRoleForUserOutcome DeadlineClient::AssumeQueueRoleForUser(const AssumeQueueRoleForUserRequest& request) const
{
  AWS_OPERATION_GUARD(AssumeQueueRoleForUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeQueueRoleForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForUser", "Required field: FarmId, is not set");
    return AssumeQueueRoleForUserOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForUser", "Required field: QueueId, is not set");
    return AssumeQueueRoleForUserOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeQueueRoleForUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeQueueRoleForUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeQueueRoleForUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeQueueRoleForUserOutcome>(
    [&]()-> AssumeQueueRoleForUserOutcome {
      return AssumeQueueRoleForUserOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/user-roles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssumeQueueRoleForWorkerOutcome DeadlineClient::AssumeQueueRoleForWorker(const AssumeQueueRoleForWorkerRequest& request) const
{
  AWS_OPERATION_GUARD(AssumeQueueRoleForWorker);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeQueueRoleForWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForWorker", "Required field: FarmId, is not set");
    return AssumeQueueRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForWorker", "Required field: FleetId, is not set");
    return AssumeQueueRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForWorker", "Required field: WorkerId, is not set");
    return AssumeQueueRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssumeQueueRoleForWorker", "Required field: QueueId, is not set");
    return AssumeQueueRoleForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssumeQueueRoleForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssumeQueueRoleForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssumeQueueRoleForWorker",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssumeQueueRoleForWorkerOutcome>(
    [&]()-> AssumeQueueRoleForWorkerOutcome {
      return AssumeQueueRoleForWorkerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers/");
      resolvedEndpoint.AddPathSegment(request.GetWorkerId());
      resolvedEndpoint.AddPathSegments("/queue-roles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetJobEntityOutcome DeadlineClient::BatchGetJobEntity(const BatchGetJobEntityRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetJobEntity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetJobEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetJobEntity", "Required field: FarmId, is not set");
    return BatchGetJobEntityOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetJobEntity", "Required field: FleetId, is not set");
    return BatchGetJobEntityOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetJobEntity", "Required field: WorkerId, is not set");
    return BatchGetJobEntityOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchGetJobEntity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetJobEntity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetJobEntity",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetJobEntityOutcome>(
    [&]()-> BatchGetJobEntityOutcome {
      return BatchGetJobEntityOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers/");
      resolvedEndpoint.AddPathSegment(request.GetWorkerId());
      resolvedEndpoint.AddPathSegments("/batchGetJobEntity");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CopyJobTemplateOutcome DeadlineClient::CopyJobTemplate(const CopyJobTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(CopyJobTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyJobTemplate", "Required field: FarmId, is not set");
    return CopyJobTemplateOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyJobTemplate", "Required field: JobId, is not set");
    return CopyJobTemplateOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyJobTemplate", "Required field: QueueId, is not set");
    return CopyJobTemplateOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CopyJobTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CopyJobTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CopyJobTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CopyJobTemplateOutcome>(
    [&]()-> CopyJobTemplateOutcome {
      return CopyJobTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/template");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBudgetOutcome DeadlineClient::CreateBudget(const CreateBudgetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBudget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBudget", "Required field: FarmId, is not set");
    return CreateBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBudget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBudgetOutcome>(
    [&]()-> CreateBudgetOutcome {
      return CreateBudgetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/budgets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFarmOutcome DeadlineClient::CreateFarm(const CreateFarmRequest& request) const
{
  AWS_OPERATION_GUARD(CreateFarm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFarm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFarmOutcome>(
    [&]()-> CreateFarmOutcome {
      return CreateFarmOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFleetOutcome DeadlineClient::CreateFleet(const CreateFleetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateFleet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFleet", "Required field: FarmId, is not set");
    return CreateFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFleet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFleetOutcome>(
    [&]()-> CreateFleetOutcome {
      return CreateFleetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateJobOutcome DeadlineClient::CreateJob(const CreateJobRequest& request) const
{
  AWS_OPERATION_GUARD(CreateJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: FarmId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: QueueId, is not set");
    return CreateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateJobOutcome>(
    [&]()-> CreateJobOutcome {
      return CreateJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLicenseEndpointOutcome DeadlineClient::CreateLicenseEndpoint(const CreateLicenseEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(CreateLicenseEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLicenseEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateLicenseEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateLicenseEndpointOutcome>(
    [&]()-> CreateLicenseEndpointOutcome {
      return CreateLicenseEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/license-endpoints");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLimitOutcome DeadlineClient::CreateLimit(const CreateLimitRequest& request) const
{
  AWS_OPERATION_GUARD(CreateLimit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLimit", "Required field: FarmId, is not set");
    return CreateLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateLimit",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateLimitOutcome>(
    [&]()-> CreateLimitOutcome {
      return CreateLimitOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/limits");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMonitorOutcome DeadlineClient::CreateMonitor(const CreateMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMonitorOutcome>(
    [&]()-> CreateMonitorOutcome {
      return CreateMonitorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/monitors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQueueOutcome DeadlineClient::CreateQueue(const CreateQueueRequest& request) const
{
  AWS_OPERATION_GUARD(CreateQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQueue", "Required field: FarmId, is not set");
    return CreateQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQueue",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQueueOutcome>(
    [&]()-> CreateQueueOutcome {
      return CreateQueueOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQueueEnvironmentOutcome DeadlineClient::CreateQueueEnvironment(const CreateQueueEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateQueueEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQueueEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQueueEnvironment", "Required field: FarmId, is not set");
    return CreateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQueueEnvironment", "Required field: QueueId, is not set");
    return CreateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQueueEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQueueEnvironmentOutcome>(
    [&]()-> CreateQueueEnvironmentOutcome {
      return CreateQueueEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/environments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQueueFleetAssociationOutcome DeadlineClient::CreateQueueFleetAssociation(const CreateQueueFleetAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateQueueFleetAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQueueFleetAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQueueFleetAssociation", "Required field: FarmId, is not set");
    return CreateQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQueueFleetAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQueueFleetAssociationOutcome>(
    [&]()-> CreateQueueFleetAssociationOutcome {
      return CreateQueueFleetAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-fleet-associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQueueLimitAssociationOutcome DeadlineClient::CreateQueueLimitAssociation(const CreateQueueLimitAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateQueueLimitAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQueueLimitAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQueueLimitAssociation", "Required field: FarmId, is not set");
    return CreateQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQueueLimitAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQueueLimitAssociationOutcome>(
    [&]()-> CreateQueueLimitAssociationOutcome {
      return CreateQueueLimitAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-limit-associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateStorageProfileOutcome DeadlineClient::CreateStorageProfile(const CreateStorageProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateStorageProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStorageProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStorageProfile", "Required field: FarmId, is not set");
    return CreateStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateStorageProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateStorageProfileOutcome>(
    [&]()-> CreateStorageProfileOutcome {
      return CreateStorageProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/storage-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkerOutcome DeadlineClient::CreateWorker(const CreateWorkerRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWorker);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWorker", "Required field: FarmId, is not set");
    return CreateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWorker", "Required field: FleetId, is not set");
    return CreateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorker",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkerOutcome>(
    [&]()-> CreateWorkerOutcome {
      return CreateWorkerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBudgetOutcome DeadlineClient::DeleteBudget(const DeleteBudgetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBudget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBudget", "Required field: FarmId, is not set");
    return DeleteBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.BudgetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBudget", "Required field: BudgetId, is not set");
    return DeleteBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BudgetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBudget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBudgetOutcome>(
    [&]()-> DeleteBudgetOutcome {
      return DeleteBudgetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/budgets/");
      resolvedEndpoint.AddPathSegment(request.GetBudgetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFarmOutcome DeadlineClient::DeleteFarm(const DeleteFarmRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFarm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFarm", "Required field: FarmId, is not set");
    return DeleteFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFarm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFarmOutcome>(
    [&]()-> DeleteFarmOutcome {
      return DeleteFarmOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFleetOutcome DeadlineClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFleet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFleet", "Required field: FarmId, is not set");
    return DeleteFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFleet", "Required field: FleetId, is not set");
    return DeleteFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFleet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFleetOutcome>(
    [&]()-> DeleteFleetOutcome {
      return DeleteFleetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLicenseEndpointOutcome DeadlineClient::DeleteLicenseEndpoint(const DeleteLicenseEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteLicenseEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLicenseEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LicenseEndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLicenseEndpoint", "Required field: LicenseEndpointId, is not set");
    return DeleteLicenseEndpointOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LicenseEndpointId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteLicenseEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteLicenseEndpointOutcome>(
    [&]()-> DeleteLicenseEndpointOutcome {
      return DeleteLicenseEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/license-endpoints/");
      resolvedEndpoint.AddPathSegment(request.GetLicenseEndpointId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLimitOutcome DeadlineClient::DeleteLimit(const DeleteLimitRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteLimit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLimit", "Required field: FarmId, is not set");
    return DeleteLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.LimitIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLimit", "Required field: LimitId, is not set");
    return DeleteLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteLimit",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteLimitOutcome>(
    [&]()-> DeleteLimitOutcome {
      return DeleteLimitOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/limits/");
      resolvedEndpoint.AddPathSegment(request.GetLimitId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMeteredProductOutcome DeadlineClient::DeleteMeteredProduct(const DeleteMeteredProductRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMeteredProduct);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMeteredProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LicenseEndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMeteredProduct", "Required field: LicenseEndpointId, is not set");
    return DeleteMeteredProductOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LicenseEndpointId]", false));
  }
  if (!request.ProductIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMeteredProduct", "Required field: ProductId, is not set");
    return DeleteMeteredProductOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMeteredProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMeteredProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMeteredProduct",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMeteredProductOutcome>(
    [&]()-> DeleteMeteredProductOutcome {
      return DeleteMeteredProductOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/license-endpoints/");
      resolvedEndpoint.AddPathSegment(request.GetLicenseEndpointId());
      resolvedEndpoint.AddPathSegments("/metered-products/");
      resolvedEndpoint.AddPathSegment(request.GetProductId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMonitorOutcome DeadlineClient::DeleteMonitor(const DeleteMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMonitor", "Required field: MonitorId, is not set");
    return DeleteMonitorOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMonitorOutcome>(
    [&]()-> DeleteMonitorOutcome {
      return DeleteMonitorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueueOutcome DeadlineClient::DeleteQueue(const DeleteQueueRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueue", "Required field: FarmId, is not set");
    return DeleteQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueue", "Required field: QueueId, is not set");
    return DeleteQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueue",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueueOutcome>(
    [&]()-> DeleteQueueOutcome {
      return DeleteQueueOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueueEnvironmentOutcome DeadlineClient::DeleteQueueEnvironment(const DeleteQueueEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteQueueEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueueEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueueEnvironment", "Required field: FarmId, is not set");
    return DeleteQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueueEnvironment", "Required field: QueueId, is not set");
    return DeleteQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.QueueEnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueueEnvironment", "Required field: QueueEnvironmentId, is not set");
    return DeleteQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueEnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueueEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueueEnvironmentOutcome>(
    [&]()-> DeleteQueueEnvironmentOutcome {
      return DeleteQueueEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetQueueEnvironmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueueFleetAssociationOutcome DeadlineClient::DeleteQueueFleetAssociation(const DeleteQueueFleetAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteQueueFleetAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueueFleetAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueueFleetAssociation", "Required field: FarmId, is not set");
    return DeleteQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueueFleetAssociation", "Required field: QueueId, is not set");
    return DeleteQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueueFleetAssociation", "Required field: FleetId, is not set");
    return DeleteQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueueFleetAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueueFleetAssociationOutcome>(
    [&]()-> DeleteQueueFleetAssociationOutcome {
      return DeleteQueueFleetAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-fleet-associations/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueueLimitAssociationOutcome DeadlineClient::DeleteQueueLimitAssociation(const DeleteQueueLimitAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteQueueLimitAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueueLimitAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueueLimitAssociation", "Required field: FarmId, is not set");
    return DeleteQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueueLimitAssociation", "Required field: QueueId, is not set");
    return DeleteQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.LimitIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueueLimitAssociation", "Required field: LimitId, is not set");
    return DeleteQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueueLimitAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueueLimitAssociationOutcome>(
    [&]()-> DeleteQueueLimitAssociationOutcome {
      return DeleteQueueLimitAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-limit-associations/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegment(request.GetLimitId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteStorageProfileOutcome DeadlineClient::DeleteStorageProfile(const DeleteStorageProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteStorageProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStorageProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageProfile", "Required field: FarmId, is not set");
    return DeleteStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.StorageProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStorageProfile", "Required field: StorageProfileId, is not set");
    return DeleteStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteStorageProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteStorageProfileOutcome>(
    [&]()-> DeleteStorageProfileOutcome {
      return DeleteStorageProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/storage-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetStorageProfileId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWorkerOutcome DeadlineClient::DeleteWorker(const DeleteWorkerRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWorker);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorker", "Required field: FarmId, is not set");
    return DeleteWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorker", "Required field: FleetId, is not set");
    return DeleteWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorker", "Required field: WorkerId, is not set");
    return DeleteWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWorker",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWorkerOutcome>(
    [&]()-> DeleteWorkerOutcome {
      return DeleteWorkerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers/");
      resolvedEndpoint.AddPathSegment(request.GetWorkerId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateMemberFromFarmOutcome DeadlineClient::DisassociateMemberFromFarm(const DisassociateMemberFromFarmRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateMemberFromFarm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateMemberFromFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFarm", "Required field: FarmId, is not set");
    return DisassociateMemberFromFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFarm", "Required field: PrincipalId, is not set");
    return DisassociateMemberFromFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateMemberFromFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateMemberFromFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateMemberFromFarm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateMemberFromFarmOutcome>(
    [&]()-> DisassociateMemberFromFarmOutcome {
      return DisassociateMemberFromFarmOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateMemberFromFleetOutcome DeadlineClient::DisassociateMemberFromFleet(const DisassociateMemberFromFleetRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateMemberFromFleet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateMemberFromFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFleet", "Required field: FarmId, is not set");
    return DisassociateMemberFromFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFleet", "Required field: FleetId, is not set");
    return DisassociateMemberFromFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromFleet", "Required field: PrincipalId, is not set");
    return DisassociateMemberFromFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateMemberFromFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateMemberFromFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateMemberFromFleet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateMemberFromFleetOutcome>(
    [&]()-> DisassociateMemberFromFleetOutcome {
      return DisassociateMemberFromFleetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateMemberFromJobOutcome DeadlineClient::DisassociateMemberFromJob(const DisassociateMemberFromJobRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateMemberFromJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateMemberFromJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromJob", "Required field: FarmId, is not set");
    return DisassociateMemberFromJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromJob", "Required field: QueueId, is not set");
    return DisassociateMemberFromJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromJob", "Required field: JobId, is not set");
    return DisassociateMemberFromJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromJob", "Required field: PrincipalId, is not set");
    return DisassociateMemberFromJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateMemberFromJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateMemberFromJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateMemberFromJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateMemberFromJobOutcome>(
    [&]()-> DisassociateMemberFromJobOutcome {
      return DisassociateMemberFromJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateMemberFromQueueOutcome DeadlineClient::DisassociateMemberFromQueue(const DisassociateMemberFromQueueRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateMemberFromQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateMemberFromQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromQueue", "Required field: FarmId, is not set");
    return DisassociateMemberFromQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromQueue", "Required field: QueueId, is not set");
    return DisassociateMemberFromQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMemberFromQueue", "Required field: PrincipalId, is not set");
    return DisassociateMemberFromQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateMemberFromQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateMemberFromQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateMemberFromQueue",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateMemberFromQueueOutcome>(
    [&]()-> DisassociateMemberFromQueueOutcome {
      return DisassociateMemberFromQueueOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/members/");
      resolvedEndpoint.AddPathSegment(request.GetPrincipalId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBudgetOutcome DeadlineClient::GetBudget(const GetBudgetRequest& request) const
{
  AWS_OPERATION_GUARD(GetBudget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBudget", "Required field: FarmId, is not set");
    return GetBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.BudgetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBudget", "Required field: BudgetId, is not set");
    return GetBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BudgetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBudget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBudgetOutcome>(
    [&]()-> GetBudgetOutcome {
      return GetBudgetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/budgets/");
      resolvedEndpoint.AddPathSegment(request.GetBudgetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFarmOutcome DeadlineClient::GetFarm(const GetFarmRequest& request) const
{
  AWS_OPERATION_GUARD(GetFarm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFarm", "Required field: FarmId, is not set");
    return GetFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFarm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFarmOutcome>(
    [&]()-> GetFarmOutcome {
      return GetFarmOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFleetOutcome DeadlineClient::GetFleet(const GetFleetRequest& request) const
{
  AWS_OPERATION_GUARD(GetFleet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFleet", "Required field: FarmId, is not set");
    return GetFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFleet", "Required field: FleetId, is not set");
    return GetFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFleet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFleetOutcome>(
    [&]()-> GetFleetOutcome {
      return GetFleetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetJobOutcome DeadlineClient::GetJob(const GetJobRequest& request) const
{
  AWS_OPERATION_GUARD(GetJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: FarmId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: QueueId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: JobId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetJobOutcome>(
    [&]()-> GetJobOutcome {
      return GetJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLicenseEndpointOutcome DeadlineClient::GetLicenseEndpoint(const GetLicenseEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(GetLicenseEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLicenseEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LicenseEndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLicenseEndpoint", "Required field: LicenseEndpointId, is not set");
    return GetLicenseEndpointOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LicenseEndpointId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLicenseEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLicenseEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLicenseEndpointOutcome>(
    [&]()-> GetLicenseEndpointOutcome {
      return GetLicenseEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/license-endpoints/");
      resolvedEndpoint.AddPathSegment(request.GetLicenseEndpointId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLimitOutcome DeadlineClient::GetLimit(const GetLimitRequest& request) const
{
  AWS_OPERATION_GUARD(GetLimit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLimit", "Required field: FarmId, is not set");
    return GetLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.LimitIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLimit", "Required field: LimitId, is not set");
    return GetLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLimit",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLimitOutcome>(
    [&]()-> GetLimitOutcome {
      return GetLimitOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/limits/");
      resolvedEndpoint.AddPathSegment(request.GetLimitId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMonitorOutcome DeadlineClient::GetMonitor(const GetMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(GetMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMonitor", "Required field: MonitorId, is not set");
    return GetMonitorOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMonitorOutcome>(
    [&]()-> GetMonitorOutcome {
      return GetMonitorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueueOutcome DeadlineClient::GetQueue(const GetQueueRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueue", "Required field: FarmId, is not set");
    return GetQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueue", "Required field: QueueId, is not set");
    return GetQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueue",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueueOutcome>(
    [&]()-> GetQueueOutcome {
      return GetQueueOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueueEnvironmentOutcome DeadlineClient::GetQueueEnvironment(const GetQueueEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueueEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueueEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueueEnvironment", "Required field: FarmId, is not set");
    return GetQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueueEnvironment", "Required field: QueueId, is not set");
    return GetQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.QueueEnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueueEnvironment", "Required field: QueueEnvironmentId, is not set");
    return GetQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueEnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueueEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueueEnvironmentOutcome>(
    [&]()-> GetQueueEnvironmentOutcome {
      return GetQueueEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetQueueEnvironmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueueFleetAssociationOutcome DeadlineClient::GetQueueFleetAssociation(const GetQueueFleetAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueueFleetAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueueFleetAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueueFleetAssociation", "Required field: FarmId, is not set");
    return GetQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueueFleetAssociation", "Required field: QueueId, is not set");
    return GetQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueueFleetAssociation", "Required field: FleetId, is not set");
    return GetQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueueFleetAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueueFleetAssociationOutcome>(
    [&]()-> GetQueueFleetAssociationOutcome {
      return GetQueueFleetAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-fleet-associations/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueueLimitAssociationOutcome DeadlineClient::GetQueueLimitAssociation(const GetQueueLimitAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueueLimitAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueueLimitAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueueLimitAssociation", "Required field: FarmId, is not set");
    return GetQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueueLimitAssociation", "Required field: QueueId, is not set");
    return GetQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.LimitIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueueLimitAssociation", "Required field: LimitId, is not set");
    return GetQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueueLimitAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueueLimitAssociationOutcome>(
    [&]()-> GetQueueLimitAssociationOutcome {
      return GetQueueLimitAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-limit-associations/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegment(request.GetLimitId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionOutcome DeadlineClient::GetSession(const GetSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: FarmId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: QueueId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: JobId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionOutcome>(
    [&]()-> GetSessionOutcome {
      return GetSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/sessions/");
      resolvedEndpoint.AddPathSegment(request.GetSessionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionActionOutcome DeadlineClient::GetSessionAction(const GetSessionActionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSessionAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSessionAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionAction", "Required field: FarmId, is not set");
    return GetSessionActionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionAction", "Required field: QueueId, is not set");
    return GetSessionActionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionAction", "Required field: JobId, is not set");
    return GetSessionActionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.SessionActionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionAction", "Required field: SessionActionId, is not set");
    return GetSessionActionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionActionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSessionAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSessionAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSessionAction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionActionOutcome>(
    [&]()-> GetSessionActionOutcome {
      return GetSessionActionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/session-actions/");
      resolvedEndpoint.AddPathSegment(request.GetSessionActionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionsStatisticsAggregationOutcome DeadlineClient::GetSessionsStatisticsAggregation(const GetSessionsStatisticsAggregationRequest& request) const
{
  AWS_OPERATION_GUARD(GetSessionsStatisticsAggregation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSessionsStatisticsAggregation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionsStatisticsAggregation", "Required field: FarmId, is not set");
    return GetSessionsStatisticsAggregationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.AggregationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionsStatisticsAggregation", "Required field: AggregationId, is not set");
    return GetSessionsStatisticsAggregationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AggregationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSessionsStatisticsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSessionsStatisticsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSessionsStatisticsAggregation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionsStatisticsAggregationOutcome>(
    [&]()-> GetSessionsStatisticsAggregationOutcome {
      return GetSessionsStatisticsAggregationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/sessions-statistics-aggregation");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStepOutcome DeadlineClient::GetStep(const GetStepRequest& request) const
{
  AWS_OPERATION_GUARD(GetStep);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStep", "Required field: FarmId, is not set");
    return GetStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStep", "Required field: QueueId, is not set");
    return GetStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStep", "Required field: JobId, is not set");
    return GetStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStep", "Required field: StepId, is not set");
    return GetStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStep",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStepOutcome>(
    [&]()-> GetStepOutcome {
      return GetStepOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/steps/");
      resolvedEndpoint.AddPathSegment(request.GetStepId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStorageProfileOutcome DeadlineClient::GetStorageProfile(const GetStorageProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetStorageProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStorageProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageProfile", "Required field: FarmId, is not set");
    return GetStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.StorageProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageProfile", "Required field: StorageProfileId, is not set");
    return GetStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStorageProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStorageProfileOutcome>(
    [&]()-> GetStorageProfileOutcome {
      return GetStorageProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/storage-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetStorageProfileId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStorageProfileForQueueOutcome DeadlineClient::GetStorageProfileForQueue(const GetStorageProfileForQueueRequest& request) const
{
  AWS_OPERATION_GUARD(GetStorageProfileForQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStorageProfileForQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageProfileForQueue", "Required field: FarmId, is not set");
    return GetStorageProfileForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageProfileForQueue", "Required field: QueueId, is not set");
    return GetStorageProfileForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.StorageProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStorageProfileForQueue", "Required field: StorageProfileId, is not set");
    return GetStorageProfileForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetStorageProfileForQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStorageProfileForQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStorageProfileForQueue",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStorageProfileForQueueOutcome>(
    [&]()-> GetStorageProfileForQueueOutcome {
      return GetStorageProfileForQueueOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/storage-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetStorageProfileId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTaskOutcome DeadlineClient::GetTask(const GetTaskRequest& request) const
{
  AWS_OPERATION_GUARD(GetTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: FarmId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: QueueId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: JobId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: StepId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepId]", false));
  }
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTask", "Required field: TaskId, is not set");
    return GetTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTaskOutcome>(
    [&]()-> GetTaskOutcome {
      return GetTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/steps/");
      resolvedEndpoint.AddPathSegment(request.GetStepId());
      resolvedEndpoint.AddPathSegments("/tasks/");
      resolvedEndpoint.AddPathSegment(request.GetTaskId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWorkerOutcome DeadlineClient::GetWorker(const GetWorkerRequest& request) const
{
  AWS_OPERATION_GUARD(GetWorker);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorker", "Required field: FarmId, is not set");
    return GetWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorker", "Required field: FleetId, is not set");
    return GetWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorker", "Required field: WorkerId, is not set");
    return GetWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWorker",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWorkerOutcome>(
    [&]()-> GetWorkerOutcome {
      return GetWorkerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers/");
      resolvedEndpoint.AddPathSegment(request.GetWorkerId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAvailableMeteredProductsOutcome DeadlineClient::ListAvailableMeteredProducts(const ListAvailableMeteredProductsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAvailableMeteredProducts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAvailableMeteredProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAvailableMeteredProducts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAvailableMeteredProducts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAvailableMeteredProducts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAvailableMeteredProductsOutcome>(
    [&]()-> ListAvailableMeteredProductsOutcome {
      return ListAvailableMeteredProductsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/metered-products");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBudgetsOutcome DeadlineClient::ListBudgets(const ListBudgetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBudgets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBudgets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBudgets", "Required field: FarmId, is not set");
    return ListBudgetsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBudgets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBudgetsOutcome>(
    [&]()-> ListBudgetsOutcome {
      return ListBudgetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/budgets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFarmMembersOutcome DeadlineClient::ListFarmMembers(const ListFarmMembersRequest& request) const
{
  AWS_OPERATION_GUARD(ListFarmMembers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFarmMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFarmMembers", "Required field: FarmId, is not set");
    return ListFarmMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFarmMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFarmMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFarmMembers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFarmMembersOutcome>(
    [&]()-> ListFarmMembersOutcome {
      return ListFarmMembersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/members");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFarmsOutcome DeadlineClient::ListFarms(const ListFarmsRequest& request) const
{
  AWS_OPERATION_GUARD(ListFarms);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFarms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFarms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFarms",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFarmsOutcome>(
    [&]()-> ListFarmsOutcome {
      return ListFarmsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFleetMembersOutcome DeadlineClient::ListFleetMembers(const ListFleetMembersRequest& request) const
{
  AWS_OPERATION_GUARD(ListFleetMembers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFleetMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFleetMembers", "Required field: FarmId, is not set");
    return ListFleetMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFleetMembers", "Required field: FleetId, is not set");
    return ListFleetMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFleetMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFleetMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFleetMembers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFleetMembersOutcome>(
    [&]()-> ListFleetMembersOutcome {
      return ListFleetMembersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/members");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFleetsOutcome DeadlineClient::ListFleets(const ListFleetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListFleets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFleets", "Required field: FarmId, is not set");
    return ListFleetsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFleets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFleets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFleets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFleetsOutcome>(
    [&]()-> ListFleetsOutcome {
      return ListFleetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobMembersOutcome DeadlineClient::ListJobMembers(const ListJobMembersRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobMembers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobMembers", "Required field: FarmId, is not set");
    return ListJobMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobMembers", "Required field: QueueId, is not set");
    return ListJobMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobMembers", "Required field: JobId, is not set");
    return ListJobMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListJobMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobMembers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobMembersOutcome>(
    [&]()-> ListJobMembersOutcome {
      return ListJobMembersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/members");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobParameterDefinitionsOutcome DeadlineClient::ListJobParameterDefinitions(const ListJobParameterDefinitionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobParameterDefinitions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobParameterDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobParameterDefinitions", "Required field: FarmId, is not set");
    return ListJobParameterDefinitionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobParameterDefinitions", "Required field: JobId, is not set");
    return ListJobParameterDefinitionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobParameterDefinitions", "Required field: QueueId, is not set");
    return ListJobParameterDefinitionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListJobParameterDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobParameterDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobParameterDefinitions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobParameterDefinitionsOutcome>(
    [&]()-> ListJobParameterDefinitionsOutcome {
      return ListJobParameterDefinitionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/parameter-definitions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobsOutcome DeadlineClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: FarmId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: QueueId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobsOutcome>(
    [&]()-> ListJobsOutcome {
      return ListJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLicenseEndpointsOutcome DeadlineClient::ListLicenseEndpoints(const ListLicenseEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(ListLicenseEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLicenseEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListLicenseEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLicenseEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLicenseEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLicenseEndpointsOutcome>(
    [&]()-> ListLicenseEndpointsOutcome {
      return ListLicenseEndpointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/license-endpoints");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLimitsOutcome DeadlineClient::ListLimits(const ListLimitsRequest& request) const
{
  AWS_OPERATION_GUARD(ListLimits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLimits", "Required field: FarmId, is not set");
    return ListLimitsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLimits",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLimitsOutcome>(
    [&]()-> ListLimitsOutcome {
      return ListLimitsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/limits");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMeteredProductsOutcome DeadlineClient::ListMeteredProducts(const ListMeteredProductsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMeteredProducts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMeteredProducts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LicenseEndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMeteredProducts", "Required field: LicenseEndpointId, is not set");
    return ListMeteredProductsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LicenseEndpointId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMeteredProducts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMeteredProducts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMeteredProducts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMeteredProductsOutcome>(
    [&]()-> ListMeteredProductsOutcome {
      return ListMeteredProductsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/license-endpoints/");
      resolvedEndpoint.AddPathSegment(request.GetLicenseEndpointId());
      resolvedEndpoint.AddPathSegments("/metered-products");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMonitorsOutcome DeadlineClient::ListMonitors(const ListMonitorsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMonitors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMonitors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMonitors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMonitors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMonitorsOutcome>(
    [&]()-> ListMonitorsOutcome {
      return ListMonitorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/monitors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueueEnvironmentsOutcome DeadlineClient::ListQueueEnvironments(const ListQueueEnvironmentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListQueueEnvironments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueueEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueueEnvironments", "Required field: FarmId, is not set");
    return ListQueueEnvironmentsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueueEnvironments", "Required field: QueueId, is not set");
    return ListQueueEnvironmentsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListQueueEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueueEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueueEnvironments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueueEnvironmentsOutcome>(
    [&]()-> ListQueueEnvironmentsOutcome {
      return ListQueueEnvironmentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/environments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueueFleetAssociationsOutcome DeadlineClient::ListQueueFleetAssociations(const ListQueueFleetAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListQueueFleetAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueueFleetAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueueFleetAssociations", "Required field: FarmId, is not set");
    return ListQueueFleetAssociationsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListQueueFleetAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueueFleetAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueueFleetAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueueFleetAssociationsOutcome>(
    [&]()-> ListQueueFleetAssociationsOutcome {
      return ListQueueFleetAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-fleet-associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueueLimitAssociationsOutcome DeadlineClient::ListQueueLimitAssociations(const ListQueueLimitAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListQueueLimitAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueueLimitAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueueLimitAssociations", "Required field: FarmId, is not set");
    return ListQueueLimitAssociationsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListQueueLimitAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueueLimitAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueueLimitAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueueLimitAssociationsOutcome>(
    [&]()-> ListQueueLimitAssociationsOutcome {
      return ListQueueLimitAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-limit-associations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueueMembersOutcome DeadlineClient::ListQueueMembers(const ListQueueMembersRequest& request) const
{
  AWS_OPERATION_GUARD(ListQueueMembers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueueMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueueMembers", "Required field: FarmId, is not set");
    return ListQueueMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueueMembers", "Required field: QueueId, is not set");
    return ListQueueMembersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListQueueMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueueMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueueMembers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueueMembersOutcome>(
    [&]()-> ListQueueMembersOutcome {
      return ListQueueMembersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/members");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQueuesOutcome DeadlineClient::ListQueues(const ListQueuesRequest& request) const
{
  AWS_OPERATION_GUARD(ListQueues);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQueues", "Required field: FarmId, is not set");
    return ListQueuesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQueues",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQueuesOutcome>(
    [&]()-> ListQueuesOutcome {
      return ListQueuesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionActionsOutcome DeadlineClient::ListSessionActions(const ListSessionActionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSessionActions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSessionActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessionActions", "Required field: FarmId, is not set");
    return ListSessionActionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessionActions", "Required field: QueueId, is not set");
    return ListSessionActionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessionActions", "Required field: JobId, is not set");
    return ListSessionActionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSessionActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessionActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessionActions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionActionsOutcome>(
    [&]()-> ListSessionActionsOutcome {
      return ListSessionActionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/session-actions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionsOutcome DeadlineClient::ListSessions(const ListSessionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: FarmId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: QueueId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: JobId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionsOutcome>(
    [&]()-> ListSessionsOutcome {
      return ListSessionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/sessions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionsForWorkerOutcome DeadlineClient::ListSessionsForWorker(const ListSessionsForWorkerRequest& request) const
{
  AWS_OPERATION_GUARD(ListSessionsForWorker);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSessionsForWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessionsForWorker", "Required field: FarmId, is not set");
    return ListSessionsForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessionsForWorker", "Required field: FleetId, is not set");
    return ListSessionsForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSessionsForWorker", "Required field: WorkerId, is not set");
    return ListSessionsForWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSessionsForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessionsForWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessionsForWorker",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionsForWorkerOutcome>(
    [&]()-> ListSessionsForWorkerOutcome {
      return ListSessionsForWorkerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers/");
      resolvedEndpoint.AddPathSegment(request.GetWorkerId());
      resolvedEndpoint.AddPathSegments("/sessions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStepConsumersOutcome DeadlineClient::ListStepConsumers(const ListStepConsumersRequest& request) const
{
  AWS_OPERATION_GUARD(ListStepConsumers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStepConsumers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStepConsumers", "Required field: FarmId, is not set");
    return ListStepConsumersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStepConsumers", "Required field: QueueId, is not set");
    return ListStepConsumersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStepConsumers", "Required field: JobId, is not set");
    return ListStepConsumersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStepConsumers", "Required field: StepId, is not set");
    return ListStepConsumersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListStepConsumers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStepConsumers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStepConsumers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStepConsumersOutcome>(
    [&]()-> ListStepConsumersOutcome {
      return ListStepConsumersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/steps/");
      resolvedEndpoint.AddPathSegment(request.GetStepId());
      resolvedEndpoint.AddPathSegments("/consumers");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStepDependenciesOutcome DeadlineClient::ListStepDependencies(const ListStepDependenciesRequest& request) const
{
  AWS_OPERATION_GUARD(ListStepDependencies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStepDependencies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStepDependencies", "Required field: FarmId, is not set");
    return ListStepDependenciesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStepDependencies", "Required field: QueueId, is not set");
    return ListStepDependenciesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStepDependencies", "Required field: JobId, is not set");
    return ListStepDependenciesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStepDependencies", "Required field: StepId, is not set");
    return ListStepDependenciesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListStepDependencies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStepDependencies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStepDependencies",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStepDependenciesOutcome>(
    [&]()-> ListStepDependenciesOutcome {
      return ListStepDependenciesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/steps/");
      resolvedEndpoint.AddPathSegment(request.GetStepId());
      resolvedEndpoint.AddPathSegments("/dependencies");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStepsOutcome DeadlineClient::ListSteps(const ListStepsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSteps);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSteps", "Required field: FarmId, is not set");
    return ListStepsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSteps", "Required field: QueueId, is not set");
    return ListStepsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSteps", "Required field: JobId, is not set");
    return ListStepsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSteps",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStepsOutcome>(
    [&]()-> ListStepsOutcome {
      return ListStepsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/steps");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStorageProfilesOutcome DeadlineClient::ListStorageProfiles(const ListStorageProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListStorageProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStorageProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStorageProfiles", "Required field: FarmId, is not set");
    return ListStorageProfilesOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListStorageProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStorageProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStorageProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStorageProfilesOutcome>(
    [&]()-> ListStorageProfilesOutcome {
      return ListStorageProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/storage-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStorageProfilesForQueueOutcome DeadlineClient::ListStorageProfilesForQueue(const ListStorageProfilesForQueueRequest& request) const
{
  AWS_OPERATION_GUARD(ListStorageProfilesForQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStorageProfilesForQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStorageProfilesForQueue", "Required field: FarmId, is not set");
    return ListStorageProfilesForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStorageProfilesForQueue", "Required field: QueueId, is not set");
    return ListStorageProfilesForQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListStorageProfilesForQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStorageProfilesForQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStorageProfilesForQueue",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStorageProfilesForQueueOutcome>(
    [&]()-> ListStorageProfilesForQueueOutcome {
      return ListStorageProfilesForQueueOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/storage-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome DeadlineClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTasksOutcome DeadlineClient::ListTasks(const ListTasksRequest& request) const
{
  AWS_OPERATION_GUARD(ListTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTasks", "Required field: FarmId, is not set");
    return ListTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTasks", "Required field: QueueId, is not set");
    return ListTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTasks", "Required field: JobId, is not set");
    return ListTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTasks", "Required field: StepId, is not set");
    return ListTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTasksOutcome>(
    [&]()-> ListTasksOutcome {
      return ListTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/steps/");
      resolvedEndpoint.AddPathSegment(request.GetStepId());
      resolvedEndpoint.AddPathSegments("/tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkersOutcome DeadlineClient::ListWorkers(const ListWorkersRequest& request) const
{
  AWS_OPERATION_GUARD(ListWorkers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkers", "Required field: FarmId, is not set");
    return ListWorkersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkers", "Required field: FleetId, is not set");
    return ListWorkersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListWorkers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkersOutcome>(
    [&]()-> ListWorkersOutcome {
      return ListWorkersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutMeteredProductOutcome DeadlineClient::PutMeteredProduct(const PutMeteredProductRequest& request) const
{
  AWS_OPERATION_GUARD(PutMeteredProduct);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMeteredProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LicenseEndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMeteredProduct", "Required field: LicenseEndpointId, is not set");
    return PutMeteredProductOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LicenseEndpointId]", false));
  }
  if (!request.ProductIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMeteredProduct", "Required field: ProductId, is not set");
    return PutMeteredProductOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutMeteredProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutMeteredProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutMeteredProduct",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutMeteredProductOutcome>(
    [&]()-> PutMeteredProductOutcome {
      return PutMeteredProductOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/license-endpoints/");
      resolvedEndpoint.AddPathSegment(request.GetLicenseEndpointId());
      resolvedEndpoint.AddPathSegments("/metered-products/");
      resolvedEndpoint.AddPathSegment(request.GetProductId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchJobsOutcome DeadlineClient::SearchJobs(const SearchJobsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchJobs", "Required field: FarmId, is not set");
    return SearchJobsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SearchJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchJobsOutcome>(
    [&]()-> SearchJobsOutcome {
      return SearchJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/search/jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchStepsOutcome DeadlineClient::SearchSteps(const SearchStepsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchSteps);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchSteps", "Required field: FarmId, is not set");
    return SearchStepsOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SearchSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchSteps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchSteps",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchStepsOutcome>(
    [&]()-> SearchStepsOutcome {
      return SearchStepsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/search/steps");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchTasksOutcome DeadlineClient::SearchTasks(const SearchTasksRequest& request) const
{
  AWS_OPERATION_GUARD(SearchTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchTasks", "Required field: FarmId, is not set");
    return SearchTasksOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SearchTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchTasksOutcome>(
    [&]()-> SearchTasksOutcome {
      return SearchTasksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/search/tasks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchWorkersOutcome DeadlineClient::SearchWorkers(const SearchWorkersRequest& request) const
{
  AWS_OPERATION_GUARD(SearchWorkers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchWorkers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchWorkers", "Required field: FarmId, is not set");
    return SearchWorkersOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SearchWorkers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchWorkers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchWorkers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchWorkersOutcome>(
    [&]()-> SearchWorkersOutcome {
      return SearchWorkersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/search/workers");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartSessionsStatisticsAggregationOutcome DeadlineClient::StartSessionsStatisticsAggregation(const StartSessionsStatisticsAggregationRequest& request) const
{
  AWS_OPERATION_GUARD(StartSessionsStatisticsAggregation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSessionsStatisticsAggregation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartSessionsStatisticsAggregation", "Required field: FarmId, is not set");
    return StartSessionsStatisticsAggregationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartSessionsStatisticsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartSessionsStatisticsAggregation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartSessionsStatisticsAggregation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartSessionsStatisticsAggregationOutcome>(
    [&]()-> StartSessionsStatisticsAggregationOutcome {
      return StartSessionsStatisticsAggregationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/sessions-statistics-aggregation");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome DeadlineClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome DeadlineClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBudgetOutcome DeadlineClient::UpdateBudget(const UpdateBudgetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBudget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBudget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBudget", "Required field: FarmId, is not set");
    return UpdateBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.BudgetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBudget", "Required field: BudgetId, is not set");
    return UpdateBudgetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BudgetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBudget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBudget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBudgetOutcome>(
    [&]()-> UpdateBudgetOutcome {
      return UpdateBudgetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/budgets/");
      resolvedEndpoint.AddPathSegment(request.GetBudgetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFarmOutcome DeadlineClient::UpdateFarm(const UpdateFarmRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateFarm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFarm", "Required field: FarmId, is not set");
    return UpdateFarmOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFarm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFarm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFarmOutcome>(
    [&]()-> UpdateFarmOutcome {
      return UpdateFarmOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFleetOutcome DeadlineClient::UpdateFleet(const UpdateFleetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateFleet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFleet", "Required field: FarmId, is not set");
    return UpdateFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFleet", "Required field: FleetId, is not set");
    return UpdateFleetOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFleet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFleet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFleetOutcome>(
    [&]()-> UpdateFleetOutcome {
      return UpdateFleetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateJobOutcome DeadlineClient::UpdateJob(const UpdateJobRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJob", "Required field: FarmId, is not set");
    return UpdateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJob", "Required field: QueueId, is not set");
    return UpdateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJob", "Required field: JobId, is not set");
    return UpdateJobOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateJobOutcome>(
    [&]()-> UpdateJobOutcome {
      return UpdateJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateLimitOutcome DeadlineClient::UpdateLimit(const UpdateLimitRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateLimit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLimit", "Required field: FarmId, is not set");
    return UpdateLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.LimitIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLimit", "Required field: LimitId, is not set");
    return UpdateLimitOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateLimit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateLimit",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateLimitOutcome>(
    [&]()-> UpdateLimitOutcome {
      return UpdateLimitOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/limits/");
      resolvedEndpoint.AddPathSegment(request.GetLimitId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMonitorOutcome DeadlineClient::UpdateMonitor(const UpdateMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMonitor", "Required field: MonitorId, is not set");
    return UpdateMonitorOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMonitorOutcome>(
    [&]()-> UpdateMonitorOutcome {
      return UpdateMonitorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQueueOutcome DeadlineClient::UpdateQueue(const UpdateQueueRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueue", "Required field: FarmId, is not set");
    return UpdateQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueue", "Required field: QueueId, is not set");
    return UpdateQueueOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQueue",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQueueOutcome>(
    [&]()-> UpdateQueueOutcome {
      return UpdateQueueOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQueueEnvironmentOutcome DeadlineClient::UpdateQueueEnvironment(const UpdateQueueEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateQueueEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueueEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueEnvironment", "Required field: FarmId, is not set");
    return UpdateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueEnvironment", "Required field: QueueId, is not set");
    return UpdateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.QueueEnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueEnvironment", "Required field: QueueEnvironmentId, is not set");
    return UpdateQueueEnvironmentOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueEnvironmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQueueEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQueueEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQueueEnvironmentOutcome>(
    [&]()-> UpdateQueueEnvironmentOutcome {
      return UpdateQueueEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetQueueEnvironmentId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQueueFleetAssociationOutcome DeadlineClient::UpdateQueueFleetAssociation(const UpdateQueueFleetAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateQueueFleetAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueueFleetAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueFleetAssociation", "Required field: FarmId, is not set");
    return UpdateQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueFleetAssociation", "Required field: QueueId, is not set");
    return UpdateQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueFleetAssociation", "Required field: FleetId, is not set");
    return UpdateQueueFleetAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQueueFleetAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQueueFleetAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQueueFleetAssociationOutcome>(
    [&]()-> UpdateQueueFleetAssociationOutcome {
      return UpdateQueueFleetAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-fleet-associations/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQueueLimitAssociationOutcome DeadlineClient::UpdateQueueLimitAssociation(const UpdateQueueLimitAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateQueueLimitAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueueLimitAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueLimitAssociation", "Required field: FarmId, is not set");
    return UpdateQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueLimitAssociation", "Required field: QueueId, is not set");
    return UpdateQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.LimitIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueueLimitAssociation", "Required field: LimitId, is not set");
    return UpdateQueueLimitAssociationOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LimitId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQueueLimitAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQueueLimitAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQueueLimitAssociationOutcome>(
    [&]()-> UpdateQueueLimitAssociationOutcome {
      return UpdateQueueLimitAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queue-limit-associations/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegment(request.GetLimitId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSessionOutcome DeadlineClient::UpdateSession(const UpdateSessionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: FarmId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: QueueId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: JobId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: SessionId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSessionOutcome>(
    [&]()-> UpdateSessionOutcome {
      return UpdateSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/sessions/");
      resolvedEndpoint.AddPathSegment(request.GetSessionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateStepOutcome DeadlineClient::UpdateStep(const UpdateStepRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateStep);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStep", "Required field: FarmId, is not set");
    return UpdateStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStep", "Required field: QueueId, is not set");
    return UpdateStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStep", "Required field: JobId, is not set");
    return UpdateStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStep", "Required field: StepId, is not set");
    return UpdateStepOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateStep",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateStepOutcome>(
    [&]()-> UpdateStepOutcome {
      return UpdateStepOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/steps/");
      resolvedEndpoint.AddPathSegment(request.GetStepId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateStorageProfileOutcome DeadlineClient::UpdateStorageProfile(const UpdateStorageProfileRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateStorageProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStorageProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStorageProfile", "Required field: FarmId, is not set");
    return UpdateStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.StorageProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStorageProfile", "Required field: StorageProfileId, is not set");
    return UpdateStorageProfileOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StorageProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateStorageProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateStorageProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateStorageProfileOutcome>(
    [&]()-> UpdateStorageProfileOutcome {
      return UpdateStorageProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/storage-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetStorageProfileId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTaskOutcome DeadlineClient::UpdateTask(const UpdateTaskRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: FarmId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.QueueIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: QueueId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueueId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: JobId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.StepIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: StepId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepId]", false));
  }
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTask", "Required field: TaskId, is not set");
    return UpdateTaskOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTaskOutcome>(
    [&]()-> UpdateTaskOutcome {
      return UpdateTaskOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/queues/");
      resolvedEndpoint.AddPathSegment(request.GetQueueId());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      resolvedEndpoint.AddPathSegments("/steps/");
      resolvedEndpoint.AddPathSegment(request.GetStepId());
      resolvedEndpoint.AddPathSegments("/tasks/");
      resolvedEndpoint.AddPathSegment(request.GetTaskId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWorkerOutcome DeadlineClient::UpdateWorker(const UpdateWorkerRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateWorker);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorker", "Required field: FarmId, is not set");
    return UpdateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorker", "Required field: FleetId, is not set");
    return UpdateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorker", "Required field: WorkerId, is not set");
    return UpdateWorkerOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWorker, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWorker",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWorkerOutcome>(
    [&]()-> UpdateWorkerOutcome {
      return UpdateWorkerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers/");
      resolvedEndpoint.AddPathSegment(request.GetWorkerId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWorkerScheduleOutcome DeadlineClient::UpdateWorkerSchedule(const UpdateWorkerScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateWorkerSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkerSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FarmIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkerSchedule", "Required field: FarmId, is not set");
    return UpdateWorkerScheduleOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FarmId]", false));
  }
  if (!request.FleetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkerSchedule", "Required field: FleetId, is not set");
    return UpdateWorkerScheduleOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FleetId]", false));
  }
  if (!request.WorkerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkerSchedule", "Required field: WorkerId, is not set");
    return UpdateWorkerScheduleOutcome(Aws::Client::AWSError<DeadlineErrors>(DeadlineErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkerId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateWorkerSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWorkerSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWorkerSchedule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWorkerScheduleOutcome>(
    [&]()-> UpdateWorkerScheduleOutcome {
      return UpdateWorkerScheduleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/2023-10-12/farms/");
      resolvedEndpoint.AddPathSegment(request.GetFarmId());
      resolvedEndpoint.AddPathSegments("/fleets/");
      resolvedEndpoint.AddPathSegment(request.GetFleetId());
      resolvedEndpoint.AddPathSegments("/workers/");
      resolvedEndpoint.AddPathSegment(request.GetWorkerId());
      resolvedEndpoint.AddPathSegments("/schedule");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


