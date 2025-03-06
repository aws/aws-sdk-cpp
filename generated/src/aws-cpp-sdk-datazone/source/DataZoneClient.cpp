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


#include <aws/datazone/DataZoneClient.h>
#include <aws/datazone/DataZoneErrorMarshaller.h>
#include <aws/datazone/DataZoneEndpointProvider.h>
#include <aws/datazone/model/AcceptPredictionsRequest.h>
#include <aws/datazone/model/AcceptSubscriptionRequestRequest.h>
#include <aws/datazone/model/AddEntityOwnerRequest.h>
#include <aws/datazone/model/AddPolicyGrantRequest.h>
#include <aws/datazone/model/AssociateEnvironmentRoleRequest.h>
#include <aws/datazone/model/CancelMetadataGenerationRunRequest.h>
#include <aws/datazone/model/CancelSubscriptionRequest.h>
#include <aws/datazone/model/CreateAssetRequest.h>
#include <aws/datazone/model/CreateAssetFilterRequest.h>
#include <aws/datazone/model/CreateAssetRevisionRequest.h>
#include <aws/datazone/model/CreateAssetTypeRequest.h>
#include <aws/datazone/model/CreateConnectionRequest.h>
#include <aws/datazone/model/CreateDataProductRequest.h>
#include <aws/datazone/model/CreateDataProductRevisionRequest.h>
#include <aws/datazone/model/CreateDataSourceRequest.h>
#include <aws/datazone/model/CreateDomainRequest.h>
#include <aws/datazone/model/CreateDomainUnitRequest.h>
#include <aws/datazone/model/CreateEnvironmentRequest.h>
#include <aws/datazone/model/CreateEnvironmentActionRequest.h>
#include <aws/datazone/model/CreateEnvironmentProfileRequest.h>
#include <aws/datazone/model/CreateFormTypeRequest.h>
#include <aws/datazone/model/CreateGlossaryRequest.h>
#include <aws/datazone/model/CreateGlossaryTermRequest.h>
#include <aws/datazone/model/CreateGroupProfileRequest.h>
#include <aws/datazone/model/CreateListingChangeSetRequest.h>
#include <aws/datazone/model/CreateProjectRequest.h>
#include <aws/datazone/model/CreateProjectMembershipRequest.h>
#include <aws/datazone/model/CreateProjectProfileRequest.h>
#include <aws/datazone/model/CreateRuleRequest.h>
#include <aws/datazone/model/CreateSubscriptionGrantRequest.h>
#include <aws/datazone/model/CreateSubscriptionRequestRequest.h>
#include <aws/datazone/model/CreateSubscriptionTargetRequest.h>
#include <aws/datazone/model/CreateUserProfileRequest.h>
#include <aws/datazone/model/DeleteAssetRequest.h>
#include <aws/datazone/model/DeleteAssetFilterRequest.h>
#include <aws/datazone/model/DeleteAssetTypeRequest.h>
#include <aws/datazone/model/DeleteConnectionRequest.h>
#include <aws/datazone/model/DeleteDataProductRequest.h>
#include <aws/datazone/model/DeleteDataSourceRequest.h>
#include <aws/datazone/model/DeleteDomainRequest.h>
#include <aws/datazone/model/DeleteDomainUnitRequest.h>
#include <aws/datazone/model/DeleteEnvironmentRequest.h>
#include <aws/datazone/model/DeleteEnvironmentActionRequest.h>
#include <aws/datazone/model/DeleteEnvironmentBlueprintConfigurationRequest.h>
#include <aws/datazone/model/DeleteEnvironmentProfileRequest.h>
#include <aws/datazone/model/DeleteFormTypeRequest.h>
#include <aws/datazone/model/DeleteGlossaryRequest.h>
#include <aws/datazone/model/DeleteGlossaryTermRequest.h>
#include <aws/datazone/model/DeleteListingRequest.h>
#include <aws/datazone/model/DeleteProjectRequest.h>
#include <aws/datazone/model/DeleteProjectMembershipRequest.h>
#include <aws/datazone/model/DeleteProjectProfileRequest.h>
#include <aws/datazone/model/DeleteRuleRequest.h>
#include <aws/datazone/model/DeleteSubscriptionGrantRequest.h>
#include <aws/datazone/model/DeleteSubscriptionRequestRequest.h>
#include <aws/datazone/model/DeleteSubscriptionTargetRequest.h>
#include <aws/datazone/model/DeleteTimeSeriesDataPointsRequest.h>
#include <aws/datazone/model/DisassociateEnvironmentRoleRequest.h>
#include <aws/datazone/model/GetAssetRequest.h>
#include <aws/datazone/model/GetAssetFilterRequest.h>
#include <aws/datazone/model/GetAssetTypeRequest.h>
#include <aws/datazone/model/GetConnectionRequest.h>
#include <aws/datazone/model/GetDataProductRequest.h>
#include <aws/datazone/model/GetDataSourceRequest.h>
#include <aws/datazone/model/GetDataSourceRunRequest.h>
#include <aws/datazone/model/GetDomainRequest.h>
#include <aws/datazone/model/GetDomainUnitRequest.h>
#include <aws/datazone/model/GetEnvironmentRequest.h>
#include <aws/datazone/model/GetEnvironmentActionRequest.h>
#include <aws/datazone/model/GetEnvironmentBlueprintRequest.h>
#include <aws/datazone/model/GetEnvironmentBlueprintConfigurationRequest.h>
#include <aws/datazone/model/GetEnvironmentCredentialsRequest.h>
#include <aws/datazone/model/GetEnvironmentProfileRequest.h>
#include <aws/datazone/model/GetFormTypeRequest.h>
#include <aws/datazone/model/GetGlossaryRequest.h>
#include <aws/datazone/model/GetGlossaryTermRequest.h>
#include <aws/datazone/model/GetGroupProfileRequest.h>
#include <aws/datazone/model/GetIamPortalLoginUrlRequest.h>
#include <aws/datazone/model/GetJobRunRequest.h>
#include <aws/datazone/model/GetLineageEventRequest.h>
#include <aws/datazone/model/GetLineageNodeRequest.h>
#include <aws/datazone/model/GetListingRequest.h>
#include <aws/datazone/model/GetMetadataGenerationRunRequest.h>
#include <aws/datazone/model/GetProjectRequest.h>
#include <aws/datazone/model/GetProjectProfileRequest.h>
#include <aws/datazone/model/GetRuleRequest.h>
#include <aws/datazone/model/GetSubscriptionRequest.h>
#include <aws/datazone/model/GetSubscriptionGrantRequest.h>
#include <aws/datazone/model/GetSubscriptionRequestDetailsRequest.h>
#include <aws/datazone/model/GetSubscriptionTargetRequest.h>
#include <aws/datazone/model/GetTimeSeriesDataPointRequest.h>
#include <aws/datazone/model/GetUserProfileRequest.h>
#include <aws/datazone/model/ListAssetFiltersRequest.h>
#include <aws/datazone/model/ListAssetRevisionsRequest.h>
#include <aws/datazone/model/ListConnectionsRequest.h>
#include <aws/datazone/model/ListDataProductRevisionsRequest.h>
#include <aws/datazone/model/ListDataSourceRunActivitiesRequest.h>
#include <aws/datazone/model/ListDataSourceRunsRequest.h>
#include <aws/datazone/model/ListDataSourcesRequest.h>
#include <aws/datazone/model/ListDomainUnitsForParentRequest.h>
#include <aws/datazone/model/ListDomainsRequest.h>
#include <aws/datazone/model/ListEntityOwnersRequest.h>
#include <aws/datazone/model/ListEnvironmentActionsRequest.h>
#include <aws/datazone/model/ListEnvironmentBlueprintConfigurationsRequest.h>
#include <aws/datazone/model/ListEnvironmentBlueprintsRequest.h>
#include <aws/datazone/model/ListEnvironmentProfilesRequest.h>
#include <aws/datazone/model/ListEnvironmentsRequest.h>
#include <aws/datazone/model/ListJobRunsRequest.h>
#include <aws/datazone/model/ListLineageEventsRequest.h>
#include <aws/datazone/model/ListLineageNodeHistoryRequest.h>
#include <aws/datazone/model/ListMetadataGenerationRunsRequest.h>
#include <aws/datazone/model/ListNotificationsRequest.h>
#include <aws/datazone/model/ListPolicyGrantsRequest.h>
#include <aws/datazone/model/ListProjectMembershipsRequest.h>
#include <aws/datazone/model/ListProjectProfilesRequest.h>
#include <aws/datazone/model/ListProjectsRequest.h>
#include <aws/datazone/model/ListRulesRequest.h>
#include <aws/datazone/model/ListSubscriptionGrantsRequest.h>
#include <aws/datazone/model/ListSubscriptionRequestsRequest.h>
#include <aws/datazone/model/ListSubscriptionTargetsRequest.h>
#include <aws/datazone/model/ListSubscriptionsRequest.h>
#include <aws/datazone/model/ListTagsForResourceRequest.h>
#include <aws/datazone/model/ListTimeSeriesDataPointsRequest.h>
#include <aws/datazone/model/PostLineageEventRequest.h>
#include <aws/datazone/model/PostTimeSeriesDataPointsRequest.h>
#include <aws/datazone/model/PutEnvironmentBlueprintConfigurationRequest.h>
#include <aws/datazone/model/RejectPredictionsRequest.h>
#include <aws/datazone/model/RejectSubscriptionRequestRequest.h>
#include <aws/datazone/model/RemoveEntityOwnerRequest.h>
#include <aws/datazone/model/RemovePolicyGrantRequest.h>
#include <aws/datazone/model/RevokeSubscriptionRequest.h>
#include <aws/datazone/model/SearchRequest.h>
#include <aws/datazone/model/SearchGroupProfilesRequest.h>
#include <aws/datazone/model/SearchListingsRequest.h>
#include <aws/datazone/model/SearchTypesRequest.h>
#include <aws/datazone/model/SearchUserProfilesRequest.h>
#include <aws/datazone/model/StartDataSourceRunRequest.h>
#include <aws/datazone/model/StartMetadataGenerationRunRequest.h>
#include <aws/datazone/model/TagResourceRequest.h>
#include <aws/datazone/model/UntagResourceRequest.h>
#include <aws/datazone/model/UpdateAssetFilterRequest.h>
#include <aws/datazone/model/UpdateConnectionRequest.h>
#include <aws/datazone/model/UpdateDataSourceRequest.h>
#include <aws/datazone/model/UpdateDomainRequest.h>
#include <aws/datazone/model/UpdateDomainUnitRequest.h>
#include <aws/datazone/model/UpdateEnvironmentRequest.h>
#include <aws/datazone/model/UpdateEnvironmentActionRequest.h>
#include <aws/datazone/model/UpdateEnvironmentProfileRequest.h>
#include <aws/datazone/model/UpdateGlossaryRequest.h>
#include <aws/datazone/model/UpdateGlossaryTermRequest.h>
#include <aws/datazone/model/UpdateGroupProfileRequest.h>
#include <aws/datazone/model/UpdateProjectRequest.h>
#include <aws/datazone/model/UpdateProjectProfileRequest.h>
#include <aws/datazone/model/UpdateRuleRequest.h>
#include <aws/datazone/model/UpdateSubscriptionGrantStatusRequest.h>
#include <aws/datazone/model/UpdateSubscriptionRequestRequest.h>
#include <aws/datazone/model/UpdateSubscriptionTargetRequest.h>
#include <aws/datazone/model/UpdateUserProfileRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

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
    const char ALLOCATION_TAG[] = "DataZoneClient";
    const char SERVICE_NAME[] = "datazone";
  }
}
const char* DataZoneClient::GetServiceName() {return SERVICE_NAME;}
const char* DataZoneClient::GetAllocationTag() {return ALLOCATION_TAG;}

DataZoneClient::DataZoneClient(const DataZone::DataZoneClientConfiguration& clientConfiguration,
                           std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DataZone",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

DataZoneClient::DataZoneClient(const AWSCredentials& credentials,
                           std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider,
                           const DataZone::DataZoneClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DataZone",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

DataZoneClient::DataZoneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider,
                           const DataZone::DataZoneClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DataZone",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
DataZoneClient::DataZoneClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "DataZone",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

DataZoneClient::DataZoneClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DataZone",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

DataZoneClient::DataZoneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DataZone",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

DataZoneClient::~DataZoneClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<DataZoneEndpointProviderBase>& DataZoneClient::accessEndpointProvider()
{
  return m_endpointProvider;
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AcceptPredictions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AcceptPredictions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AcceptPredictions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AcceptPredictionsOutcome>(
    [&]()-> AcceptPredictionsOutcome {
      return AcceptPredictionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/accept-predictions");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AcceptSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AcceptSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AcceptSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AcceptSubscriptionRequestOutcome>(
    [&]()-> AcceptSubscriptionRequestOutcome {
      return AcceptSubscriptionRequestOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-requests/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/accept");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddEntityOwnerOutcome DataZoneClient::AddEntityOwner(const AddEntityOwnerRequest& request) const
{
  AWS_OPERATION_GUARD(AddEntityOwner);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddEntityOwner, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddEntityOwner", "Required field: DomainIdentifier, is not set");
    return AddEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddEntityOwner", "Required field: EntityIdentifier, is not set");
    return AddEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddEntityOwner", "Required field: EntityType, is not set");
    return AddEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AddEntityOwner, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddEntityOwner, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddEntityOwner",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddEntityOwnerOutcome>(
    [&]()-> AddEntityOwnerOutcome {
      return AddEntityOwnerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/entities/");
      resolvedEndpoint.AddPathSegment(DataZoneEntityTypeMapper::GetNameForDataZoneEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/addOwner");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddPolicyGrantOutcome DataZoneClient::AddPolicyGrant(const AddPolicyGrantRequest& request) const
{
  AWS_OPERATION_GUARD(AddPolicyGrant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddPolicyGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddPolicyGrant", "Required field: DomainIdentifier, is not set");
    return AddPolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddPolicyGrant", "Required field: EntityIdentifier, is not set");
    return AddPolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddPolicyGrant", "Required field: EntityType, is not set");
    return AddPolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AddPolicyGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddPolicyGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddPolicyGrant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddPolicyGrantOutcome>(
    [&]()-> AddPolicyGrantOutcome {
      return AddPolicyGrantOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/policies/managed/");
      resolvedEndpoint.AddPathSegment(TargetEntityTypeMapper::GetNameForTargetEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/addGrant");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateEnvironmentRoleOutcome DataZoneClient::AssociateEnvironmentRole(const AssociateEnvironmentRoleRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateEnvironmentRole);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateEnvironmentRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateEnvironmentRole", "Required field: DomainIdentifier, is not set");
    return AssociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateEnvironmentRole", "Required field: EnvironmentIdentifier, is not set");
    return AssociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.EnvironmentRoleArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateEnvironmentRole", "Required field: EnvironmentRoleArn, is not set");
    return AssociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentRoleArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateEnvironmentRole, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateEnvironmentRole, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateEnvironmentRole",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateEnvironmentRoleOutcome>(
    [&]()-> AssociateEnvironmentRoleOutcome {
      return AssociateEnvironmentRoleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/roles/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentRoleArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelMetadataGenerationRunOutcome DataZoneClient::CancelMetadataGenerationRun(const CancelMetadataGenerationRunRequest& request) const
{
  AWS_OPERATION_GUARD(CancelMetadataGenerationRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelMetadataGenerationRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelMetadataGenerationRun", "Required field: DomainIdentifier, is not set");
    return CancelMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelMetadataGenerationRun", "Required field: Identifier, is not set");
    return CancelMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelMetadataGenerationRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelMetadataGenerationRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelMetadataGenerationRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelMetadataGenerationRunOutcome>(
    [&]()-> CancelMetadataGenerationRunOutcome {
      return CancelMetadataGenerationRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/metadata-generation-runs/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/cancel");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelSubscriptionOutcome>(
    [&]()-> CancelSubscriptionOutcome {
      return CancelSubscriptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscriptions/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/cancel");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAsset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssetOutcome>(
    [&]()-> CreateAssetOutcome {
      return CreateAssetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAssetFilterOutcome DataZoneClient::CreateAssetFilter(const CreateAssetFilterRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssetFilter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssetFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssetFilter", "Required field: AssetIdentifier, is not set");
    return CreateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetIdentifier]", false));
  }
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssetFilter", "Required field: DomainIdentifier, is not set");
    return CreateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAssetFilter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssetFilter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssetFilter",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssetFilterOutcome>(
    [&]()-> CreateAssetFilterOutcome {
      return CreateAssetFilterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetAssetIdentifier());
      resolvedEndpoint.AddPathSegments("/filters");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAssetRevision, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssetRevision, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssetRevision",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssetRevisionOutcome>(
    [&]()-> CreateAssetRevisionOutcome {
      return CreateAssetRevisionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/revisions");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssetType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssetTypeOutcome>(
    [&]()-> CreateAssetTypeOutcome {
      return CreateAssetTypeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/asset-types");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConnectionOutcome DataZoneClient::CreateConnection(const CreateConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConnection", "Required field: DomainIdentifier, is not set");
    return CreateConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConnectionOutcome>(
    [&]()-> CreateConnectionOutcome {
      return CreateConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/connections");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataProductOutcome DataZoneClient::CreateDataProduct(const CreateDataProductRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDataProduct);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataProduct", "Required field: DomainIdentifier, is not set");
    return CreateDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDataProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataProduct",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataProductOutcome>(
    [&]()-> CreateDataProductOutcome {
      return CreateDataProductOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-products");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataProductRevisionOutcome DataZoneClient::CreateDataProductRevision(const CreateDataProductRevisionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDataProductRevision);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataProductRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataProductRevision", "Required field: DomainIdentifier, is not set");
    return CreateDataProductRevisionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataProductRevision", "Required field: Identifier, is not set");
    return CreateDataProductRevisionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDataProductRevision, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataProductRevision, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataProductRevision",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataProductRevisionOutcome>(
    [&]()-> CreateDataProductRevisionOutcome {
      return CreateDataProductRevisionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-products/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/revisions");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataSourceOutcome>(
    [&]()-> CreateDataSourceOutcome {
      return CreateDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-sources");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDomainOutcome DataZoneClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDomainOutcome>(
    [&]()-> CreateDomainOutcome {
      return CreateDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDomainUnitOutcome DataZoneClient::CreateDomainUnit(const CreateDomainUnitRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDomainUnit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomainUnit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDomainUnit", "Required field: DomainIdentifier, is not set");
    return CreateDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDomainUnit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDomainUnit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDomainUnit",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDomainUnitOutcome>(
    [&]()-> CreateDomainUnitOutcome {
      return CreateDomainUnitOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/domain-units");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEnvironmentOutcome>(
    [&]()-> CreateEnvironmentOutcome {
      return CreateEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEnvironmentActionOutcome DataZoneClient::CreateEnvironmentAction(const CreateEnvironmentActionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEnvironmentAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEnvironmentAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEnvironmentAction", "Required field: DomainIdentifier, is not set");
    return CreateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEnvironmentAction", "Required field: EnvironmentIdentifier, is not set");
    return CreateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateEnvironmentAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEnvironmentAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEnvironmentAction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEnvironmentActionOutcome>(
    [&]()-> CreateEnvironmentActionOutcome {
      return CreateEnvironmentActionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/actions");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEnvironmentProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEnvironmentProfileOutcome>(
    [&]()-> CreateEnvironmentProfileOutcome {
      return CreateEnvironmentProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-profiles");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFormType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFormTypeOutcome>(
    [&]()-> CreateFormTypeOutcome {
      return CreateFormTypeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/form-types");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGlossary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGlossaryOutcome>(
    [&]()-> CreateGlossaryOutcome {
      return CreateGlossaryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/glossaries");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGlossaryTerm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGlossaryTermOutcome>(
    [&]()-> CreateGlossaryTermOutcome {
      return CreateGlossaryTermOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/glossary-terms");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGroupProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGroupProfileOutcome>(
    [&]()-> CreateGroupProfileOutcome {
      return CreateGroupProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/group-profiles");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateListingChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateListingChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateListingChangeSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateListingChangeSetOutcome>(
    [&]()-> CreateListingChangeSetOutcome {
      return CreateListingChangeSetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/listings/change-set");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProjectOutcome>(
    [&]()-> CreateProjectOutcome {
      return CreateProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/projects");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateProjectMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProjectMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProjectMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProjectMembershipOutcome>(
    [&]()-> CreateProjectMembershipOutcome {
      return CreateProjectMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/projects/");
      resolvedEndpoint.AddPathSegment(request.GetProjectIdentifier());
      resolvedEndpoint.AddPathSegments("/createMembership");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateProjectProfileOutcome DataZoneClient::CreateProjectProfile(const CreateProjectProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProjectProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProjectProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProjectProfile", "Required field: DomainIdentifier, is not set");
    return CreateProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateProjectProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProjectProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProjectProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProjectProfileOutcome>(
    [&]()-> CreateProjectProfileOutcome {
      return CreateProjectProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/project-profiles");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRuleOutcome DataZoneClient::CreateRule(const CreateRuleRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRule", "Required field: DomainIdentifier, is not set");
    return CreateRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRuleOutcome>(
    [&]()-> CreateRuleOutcome {
      return CreateRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/rules");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSubscriptionGrant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSubscriptionGrantOutcome>(
    [&]()-> CreateSubscriptionGrantOutcome {
      return CreateSubscriptionGrantOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-grants");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSubscriptionRequestOutcome>(
    [&]()-> CreateSubscriptionRequestOutcome {
      return CreateSubscriptionRequestOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-requests");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSubscriptionTarget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSubscriptionTargetOutcome>(
    [&]()-> CreateSubscriptionTargetOutcome {
      return CreateSubscriptionTargetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-targets");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateUserProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateUserProfileOutcome>(
    [&]()-> CreateUserProfileOutcome {
      return CreateUserProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/user-profiles");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAsset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssetOutcome>(
    [&]()-> DeleteAssetOutcome {
      return DeleteAssetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAssetFilterOutcome DataZoneClient::DeleteAssetFilter(const DeleteAssetFilterRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssetFilter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssetFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssetFilter", "Required field: AssetIdentifier, is not set");
    return DeleteAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetIdentifier]", false));
  }
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssetFilter", "Required field: DomainIdentifier, is not set");
    return DeleteAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssetFilter", "Required field: Identifier, is not set");
    return DeleteAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAssetFilter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAssetFilter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAssetFilter",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssetFilterOutcome>(
    [&]()-> DeleteAssetFilterOutcome {
      return DeleteAssetFilterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetAssetIdentifier());
      resolvedEndpoint.AddPathSegments("/filters/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAssetType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssetTypeOutcome>(
    [&]()-> DeleteAssetTypeOutcome {
      return DeleteAssetTypeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/asset-types/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConnectionOutcome DataZoneClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: DomainIdentifier, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: Identifier, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConnectionOutcome>(
    [&]()-> DeleteConnectionOutcome {
      return DeleteConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/connections/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataProductOutcome DataZoneClient::DeleteDataProduct(const DeleteDataProductRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDataProduct);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataProduct", "Required field: DomainIdentifier, is not set");
    return DeleteDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataProduct", "Required field: Identifier, is not set");
    return DeleteDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDataProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataProduct",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataProductOutcome>(
    [&]()-> DeleteDataProductOutcome {
      return DeleteDataProductOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-products/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataSourceOutcome>(
    [&]()-> DeleteDataSourceOutcome {
      return DeleteDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-sources/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDomainOutcome>(
    [&]()-> DeleteDomainOutcome {
      return DeleteDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDomainUnitOutcome DataZoneClient::DeleteDomainUnit(const DeleteDomainUnitRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDomainUnit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomainUnit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainUnit", "Required field: DomainIdentifier, is not set");
    return DeleteDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainUnit", "Required field: Identifier, is not set");
    return DeleteDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDomainUnit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDomainUnit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDomainUnit",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDomainUnitOutcome>(
    [&]()-> DeleteDomainUnitOutcome {
      return DeleteDomainUnitOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/domain-units/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEnvironmentOutcome>(
    [&]()-> DeleteEnvironmentOutcome {
      return DeleteEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEnvironmentActionOutcome DataZoneClient::DeleteEnvironmentAction(const DeleteEnvironmentActionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEnvironmentAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEnvironmentAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentAction", "Required field: DomainIdentifier, is not set");
    return DeleteEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentAction", "Required field: EnvironmentIdentifier, is not set");
    return DeleteEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentAction", "Required field: Identifier, is not set");
    return DeleteEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteEnvironmentAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEnvironmentAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEnvironmentAction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEnvironmentActionOutcome>(
    [&]()-> DeleteEnvironmentActionOutcome {
      return DeleteEnvironmentActionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/actions/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEnvironmentBlueprintConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEnvironmentBlueprintConfigurationOutcome>(
    [&]()-> DeleteEnvironmentBlueprintConfigurationOutcome {
      return DeleteEnvironmentBlueprintConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-blueprint-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentBlueprintIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEnvironmentProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEnvironmentProfileOutcome>(
    [&]()-> DeleteEnvironmentProfileOutcome {
      return DeleteEnvironmentProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFormType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFormTypeOutcome>(
    [&]()-> DeleteFormTypeOutcome {
      return DeleteFormTypeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/form-types/");
      resolvedEndpoint.AddPathSegment(request.GetFormTypeIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteGlossary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteGlossaryOutcome>(
    [&]()-> DeleteGlossaryOutcome {
      return DeleteGlossaryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/glossaries/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteGlossaryTerm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteGlossaryTermOutcome>(
    [&]()-> DeleteGlossaryTermOutcome {
      return DeleteGlossaryTermOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/glossary-terms/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteListing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteListing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteListing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteListingOutcome>(
    [&]()-> DeleteListingOutcome {
      return DeleteListingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/listings/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteProjectOutcome>(
    [&]()-> DeleteProjectOutcome {
      return DeleteProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/projects/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteProjectMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteProjectMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteProjectMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteProjectMembershipOutcome>(
    [&]()-> DeleteProjectMembershipOutcome {
      return DeleteProjectMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/projects/");
      resolvedEndpoint.AddPathSegment(request.GetProjectIdentifier());
      resolvedEndpoint.AddPathSegments("/deleteMembership");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteProjectProfileOutcome DataZoneClient::DeleteProjectProfile(const DeleteProjectProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteProjectProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProjectProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProjectProfile", "Required field: DomainIdentifier, is not set");
    return DeleteProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProjectProfile", "Required field: Identifier, is not set");
    return DeleteProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteProjectProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteProjectProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteProjectProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteProjectProfileOutcome>(
    [&]()-> DeleteProjectProfileOutcome {
      return DeleteProjectProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/project-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRuleOutcome DataZoneClient::DeleteRule(const DeleteRuleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: DomainIdentifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: Identifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRuleOutcome>(
    [&]()-> DeleteRuleOutcome {
      return DeleteRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/rules/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSubscriptionGrant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSubscriptionGrantOutcome>(
    [&]()-> DeleteSubscriptionGrantOutcome {
      return DeleteSubscriptionGrantOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-grants/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSubscriptionRequestOutcome>(
    [&]()-> DeleteSubscriptionRequestOutcome {
      return DeleteSubscriptionRequestOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-requests/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSubscriptionTarget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSubscriptionTargetOutcome>(
    [&]()-> DeleteSubscriptionTargetOutcome {
      return DeleteSubscriptionTargetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-targets/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTimeSeriesDataPointsOutcome DataZoneClient::DeleteTimeSeriesDataPoints(const DeleteTimeSeriesDataPointsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTimeSeriesDataPoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTimeSeriesDataPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTimeSeriesDataPoints", "Required field: DomainIdentifier, is not set");
    return DeleteTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTimeSeriesDataPoints", "Required field: EntityIdentifier, is not set");
    return DeleteTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTimeSeriesDataPoints", "Required field: EntityType, is not set");
    return DeleteTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  if (!request.FormNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTimeSeriesDataPoints", "Required field: FormName, is not set");
    return DeleteTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FormName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTimeSeriesDataPoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTimeSeriesDataPoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTimeSeriesDataPoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTimeSeriesDataPointsOutcome>(
    [&]()-> DeleteTimeSeriesDataPointsOutcome {
      return DeleteTimeSeriesDataPointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/entities/");
      resolvedEndpoint.AddPathSegment(TimeSeriesEntityTypeMapper::GetNameForTimeSeriesEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/time-series-data-points");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateEnvironmentRoleOutcome DataZoneClient::DisassociateEnvironmentRole(const DisassociateEnvironmentRoleRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateEnvironmentRole);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateEnvironmentRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateEnvironmentRole", "Required field: DomainIdentifier, is not set");
    return DisassociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateEnvironmentRole", "Required field: EnvironmentIdentifier, is not set");
    return DisassociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.EnvironmentRoleArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateEnvironmentRole", "Required field: EnvironmentRoleArn, is not set");
    return DisassociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentRoleArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateEnvironmentRole, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateEnvironmentRole, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateEnvironmentRole",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateEnvironmentRoleOutcome>(
    [&]()-> DisassociateEnvironmentRoleOutcome {
      return DisassociateEnvironmentRoleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/roles/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentRoleArn());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAsset",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssetOutcome>(
    [&]()-> GetAssetOutcome {
      return GetAssetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssetFilterOutcome DataZoneClient::GetAssetFilter(const GetAssetFilterRequest& request) const
{
  AWS_OPERATION_GUARD(GetAssetFilter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssetFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssetFilter", "Required field: AssetIdentifier, is not set");
    return GetAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetIdentifier]", false));
  }
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssetFilter", "Required field: DomainIdentifier, is not set");
    return GetAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssetFilter", "Required field: Identifier, is not set");
    return GetAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAssetFilter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAssetFilter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAssetFilter",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssetFilterOutcome>(
    [&]()-> GetAssetFilterOutcome {
      return GetAssetFilterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetAssetIdentifier());
      resolvedEndpoint.AddPathSegments("/filters/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAssetType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAssetType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssetTypeOutcome>(
    [&]()-> GetAssetTypeOutcome {
      return GetAssetTypeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/asset-types/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConnectionOutcome DataZoneClient::GetConnection(const GetConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(GetConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnection", "Required field: DomainIdentifier, is not set");
    return GetConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnection", "Required field: Identifier, is not set");
    return GetConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConnectionOutcome>(
    [&]()-> GetConnectionOutcome {
      return GetConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/connections/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataProductOutcome DataZoneClient::GetDataProduct(const GetDataProductRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataProduct);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataProduct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataProduct", "Required field: DomainIdentifier, is not set");
    return GetDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataProduct", "Required field: Identifier, is not set");
    return GetDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataProduct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataProduct",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataProductOutcome>(
    [&]()-> GetDataProductOutcome {
      return GetDataProductOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-products/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataSourceOutcome>(
    [&]()-> GetDataSourceOutcome {
      return GetDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-sources/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataSourceRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataSourceRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataSourceRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataSourceRunOutcome>(
    [&]()-> GetDataSourceRunOutcome {
      return GetDataSourceRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-source-runs/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDomainOutcome>(
    [&]()-> GetDomainOutcome {
      return GetDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDomainUnitOutcome DataZoneClient::GetDomainUnit(const GetDomainUnitRequest& request) const
{
  AWS_OPERATION_GUARD(GetDomainUnit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomainUnit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainUnit", "Required field: DomainIdentifier, is not set");
    return GetDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainUnit", "Required field: Identifier, is not set");
    return GetDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDomainUnit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDomainUnit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDomainUnit",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDomainUnitOutcome>(
    [&]()-> GetDomainUnitOutcome {
      return GetDomainUnitOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/domain-units/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentOutcome>(
    [&]()-> GetEnvironmentOutcome {
      return GetEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEnvironmentActionOutcome DataZoneClient::GetEnvironmentAction(const GetEnvironmentActionRequest& request) const
{
  AWS_OPERATION_GUARD(GetEnvironmentAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnvironmentAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentAction", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentAction", "Required field: EnvironmentIdentifier, is not set");
    return GetEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentAction", "Required field: Identifier, is not set");
    return GetEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEnvironmentAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironmentAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironmentAction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentActionOutcome>(
    [&]()-> GetEnvironmentActionOutcome {
      return GetEnvironmentActionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/actions/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEnvironmentBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironmentBlueprint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironmentBlueprint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentBlueprintOutcome>(
    [&]()-> GetEnvironmentBlueprintOutcome {
      return GetEnvironmentBlueprintOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-blueprints/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironmentBlueprintConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentBlueprintConfigurationOutcome>(
    [&]()-> GetEnvironmentBlueprintConfigurationOutcome {
      return GetEnvironmentBlueprintConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-blueprint-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentBlueprintIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEnvironmentCredentialsOutcome DataZoneClient::GetEnvironmentCredentials(const GetEnvironmentCredentialsRequest& request) const
{
  AWS_OPERATION_GUARD(GetEnvironmentCredentials);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnvironmentCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentCredentials", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentCredentialsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironmentCredentials", "Required field: EnvironmentIdentifier, is not set");
    return GetEnvironmentCredentialsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEnvironmentCredentials, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironmentCredentials, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironmentCredentials",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentCredentialsOutcome>(
    [&]()-> GetEnvironmentCredentialsOutcome {
      return GetEnvironmentCredentialsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/credentials");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEnvironmentProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEnvironmentProfileOutcome>(
    [&]()-> GetEnvironmentProfileOutcome {
      return GetEnvironmentProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFormType, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFormType",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFormTypeOutcome>(
    [&]()-> GetFormTypeOutcome {
      return GetFormTypeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/form-types/");
      resolvedEndpoint.AddPathSegment(request.GetFormTypeIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGlossary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGlossaryOutcome>(
    [&]()-> GetGlossaryOutcome {
      return GetGlossaryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/glossaries/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGlossaryTerm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGlossaryTermOutcome>(
    [&]()-> GetGlossaryTermOutcome {
      return GetGlossaryTermOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/glossary-terms/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGroupProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGroupProfileOutcome>(
    [&]()-> GetGroupProfileOutcome {
      return GetGroupProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/group-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetGroupIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIamPortalLoginUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIamPortalLoginUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIamPortalLoginUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIamPortalLoginUrlOutcome>(
    [&]()-> GetIamPortalLoginUrlOutcome {
      return GetIamPortalLoginUrlOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/get-portal-login-url");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetJobRunOutcome DataZoneClient::GetJobRun(const GetJobRunRequest& request) const
{
  AWS_OPERATION_GUARD(GetJobRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJobRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobRun", "Required field: DomainIdentifier, is not set");
    return GetJobRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobRun", "Required field: Identifier, is not set");
    return GetJobRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetJobRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetJobRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetJobRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetJobRunOutcome>(
    [&]()-> GetJobRunOutcome {
      return GetJobRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/jobRuns/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLineageEventOutcome DataZoneClient::GetLineageEvent(const GetLineageEventRequest& request) const
{
  AWS_OPERATION_GUARD(GetLineageEvent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLineageEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLineageEvent", "Required field: DomainIdentifier, is not set");
    return GetLineageEventOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLineageEvent", "Required field: Identifier, is not set");
    return GetLineageEventOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetLineageEvent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLineageEvent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLineageEvent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLineageEventOutcome>(
    [&]()-> GetLineageEventOutcome {
      return GetLineageEventOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/lineage/events/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLineageNodeOutcome DataZoneClient::GetLineageNode(const GetLineageNodeRequest& request) const
{
  AWS_OPERATION_GUARD(GetLineageNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLineageNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLineageNode", "Required field: DomainIdentifier, is not set");
    return GetLineageNodeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLineageNode", "Required field: Identifier, is not set");
    return GetLineageNodeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetLineageNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLineageNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLineageNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLineageNodeOutcome>(
    [&]()-> GetLineageNodeOutcome {
      return GetLineageNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/lineage/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetListing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetListing, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetListing",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetListingOutcome>(
    [&]()-> GetListingOutcome {
      return GetListingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/listings/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMetadataGenerationRunOutcome DataZoneClient::GetMetadataGenerationRun(const GetMetadataGenerationRunRequest& request) const
{
  AWS_OPERATION_GUARD(GetMetadataGenerationRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetadataGenerationRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMetadataGenerationRun", "Required field: DomainIdentifier, is not set");
    return GetMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMetadataGenerationRun", "Required field: Identifier, is not set");
    return GetMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMetadataGenerationRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMetadataGenerationRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMetadataGenerationRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMetadataGenerationRunOutcome>(
    [&]()-> GetMetadataGenerationRunOutcome {
      return GetMetadataGenerationRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/metadata-generation-runs/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProjectOutcome>(
    [&]()-> GetProjectOutcome {
      return GetProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/projects/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProjectProfileOutcome DataZoneClient::GetProjectProfile(const GetProjectProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetProjectProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProjectProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProjectProfile", "Required field: DomainIdentifier, is not set");
    return GetProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProjectProfile", "Required field: Identifier, is not set");
    return GetProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetProjectProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProjectProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProjectProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProjectProfileOutcome>(
    [&]()-> GetProjectProfileOutcome {
      return GetProjectProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/project-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRuleOutcome DataZoneClient::GetRule(const GetRuleRequest& request) const
{
  AWS_OPERATION_GUARD(GetRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: DomainIdentifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: Identifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRuleOutcome>(
    [&]()-> GetRuleOutcome {
      return GetRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/rules/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionOutcome>(
    [&]()-> GetSubscriptionOutcome {
      return GetSubscriptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscriptions/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscriptionGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscriptionGrant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionGrantOutcome>(
    [&]()-> GetSubscriptionGrantOutcome {
      return GetSubscriptionGrantOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-grants/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSubscriptionRequestDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscriptionRequestDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscriptionRequestDetails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionRequestDetailsOutcome>(
    [&]()-> GetSubscriptionRequestDetailsOutcome {
      return GetSubscriptionRequestDetailsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-requests/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSubscriptionTarget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSubscriptionTargetOutcome>(
    [&]()-> GetSubscriptionTargetOutcome {
      return GetSubscriptionTargetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-targets/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTimeSeriesDataPointOutcome DataZoneClient::GetTimeSeriesDataPoint(const GetTimeSeriesDataPointRequest& request) const
{
  AWS_OPERATION_GUARD(GetTimeSeriesDataPoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTimeSeriesDataPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: DomainIdentifier, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: EntityIdentifier, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: EntityType, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  if (!request.FormNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: FormName, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FormName]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: Identifier, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTimeSeriesDataPoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTimeSeriesDataPoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTimeSeriesDataPoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTimeSeriesDataPointOutcome>(
    [&]()-> GetTimeSeriesDataPointOutcome {
      return GetTimeSeriesDataPointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/entities/");
      resolvedEndpoint.AddPathSegment(TimeSeriesEntityTypeMapper::GetNameForTimeSeriesEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/time-series-data-points/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUserProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUserProfileOutcome>(
    [&]()-> GetUserProfileOutcome {
      return GetUserProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/user-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetUserIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssetFiltersOutcome DataZoneClient::ListAssetFilters(const ListAssetFiltersRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssetFilters);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssetFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssetFilters", "Required field: AssetIdentifier, is not set");
    return ListAssetFiltersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetIdentifier]", false));
  }
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssetFilters", "Required field: DomainIdentifier, is not set");
    return ListAssetFiltersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAssetFilters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssetFilters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssetFilters",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssetFiltersOutcome>(
    [&]()-> ListAssetFiltersOutcome {
      return ListAssetFiltersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetAssetIdentifier());
      resolvedEndpoint.AddPathSegments("/filters");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAssetRevisions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssetRevisions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssetRevisions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssetRevisionsOutcome>(
    [&]()-> ListAssetRevisionsOutcome {
      return ListAssetRevisionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/revisions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConnectionsOutcome DataZoneClient::ListConnections(const ListConnectionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListConnections);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConnections", "Required field: DomainIdentifier, is not set");
    return ListConnectionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConnections", "Required field: ProjectIdentifier, is not set");
    return ListConnectionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListConnections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConnections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConnections",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConnectionsOutcome>(
    [&]()-> ListConnectionsOutcome {
      return ListConnectionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/connections");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataProductRevisionsOutcome DataZoneClient::ListDataProductRevisions(const ListDataProductRevisionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataProductRevisions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataProductRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataProductRevisions", "Required field: DomainIdentifier, is not set");
    return ListDataProductRevisionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataProductRevisions", "Required field: Identifier, is not set");
    return ListDataProductRevisionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataProductRevisions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataProductRevisions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataProductRevisions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataProductRevisionsOutcome>(
    [&]()-> ListDataProductRevisionsOutcome {
      return ListDataProductRevisionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-products/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/revisions");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataSourceRunActivities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSourceRunActivities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSourceRunActivities",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourceRunActivitiesOutcome>(
    [&]()-> ListDataSourceRunActivitiesOutcome {
      return ListDataSourceRunActivitiesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-source-runs/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/activities");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataSourceRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSourceRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSourceRuns",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourceRunsOutcome>(
    [&]()-> ListDataSourceRunsOutcome {
      return ListDataSourceRunsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-sources/");
      resolvedEndpoint.AddPathSegment(request.GetDataSourceIdentifier());
      resolvedEndpoint.AddPathSegments("/runs");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourcesOutcome>(
    [&]()-> ListDataSourcesOutcome {
      return ListDataSourcesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-sources");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDomainUnitsForParentOutcome DataZoneClient::ListDomainUnitsForParent(const ListDomainUnitsForParentRequest& request) const
{
  AWS_OPERATION_GUARD(ListDomainUnitsForParent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainUnitsForParent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainUnitsForParent", "Required field: DomainIdentifier, is not set");
    return ListDomainUnitsForParentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ParentDomainUnitIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainUnitsForParent", "Required field: ParentDomainUnitIdentifier, is not set");
    return ListDomainUnitsForParentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ParentDomainUnitIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDomainUnitsForParent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDomainUnitsForParent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDomainUnitsForParent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDomainUnitsForParentOutcome>(
    [&]()-> ListDomainUnitsForParentOutcome {
      return ListDomainUnitsForParentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/domain-units");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDomainsOutcome DataZoneClient::ListDomains(const ListDomainsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDomains);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDomains, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDomains, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDomains",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDomainsOutcome>(
    [&]()-> ListDomainsOutcome {
      return ListDomainsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEntityOwnersOutcome DataZoneClient::ListEntityOwners(const ListEntityOwnersRequest& request) const
{
  AWS_OPERATION_GUARD(ListEntityOwners);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEntityOwners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEntityOwners", "Required field: DomainIdentifier, is not set");
    return ListEntityOwnersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEntityOwners", "Required field: EntityIdentifier, is not set");
    return ListEntityOwnersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEntityOwners", "Required field: EntityType, is not set");
    return ListEntityOwnersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEntityOwners, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEntityOwners, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEntityOwners",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEntityOwnersOutcome>(
    [&]()-> ListEntityOwnersOutcome {
      return ListEntityOwnersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/entities/");
      resolvedEndpoint.AddPathSegment(DataZoneEntityTypeMapper::GetNameForDataZoneEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/owners");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEnvironmentActionsOutcome DataZoneClient::ListEnvironmentActions(const ListEnvironmentActionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEnvironmentActions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEnvironmentActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironmentActions", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentActionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEnvironmentActions", "Required field: EnvironmentIdentifier, is not set");
    return ListEnvironmentActionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEnvironmentActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironmentActions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironmentActions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentActionsOutcome>(
    [&]()-> ListEnvironmentActionsOutcome {
      return ListEnvironmentActionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/actions");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEnvironmentBlueprintConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironmentBlueprintConfigurations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironmentBlueprintConfigurations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentBlueprintConfigurationsOutcome>(
    [&]()-> ListEnvironmentBlueprintConfigurationsOutcome {
      return ListEnvironmentBlueprintConfigurationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-blueprint-configurations");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEnvironmentBlueprints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironmentBlueprints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironmentBlueprints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentBlueprintsOutcome>(
    [&]()-> ListEnvironmentBlueprintsOutcome {
      return ListEnvironmentBlueprintsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-blueprints");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEnvironmentProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironmentProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironmentProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentProfilesOutcome>(
    [&]()-> ListEnvironmentProfilesOutcome {
      return ListEnvironmentProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-profiles");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEnvironments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEnvironments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEnvironmentsOutcome>(
    [&]()-> ListEnvironmentsOutcome {
      return ListEnvironmentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListJobRunsOutcome DataZoneClient::ListJobRuns(const ListJobRunsRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobRuns);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: DomainIdentifier, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.JobIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: JobIdentifier, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListJobRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListJobRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListJobRuns",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListJobRunsOutcome>(
    [&]()-> ListJobRunsOutcome {
      return ListJobRunsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/jobs/");
      resolvedEndpoint.AddPathSegment(request.GetJobIdentifier());
      resolvedEndpoint.AddPathSegments("/runs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLineageEventsOutcome DataZoneClient::ListLineageEvents(const ListLineageEventsRequest& request) const
{
  AWS_OPERATION_GUARD(ListLineageEvents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLineageEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLineageEvents", "Required field: DomainIdentifier, is not set");
    return ListLineageEventsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListLineageEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLineageEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLineageEvents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLineageEventsOutcome>(
    [&]()-> ListLineageEventsOutcome {
      return ListLineageEventsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/lineage/events");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLineageNodeHistoryOutcome DataZoneClient::ListLineageNodeHistory(const ListLineageNodeHistoryRequest& request) const
{
  AWS_OPERATION_GUARD(ListLineageNodeHistory);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLineageNodeHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLineageNodeHistory", "Required field: DomainIdentifier, is not set");
    return ListLineageNodeHistoryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLineageNodeHistory", "Required field: Identifier, is not set");
    return ListLineageNodeHistoryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListLineageNodeHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLineageNodeHistory, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLineageNodeHistory",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLineageNodeHistoryOutcome>(
    [&]()-> ListLineageNodeHistoryOutcome {
      return ListLineageNodeHistoryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/lineage/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/history");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMetadataGenerationRunsOutcome DataZoneClient::ListMetadataGenerationRuns(const ListMetadataGenerationRunsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMetadataGenerationRuns);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMetadataGenerationRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMetadataGenerationRuns", "Required field: DomainIdentifier, is not set");
    return ListMetadataGenerationRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMetadataGenerationRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMetadataGenerationRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMetadataGenerationRuns",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMetadataGenerationRunsOutcome>(
    [&]()-> ListMetadataGenerationRunsOutcome {
      return ListMetadataGenerationRunsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/metadata-generation-runs");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNotificationsOutcome>(
    [&]()-> ListNotificationsOutcome {
      return ListNotificationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/notifications");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPolicyGrantsOutcome DataZoneClient::ListPolicyGrants(const ListPolicyGrantsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPolicyGrants);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPolicyGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPolicyGrants", "Required field: DomainIdentifier, is not set");
    return ListPolicyGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPolicyGrants", "Required field: EntityIdentifier, is not set");
    return ListPolicyGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPolicyGrants", "Required field: EntityType, is not set");
    return ListPolicyGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  if (!request.PolicyTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPolicyGrants", "Required field: PolicyType, is not set");
    return ListPolicyGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPolicyGrants, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPolicyGrants, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPolicyGrants",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPolicyGrantsOutcome>(
    [&]()-> ListPolicyGrantsOutcome {
      return ListPolicyGrantsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/policies/managed/");
      resolvedEndpoint.AddPathSegment(TargetEntityTypeMapper::GetNameForTargetEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/grants");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProjectMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProjectMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProjectMemberships",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProjectMembershipsOutcome>(
    [&]()-> ListProjectMembershipsOutcome {
      return ListProjectMembershipsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/projects/");
      resolvedEndpoint.AddPathSegment(request.GetProjectIdentifier());
      resolvedEndpoint.AddPathSegments("/memberships");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProjectProfilesOutcome DataZoneClient::ListProjectProfiles(const ListProjectProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListProjectProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjectProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProjectProfiles", "Required field: DomainIdentifier, is not set");
    return ListProjectProfilesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProjectProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProjectProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProjectProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProjectProfilesOutcome>(
    [&]()-> ListProjectProfilesOutcome {
      return ListProjectProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/project-profiles");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProjects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProjects",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProjectsOutcome>(
    [&]()-> ListProjectsOutcome {
      return ListProjectsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/projects");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRulesOutcome DataZoneClient::ListRules(const ListRulesRequest& request) const
{
  AWS_OPERATION_GUARD(ListRules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: DomainIdentifier, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.TargetIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: TargetIdentifier, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetIdentifier]", false));
  }
  if (!request.TargetTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: TargetType, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRules",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRulesOutcome>(
    [&]()-> ListRulesOutcome {
      return ListRulesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/list-rules/");
      resolvedEndpoint.AddPathSegment(RuleTargetTypeMapper::GetNameForRuleTargetType(request.GetTargetType()));
      resolvedEndpoint.AddPathSegment(request.GetTargetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSubscriptionGrants, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSubscriptionGrants, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSubscriptionGrants",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSubscriptionGrantsOutcome>(
    [&]()-> ListSubscriptionGrantsOutcome {
      return ListSubscriptionGrantsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-grants");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSubscriptionRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSubscriptionRequests, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSubscriptionRequests",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSubscriptionRequestsOutcome>(
    [&]()-> ListSubscriptionRequestsOutcome {
      return ListSubscriptionRequestsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-requests");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSubscriptionTargets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSubscriptionTargets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSubscriptionTargets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSubscriptionTargetsOutcome>(
    [&]()-> ListSubscriptionTargetsOutcome {
      return ListSubscriptionTargetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-targets");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSubscriptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSubscriptions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSubscriptions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSubscriptionsOutcome>(
    [&]()-> ListSubscriptionsOutcome {
      return ListSubscriptionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscriptions");
      }));
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
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTimeSeriesDataPointsOutcome DataZoneClient::ListTimeSeriesDataPoints(const ListTimeSeriesDataPointsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTimeSeriesDataPoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTimeSeriesDataPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTimeSeriesDataPoints", "Required field: DomainIdentifier, is not set");
    return ListTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTimeSeriesDataPoints", "Required field: EntityIdentifier, is not set");
    return ListTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTimeSeriesDataPoints", "Required field: EntityType, is not set");
    return ListTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  if (!request.FormNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTimeSeriesDataPoints", "Required field: FormName, is not set");
    return ListTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FormName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTimeSeriesDataPoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTimeSeriesDataPoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTimeSeriesDataPoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTimeSeriesDataPointsOutcome>(
    [&]()-> ListTimeSeriesDataPointsOutcome {
      return ListTimeSeriesDataPointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/entities/");
      resolvedEndpoint.AddPathSegment(TimeSeriesEntityTypeMapper::GetNameForTimeSeriesEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/time-series-data-points");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PostLineageEventOutcome DataZoneClient::PostLineageEvent(const PostLineageEventRequest& request) const
{
  AWS_OPERATION_GUARD(PostLineageEvent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostLineageEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostLineageEvent", "Required field: DomainIdentifier, is not set");
    return PostLineageEventOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PostLineageEvent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PostLineageEvent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PostLineageEvent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PostLineageEventOutcome>(
    [&]()-> PostLineageEventOutcome {
      return PostLineageEventOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/lineage/events");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PostTimeSeriesDataPointsOutcome DataZoneClient::PostTimeSeriesDataPoints(const PostTimeSeriesDataPointsRequest& request) const
{
  AWS_OPERATION_GUARD(PostTimeSeriesDataPoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostTimeSeriesDataPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostTimeSeriesDataPoints", "Required field: DomainIdentifier, is not set");
    return PostTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostTimeSeriesDataPoints", "Required field: EntityIdentifier, is not set");
    return PostTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostTimeSeriesDataPoints", "Required field: EntityType, is not set");
    return PostTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PostTimeSeriesDataPoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PostTimeSeriesDataPoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PostTimeSeriesDataPoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PostTimeSeriesDataPointsOutcome>(
    [&]()-> PostTimeSeriesDataPointsOutcome {
      return PostTimeSeriesDataPointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/entities/");
      resolvedEndpoint.AddPathSegment(TimeSeriesEntityTypeMapper::GetNameForTimeSeriesEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/time-series-data-points");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutEnvironmentBlueprintConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutEnvironmentBlueprintConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutEnvironmentBlueprintConfigurationOutcome>(
    [&]()-> PutEnvironmentBlueprintConfigurationOutcome {
      return PutEnvironmentBlueprintConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-blueprint-configurations/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentBlueprintIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RejectPredictions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RejectPredictions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RejectPredictions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RejectPredictionsOutcome>(
    [&]()-> RejectPredictionsOutcome {
      return RejectPredictionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/reject-predictions");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RejectSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RejectSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RejectSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RejectSubscriptionRequestOutcome>(
    [&]()-> RejectSubscriptionRequestOutcome {
      return RejectSubscriptionRequestOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-requests/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/reject");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveEntityOwnerOutcome DataZoneClient::RemoveEntityOwner(const RemoveEntityOwnerRequest& request) const
{
  AWS_OPERATION_GUARD(RemoveEntityOwner);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveEntityOwner, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveEntityOwner", "Required field: DomainIdentifier, is not set");
    return RemoveEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveEntityOwner", "Required field: EntityIdentifier, is not set");
    return RemoveEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveEntityOwner", "Required field: EntityType, is not set");
    return RemoveEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RemoveEntityOwner, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveEntityOwner, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveEntityOwner",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveEntityOwnerOutcome>(
    [&]()-> RemoveEntityOwnerOutcome {
      return RemoveEntityOwnerOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/entities/");
      resolvedEndpoint.AddPathSegment(DataZoneEntityTypeMapper::GetNameForDataZoneEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/removeOwner");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemovePolicyGrantOutcome DataZoneClient::RemovePolicyGrant(const RemovePolicyGrantRequest& request) const
{
  AWS_OPERATION_GUARD(RemovePolicyGrant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemovePolicyGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemovePolicyGrant", "Required field: DomainIdentifier, is not set");
    return RemovePolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemovePolicyGrant", "Required field: EntityIdentifier, is not set");
    return RemovePolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemovePolicyGrant", "Required field: EntityType, is not set");
    return RemovePolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RemovePolicyGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemovePolicyGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemovePolicyGrant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemovePolicyGrantOutcome>(
    [&]()-> RemovePolicyGrantOutcome {
      return RemovePolicyGrantOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/policies/managed/");
      resolvedEndpoint.AddPathSegment(TargetEntityTypeMapper::GetNameForTargetEntityType(request.GetEntityType()));
      resolvedEndpoint.AddPathSegment(request.GetEntityIdentifier());
      resolvedEndpoint.AddPathSegments("/removeGrant");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RevokeSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RevokeSubscription, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RevokeSubscription",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RevokeSubscriptionOutcome>(
    [&]()-> RevokeSubscriptionOutcome {
      return RevokeSubscriptionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscriptions/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/revoke");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, Search, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Search, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Search",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchOutcome>(
    [&]()-> SearchOutcome {
      return SearchOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/search");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SearchGroupProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchGroupProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchGroupProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchGroupProfilesOutcome>(
    [&]()-> SearchGroupProfilesOutcome {
      return SearchGroupProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/search-group-profiles");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SearchListings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchListings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchListings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchListingsOutcome>(
    [&]()-> SearchListingsOutcome {
      return SearchListingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/listings/search");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SearchTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchTypesOutcome>(
    [&]()-> SearchTypesOutcome {
      return SearchTypesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/types-search");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SearchUserProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchUserProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchUserProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchUserProfilesOutcome>(
    [&]()-> SearchUserProfilesOutcome {
      return SearchUserProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/search-user-profiles");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartDataSourceRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDataSourceRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDataSourceRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDataSourceRunOutcome>(
    [&]()-> StartDataSourceRunOutcome {
      return StartDataSourceRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-sources/");
      resolvedEndpoint.AddPathSegment(request.GetDataSourceIdentifier());
      resolvedEndpoint.AddPathSegments("/runs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartMetadataGenerationRunOutcome DataZoneClient::StartMetadataGenerationRun(const StartMetadataGenerationRunRequest& request) const
{
  AWS_OPERATION_GUARD(StartMetadataGenerationRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMetadataGenerationRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMetadataGenerationRun", "Required field: DomainIdentifier, is not set");
    return StartMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartMetadataGenerationRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartMetadataGenerationRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartMetadataGenerationRun",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartMetadataGenerationRunOutcome>(
    [&]()-> StartMetadataGenerationRunOutcome {
      return StartMetadataGenerationRunOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/metadata-generation-runs");
      }));
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
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
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
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAssetFilterOutcome DataZoneClient::UpdateAssetFilter(const UpdateAssetFilterRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAssetFilter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssetFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssetFilter", "Required field: AssetIdentifier, is not set");
    return UpdateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetIdentifier]", false));
  }
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssetFilter", "Required field: DomainIdentifier, is not set");
    return UpdateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssetFilter", "Required field: Identifier, is not set");
    return UpdateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAssetFilter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAssetFilter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAssetFilter",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAssetFilterOutcome>(
    [&]()-> UpdateAssetFilterOutcome {
      return UpdateAssetFilterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/assets/");
      resolvedEndpoint.AddPathSegment(request.GetAssetIdentifier());
      resolvedEndpoint.AddPathSegments("/filters/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateConnectionOutcome DataZoneClient::UpdateConnection(const UpdateConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnection", "Required field: DomainIdentifier, is not set");
    return UpdateConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConnection", "Required field: Identifier, is not set");
    return UpdateConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConnectionOutcome>(
    [&]()-> UpdateConnectionOutcome {
      return UpdateConnectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/connections/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataSourceOutcome>(
    [&]()-> UpdateDataSourceOutcome {
      return UpdateDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/data-sources/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDomain, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDomain",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDomainOutcome>(
    [&]()-> UpdateDomainOutcome {
      return UpdateDomainOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDomainUnitOutcome DataZoneClient::UpdateDomainUnit(const UpdateDomainUnitRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDomainUnit);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainUnit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainUnit", "Required field: DomainIdentifier, is not set");
    return UpdateDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainUnit", "Required field: Identifier, is not set");
    return UpdateDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDomainUnit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDomainUnit, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDomainUnit",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDomainUnitOutcome>(
    [&]()-> UpdateDomainUnitOutcome {
      return UpdateDomainUnitOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/domain-units/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEnvironment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEnvironment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEnvironmentOutcome>(
    [&]()-> UpdateEnvironmentOutcome {
      return UpdateEnvironmentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateEnvironmentActionOutcome DataZoneClient::UpdateEnvironmentAction(const UpdateEnvironmentActionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEnvironmentAction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEnvironmentAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentAction", "Required field: DomainIdentifier, is not set");
    return UpdateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentAction", "Required field: EnvironmentIdentifier, is not set");
    return UpdateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentAction", "Required field: Identifier, is not set");
    return UpdateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateEnvironmentAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEnvironmentAction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEnvironmentAction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEnvironmentActionOutcome>(
    [&]()-> UpdateEnvironmentActionOutcome {
      return UpdateEnvironmentActionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/actions/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEnvironmentProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEnvironmentProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEnvironmentProfileOutcome>(
    [&]()-> UpdateEnvironmentProfileOutcome {
      return UpdateEnvironmentProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environment-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGlossary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGlossary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGlossaryOutcome>(
    [&]()-> UpdateGlossaryOutcome {
      return UpdateGlossaryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/glossaries/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGlossaryTerm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGlossaryTerm",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGlossaryTermOutcome>(
    [&]()-> UpdateGlossaryTermOutcome {
      return UpdateGlossaryTermOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/glossary-terms/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGroupProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGroupProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGroupProfileOutcome>(
    [&]()-> UpdateGroupProfileOutcome {
      return UpdateGroupProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/group-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetGroupIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateProject, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateProject",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateProjectOutcome>(
    [&]()-> UpdateProjectOutcome {
      return UpdateProjectOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/projects/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateProjectProfileOutcome DataZoneClient::UpdateProjectProfile(const UpdateProjectProfileRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateProjectProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProjectProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProjectProfile", "Required field: DomainIdentifier, is not set");
    return UpdateProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProjectProfile", "Required field: Identifier, is not set");
    return UpdateProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateProjectProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateProjectProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateProjectProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateProjectProfileOutcome>(
    [&]()-> UpdateProjectProfileOutcome {
      return UpdateProjectProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/project-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRuleOutcome DataZoneClient::UpdateRule(const UpdateRuleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: DomainIdentifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: Identifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRuleOutcome>(
    [&]()-> UpdateRuleOutcome {
      return UpdateRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/rules/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSubscriptionGrantStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSubscriptionGrantStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSubscriptionGrantStatus",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSubscriptionGrantStatusOutcome>(
    [&]()-> UpdateSubscriptionGrantStatusOutcome {
      return UpdateSubscriptionGrantStatusOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-grants/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/status/");
      resolvedEndpoint.AddPathSegment(request.GetAssetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSubscriptionRequest, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSubscriptionRequest",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSubscriptionRequestOutcome>(
    [&]()-> UpdateSubscriptionRequestOutcome {
      return UpdateSubscriptionRequestOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-requests/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSubscriptionTarget, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSubscriptionTarget",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSubscriptionTargetOutcome>(
    [&]()-> UpdateSubscriptionTargetOutcome {
      return UpdateSubscriptionTargetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/environments/");
      resolvedEndpoint.AddPathSegment(request.GetEnvironmentIdentifier());
      resolvedEndpoint.AddPathSegments("/subscription-targets/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateUserProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateUserProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateUserProfileOutcome>(
    [&]()-> UpdateUserProfileOutcome {
      return UpdateUserProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/v2/domains/");
      resolvedEndpoint.AddPathSegment(request.GetDomainIdentifier());
      resolvedEndpoint.AddPathSegments("/user-profiles/");
      resolvedEndpoint.AddPathSegment(request.GetUserIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


