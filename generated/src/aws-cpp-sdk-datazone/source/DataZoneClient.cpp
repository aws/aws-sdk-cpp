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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/datazone/DataZoneClient.h>
#include <aws/datazone/DataZoneErrorMarshaller.h>
#include <aws/datazone/DataZoneEndpointProvider.h>
#include <aws/datazone/model/AcceptPredictionsRequest.h>
#include <aws/datazone/model/AcceptSubscriptionRequestRequest.h>
#include <aws/datazone/model/CancelSubscriptionRequest.h>
#include <aws/datazone/model/CreateAssetRequest.h>
#include <aws/datazone/model/CreateAssetRevisionRequest.h>
#include <aws/datazone/model/CreateAssetTypeRequest.h>
#include <aws/datazone/model/CreateDataSourceRequest.h>
#include <aws/datazone/model/CreateDomainRequest.h>
#include <aws/datazone/model/CreateEnvironmentRequest.h>
#include <aws/datazone/model/CreateEnvironmentProfileRequest.h>
#include <aws/datazone/model/CreateFormTypeRequest.h>
#include <aws/datazone/model/CreateGlossaryRequest.h>
#include <aws/datazone/model/CreateGlossaryTermRequest.h>
#include <aws/datazone/model/CreateGroupProfileRequest.h>
#include <aws/datazone/model/CreateListingChangeSetRequest.h>
#include <aws/datazone/model/CreateProjectRequest.h>
#include <aws/datazone/model/CreateProjectMembershipRequest.h>
#include <aws/datazone/model/CreateSubscriptionGrantRequest.h>
#include <aws/datazone/model/CreateSubscriptionRequestRequest.h>
#include <aws/datazone/model/CreateSubscriptionTargetRequest.h>
#include <aws/datazone/model/CreateUserProfileRequest.h>
#include <aws/datazone/model/DeleteAssetRequest.h>
#include <aws/datazone/model/DeleteAssetTypeRequest.h>
#include <aws/datazone/model/DeleteDataSourceRequest.h>
#include <aws/datazone/model/DeleteDomainRequest.h>
#include <aws/datazone/model/DeleteEnvironmentRequest.h>
#include <aws/datazone/model/DeleteEnvironmentBlueprintConfigurationRequest.h>
#include <aws/datazone/model/DeleteEnvironmentProfileRequest.h>
#include <aws/datazone/model/DeleteFormTypeRequest.h>
#include <aws/datazone/model/DeleteGlossaryRequest.h>
#include <aws/datazone/model/DeleteGlossaryTermRequest.h>
#include <aws/datazone/model/DeleteListingRequest.h>
#include <aws/datazone/model/DeleteProjectRequest.h>
#include <aws/datazone/model/DeleteProjectMembershipRequest.h>
#include <aws/datazone/model/DeleteSubscriptionGrantRequest.h>
#include <aws/datazone/model/DeleteSubscriptionRequestRequest.h>
#include <aws/datazone/model/DeleteSubscriptionTargetRequest.h>
#include <aws/datazone/model/GetAssetRequest.h>
#include <aws/datazone/model/GetAssetTypeRequest.h>
#include <aws/datazone/model/GetDataSourceRequest.h>
#include <aws/datazone/model/GetDataSourceRunRequest.h>
#include <aws/datazone/model/GetDomainRequest.h>
#include <aws/datazone/model/GetEnvironmentRequest.h>
#include <aws/datazone/model/GetEnvironmentBlueprintRequest.h>
#include <aws/datazone/model/GetEnvironmentBlueprintConfigurationRequest.h>
#include <aws/datazone/model/GetEnvironmentProfileRequest.h>
#include <aws/datazone/model/GetFormTypeRequest.h>
#include <aws/datazone/model/GetGlossaryRequest.h>
#include <aws/datazone/model/GetGlossaryTermRequest.h>
#include <aws/datazone/model/GetGroupProfileRequest.h>
#include <aws/datazone/model/GetIamPortalLoginUrlRequest.h>
#include <aws/datazone/model/GetListingRequest.h>
#include <aws/datazone/model/GetProjectRequest.h>
#include <aws/datazone/model/GetSubscriptionRequest.h>
#include <aws/datazone/model/GetSubscriptionGrantRequest.h>
#include <aws/datazone/model/GetSubscriptionRequestDetailsRequest.h>
#include <aws/datazone/model/GetSubscriptionTargetRequest.h>
#include <aws/datazone/model/GetUserProfileRequest.h>
#include <aws/datazone/model/ListAssetRevisionsRequest.h>
#include <aws/datazone/model/ListDataSourceRunActivitiesRequest.h>
#include <aws/datazone/model/ListDataSourceRunsRequest.h>
#include <aws/datazone/model/ListDataSourcesRequest.h>
#include <aws/datazone/model/ListDomainsRequest.h>
#include <aws/datazone/model/ListEnvironmentBlueprintConfigurationsRequest.h>
#include <aws/datazone/model/ListEnvironmentBlueprintsRequest.h>
#include <aws/datazone/model/ListEnvironmentProfilesRequest.h>
#include <aws/datazone/model/ListEnvironmentsRequest.h>
#include <aws/datazone/model/ListNotificationsRequest.h>
#include <aws/datazone/model/ListProjectMembershipsRequest.h>
#include <aws/datazone/model/ListProjectsRequest.h>
#include <aws/datazone/model/ListSubscriptionGrantsRequest.h>
#include <aws/datazone/model/ListSubscriptionRequestsRequest.h>
#include <aws/datazone/model/ListSubscriptionTargetsRequest.h>
#include <aws/datazone/model/ListSubscriptionsRequest.h>
#include <aws/datazone/model/ListTagsForResourceRequest.h>
#include <aws/datazone/model/PutEnvironmentBlueprintConfigurationRequest.h>
#include <aws/datazone/model/RejectPredictionsRequest.h>
#include <aws/datazone/model/RejectSubscriptionRequestRequest.h>
#include <aws/datazone/model/RevokeSubscriptionRequest.h>
#include <aws/datazone/model/SearchRequest.h>
#include <aws/datazone/model/SearchGroupProfilesRequest.h>
#include <aws/datazone/model/SearchListingsRequest.h>
#include <aws/datazone/model/SearchTypesRequest.h>
#include <aws/datazone/model/SearchUserProfilesRequest.h>
#include <aws/datazone/model/StartDataSourceRunRequest.h>
#include <aws/datazone/model/TagResourceRequest.h>
#include <aws/datazone/model/UntagResourceRequest.h>
#include <aws/datazone/model/UpdateDataSourceRequest.h>
#include <aws/datazone/model/UpdateDomainRequest.h>
#include <aws/datazone/model/UpdateEnvironmentRequest.h>
#include <aws/datazone/model/UpdateEnvironmentProfileRequest.h>
#include <aws/datazone/model/UpdateGlossaryRequest.h>
#include <aws/datazone/model/UpdateGlossaryTermRequest.h>
#include <aws/datazone/model/UpdateGroupProfileRequest.h>
#include <aws/datazone/model/UpdateProjectRequest.h>
#include <aws/datazone/model/UpdateSubscriptionGrantStatusRequest.h>
#include <aws/datazone/model/UpdateSubscriptionRequestRequest.h>
#include <aws/datazone/model/UpdateSubscriptionTargetRequest.h>
#include <aws/datazone/model/UpdateUserProfileRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataZone;
using namespace Aws::DataZone::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace DataZone
  {
    const char SERVICE_NAME[] = "datazone";
    const char ALLOCATION_TAG[] = "DataZoneClient";
  }
}
const char* DataZoneClient::GetServiceName() {return SERVICE_NAME;}
const char* DataZoneClient::GetAllocationTag() {return ALLOCATION_TAG;}

DataZoneClient::DataZoneClient(const DataZone::DataZoneClientConfiguration& clientConfiguration,
                               std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataZoneClient::DataZoneClient(const AWSCredentials& credentials,
                               std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider,
                               const DataZone::DataZoneClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataZoneClient::DataZoneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider,
                               const DataZone::DataZoneClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  DataZoneClient::DataZoneClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataZoneClient::DataZoneClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataZoneClient::DataZoneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
DataZoneClient::~DataZoneClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<DataZoneEndpointProviderBase>& DataZoneClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void DataZoneClient::init(const DataZone::DataZoneClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DataZone");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void DataZoneClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptPredictionsOutcome DataZoneClient::AcceptPredictions(const AcceptPredictionsRequest& request) const
{
  AWS_OPERATION_GUARD(AcceptPredictions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptPredictions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptPredictions", "Required field: DomainIdentifier, is not set");
    return AcceptPredictionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptPredictions", "Required field: Identifier, is not set");
    return AcceptPredictionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AcceptPredictions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AcceptPredictions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AcceptPredictions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AcceptPredictionsOutcome>(
    [&]()-> AcceptPredictionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptPredictions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accept-predictions");
      return AcceptPredictionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AcceptSubscriptionRequestOutcome DataZoneClient::AcceptSubscriptionRequest(const AcceptSubscriptionRequestRequest& request) const
{
  AWS_OPERATION_GUARD(AcceptSubscriptionRequest);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return AcceptSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptSubscriptionRequest", "Required field: Identifier, is not set");
    return AcceptSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AcceptSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AcceptSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AcceptSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AcceptSubscriptionRequestOutcome>(
    [&]()-> AcceptSubscriptionRequestOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
      return AcceptSubscriptionRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelSubscriptionOutcome DataZoneClient::CancelSubscription(const CancelSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(CancelSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelSubscription", "Required field: DomainIdentifier, is not set");
    return CancelSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelSubscription", "Required field: Identifier, is not set");
    return CancelSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CancelSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelSubscriptionOutcome>(
    [&]()-> CancelSubscriptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
      return CancelSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAssetOutcome DataZoneClient::CreateAsset(const CreateAssetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAsset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAsset", "Required field: DomainIdentifier, is not set");
    return CreateAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAsset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssetOutcome>(
    [&]()-> CreateAssetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
      return CreateAssetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAssetRevisionOutcome DataZoneClient::CreateAssetRevision(const CreateAssetRevisionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssetRevision);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssetRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssetRevision", "Required field: DomainIdentifier, is not set");
    return CreateAssetRevisionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssetRevision", "Required field: Identifier, is not set");
    return CreateAssetRevisionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAssetRevision, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssetRevision, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssetRevision",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssetRevisionOutcome>(
    [&]()-> CreateAssetRevisionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssetRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
      return CreateAssetRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAssetTypeOutcome DataZoneClient::CreateAssetType(const CreateAssetTypeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssetType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssetType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssetType", "Required field: DomainIdentifier, is not set");
    return CreateAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssetType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssetTypeOutcome>(
    [&]()-> CreateAssetTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssetType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/asset-types");
      return CreateAssetTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataSourceOutcome DataZoneClient::CreateDataSource(const CreateDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: DomainIdentifier, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataSourceOutcome>(
    [&]()-> CreateDataSourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
      return CreateDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDomainOutcome DataZoneClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDomainOutcome>(
    [&]()-> CreateDomainOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains");
      return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEnvironmentOutcome DataZoneClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEnvironment", "Required field: DomainIdentifier, is not set");
    return CreateEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEnvironmentOutcome>(
    [&]()-> CreateEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
      return CreateEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEnvironmentProfileOutcome DataZoneClient::CreateEnvironmentProfile(const CreateEnvironmentProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEnvironmentProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEnvironmentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEnvironmentProfile", "Required field: DomainIdentifier, is not set");
    return CreateEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEnvironmentProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEnvironmentProfileOutcome>(
    [&]()-> CreateEnvironmentProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEnvironmentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles");
      return CreateEnvironmentProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFormTypeOutcome DataZoneClient::CreateFormType(const CreateFormTypeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateFormType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFormType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFormType", "Required field: DomainIdentifier, is not set");
    return CreateFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFormType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFormTypeOutcome>(
    [&]()-> CreateFormTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFormType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/form-types");
      return CreateFormTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateGlossaryOutcome DataZoneClient::CreateGlossary(const CreateGlossaryRequest& request) const
{
  AWS_OPERATION_GUARD(CreateGlossary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGlossary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGlossary", "Required field: DomainIdentifier, is not set");
    return CreateGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGlossary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGlossaryOutcome>(
    [&]()-> CreateGlossaryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGlossary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/glossaries");
      return CreateGlossaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateGlossaryTermOutcome DataZoneClient::CreateGlossaryTerm(const CreateGlossaryTermRequest& request) const
{
  AWS_OPERATION_GUARD(CreateGlossaryTerm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGlossaryTerm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGlossaryTerm", "Required field: DomainIdentifier, is not set");
    return CreateGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGlossaryTerm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGlossaryTermOutcome>(
    [&]()-> CreateGlossaryTermOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGlossaryTerm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/glossary-terms");
      return CreateGlossaryTermOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateGroupProfileOutcome DataZoneClient::CreateGroupProfile(const CreateGroupProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateGroupProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroupProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupProfile", "Required field: DomainIdentifier, is not set");
    return CreateGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGroupProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGroupProfileOutcome>(
    [&]()-> CreateGroupProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroupProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/group-profiles");
      return CreateGroupProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateListingChangeSetOutcome DataZoneClient::CreateListingChangeSet(const CreateListingChangeSetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateListingChangeSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateListingChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateListingChangeSet", "Required field: DomainIdentifier, is not set");
    return CreateListingChangeSetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateListingChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateListingChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateListingChangeSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateListingChangeSetOutcome>(
    [&]()-> CreateListingChangeSetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateListingChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/listings/change-set");
      return CreateListingChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateProjectOutcome DataZoneClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProject", "Required field: DomainIdentifier, is not set");
    return CreateProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProjectOutcome>(
    [&]()-> CreateProjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
      return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateProjectMembershipOutcome DataZoneClient::CreateProjectMembership(const CreateProjectMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProjectMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProjectMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProjectMembership", "Required field: DomainIdentifier, is not set");
    return CreateProjectMembershipOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProjectMembership", "Required field: ProjectIdentifier, is not set");
    return CreateProjectMembershipOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateProjectMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProjectMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProjectMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProjectMembershipOutcome>(
    [&]()-> CreateProjectMembershipOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProjectMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/createMembership");
      return CreateProjectMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSubscriptionGrantOutcome DataZoneClient::CreateSubscriptionGrant(const CreateSubscriptionGrantRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSubscriptionGrant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriptionGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionGrant", "Required field: DomainIdentifier, is not set");
    return CreateSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSubscriptionGrant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSubscriptionGrantOutcome>(
    [&]()-> CreateSubscriptionGrantOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriptionGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants");
      return CreateSubscriptionGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSubscriptionRequestOutcome DataZoneClient::CreateSubscriptionRequest(const CreateSubscriptionRequestRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSubscriptionRequest);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return CreateSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSubscriptionRequestOutcome>(
    [&]()-> CreateSubscriptionRequestOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests");
      return CreateSubscriptionRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSubscriptionTargetOutcome DataZoneClient::CreateSubscriptionTarget(const CreateSubscriptionTargetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSubscriptionTarget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriptionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionTarget", "Required field: DomainIdentifier, is not set");
    return CreateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionTarget", "Required field: EnvironmentIdentifier, is not set");
    return CreateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSubscriptionTarget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSubscriptionTargetOutcome>(
    [&]()-> CreateSubscriptionTargetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriptionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets");
      return CreateSubscriptionTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateUserProfileOutcome DataZoneClient::CreateUserProfile(const CreateUserProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUserProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUserProfile", "Required field: DomainIdentifier, is not set");
    return CreateUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateUserProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateUserProfileOutcome>(
    [&]()-> CreateUserProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/user-profiles");
      return CreateUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAssetOutcome DataZoneClient::DeleteAsset(const DeleteAssetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAsset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: DomainIdentifier, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: Identifier, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAsset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssetOutcome>(
    [&]()-> DeleteAssetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteAssetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAssetTypeOutcome DataZoneClient::DeleteAssetType(const DeleteAssetTypeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssetType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssetType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssetType", "Required field: DomainIdentifier, is not set");
    return DeleteAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssetType", "Required field: Identifier, is not set");
    return DeleteAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAssetType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssetTypeOutcome>(
    [&]()-> DeleteAssetTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssetType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/asset-types/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteAssetTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataSourceOutcome DataZoneClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DomainIdentifier, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: Identifier, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataSourceOutcome>(
    [&]()-> DeleteDataSourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDomainOutcome DataZoneClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: Identifier, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDomainOutcome>(
    [&]()-> DeleteDomainOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEnvironmentOutcome DataZoneClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: DomainIdentifier, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: Identifier, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEnvironmentOutcome>(
    [&]()-> DeleteEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEnvironmentBlueprintConfigurationOutcome DataZoneClient::DeleteEnvironmentBlueprintConfiguration(const DeleteEnvironmentBlueprintConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEnvironmentBlueprintConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentBlueprintConfiguration", "Required field: DomainIdentifier, is not set");
    return DeleteEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentBlueprintIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentBlueprintConfiguration", "Required field: EnvironmentBlueprintIdentifier, is not set");
    return DeleteEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentBlueprintIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEnvironmentBlueprintConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEnvironmentBlueprintConfigurationOutcome>(
    [&]()-> DeleteEnvironmentBlueprintConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprint-configurations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentBlueprintIdentifier());
      return DeleteEnvironmentBlueprintConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEnvironmentProfileOutcome DataZoneClient::DeleteEnvironmentProfile(const DeleteEnvironmentProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEnvironmentProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEnvironmentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentProfile", "Required field: DomainIdentifier, is not set");
    return DeleteEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentProfile", "Required field: Identifier, is not set");
    return DeleteEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEnvironmentProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEnvironmentProfileOutcome>(
    [&]()-> DeleteEnvironmentProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEnvironmentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteEnvironmentProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFormTypeOutcome DataZoneClient::DeleteFormType(const DeleteFormTypeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFormType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFormType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFormType", "Required field: DomainIdentifier, is not set");
    return DeleteFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.FormTypeIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFormType", "Required field: FormTypeIdentifier, is not set");
    return DeleteFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FormTypeIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFormType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFormTypeOutcome>(
    [&]()-> DeleteFormTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFormType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/form-types/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFormTypeIdentifier());
      return DeleteFormTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteGlossaryOutcome DataZoneClient::DeleteGlossary(const DeleteGlossaryRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteGlossary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGlossary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGlossary", "Required field: DomainIdentifier, is not set");
    return DeleteGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGlossary", "Required field: Identifier, is not set");
    return DeleteGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteGlossary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteGlossaryOutcome>(
    [&]()-> DeleteGlossaryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGlossary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/glossaries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteGlossaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteGlossaryTermOutcome DataZoneClient::DeleteGlossaryTerm(const DeleteGlossaryTermRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteGlossaryTerm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGlossaryTerm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGlossaryTerm", "Required field: DomainIdentifier, is not set");
    return DeleteGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGlossaryTerm", "Required field: Identifier, is not set");
    return DeleteGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteGlossaryTerm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteGlossaryTermOutcome>(
    [&]()-> DeleteGlossaryTermOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGlossaryTerm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/glossary-terms/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteGlossaryTermOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteListingOutcome DataZoneClient::DeleteListing(const DeleteListingRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteListing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteListing", "Required field: DomainIdentifier, is not set");
    return DeleteListingOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteListing", "Required field: Identifier, is not set");
    return DeleteListingOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteListing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteListing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteListing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteListingOutcome>(
    [&]()-> DeleteListingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/listings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteListingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteProjectOutcome DataZoneClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: DomainIdentifier, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: Identifier, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteProjectOutcome>(
    [&]()-> DeleteProjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteProjectMembershipOutcome DataZoneClient::DeleteProjectMembership(const DeleteProjectMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteProjectMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProjectMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProjectMembership", "Required field: DomainIdentifier, is not set");
    return DeleteProjectMembershipOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProjectMembership", "Required field: ProjectIdentifier, is not set");
    return DeleteProjectMembershipOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteProjectMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteProjectMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteProjectMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteProjectMembershipOutcome>(
    [&]()-> DeleteProjectMembershipOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProjectMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/deleteMembership");
      return DeleteProjectMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSubscriptionGrantOutcome DataZoneClient::DeleteSubscriptionGrant(const DeleteSubscriptionGrantRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSubscriptionGrant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubscriptionGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionGrant", "Required field: DomainIdentifier, is not set");
    return DeleteSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionGrant", "Required field: Identifier, is not set");
    return DeleteSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSubscriptionGrant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSubscriptionGrantOutcome>(
    [&]()-> DeleteSubscriptionGrantOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubscriptionGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteSubscriptionGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSubscriptionRequestOutcome DataZoneClient::DeleteSubscriptionRequest(const DeleteSubscriptionRequestRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSubscriptionRequest);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return DeleteSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionRequest", "Required field: Identifier, is not set");
    return DeleteSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSubscriptionRequestOutcome>(
    [&]()-> DeleteSubscriptionRequestOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteSubscriptionRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSubscriptionTargetOutcome DataZoneClient::DeleteSubscriptionTarget(const DeleteSubscriptionTargetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSubscriptionTarget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubscriptionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionTarget", "Required field: DomainIdentifier, is not set");
    return DeleteSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionTarget", "Required field: EnvironmentIdentifier, is not set");
    return DeleteSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionTarget", "Required field: Identifier, is not set");
    return DeleteSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSubscriptionTarget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSubscriptionTargetOutcome>(
    [&]()-> DeleteSubscriptionTargetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubscriptionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return DeleteSubscriptionTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssetOutcome DataZoneClient::GetAsset(const GetAssetRequest& request) const
{
  AWS_OPERATION_GUARD(GetAsset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: DomainIdentifier, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: Identifier, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAsset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssetOutcome>(
    [&]()-> GetAssetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetAssetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssetTypeOutcome DataZoneClient::GetAssetType(const GetAssetTypeRequest& request) const
{
  AWS_OPERATION_GUARD(GetAssetType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssetType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssetType", "Required field: DomainIdentifier, is not set");
    return GetAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssetType", "Required field: Identifier, is not set");
    return GetAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAssetType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssetTypeOutcome>(
    [&]()-> GetAssetTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssetType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/asset-types/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetAssetTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataSourceOutcome DataZoneClient::GetDataSource(const GetDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: DomainIdentifier, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: Identifier, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataSourceOutcome>(
    [&]()-> GetDataSourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataSourceRunOutcome DataZoneClient::GetDataSourceRun(const GetDataSourceRunRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataSourceRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataSourceRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSourceRun", "Required field: DomainIdentifier, is not set");
    return GetDataSourceRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSourceRun", "Required field: Identifier, is not set");
    return GetDataSourceRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDataSourceRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataSourceRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataSourceRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataSourceRunOutcome>(
    [&]()-> GetDataSourceRunOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataSourceRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-source-runs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetDataSourceRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDomainOutcome DataZoneClient::GetDomain(const GetDomainRequest& request) const
{
  AWS_OPERATION_GUARD(GetDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomain", "Required field: Identifier, is not set");
    return GetDomainOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDomainOutcome>(
    [&]()-> GetDomainOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEnvironmentOutcome DataZoneClient::GetEnvironment(const GetEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(GetEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: Identifier, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentOutcome>(
    [&]()-> GetEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEnvironmentBlueprintOutcome DataZoneClient::GetEnvironmentBlueprint(const GetEnvironmentBlueprintRequest& request) const
{
  AWS_OPERATION_GUARD(GetEnvironmentBlueprint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnvironmentBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentBlueprint", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentBlueprintOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentBlueprint", "Required field: Identifier, is not set");
    return GetEnvironmentBlueprintOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetEnvironmentBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironmentBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironmentBlueprint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentBlueprintOutcome>(
    [&]()-> GetEnvironmentBlueprintOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEnvironmentBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprints/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetEnvironmentBlueprintOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEnvironmentBlueprintConfigurationOutcome DataZoneClient::GetEnvironmentBlueprintConfiguration(const GetEnvironmentBlueprintConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetEnvironmentBlueprintConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentBlueprintConfiguration", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentBlueprintIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentBlueprintConfiguration", "Required field: EnvironmentBlueprintIdentifier, is not set");
    return GetEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentBlueprintIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironmentBlueprintConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentBlueprintConfigurationOutcome>(
    [&]()-> GetEnvironmentBlueprintConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprint-configurations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentBlueprintIdentifier());
      return GetEnvironmentBlueprintConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEnvironmentProfileOutcome DataZoneClient::GetEnvironmentProfile(const GetEnvironmentProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetEnvironmentProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnvironmentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentProfile", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentProfile", "Required field: Identifier, is not set");
    return GetEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironmentProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentProfileOutcome>(
    [&]()-> GetEnvironmentProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEnvironmentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetEnvironmentProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFormTypeOutcome DataZoneClient::GetFormType(const GetFormTypeRequest& request) const
{
  AWS_OPERATION_GUARD(GetFormType);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFormType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFormType", "Required field: DomainIdentifier, is not set");
    return GetFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.FormTypeIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFormType", "Required field: FormTypeIdentifier, is not set");
    return GetFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FormTypeIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFormType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFormTypeOutcome>(
    [&]()-> GetFormTypeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFormType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/form-types/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFormTypeIdentifier());
      return GetFormTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetGlossaryOutcome DataZoneClient::GetGlossary(const GetGlossaryRequest& request) const
{
  AWS_OPERATION_GUARD(GetGlossary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGlossary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGlossary", "Required field: DomainIdentifier, is not set");
    return GetGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGlossary", "Required field: Identifier, is not set");
    return GetGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGlossary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGlossaryOutcome>(
    [&]()-> GetGlossaryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGlossary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/glossaries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetGlossaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetGlossaryTermOutcome DataZoneClient::GetGlossaryTerm(const GetGlossaryTermRequest& request) const
{
  AWS_OPERATION_GUARD(GetGlossaryTerm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGlossaryTerm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGlossaryTerm", "Required field: DomainIdentifier, is not set");
    return GetGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGlossaryTerm", "Required field: Identifier, is not set");
    return GetGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGlossaryTerm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGlossaryTermOutcome>(
    [&]()-> GetGlossaryTermOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGlossaryTerm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/glossary-terms/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetGlossaryTermOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetGroupProfileOutcome DataZoneClient::GetGroupProfile(const GetGroupProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetGroupProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroupProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroupProfile", "Required field: DomainIdentifier, is not set");
    return GetGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.GroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroupProfile", "Required field: GroupIdentifier, is not set");
    return GetGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGroupProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGroupProfileOutcome>(
    [&]()-> GetGroupProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroupProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/group-profiles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupIdentifier());
      return GetGroupProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIamPortalLoginUrlOutcome DataZoneClient::GetIamPortalLoginUrl(const GetIamPortalLoginUrlRequest& request) const
{
  AWS_OPERATION_GUARD(GetIamPortalLoginUrl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIamPortalLoginUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIamPortalLoginUrl", "Required field: DomainIdentifier, is not set");
    return GetIamPortalLoginUrlOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetIamPortalLoginUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIamPortalLoginUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIamPortalLoginUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIamPortalLoginUrlOutcome>(
    [&]()-> GetIamPortalLoginUrlOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIamPortalLoginUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/get-portal-login-url");
      return GetIamPortalLoginUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetListingOutcome DataZoneClient::GetListing(const GetListingRequest& request) const
{
  AWS_OPERATION_GUARD(GetListing);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetListing", "Required field: DomainIdentifier, is not set");
    return GetListingOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetListing", "Required field: Identifier, is not set");
    return GetListingOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetListing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetListing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetListing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetListingOutcome>(
    [&]()-> GetListingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetListing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/listings/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetListingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProjectOutcome DataZoneClient::GetProject(const GetProjectRequest& request) const
{
  AWS_OPERATION_GUARD(GetProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: DomainIdentifier, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: Identifier, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProjectOutcome>(
    [&]()-> GetProjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSubscriptionOutcome DataZoneClient::GetSubscription(const GetSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscription", "Required field: DomainIdentifier, is not set");
    return GetSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscription", "Required field: Identifier, is not set");
    return GetSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionOutcome>(
    [&]()-> GetSubscriptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSubscriptionGrantOutcome DataZoneClient::GetSubscriptionGrant(const GetSubscriptionGrantRequest& request) const
{
  AWS_OPERATION_GUARD(GetSubscriptionGrant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubscriptionGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionGrant", "Required field: DomainIdentifier, is not set");
    return GetSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionGrant", "Required field: Identifier, is not set");
    return GetSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscriptionGrant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionGrantOutcome>(
    [&]()-> GetSubscriptionGrantOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscriptionGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetSubscriptionGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSubscriptionRequestDetailsOutcome DataZoneClient::GetSubscriptionRequestDetails(const GetSubscriptionRequestDetailsRequest& request) const
{
  AWS_OPERATION_GUARD(GetSubscriptionRequestDetails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubscriptionRequestDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionRequestDetails", "Required field: DomainIdentifier, is not set");
    return GetSubscriptionRequestDetailsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionRequestDetails", "Required field: Identifier, is not set");
    return GetSubscriptionRequestDetailsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSubscriptionRequestDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscriptionRequestDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscriptionRequestDetails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionRequestDetailsOutcome>(
    [&]()-> GetSubscriptionRequestDetailsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscriptionRequestDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetSubscriptionRequestDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSubscriptionTargetOutcome DataZoneClient::GetSubscriptionTarget(const GetSubscriptionTargetRequest& request) const
{
  AWS_OPERATION_GUARD(GetSubscriptionTarget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubscriptionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionTarget", "Required field: DomainIdentifier, is not set");
    return GetSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionTarget", "Required field: EnvironmentIdentifier, is not set");
    return GetSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriptionTarget", "Required field: Identifier, is not set");
    return GetSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscriptionTarget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionTargetOutcome>(
    [&]()-> GetSubscriptionTargetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscriptionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return GetSubscriptionTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUserProfileOutcome DataZoneClient::GetUserProfile(const GetUserProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetUserProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserProfile", "Required field: DomainIdentifier, is not set");
    return GetUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.UserIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserProfile", "Required field: UserIdentifier, is not set");
    return GetUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUserProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUserProfileOutcome>(
    [&]()-> GetUserProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/user-profiles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserIdentifier());
      return GetUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssetRevisionsOutcome DataZoneClient::ListAssetRevisions(const ListAssetRevisionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssetRevisions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssetRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssetRevisions", "Required field: DomainIdentifier, is not set");
    return ListAssetRevisionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssetRevisions", "Required field: Identifier, is not set");
    return ListAssetRevisionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAssetRevisions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssetRevisions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssetRevisions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssetRevisionsOutcome>(
    [&]()-> ListAssetRevisionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssetRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
      return ListAssetRevisionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataSourceRunActivitiesOutcome DataZoneClient::ListDataSourceRunActivities(const ListDataSourceRunActivitiesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSourceRunActivities);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSourceRunActivities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSourceRunActivities", "Required field: DomainIdentifier, is not set");
    return ListDataSourceRunActivitiesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSourceRunActivities", "Required field: Identifier, is not set");
    return ListDataSourceRunActivitiesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDataSourceRunActivities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSourceRunActivities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSourceRunActivities",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourceRunActivitiesOutcome>(
    [&]()-> ListDataSourceRunActivitiesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSourceRunActivities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-source-runs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/activities");
      return ListDataSourceRunActivitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataSourceRunsOutcome DataZoneClient::ListDataSourceRuns(const ListDataSourceRunsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSourceRuns);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSourceRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSourceRuns", "Required field: DataSourceIdentifier, is not set");
    return ListDataSourceRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceIdentifier]", false));
  }
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSourceRuns", "Required field: DomainIdentifier, is not set");
    return ListDataSourceRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDataSourceRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSourceRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSourceRuns",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourceRunsOutcome>(
    [&]()-> ListDataSourceRunsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSourceRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/runs");
      return ListDataSourceRunsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataSourcesOutcome DataZoneClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: DomainIdentifier, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: ProjectIdentifier, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourcesOutcome>(
    [&]()-> ListDataSourcesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
      return ListDataSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDomainsOutcome DataZoneClient::ListDomains(const ListDomainsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDomains);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDomains, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDomains, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDomains",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDomainsOutcome>(
    [&]()-> ListDomainsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains");
      return ListDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEnvironmentBlueprintConfigurationsOutcome DataZoneClient::ListEnvironmentBlueprintConfigurations(const ListEnvironmentBlueprintConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEnvironmentBlueprintConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnvironmentBlueprintConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironmentBlueprintConfigurations", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentBlueprintConfigurationsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEnvironmentBlueprintConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironmentBlueprintConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironmentBlueprintConfigurations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentBlueprintConfigurationsOutcome>(
    [&]()-> ListEnvironmentBlueprintConfigurationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEnvironmentBlueprintConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprint-configurations");
      return ListEnvironmentBlueprintConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEnvironmentBlueprintsOutcome DataZoneClient::ListEnvironmentBlueprints(const ListEnvironmentBlueprintsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEnvironmentBlueprints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnvironmentBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironmentBlueprints", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentBlueprintsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEnvironmentBlueprints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironmentBlueprints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironmentBlueprints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentBlueprintsOutcome>(
    [&]()-> ListEnvironmentBlueprintsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEnvironmentBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprints");
      return ListEnvironmentBlueprintsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEnvironmentProfilesOutcome DataZoneClient::ListEnvironmentProfiles(const ListEnvironmentProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListEnvironmentProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnvironmentProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironmentProfiles", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentProfilesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEnvironmentProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironmentProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironmentProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentProfilesOutcome>(
    [&]()-> ListEnvironmentProfilesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEnvironmentProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles");
      return ListEnvironmentProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEnvironmentsOutcome DataZoneClient::ListEnvironments(const ListEnvironmentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEnvironments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironments", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironments", "Required field: ProjectIdentifier, is not set");
    return ListEnvironmentsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentsOutcome>(
    [&]()-> ListEnvironmentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
      return ListEnvironmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNotificationsOutcome DataZoneClient::ListNotifications(const ListNotificationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListNotifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNotifications", "Required field: DomainIdentifier, is not set");
    return ListNotificationsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNotifications", "Required field: Type, is not set");
    return ListNotificationsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNotificationsOutcome>(
    [&]()-> ListNotificationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/notifications");
      return ListNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProjectMembershipsOutcome DataZoneClient::ListProjectMemberships(const ListProjectMembershipsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProjectMemberships);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjectMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProjectMemberships", "Required field: DomainIdentifier, is not set");
    return ListProjectMembershipsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProjectMemberships", "Required field: ProjectIdentifier, is not set");
    return ListProjectMembershipsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListProjectMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProjectMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProjectMemberships",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProjectMembershipsOutcome>(
    [&]()-> ListProjectMembershipsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjectMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
      return ListProjectMembershipsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProjectsOutcome DataZoneClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProjects", "Required field: DomainIdentifier, is not set");
    return ListProjectsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProjects",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProjectsOutcome>(
    [&]()-> ListProjectsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
      return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSubscriptionGrantsOutcome DataZoneClient::ListSubscriptionGrants(const ListSubscriptionGrantsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSubscriptionGrants);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscriptionGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSubscriptionGrants", "Required field: DomainIdentifier, is not set");
    return ListSubscriptionGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSubscriptionGrants, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSubscriptionGrants, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSubscriptionGrants",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSubscriptionGrantsOutcome>(
    [&]()-> ListSubscriptionGrantsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscriptionGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants");
      return ListSubscriptionGrantsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSubscriptionRequestsOutcome DataZoneClient::ListSubscriptionRequests(const ListSubscriptionRequestsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSubscriptionRequests);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscriptionRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSubscriptionRequests", "Required field: DomainIdentifier, is not set");
    return ListSubscriptionRequestsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSubscriptionRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSubscriptionRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSubscriptionRequests",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSubscriptionRequestsOutcome>(
    [&]()-> ListSubscriptionRequestsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscriptionRequests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests");
      return ListSubscriptionRequestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSubscriptionTargetsOutcome DataZoneClient::ListSubscriptionTargets(const ListSubscriptionTargetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSubscriptionTargets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscriptionTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSubscriptionTargets", "Required field: DomainIdentifier, is not set");
    return ListSubscriptionTargetsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSubscriptionTargets", "Required field: EnvironmentIdentifier, is not set");
    return ListSubscriptionTargetsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSubscriptionTargets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSubscriptionTargets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSubscriptionTargets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSubscriptionTargetsOutcome>(
    [&]()-> ListSubscriptionTargetsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscriptionTargets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets");
      return ListSubscriptionTargetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSubscriptionsOutcome DataZoneClient::ListSubscriptions(const ListSubscriptionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSubscriptions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSubscriptions", "Required field: DomainIdentifier, is not set");
    return ListSubscriptionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSubscriptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSubscriptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSubscriptions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSubscriptionsOutcome>(
    [&]()-> ListSubscriptionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
      return ListSubscriptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome DataZoneClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutEnvironmentBlueprintConfigurationOutcome DataZoneClient::PutEnvironmentBlueprintConfiguration(const PutEnvironmentBlueprintConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutEnvironmentBlueprintConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEnvironmentBlueprintConfiguration", "Required field: DomainIdentifier, is not set");
    return PutEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentBlueprintIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEnvironmentBlueprintConfiguration", "Required field: EnvironmentBlueprintIdentifier, is not set");
    return PutEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentBlueprintIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutEnvironmentBlueprintConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutEnvironmentBlueprintConfigurationOutcome>(
    [&]()-> PutEnvironmentBlueprintConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprint-configurations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentBlueprintIdentifier());
      return PutEnvironmentBlueprintConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RejectPredictionsOutcome DataZoneClient::RejectPredictions(const RejectPredictionsRequest& request) const
{
  AWS_OPERATION_GUARD(RejectPredictions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectPredictions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectPredictions", "Required field: DomainIdentifier, is not set");
    return RejectPredictionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectPredictions", "Required field: Identifier, is not set");
    return RejectPredictionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RejectPredictions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RejectPredictions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RejectPredictions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RejectPredictionsOutcome>(
    [&]()-> RejectPredictionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectPredictions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/reject-predictions");
      return RejectPredictionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RejectSubscriptionRequestOutcome DataZoneClient::RejectSubscriptionRequest(const RejectSubscriptionRequestRequest& request) const
{
  AWS_OPERATION_GUARD(RejectSubscriptionRequest);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return RejectSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectSubscriptionRequest", "Required field: Identifier, is not set");
    return RejectSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RejectSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RejectSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RejectSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RejectSubscriptionRequestOutcome>(
    [&]()-> RejectSubscriptionRequestOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
      return RejectSubscriptionRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RevokeSubscriptionOutcome DataZoneClient::RevokeSubscription(const RevokeSubscriptionRequest& request) const
{
  AWS_OPERATION_GUARD(RevokeSubscription);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeSubscription", "Required field: DomainIdentifier, is not set");
    return RevokeSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeSubscription", "Required field: Identifier, is not set");
    return RevokeSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RevokeSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RevokeSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RevokeSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RevokeSubscriptionOutcome>(
    [&]()-> RevokeSubscriptionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/revoke");
      return RevokeSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchOutcome DataZoneClient::Search(const SearchRequest& request) const
{
  AWS_OPERATION_GUARD(Search);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Search", "Required field: DomainIdentifier, is not set");
    return SearchOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, Search, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Search, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Search",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchOutcome>(
    [&]()-> SearchOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search");
      return SearchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchGroupProfilesOutcome DataZoneClient::SearchGroupProfiles(const SearchGroupProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(SearchGroupProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchGroupProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchGroupProfiles", "Required field: DomainIdentifier, is not set");
    return SearchGroupProfilesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchGroupProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchGroupProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchGroupProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchGroupProfilesOutcome>(
    [&]()-> SearchGroupProfilesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchGroupProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search-group-profiles");
      return SearchGroupProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchListingsOutcome DataZoneClient::SearchListings(const SearchListingsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchListings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchListings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchListings", "Required field: DomainIdentifier, is not set");
    return SearchListingsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchListings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchListings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchListings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchListingsOutcome>(
    [&]()-> SearchListingsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchListings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/listings/search");
      return SearchListingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchTypesOutcome DataZoneClient::SearchTypes(const SearchTypesRequest& request) const
{
  AWS_OPERATION_GUARD(SearchTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchTypes", "Required field: DomainIdentifier, is not set");
    return SearchTypesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchTypesOutcome>(
    [&]()-> SearchTypesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/types-search");
      return SearchTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchUserProfilesOutcome DataZoneClient::SearchUserProfiles(const SearchUserProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(SearchUserProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchUserProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchUserProfiles", "Required field: DomainIdentifier, is not set");
    return SearchUserProfilesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchUserProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchUserProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchUserProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchUserProfilesOutcome>(
    [&]()-> SearchUserProfilesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchUserProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search-user-profiles");
      return SearchUserProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDataSourceRunOutcome DataZoneClient::StartDataSourceRun(const StartDataSourceRunRequest& request) const
{
  AWS_OPERATION_GUARD(StartDataSourceRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDataSourceRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDataSourceRun", "Required field: DataSourceIdentifier, is not set");
    return StartDataSourceRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceIdentifier]", false));
  }
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDataSourceRun", "Required field: DomainIdentifier, is not set");
    return StartDataSourceRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartDataSourceRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDataSourceRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDataSourceRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDataSourceRunOutcome>(
    [&]()-> StartDataSourceRunOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDataSourceRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/runs");
      return StartDataSourceRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome DataZoneClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome DataZoneClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataSourceOutcome DataZoneClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DomainIdentifier, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: Identifier, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataSourceOutcome>(
    [&]()-> UpdateDataSourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return UpdateDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDomainOutcome DataZoneClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomain", "Required field: Identifier, is not set");
    return UpdateDomainOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDomainOutcome>(
    [&]()-> UpdateDomainOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return UpdateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateEnvironmentOutcome DataZoneClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEnvironment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: DomainIdentifier, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: Identifier, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEnvironmentOutcome>(
    [&]()-> UpdateEnvironmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return UpdateEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateEnvironmentProfileOutcome DataZoneClient::UpdateEnvironmentProfile(const UpdateEnvironmentProfileRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEnvironmentProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEnvironmentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentProfile", "Required field: DomainIdentifier, is not set");
    return UpdateEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentProfile", "Required field: Identifier, is not set");
    return UpdateEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEnvironmentProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEnvironmentProfileOutcome>(
    [&]()-> UpdateEnvironmentProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEnvironmentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return UpdateEnvironmentProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGlossaryOutcome DataZoneClient::UpdateGlossary(const UpdateGlossaryRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGlossary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlossary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGlossary", "Required field: DomainIdentifier, is not set");
    return UpdateGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGlossary", "Required field: Identifier, is not set");
    return UpdateGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGlossary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGlossaryOutcome>(
    [&]()-> UpdateGlossaryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlossary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/glossaries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return UpdateGlossaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGlossaryTermOutcome DataZoneClient::UpdateGlossaryTerm(const UpdateGlossaryTermRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGlossaryTerm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlossaryTerm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGlossaryTerm", "Required field: DomainIdentifier, is not set");
    return UpdateGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGlossaryTerm", "Required field: Identifier, is not set");
    return UpdateGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGlossaryTerm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGlossaryTermOutcome>(
    [&]()-> UpdateGlossaryTermOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlossaryTerm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/glossary-terms/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return UpdateGlossaryTermOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGroupProfileOutcome DataZoneClient::UpdateGroupProfile(const UpdateGroupProfileRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGroupProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGroupProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroupProfile", "Required field: DomainIdentifier, is not set");
    return UpdateGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.GroupIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroupProfile", "Required field: GroupIdentifier, is not set");
    return UpdateGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGroupProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGroupProfileOutcome>(
    [&]()-> UpdateGroupProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGroupProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/group-profiles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupIdentifier());
      return UpdateGroupProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateProjectOutcome DataZoneClient::UpdateProject(const UpdateProjectRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: DomainIdentifier, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: Identifier, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateProjectOutcome>(
    [&]()-> UpdateProjectOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return UpdateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSubscriptionGrantStatusOutcome DataZoneClient::UpdateSubscriptionGrantStatus(const UpdateSubscriptionGrantStatusRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSubscriptionGrantStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriptionGrantStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionGrantStatus", "Required field: AssetIdentifier, is not set");
    return UpdateSubscriptionGrantStatusOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetIdentifier]", false));
  }
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionGrantStatus", "Required field: DomainIdentifier, is not set");
    return UpdateSubscriptionGrantStatusOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionGrantStatus", "Required field: Identifier, is not set");
    return UpdateSubscriptionGrantStatusOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSubscriptionGrantStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSubscriptionGrantStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSubscriptionGrantStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSubscriptionGrantStatusOutcome>(
    [&]()-> UpdateSubscriptionGrantStatusOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriptionGrantStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/status/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetIdentifier());
      return UpdateSubscriptionGrantStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSubscriptionRequestOutcome DataZoneClient::UpdateSubscriptionRequest(const UpdateSubscriptionRequestRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSubscriptionRequest);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return UpdateSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionRequest", "Required field: Identifier, is not set");
    return UpdateSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSubscriptionRequestOutcome>(
    [&]()-> UpdateSubscriptionRequestOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriptionRequest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return UpdateSubscriptionRequestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSubscriptionTargetOutcome DataZoneClient::UpdateSubscriptionTarget(const UpdateSubscriptionTargetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSubscriptionTarget);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriptionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionTarget", "Required field: DomainIdentifier, is not set");
    return UpdateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionTarget", "Required field: EnvironmentIdentifier, is not set");
    return UpdateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionTarget", "Required field: Identifier, is not set");
    return UpdateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSubscriptionTarget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSubscriptionTargetOutcome>(
    [&]()-> UpdateSubscriptionTargetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriptionTarget, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
      return UpdateSubscriptionTargetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateUserProfileOutcome DataZoneClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateUserProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserProfile", "Required field: DomainIdentifier, is not set");
    return UpdateUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.UserIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserProfile", "Required field: UserIdentifier, is not set");
    return UpdateUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateUserProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateUserProfileOutcome>(
    [&]()-> UpdateUserProfileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/user-profiles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserIdentifier());
      return UpdateUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

