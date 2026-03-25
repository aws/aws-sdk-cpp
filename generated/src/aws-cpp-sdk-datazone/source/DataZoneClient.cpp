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
#include <aws/datazone/DataZoneClient.h>
#include <aws/datazone/DataZoneEndpointProvider.h>
#include <aws/datazone/DataZoneErrorMarshaller.h>
#include <aws/datazone/model/AcceptPredictionsRequest.h>
#include <aws/datazone/model/AcceptSubscriptionRequestRequest.h>
#include <aws/datazone/model/AddEntityOwnerRequest.h>
#include <aws/datazone/model/AddPolicyGrantRequest.h>
#include <aws/datazone/model/AssociateEnvironmentRoleRequest.h>
#include <aws/datazone/model/AssociateGovernedTermsRequest.h>
#include <aws/datazone/model/BatchGetAttributesMetadataRequest.h>
#include <aws/datazone/model/BatchPutAttributesMetadataRequest.h>
#include <aws/datazone/model/CancelMetadataGenerationRunRequest.h>
#include <aws/datazone/model/CancelSubscriptionRequest.h>
#include <aws/datazone/model/CreateAccountPoolRequest.h>
#include <aws/datazone/model/CreateAssetFilterRequest.h>
#include <aws/datazone/model/CreateAssetRequest.h>
#include <aws/datazone/model/CreateAssetRevisionRequest.h>
#include <aws/datazone/model/CreateAssetTypeRequest.h>
#include <aws/datazone/model/CreateConnectionRequest.h>
#include <aws/datazone/model/CreateDataProductRequest.h>
#include <aws/datazone/model/CreateDataProductRevisionRequest.h>
#include <aws/datazone/model/CreateDataSourceRequest.h>
#include <aws/datazone/model/CreateDomainRequest.h>
#include <aws/datazone/model/CreateDomainUnitRequest.h>
#include <aws/datazone/model/CreateEnvironmentActionRequest.h>
#include <aws/datazone/model/CreateEnvironmentBlueprintRequest.h>
#include <aws/datazone/model/CreateEnvironmentProfileRequest.h>
#include <aws/datazone/model/CreateEnvironmentRequest.h>
#include <aws/datazone/model/CreateFormTypeRequest.h>
#include <aws/datazone/model/CreateGlossaryRequest.h>
#include <aws/datazone/model/CreateGlossaryTermRequest.h>
#include <aws/datazone/model/CreateGroupProfileRequest.h>
#include <aws/datazone/model/CreateListingChangeSetRequest.h>
#include <aws/datazone/model/CreateProjectMembershipRequest.h>
#include <aws/datazone/model/CreateProjectProfileRequest.h>
#include <aws/datazone/model/CreateProjectRequest.h>
#include <aws/datazone/model/CreateRuleRequest.h>
#include <aws/datazone/model/CreateSubscriptionGrantRequest.h>
#include <aws/datazone/model/CreateSubscriptionRequestRequest.h>
#include <aws/datazone/model/CreateSubscriptionTargetRequest.h>
#include <aws/datazone/model/CreateUserProfileRequest.h>
#include <aws/datazone/model/DeleteAccountPoolRequest.h>
#include <aws/datazone/model/DeleteAssetFilterRequest.h>
#include <aws/datazone/model/DeleteAssetRequest.h>
#include <aws/datazone/model/DeleteAssetTypeRequest.h>
#include <aws/datazone/model/DeleteConnectionRequest.h>
#include <aws/datazone/model/DeleteDataExportConfigurationRequest.h>
#include <aws/datazone/model/DeleteDataProductRequest.h>
#include <aws/datazone/model/DeleteDataSourceRequest.h>
#include <aws/datazone/model/DeleteDomainRequest.h>
#include <aws/datazone/model/DeleteDomainUnitRequest.h>
#include <aws/datazone/model/DeleteEnvironmentActionRequest.h>
#include <aws/datazone/model/DeleteEnvironmentBlueprintConfigurationRequest.h>
#include <aws/datazone/model/DeleteEnvironmentBlueprintRequest.h>
#include <aws/datazone/model/DeleteEnvironmentProfileRequest.h>
#include <aws/datazone/model/DeleteEnvironmentRequest.h>
#include <aws/datazone/model/DeleteFormTypeRequest.h>
#include <aws/datazone/model/DeleteGlossaryRequest.h>
#include <aws/datazone/model/DeleteGlossaryTermRequest.h>
#include <aws/datazone/model/DeleteListingRequest.h>
#include <aws/datazone/model/DeleteProjectMembershipRequest.h>
#include <aws/datazone/model/DeleteProjectProfileRequest.h>
#include <aws/datazone/model/DeleteProjectRequest.h>
#include <aws/datazone/model/DeleteRuleRequest.h>
#include <aws/datazone/model/DeleteSubscriptionGrantRequest.h>
#include <aws/datazone/model/DeleteSubscriptionRequestRequest.h>
#include <aws/datazone/model/DeleteSubscriptionTargetRequest.h>
#include <aws/datazone/model/DeleteTimeSeriesDataPointsRequest.h>
#include <aws/datazone/model/DisassociateEnvironmentRoleRequest.h>
#include <aws/datazone/model/DisassociateGovernedTermsRequest.h>
#include <aws/datazone/model/GetAccountPoolRequest.h>
#include <aws/datazone/model/GetAssetFilterRequest.h>
#include <aws/datazone/model/GetAssetRequest.h>
#include <aws/datazone/model/GetAssetTypeRequest.h>
#include <aws/datazone/model/GetConnectionRequest.h>
#include <aws/datazone/model/GetDataExportConfigurationRequest.h>
#include <aws/datazone/model/GetDataProductRequest.h>
#include <aws/datazone/model/GetDataSourceRequest.h>
#include <aws/datazone/model/GetDataSourceRunRequest.h>
#include <aws/datazone/model/GetDomainRequest.h>
#include <aws/datazone/model/GetDomainUnitRequest.h>
#include <aws/datazone/model/GetEnvironmentActionRequest.h>
#include <aws/datazone/model/GetEnvironmentBlueprintConfigurationRequest.h>
#include <aws/datazone/model/GetEnvironmentBlueprintRequest.h>
#include <aws/datazone/model/GetEnvironmentCredentialsRequest.h>
#include <aws/datazone/model/GetEnvironmentProfileRequest.h>
#include <aws/datazone/model/GetEnvironmentRequest.h>
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
#include <aws/datazone/model/GetProjectProfileRequest.h>
#include <aws/datazone/model/GetProjectRequest.h>
#include <aws/datazone/model/GetRuleRequest.h>
#include <aws/datazone/model/GetSubscriptionGrantRequest.h>
#include <aws/datazone/model/GetSubscriptionRequest.h>
#include <aws/datazone/model/GetSubscriptionRequestDetailsRequest.h>
#include <aws/datazone/model/GetSubscriptionTargetRequest.h>
#include <aws/datazone/model/GetTimeSeriesDataPointRequest.h>
#include <aws/datazone/model/GetUserProfileRequest.h>
#include <aws/datazone/model/ListAccountPoolsRequest.h>
#include <aws/datazone/model/ListAccountsInAccountPoolRequest.h>
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
#include <aws/datazone/model/PutDataExportConfigurationRequest.h>
#include <aws/datazone/model/PutEnvironmentBlueprintConfigurationRequest.h>
#include <aws/datazone/model/QueryGraphRequest.h>
#include <aws/datazone/model/RejectPredictionsRequest.h>
#include <aws/datazone/model/RejectSubscriptionRequestRequest.h>
#include <aws/datazone/model/RemoveEntityOwnerRequest.h>
#include <aws/datazone/model/RemovePolicyGrantRequest.h>
#include <aws/datazone/model/RevokeSubscriptionRequest.h>
#include <aws/datazone/model/SearchGroupProfilesRequest.h>
#include <aws/datazone/model/SearchListingsRequest.h>
#include <aws/datazone/model/SearchRequest.h>
#include <aws/datazone/model/SearchTypesRequest.h>
#include <aws/datazone/model/SearchUserProfilesRequest.h>
#include <aws/datazone/model/StartDataSourceRunRequest.h>
#include <aws/datazone/model/StartMetadataGenerationRunRequest.h>
#include <aws/datazone/model/TagResourceRequest.h>
#include <aws/datazone/model/UntagResourceRequest.h>
#include <aws/datazone/model/UpdateAccountPoolRequest.h>
#include <aws/datazone/model/UpdateAssetFilterRequest.h>
#include <aws/datazone/model/UpdateConnectionRequest.h>
#include <aws/datazone/model/UpdateDataSourceRequest.h>
#include <aws/datazone/model/UpdateDomainRequest.h>
#include <aws/datazone/model/UpdateDomainUnitRequest.h>
#include <aws/datazone/model/UpdateEnvironmentActionRequest.h>
#include <aws/datazone/model/UpdateEnvironmentBlueprintRequest.h>
#include <aws/datazone/model/UpdateEnvironmentProfileRequest.h>
#include <aws/datazone/model/UpdateEnvironmentRequest.h>
#include <aws/datazone/model/UpdateGlossaryRequest.h>
#include <aws/datazone/model/UpdateGlossaryTermRequest.h>
#include <aws/datazone/model/UpdateGroupProfileRequest.h>
#include <aws/datazone/model/UpdateProjectProfileRequest.h>
#include <aws/datazone/model/UpdateProjectRequest.h>
#include <aws/datazone/model/UpdateRootDomainUnitOwnerRequest.h>
#include <aws/datazone/model/UpdateRuleRequest.h>
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

namespace Aws {
namespace DataZone {
const char SERVICE_NAME[] = "datazone";
const char ALLOCATION_TAG[] = "DataZoneClient";
}  // namespace DataZone
}  // namespace Aws
const char* DataZoneClient::GetServiceName() { return SERVICE_NAME; }
const char* DataZoneClient::GetAllocationTag() { return ALLOCATION_TAG; }

DataZoneClient::DataZoneClient(const DataZone::DataZoneClientConfiguration& clientConfiguration,
                               std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataZoneClient::DataZoneClient(const AWSCredentials& credentials, std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider,
                               const DataZone::DataZoneClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataZoneClient::DataZoneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<DataZoneEndpointProviderBase> endpointProvider,
                               const DataZone::DataZoneClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DataZoneClient::DataZoneClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataZoneClient::DataZoneClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataZoneClient::DataZoneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataZoneErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataZoneEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DataZoneClient::~DataZoneClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DataZoneEndpointProviderBase>& DataZoneClient::accessEndpointProvider() { return m_endpointProvider; }

void DataZoneClient::init(const DataZone::DataZoneClientConfiguration& config) {
  AWSClient::SetServiceClientName("DataZone");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "datazone");
}

void DataZoneClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DataZoneClient::InvokeOperationOutcome DataZoneClient::InvokeServiceOperation(
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

AcceptPredictionsOutcome DataZoneClient::AcceptPredictions(const AcceptPredictionsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptPredictions", "Required field: DomainIdentifier, is not set");
    return AcceptPredictionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptPredictions", "Required field: Identifier, is not set");
    return AcceptPredictionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept-predictions");
  };

  return AcceptPredictionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AcceptSubscriptionRequestOutcome DataZoneClient::AcceptSubscriptionRequest(const AcceptSubscriptionRequestRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return AcceptSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptSubscriptionRequest", "Required field: Identifier, is not set");
    return AcceptSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
  };

  return AcceptSubscriptionRequestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AddEntityOwnerOutcome DataZoneClient::AddEntityOwner(const AddEntityOwnerRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddEntityOwner", "Required field: DomainIdentifier, is not set");
    return AddEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddEntityOwner", "Required field: EntityType, is not set");
    return AddEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EntityType]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddEntityOwner", "Required field: EntityIdentifier, is not set");
    return AddEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EntityIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(DataZoneEntityTypeMapper::GetNameForDataZoneEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/addOwner");
  };

  return AddEntityOwnerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddPolicyGrantOutcome DataZoneClient::AddPolicyGrant(const AddPolicyGrantRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddPolicyGrant", "Required field: DomainIdentifier, is not set");
    return AddPolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddPolicyGrant", "Required field: EntityType, is not set");
    return AddPolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EntityType]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddPolicyGrant", "Required field: EntityIdentifier, is not set");
    return AddPolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EntityIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/managed/");
    endpointResolutionOutcome.GetResult().AddPathSegment(TargetEntityTypeMapper::GetNameForTargetEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/addGrant");
  };

  return AddPolicyGrantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateEnvironmentRoleOutcome DataZoneClient::AssociateEnvironmentRole(const AssociateEnvironmentRoleRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateEnvironmentRole", "Required field: DomainIdentifier, is not set");
    return AssociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateEnvironmentRole", "Required field: EnvironmentIdentifier, is not set");
    return AssociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.EnvironmentRoleArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateEnvironmentRole", "Required field: EnvironmentRoleArn, is not set");
    return AssociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EnvironmentRoleArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/roles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentRoleArn());
  };

  return AssociateEnvironmentRoleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateGovernedTermsOutcome DataZoneClient::AssociateGovernedTerms(const AssociateGovernedTermsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateGovernedTerms", "Required field: DomainIdentifier, is not set");
    return AssociateGovernedTermsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateGovernedTerms", "Required field: EntityIdentifier, is not set");
    return AssociateGovernedTermsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateGovernedTerms", "Required field: EntityType, is not set");
    return AssociateGovernedTermsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EntityType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(GovernedEntityTypeMapper::GetNameForGovernedEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-governed-terms");
  };

  return AssociateGovernedTermsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

BatchGetAttributesMetadataOutcome DataZoneClient::BatchGetAttributesMetadata(const BatchGetAttributesMetadataRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetAttributesMetadata", "Required field: DomainIdentifier, is not set");
    return BatchGetAttributesMetadataOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetAttributesMetadata", "Required field: EntityType, is not set");
    return BatchGetAttributesMetadataOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EntityType]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetAttributesMetadata", "Required field: EntityIdentifier, is not set");
    return BatchGetAttributesMetadataOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EntityIdentifier]", false));
  }
  if (!request.AttributeIdentifiersHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetAttributesMetadata", "Required field: AttributeIdentifiers, is not set");
    return BatchGetAttributesMetadataOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AttributeIdentifiers]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(AttributeEntityTypeMapper::GetNameForAttributeEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes-metadata");
  };

  return BatchGetAttributesMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

BatchPutAttributesMetadataOutcome DataZoneClient::BatchPutAttributesMetadata(const BatchPutAttributesMetadataRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutAttributesMetadata", "Required field: DomainIdentifier, is not set");
    return BatchPutAttributesMetadataOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutAttributesMetadata", "Required field: EntityType, is not set");
    return BatchPutAttributesMetadataOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EntityType]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutAttributesMetadata", "Required field: EntityIdentifier, is not set");
    return BatchPutAttributesMetadataOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EntityIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(AttributeEntityTypeMapper::GetNameForAttributeEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes-metadata");
  };

  return BatchPutAttributesMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CancelMetadataGenerationRunOutcome DataZoneClient::CancelMetadataGenerationRun(const CancelMetadataGenerationRunRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelMetadataGenerationRun", "Required field: DomainIdentifier, is not set");
    return CancelMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelMetadataGenerationRun", "Required field: Identifier, is not set");
    return CancelMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-generation-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return CancelMetadataGenerationRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelSubscriptionOutcome DataZoneClient::CancelSubscription(const CancelSubscriptionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelSubscription", "Required field: DomainIdentifier, is not set");
    return CancelSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelSubscription", "Required field: Identifier, is not set");
    return CancelSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return CancelSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateAccountPoolOutcome DataZoneClient::CreateAccountPool(const CreateAccountPoolRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccountPool", "Required field: DomainIdentifier, is not set");
    return CreateAccountPoolOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-pools");
  };

  return CreateAccountPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssetOutcome DataZoneClient::CreateAsset(const CreateAssetRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAsset", "Required field: DomainIdentifier, is not set");
    return CreateAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
  };

  return CreateAssetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssetFilterOutcome DataZoneClient::CreateAssetFilter(const CreateAssetFilterRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAssetFilter", "Required field: DomainIdentifier, is not set");
    return CreateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.AssetIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAssetFilter", "Required field: AssetIdentifier, is not set");
    return CreateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssetIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters");
  };

  return CreateAssetFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssetRevisionOutcome DataZoneClient::CreateAssetRevision(const CreateAssetRevisionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAssetRevision", "Required field: DomainIdentifier, is not set");
    return CreateAssetRevisionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAssetRevision", "Required field: Identifier, is not set");
    return CreateAssetRevisionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  };

  return CreateAssetRevisionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssetTypeOutcome DataZoneClient::CreateAssetType(const CreateAssetTypeRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAssetType", "Required field: DomainIdentifier, is not set");
    return CreateAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-types");
  };

  return CreateAssetTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectionOutcome DataZoneClient::CreateConnection(const CreateConnectionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConnection", "Required field: DomainIdentifier, is not set");
    return CreateConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections");
  };

  return CreateConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataProductOutcome DataZoneClient::CreateDataProduct(const CreateDataProductRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataProduct", "Required field: DomainIdentifier, is not set");
    return CreateDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-products");
  };

  return CreateDataProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataProductRevisionOutcome DataZoneClient::CreateDataProductRevision(const CreateDataProductRevisionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataProductRevision", "Required field: DomainIdentifier, is not set");
    return CreateDataProductRevisionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataProductRevision", "Required field: Identifier, is not set");
    return CreateDataProductRevisionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  };

  return CreateDataProductRevisionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataSourceOutcome DataZoneClient::CreateDataSource(const CreateDataSourceRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: DomainIdentifier, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
  };

  return CreateDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainOutcome DataZoneClient::CreateDomain(const CreateDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains");
  };

  return CreateDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainUnitOutcome DataZoneClient::CreateDomainUnit(const CreateDomainUnitRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDomainUnit", "Required field: DomainIdentifier, is not set");
    return CreateDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain-units");
  };

  return CreateDomainUnitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEnvironmentOutcome DataZoneClient::CreateEnvironment(const CreateEnvironmentRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEnvironment", "Required field: DomainIdentifier, is not set");
    return CreateEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  return CreateEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEnvironmentActionOutcome DataZoneClient::CreateEnvironmentAction(const CreateEnvironmentActionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEnvironmentAction", "Required field: DomainIdentifier, is not set");
    return CreateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEnvironmentAction", "Required field: EnvironmentIdentifier, is not set");
    return CreateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions");
  };

  return CreateEnvironmentActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEnvironmentBlueprintOutcome DataZoneClient::CreateEnvironmentBlueprint(const CreateEnvironmentBlueprintRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEnvironmentBlueprint", "Required field: DomainIdentifier, is not set");
    return CreateEnvironmentBlueprintOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprints");
  };

  return CreateEnvironmentBlueprintOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEnvironmentProfileOutcome DataZoneClient::CreateEnvironmentProfile(const CreateEnvironmentProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEnvironmentProfile", "Required field: DomainIdentifier, is not set");
    return CreateEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles");
  };

  return CreateEnvironmentProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFormTypeOutcome DataZoneClient::CreateFormType(const CreateFormTypeRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFormType", "Required field: DomainIdentifier, is not set");
    return CreateFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/form-types");
  };

  return CreateFormTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGlossaryOutcome DataZoneClient::CreateGlossary(const CreateGlossaryRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGlossary", "Required field: DomainIdentifier, is not set");
    return CreateGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/glossaries");
  };

  return CreateGlossaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGlossaryTermOutcome DataZoneClient::CreateGlossaryTerm(const CreateGlossaryTermRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGlossaryTerm", "Required field: DomainIdentifier, is not set");
    return CreateGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/glossary-terms");
  };

  return CreateGlossaryTermOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupProfileOutcome DataZoneClient::CreateGroupProfile(const CreateGroupProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroupProfile", "Required field: DomainIdentifier, is not set");
    return CreateGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/group-profiles");
  };

  return CreateGroupProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateListingChangeSetOutcome DataZoneClient::CreateListingChangeSet(const CreateListingChangeSetRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateListingChangeSet", "Required field: DomainIdentifier, is not set");
    return CreateListingChangeSetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listings/change-set");
  };

  return CreateListingChangeSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectOutcome DataZoneClient::CreateProject(const CreateProjectRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProject", "Required field: DomainIdentifier, is not set");
    return CreateProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  };

  return CreateProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectMembershipOutcome DataZoneClient::CreateProjectMembership(const CreateProjectMembershipRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProjectMembership", "Required field: DomainIdentifier, is not set");
    return CreateProjectMembershipOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProjectMembership", "Required field: ProjectIdentifier, is not set");
    return CreateProjectMembershipOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ProjectIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/createMembership");
  };

  return CreateProjectMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectProfileOutcome DataZoneClient::CreateProjectProfile(const CreateProjectProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProjectProfile", "Required field: DomainIdentifier, is not set");
    return CreateProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/project-profiles");
  };

  return CreateProjectProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleOutcome DataZoneClient::CreateRule(const CreateRuleRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRule", "Required field: DomainIdentifier, is not set");
    return CreateRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  return CreateRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubscriptionGrantOutcome DataZoneClient::CreateSubscriptionGrant(const CreateSubscriptionGrantRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionGrant", "Required field: DomainIdentifier, is not set");
    return CreateSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants");
  };

  return CreateSubscriptionGrantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubscriptionRequestOutcome DataZoneClient::CreateSubscriptionRequest(const CreateSubscriptionRequestRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return CreateSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests");
  };

  return CreateSubscriptionRequestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubscriptionTargetOutcome DataZoneClient::CreateSubscriptionTarget(const CreateSubscriptionTargetRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionTarget", "Required field: DomainIdentifier, is not set");
    return CreateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionTarget", "Required field: EnvironmentIdentifier, is not set");
    return CreateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets");
  };

  return CreateSubscriptionTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserProfileOutcome DataZoneClient::CreateUserProfile(const CreateUserProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUserProfile", "Required field: DomainIdentifier, is not set");
    return CreateUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-profiles");
  };

  return CreateUserProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccountPoolOutcome DataZoneClient::DeleteAccountPool(const DeleteAccountPoolRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccountPool", "Required field: DomainIdentifier, is not set");
    return DeleteAccountPoolOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccountPool", "Required field: Identifier, is not set");
    return DeleteAccountPoolOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteAccountPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssetOutcome DataZoneClient::DeleteAsset(const DeleteAssetRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: DomainIdentifier, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: Identifier, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteAssetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssetFilterOutcome DataZoneClient::DeleteAssetFilter(const DeleteAssetFilterRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetFilter", "Required field: DomainIdentifier, is not set");
    return DeleteAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.AssetIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetFilter", "Required field: AssetIdentifier, is not set");
    return DeleteAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssetIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetFilter", "Required field: Identifier, is not set");
    return DeleteAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteAssetFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssetTypeOutcome DataZoneClient::DeleteAssetType(const DeleteAssetTypeRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetType", "Required field: DomainIdentifier, is not set");
    return DeleteAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetType", "Required field: Identifier, is not set");
    return DeleteAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteAssetTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConnectionOutcome DataZoneClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: DomainIdentifier, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: Identifier, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataExportConfigurationOutcome DataZoneClient::DeleteDataExportConfiguration(
    const DeleteDataExportConfigurationRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataExportConfiguration", "Required field: DomainIdentifier, is not set");
    return DeleteDataExportConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-export-configuration");
  };

  return DeleteDataExportConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataProductOutcome DataZoneClient::DeleteDataProduct(const DeleteDataProductRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataProduct", "Required field: DomainIdentifier, is not set");
    return DeleteDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataProduct", "Required field: Identifier, is not set");
    return DeleteDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteDataProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataSourceOutcome DataZoneClient::DeleteDataSource(const DeleteDataSourceRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DomainIdentifier, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: Identifier, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainOutcome DataZoneClient::DeleteDomain(const DeleteDomainRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: Identifier, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainUnitOutcome DataZoneClient::DeleteDomainUnit(const DeleteDomainUnitRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainUnit", "Required field: DomainIdentifier, is not set");
    return DeleteDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainUnit", "Required field: Identifier, is not set");
    return DeleteDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain-units/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteDomainUnitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEnvironmentOutcome DataZoneClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: DomainIdentifier, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: Identifier, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEnvironmentActionOutcome DataZoneClient::DeleteEnvironmentAction(const DeleteEnvironmentActionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentAction", "Required field: DomainIdentifier, is not set");
    return DeleteEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentAction", "Required field: EnvironmentIdentifier, is not set");
    return DeleteEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentAction", "Required field: Identifier, is not set");
    return DeleteEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteEnvironmentActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEnvironmentBlueprintOutcome DataZoneClient::DeleteEnvironmentBlueprint(const DeleteEnvironmentBlueprintRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentBlueprint", "Required field: DomainIdentifier, is not set");
    return DeleteEnvironmentBlueprintOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentBlueprint", "Required field: Identifier, is not set");
    return DeleteEnvironmentBlueprintOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteEnvironmentBlueprintOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEnvironmentBlueprintConfigurationOutcome DataZoneClient::DeleteEnvironmentBlueprintConfiguration(
    const DeleteEnvironmentBlueprintConfigurationRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentBlueprintConfiguration", "Required field: DomainIdentifier, is not set");
    return DeleteEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentBlueprintIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentBlueprintConfiguration", "Required field: EnvironmentBlueprintIdentifier, is not set");
    return DeleteEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentBlueprintIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprint-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentBlueprintIdentifier());
  };

  return DeleteEnvironmentBlueprintConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEnvironmentProfileOutcome DataZoneClient::DeleteEnvironmentProfile(const DeleteEnvironmentProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentProfile", "Required field: DomainIdentifier, is not set");
    return DeleteEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEnvironmentProfile", "Required field: Identifier, is not set");
    return DeleteEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteEnvironmentProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFormTypeOutcome DataZoneClient::DeleteFormType(const DeleteFormTypeRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFormType", "Required field: DomainIdentifier, is not set");
    return DeleteFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.FormTypeIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFormType", "Required field: FormTypeIdentifier, is not set");
    return DeleteFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FormTypeIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/form-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFormTypeIdentifier());
  };

  return DeleteFormTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGlossaryOutcome DataZoneClient::DeleteGlossary(const DeleteGlossaryRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGlossary", "Required field: DomainIdentifier, is not set");
    return DeleteGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGlossary", "Required field: Identifier, is not set");
    return DeleteGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/glossaries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteGlossaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGlossaryTermOutcome DataZoneClient::DeleteGlossaryTerm(const DeleteGlossaryTermRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGlossaryTerm", "Required field: DomainIdentifier, is not set");
    return DeleteGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGlossaryTerm", "Required field: Identifier, is not set");
    return DeleteGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/glossary-terms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteGlossaryTermOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteListingOutcome DataZoneClient::DeleteListing(const DeleteListingRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteListing", "Required field: DomainIdentifier, is not set");
    return DeleteListingOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteListing", "Required field: Identifier, is not set");
    return DeleteListingOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteListingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProjectOutcome DataZoneClient::DeleteProject(const DeleteProjectRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: DomainIdentifier, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: Identifier, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProjectMembershipOutcome DataZoneClient::DeleteProjectMembership(const DeleteProjectMembershipRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProjectMembership", "Required field: DomainIdentifier, is not set");
    return DeleteProjectMembershipOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProjectMembership", "Required field: ProjectIdentifier, is not set");
    return DeleteProjectMembershipOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ProjectIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteMembership");
  };

  return DeleteProjectMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProjectProfileOutcome DataZoneClient::DeleteProjectProfile(const DeleteProjectProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProjectProfile", "Required field: DomainIdentifier, is not set");
    return DeleteProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProjectProfile", "Required field: Identifier, is not set");
    return DeleteProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/project-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteProjectProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRuleOutcome DataZoneClient::DeleteRule(const DeleteRuleRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: DomainIdentifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: Identifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSubscriptionGrantOutcome DataZoneClient::DeleteSubscriptionGrant(const DeleteSubscriptionGrantRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionGrant", "Required field: DomainIdentifier, is not set");
    return DeleteSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionGrant", "Required field: Identifier, is not set");
    return DeleteSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteSubscriptionGrantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSubscriptionRequestOutcome DataZoneClient::DeleteSubscriptionRequest(const DeleteSubscriptionRequestRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return DeleteSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionRequest", "Required field: Identifier, is not set");
    return DeleteSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteSubscriptionRequestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSubscriptionTargetOutcome DataZoneClient::DeleteSubscriptionTarget(const DeleteSubscriptionTargetRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionTarget", "Required field: DomainIdentifier, is not set");
    return DeleteSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionTarget", "Required field: EnvironmentIdentifier, is not set");
    return DeleteSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionTarget", "Required field: Identifier, is not set");
    return DeleteSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteSubscriptionTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTimeSeriesDataPointsOutcome DataZoneClient::DeleteTimeSeriesDataPoints(const DeleteTimeSeriesDataPointsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTimeSeriesDataPoints", "Required field: DomainIdentifier, is not set");
    return DeleteTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTimeSeriesDataPoints", "Required field: EntityIdentifier, is not set");
    return DeleteTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTimeSeriesDataPoints", "Required field: EntityType, is not set");
    return DeleteTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [EntityType]", false));
  }
  if (!request.FormNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTimeSeriesDataPoints", "Required field: FormName, is not set");
    return DeleteTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [FormName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        TimeSeriesEntityTypeMapper::GetNameForTimeSeriesEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/time-series-data-points");
  };

  return DeleteTimeSeriesDataPointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateEnvironmentRoleOutcome DataZoneClient::DisassociateEnvironmentRole(const DisassociateEnvironmentRoleRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateEnvironmentRole", "Required field: DomainIdentifier, is not set");
    return DisassociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateEnvironmentRole", "Required field: EnvironmentIdentifier, is not set");
    return DisassociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.EnvironmentRoleArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateEnvironmentRole", "Required field: EnvironmentRoleArn, is not set");
    return DisassociateEnvironmentRoleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [EnvironmentRoleArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/roles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentRoleArn());
  };

  return DisassociateEnvironmentRoleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateGovernedTermsOutcome DataZoneClient::DisassociateGovernedTerms(const DisassociateGovernedTermsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateGovernedTerms", "Required field: DomainIdentifier, is not set");
    return DisassociateGovernedTermsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateGovernedTerms", "Required field: EntityIdentifier, is not set");
    return DisassociateGovernedTermsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateGovernedTerms", "Required field: EntityType, is not set");
    return DisassociateGovernedTermsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [EntityType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(GovernedEntityTypeMapper::GetNameForGovernedEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-governed-terms");
  };

  return DisassociateGovernedTermsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

GetAccountPoolOutcome DataZoneClient::GetAccountPool(const GetAccountPoolRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccountPool", "Required field: DomainIdentifier, is not set");
    return GetAccountPoolOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccountPool", "Required field: Identifier, is not set");
    return GetAccountPoolOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetAccountPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssetOutcome DataZoneClient::GetAsset(const GetAssetRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: DomainIdentifier, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: Identifier, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetAssetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssetFilterOutcome DataZoneClient::GetAssetFilter(const GetAssetFilterRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssetFilter", "Required field: DomainIdentifier, is not set");
    return GetAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.AssetIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssetFilter", "Required field: AssetIdentifier, is not set");
    return GetAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssetIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssetFilter", "Required field: Identifier, is not set");
    return GetAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetAssetFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssetTypeOutcome DataZoneClient::GetAssetType(const GetAssetTypeRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssetType", "Required field: DomainIdentifier, is not set");
    return GetAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssetType", "Required field: Identifier, is not set");
    return GetAssetTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetAssetTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConnectionOutcome DataZoneClient::GetConnection(const GetConnectionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnection", "Required field: DomainIdentifier, is not set");
    return GetConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnection", "Required field: Identifier, is not set");
    return GetConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataExportConfigurationOutcome DataZoneClient::GetDataExportConfiguration(const GetDataExportConfigurationRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataExportConfiguration", "Required field: DomainIdentifier, is not set");
    return GetDataExportConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-export-configuration");
  };

  return GetDataExportConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataProductOutcome DataZoneClient::GetDataProduct(const GetDataProductRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataProduct", "Required field: DomainIdentifier, is not set");
    return GetDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataProduct", "Required field: Identifier, is not set");
    return GetDataProductOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetDataProductOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataSourceOutcome DataZoneClient::GetDataSource(const GetDataSourceRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: DomainIdentifier, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: Identifier, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataSourceRunOutcome DataZoneClient::GetDataSourceRun(const GetDataSourceRunRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSourceRun", "Required field: DomainIdentifier, is not set");
    return GetDataSourceRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSourceRun", "Required field: Identifier, is not set");
    return GetDataSourceRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-source-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetDataSourceRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainOutcome DataZoneClient::GetDomain(const GetDomainRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomain", "Required field: Identifier, is not set");
    return GetDomainOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainUnitOutcome DataZoneClient::GetDomainUnit(const GetDomainUnitRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainUnit", "Required field: DomainIdentifier, is not set");
    return GetDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainUnit", "Required field: Identifier, is not set");
    return GetDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain-units/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetDomainUnitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEnvironmentOutcome DataZoneClient::GetEnvironment(const GetEnvironmentRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: Identifier, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEnvironmentActionOutcome DataZoneClient::GetEnvironmentAction(const GetEnvironmentActionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentAction", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentAction", "Required field: EnvironmentIdentifier, is not set");
    return GetEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentAction", "Required field: Identifier, is not set");
    return GetEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetEnvironmentActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEnvironmentBlueprintOutcome DataZoneClient::GetEnvironmentBlueprint(const GetEnvironmentBlueprintRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentBlueprint", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentBlueprintOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentBlueprint", "Required field: Identifier, is not set");
    return GetEnvironmentBlueprintOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetEnvironmentBlueprintOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEnvironmentBlueprintConfigurationOutcome DataZoneClient::GetEnvironmentBlueprintConfiguration(
    const GetEnvironmentBlueprintConfigurationRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentBlueprintConfiguration", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentBlueprintIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentBlueprintConfiguration", "Required field: EnvironmentBlueprintIdentifier, is not set");
    return GetEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentBlueprintIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprint-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentBlueprintIdentifier());
  };

  return GetEnvironmentBlueprintConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEnvironmentCredentialsOutcome DataZoneClient::GetEnvironmentCredentials(const GetEnvironmentCredentialsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentCredentials", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentCredentialsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentCredentials", "Required field: EnvironmentIdentifier, is not set");
    return GetEnvironmentCredentialsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/credentials");
  };

  return GetEnvironmentCredentialsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEnvironmentProfileOutcome DataZoneClient::GetEnvironmentProfile(const GetEnvironmentProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentProfile", "Required field: DomainIdentifier, is not set");
    return GetEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEnvironmentProfile", "Required field: Identifier, is not set");
    return GetEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetEnvironmentProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFormTypeOutcome DataZoneClient::GetFormType(const GetFormTypeRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFormType", "Required field: DomainIdentifier, is not set");
    return GetFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DomainIdentifier]", false));
  }
  if (!request.FormTypeIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFormType", "Required field: FormTypeIdentifier, is not set");
    return GetFormTypeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FormTypeIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/form-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFormTypeIdentifier());
  };

  return GetFormTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGlossaryOutcome DataZoneClient::GetGlossary(const GetGlossaryRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGlossary", "Required field: DomainIdentifier, is not set");
    return GetGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGlossary", "Required field: Identifier, is not set");
    return GetGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/glossaries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetGlossaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGlossaryTermOutcome DataZoneClient::GetGlossaryTerm(const GetGlossaryTermRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGlossaryTerm", "Required field: DomainIdentifier, is not set");
    return GetGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGlossaryTerm", "Required field: Identifier, is not set");
    return GetGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/glossary-terms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetGlossaryTermOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGroupProfileOutcome DataZoneClient::GetGroupProfile(const GetGroupProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroupProfile", "Required field: DomainIdentifier, is not set");
    return GetGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainIdentifier]", false));
  }
  if (!request.GroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroupProfile", "Required field: GroupIdentifier, is not set");
    return GetGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [GroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/group-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupIdentifier());
  };

  return GetGroupProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIamPortalLoginUrlOutcome DataZoneClient::GetIamPortalLoginUrl(const GetIamPortalLoginUrlRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIamPortalLoginUrl", "Required field: DomainIdentifier, is not set");
    return GetIamPortalLoginUrlOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-portal-login-url");
  };

  return GetIamPortalLoginUrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobRunOutcome DataZoneClient::GetJobRun(const GetJobRunRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobRun", "Required field: DomainIdentifier, is not set");
    return GetJobRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJobRun", "Required field: Identifier, is not set");
    return GetJobRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobRuns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetJobRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLineageEventOutcome DataZoneClient::GetLineageEvent(const GetLineageEventRequest& request) const {
  AWS_OPERATION_GUARD(GetLineageEvent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLineageEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLineageEvent", "Required field: DomainIdentifier, is not set");
    return GetLineageEventOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLineageEvent", "Required field: Identifier, is not set");
    return GetLineageEventOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetLineageEvent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLineageEvent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLineageEvent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLineageEventOutcome>(
      [&]() -> GetLineageEventOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLineageEvent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/lineage/events/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
        return GetLineageEventOutcome(
            MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLineageNodeOutcome DataZoneClient::GetLineageNode(const GetLineageNodeRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLineageNode", "Required field: DomainIdentifier, is not set");
    return GetLineageNodeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLineageNode", "Required field: Identifier, is not set");
    return GetLineageNodeOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lineage/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetLineageNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetListingOutcome DataZoneClient::GetListing(const GetListingRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetListing", "Required field: DomainIdentifier, is not set");
    return GetListingOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetListing", "Required field: Identifier, is not set");
    return GetListingOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetListingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMetadataGenerationRunOutcome DataZoneClient::GetMetadataGenerationRun(const GetMetadataGenerationRunRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMetadataGenerationRun", "Required field: DomainIdentifier, is not set");
    return GetMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMetadataGenerationRun", "Required field: Identifier, is not set");
    return GetMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-generation-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetMetadataGenerationRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProjectOutcome DataZoneClient::GetProject(const GetProjectRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: DomainIdentifier, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: Identifier, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProjectProfileOutcome DataZoneClient::GetProjectProfile(const GetProjectProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProjectProfile", "Required field: DomainIdentifier, is not set");
    return GetProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProjectProfile", "Required field: Identifier, is not set");
    return GetProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/project-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetProjectProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRuleOutcome DataZoneClient::GetRule(const GetRuleRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: DomainIdentifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: Identifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSubscriptionOutcome DataZoneClient::GetSubscription(const GetSubscriptionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscription", "Required field: DomainIdentifier, is not set");
    return GetSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscription", "Required field: Identifier, is not set");
    return GetSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSubscriptionGrantOutcome DataZoneClient::GetSubscriptionGrant(const GetSubscriptionGrantRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionGrant", "Required field: DomainIdentifier, is not set");
    return GetSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionGrant", "Required field: Identifier, is not set");
    return GetSubscriptionGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetSubscriptionGrantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSubscriptionRequestDetailsOutcome DataZoneClient::GetSubscriptionRequestDetails(
    const GetSubscriptionRequestDetailsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionRequestDetails", "Required field: DomainIdentifier, is not set");
    return GetSubscriptionRequestDetailsOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionRequestDetails", "Required field: Identifier, is not set");
    return GetSubscriptionRequestDetailsOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetSubscriptionRequestDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSubscriptionTargetOutcome DataZoneClient::GetSubscriptionTarget(const GetSubscriptionTargetRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionTarget", "Required field: DomainIdentifier, is not set");
    return GetSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionTarget", "Required field: EnvironmentIdentifier, is not set");
    return GetSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSubscriptionTarget", "Required field: Identifier, is not set");
    return GetSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetSubscriptionTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTimeSeriesDataPointOutcome DataZoneClient::GetTimeSeriesDataPoint(const GetTimeSeriesDataPointRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: DomainIdentifier, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: EntityIdentifier, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: EntityType, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EntityType]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: Identifier, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Identifier]", false));
  }
  if (!request.FormNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTimeSeriesDataPoint", "Required field: FormName, is not set");
    return GetTimeSeriesDataPointOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FormName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        TimeSeriesEntityTypeMapper::GetNameForTimeSeriesEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/time-series-data-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetTimeSeriesDataPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUserProfileOutcome DataZoneClient::GetUserProfile(const GetUserProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserProfile", "Required field: DomainIdentifier, is not set");
    return GetUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.UserIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserProfile", "Required field: UserIdentifier, is not set");
    return GetUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [UserIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserIdentifier());
  };

  return GetUserProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAccountPoolsOutcome DataZoneClient::ListAccountPools(const ListAccountPoolsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccountPools", "Required field: DomainIdentifier, is not set");
    return ListAccountPoolsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-pools");
  };

  return ListAccountPoolsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAccountsInAccountPoolOutcome DataZoneClient::ListAccountsInAccountPool(const ListAccountsInAccountPoolRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccountsInAccountPool", "Required field: DomainIdentifier, is not set");
    return ListAccountsInAccountPoolOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAccountsInAccountPool", "Required field: Identifier, is not set");
    return ListAccountsInAccountPoolOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  };

  return ListAccountsInAccountPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssetFiltersOutcome DataZoneClient::ListAssetFilters(const ListAssetFiltersRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetFilters", "Required field: DomainIdentifier, is not set");
    return ListAssetFiltersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.AssetIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetFilters", "Required field: AssetIdentifier, is not set");
    return ListAssetFiltersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AssetIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters");
  };

  return ListAssetFiltersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssetRevisionsOutcome DataZoneClient::ListAssetRevisions(const ListAssetRevisionsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetRevisions", "Required field: DomainIdentifier, is not set");
    return ListAssetRevisionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetRevisions", "Required field: Identifier, is not set");
    return ListAssetRevisionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  };

  return ListAssetRevisionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConnectionsOutcome DataZoneClient::ListConnections(const ListConnectionsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConnections", "Required field: DomainIdentifier, is not set");
    return ListConnectionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections");
  };

  return ListConnectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataProductRevisionsOutcome DataZoneClient::ListDataProductRevisions(const ListDataProductRevisionsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataProductRevisions", "Required field: DomainIdentifier, is not set");
    return ListDataProductRevisionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataProductRevisions", "Required field: Identifier, is not set");
    return ListDataProductRevisionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-products/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  };

  return ListDataProductRevisionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataSourceRunActivitiesOutcome DataZoneClient::ListDataSourceRunActivities(const ListDataSourceRunActivitiesRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSourceRunActivities", "Required field: DomainIdentifier, is not set");
    return ListDataSourceRunActivitiesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSourceRunActivities", "Required field: Identifier, is not set");
    return ListDataSourceRunActivitiesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-source-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activities");
  };

  return ListDataSourceRunActivitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataSourceRunsOutcome DataZoneClient::ListDataSourceRuns(const ListDataSourceRunsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSourceRuns", "Required field: DomainIdentifier, is not set");
    return ListDataSourceRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }
  if (!request.DataSourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSourceRuns", "Required field: DataSourceIdentifier, is not set");
    return ListDataSourceRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DataSourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runs");
  };

  return ListDataSourceRunsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataSourcesOutcome DataZoneClient::ListDataSources(const ListDataSourcesRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: DomainIdentifier, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: ProjectIdentifier, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ProjectIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
  };

  return ListDataSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainUnitsForParentOutcome DataZoneClient::ListDomainUnitsForParent(const ListDomainUnitsForParentRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainUnitsForParent", "Required field: DomainIdentifier, is not set");
    return ListDomainUnitsForParentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ParentDomainUnitIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainUnitsForParent", "Required field: ParentDomainUnitIdentifier, is not set");
    return ListDomainUnitsForParentOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ParentDomainUnitIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain-units");
  };

  return ListDomainUnitsForParentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainsOutcome DataZoneClient::ListDomains(const ListDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains");
  };

  return ListDomainsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEntityOwnersOutcome DataZoneClient::ListEntityOwners(const ListEntityOwnersRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEntityOwners", "Required field: DomainIdentifier, is not set");
    return ListEntityOwnersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEntityOwners", "Required field: EntityType, is not set");
    return ListEntityOwnersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EntityType]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEntityOwners", "Required field: EntityIdentifier, is not set");
    return ListEntityOwnersOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EntityIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(DataZoneEntityTypeMapper::GetNameForDataZoneEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/owners");
  };

  return ListEntityOwnersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEnvironmentActionsOutcome DataZoneClient::ListEnvironmentActions(const ListEnvironmentActionsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEnvironmentActions", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentActionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEnvironmentActions", "Required field: EnvironmentIdentifier, is not set");
    return ListEnvironmentActionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions");
  };

  return ListEnvironmentActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEnvironmentBlueprintConfigurationsOutcome DataZoneClient::ListEnvironmentBlueprintConfigurations(
    const ListEnvironmentBlueprintConfigurationsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEnvironmentBlueprintConfigurations", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentBlueprintConfigurationsOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprint-configurations");
  };

  return ListEnvironmentBlueprintConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEnvironmentBlueprintsOutcome DataZoneClient::ListEnvironmentBlueprints(const ListEnvironmentBlueprintsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEnvironmentBlueprints", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentBlueprintsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprints");
  };

  return ListEnvironmentBlueprintsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEnvironmentProfilesOutcome DataZoneClient::ListEnvironmentProfiles(const ListEnvironmentProfilesRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEnvironmentProfiles", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentProfilesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles");
  };

  return ListEnvironmentProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEnvironmentsOutcome DataZoneClient::ListEnvironments(const ListEnvironmentsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEnvironments", "Required field: DomainIdentifier, is not set");
    return ListEnvironmentsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEnvironments", "Required field: ProjectIdentifier, is not set");
    return ListEnvironmentsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ProjectIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments");
  };

  return ListEnvironmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobRunsOutcome DataZoneClient::ListJobRuns(const ListJobRunsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: DomainIdentifier, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DomainIdentifier]", false));
  }
  if (!request.JobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: JobIdentifier, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [JobIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runs");
  };

  return ListJobRunsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLineageEventsOutcome DataZoneClient::ListLineageEvents(const ListLineageEventsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLineageEvents", "Required field: DomainIdentifier, is not set");
    return ListLineageEventsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lineage/events");
  };

  return ListLineageEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLineageNodeHistoryOutcome DataZoneClient::ListLineageNodeHistory(const ListLineageNodeHistoryRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLineageNodeHistory", "Required field: DomainIdentifier, is not set");
    return ListLineageNodeHistoryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLineageNodeHistory", "Required field: Identifier, is not set");
    return ListLineageNodeHistoryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lineage/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/history");
  };

  return ListLineageNodeHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMetadataGenerationRunsOutcome DataZoneClient::ListMetadataGenerationRuns(const ListMetadataGenerationRunsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMetadataGenerationRuns", "Required field: DomainIdentifier, is not set");
    return ListMetadataGenerationRunsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-generation-runs");
  };

  return ListMetadataGenerationRunsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNotificationsOutcome DataZoneClient::ListNotifications(const ListNotificationsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNotifications", "Required field: DomainIdentifier, is not set");
    return ListNotificationsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNotifications", "Required field: Type, is not set");
    return ListNotificationsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Type]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notifications");
  };

  return ListNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPolicyGrantsOutcome DataZoneClient::ListPolicyGrants(const ListPolicyGrantsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyGrants", "Required field: DomainIdentifier, is not set");
    return ListPolicyGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyGrants", "Required field: EntityType, is not set");
    return ListPolicyGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EntityType]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyGrants", "Required field: EntityIdentifier, is not set");
    return ListPolicyGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EntityIdentifier]", false));
  }
  if (!request.PolicyTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicyGrants", "Required field: PolicyType, is not set");
    return ListPolicyGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PolicyType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/managed/");
    endpointResolutionOutcome.GetResult().AddPathSegment(TargetEntityTypeMapper::GetNameForTargetEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/grants");
  };

  return ListPolicyGrantsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProjectMembershipsOutcome DataZoneClient::ListProjectMemberships(const ListProjectMembershipsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProjectMemberships", "Required field: DomainIdentifier, is not set");
    return ListProjectMembershipsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainIdentifier]", false));
  }
  if (!request.ProjectIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProjectMemberships", "Required field: ProjectIdentifier, is not set");
    return ListProjectMembershipsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ProjectIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  };

  return ListProjectMembershipsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProjectProfilesOutcome DataZoneClient::ListProjectProfiles(const ListProjectProfilesRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProjectProfiles", "Required field: DomainIdentifier, is not set");
    return ListProjectProfilesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/project-profiles");
  };

  return ListProjectProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProjectsOutcome DataZoneClient::ListProjects(const ListProjectsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProjects", "Required field: DomainIdentifier, is not set");
    return ListProjectsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  };

  return ListProjectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRulesOutcome DataZoneClient::ListRules(const ListRulesRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: DomainIdentifier, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.TargetTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: TargetType, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [TargetType]", false));
  }
  if (!request.TargetIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRules", "Required field: TargetIdentifier, is not set");
    return ListRulesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [TargetIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(RuleTargetTypeMapper::GetNameForRuleTargetType(request.GetTargetType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetIdentifier());
  };

  return ListRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSubscriptionGrantsOutcome DataZoneClient::ListSubscriptionGrants(const ListSubscriptionGrantsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubscriptionGrants", "Required field: DomainIdentifier, is not set");
    return ListSubscriptionGrantsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants");
  };

  return ListSubscriptionGrantsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSubscriptionRequestsOutcome DataZoneClient::ListSubscriptionRequests(const ListSubscriptionRequestsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubscriptionRequests", "Required field: DomainIdentifier, is not set");
    return ListSubscriptionRequestsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests");
  };

  return ListSubscriptionRequestsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSubscriptionTargetsOutcome DataZoneClient::ListSubscriptionTargets(const ListSubscriptionTargetsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubscriptionTargets", "Required field: DomainIdentifier, is not set");
    return ListSubscriptionTargetsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubscriptionTargets", "Required field: EnvironmentIdentifier, is not set");
    return ListSubscriptionTargetsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [EnvironmentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets");
  };

  return ListSubscriptionTargetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSubscriptionsOutcome DataZoneClient::ListSubscriptions(const ListSubscriptionsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubscriptions", "Required field: DomainIdentifier, is not set");
    return ListSubscriptionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
  };

  return ListSubscriptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome DataZoneClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTimeSeriesDataPointsOutcome DataZoneClient::ListTimeSeriesDataPoints(const ListTimeSeriesDataPointsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTimeSeriesDataPoints", "Required field: DomainIdentifier, is not set");
    return ListTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTimeSeriesDataPoints", "Required field: EntityIdentifier, is not set");
    return ListTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTimeSeriesDataPoints", "Required field: EntityType, is not set");
    return ListTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EntityType]", false));
  }
  if (!request.FormNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTimeSeriesDataPoints", "Required field: FormName, is not set");
    return ListTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FormName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        TimeSeriesEntityTypeMapper::GetNameForTimeSeriesEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/time-series-data-points");
  };

  return ListTimeSeriesDataPointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PostLineageEventOutcome DataZoneClient::PostLineageEvent(const PostLineageEventRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PostLineageEvent", "Required field: DomainIdentifier, is not set");
    return PostLineageEventOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lineage/events");
  };

  return PostLineageEventOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PostTimeSeriesDataPointsOutcome DataZoneClient::PostTimeSeriesDataPoints(const PostTimeSeriesDataPointsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PostTimeSeriesDataPoints", "Required field: DomainIdentifier, is not set");
    return PostTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PostTimeSeriesDataPoints", "Required field: EntityIdentifier, is not set");
    return PostTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EntityIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PostTimeSeriesDataPoints", "Required field: EntityType, is not set");
    return PostTimeSeriesDataPointsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EntityType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        TimeSeriesEntityTypeMapper::GetNameForTimeSeriesEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/time-series-data-points");
  };

  return PostTimeSeriesDataPointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDataExportConfigurationOutcome DataZoneClient::PutDataExportConfiguration(const PutDataExportConfigurationRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDataExportConfiguration", "Required field: DomainIdentifier, is not set");
    return PutDataExportConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-export-configuration");
  };

  return PutDataExportConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutEnvironmentBlueprintConfigurationOutcome DataZoneClient::PutEnvironmentBlueprintConfiguration(
    const PutEnvironmentBlueprintConfigurationRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEnvironmentBlueprintConfiguration", "Required field: DomainIdentifier, is not set");
    return PutEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentBlueprintIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEnvironmentBlueprintConfiguration", "Required field: EnvironmentBlueprintIdentifier, is not set");
    return PutEnvironmentBlueprintConfigurationOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentBlueprintIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprint-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentBlueprintIdentifier());
  };

  return PutEnvironmentBlueprintConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

QueryGraphOutcome DataZoneClient::QueryGraph(const QueryGraphRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("QueryGraph", "Required field: DomainIdentifier, is not set");
    return QueryGraphOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/graph/query");
  };

  return QueryGraphOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectPredictionsOutcome DataZoneClient::RejectPredictions(const RejectPredictionsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectPredictions", "Required field: DomainIdentifier, is not set");
    return RejectPredictionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectPredictions", "Required field: Identifier, is not set");
    return RejectPredictionsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject-predictions");
  };

  return RejectPredictionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RejectSubscriptionRequestOutcome DataZoneClient::RejectSubscriptionRequest(const RejectSubscriptionRequestRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return RejectSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectSubscriptionRequest", "Required field: Identifier, is not set");
    return RejectSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  };

  return RejectSubscriptionRequestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveEntityOwnerOutcome DataZoneClient::RemoveEntityOwner(const RemoveEntityOwnerRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveEntityOwner", "Required field: DomainIdentifier, is not set");
    return RemoveEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveEntityOwner", "Required field: EntityType, is not set");
    return RemoveEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [EntityType]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveEntityOwner", "Required field: EntityIdentifier, is not set");
    return RemoveEntityOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [EntityIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(DataZoneEntityTypeMapper::GetNameForDataZoneEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/removeOwner");
  };

  return RemoveEntityOwnerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemovePolicyGrantOutcome DataZoneClient::RemovePolicyGrant(const RemovePolicyGrantRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemovePolicyGrant", "Required field: DomainIdentifier, is not set");
    return RemovePolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemovePolicyGrant", "Required field: EntityType, is not set");
    return RemovePolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [EntityType]", false));
  }
  if (!request.EntityIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemovePolicyGrant", "Required field: EntityIdentifier, is not set");
    return RemovePolicyGrantOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [EntityIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/managed/");
    endpointResolutionOutcome.GetResult().AddPathSegment(TargetEntityTypeMapper::GetNameForTargetEntityType(request.GetEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/removeGrant");
  };

  return RemovePolicyGrantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeSubscriptionOutcome DataZoneClient::RevokeSubscription(const RevokeSubscriptionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeSubscription", "Required field: DomainIdentifier, is not set");
    return RevokeSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeSubscription", "Required field: Identifier, is not set");
    return RevokeSubscriptionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revoke");
  };

  return RevokeSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SearchOutcome DataZoneClient::Search(const SearchRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Search", "Required field: DomainIdentifier, is not set");
    return SearchOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search");
  };

  return SearchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchGroupProfilesOutcome DataZoneClient::SearchGroupProfiles(const SearchGroupProfilesRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchGroupProfiles", "Required field: DomainIdentifier, is not set");
    return SearchGroupProfilesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-group-profiles");
  };

  return SearchGroupProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchListingsOutcome DataZoneClient::SearchListings(const SearchListingsRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchListings", "Required field: DomainIdentifier, is not set");
    return SearchListingsOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/listings/search");
  };

  return SearchListingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchTypesOutcome DataZoneClient::SearchTypes(const SearchTypesRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchTypes", "Required field: DomainIdentifier, is not set");
    return SearchTypesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/types-search");
  };

  return SearchTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchUserProfilesOutcome DataZoneClient::SearchUserProfiles(const SearchUserProfilesRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchUserProfiles", "Required field: DomainIdentifier, is not set");
    return SearchUserProfilesOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-user-profiles");
  };

  return SearchUserProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDataSourceRunOutcome DataZoneClient::StartDataSourceRun(const StartDataSourceRunRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDataSourceRun", "Required field: DomainIdentifier, is not set");
    return StartDataSourceRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }
  if (!request.DataSourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDataSourceRun", "Required field: DataSourceIdentifier, is not set");
    return StartDataSourceRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DataSourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runs");
  };

  return StartDataSourceRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMetadataGenerationRunOutcome DataZoneClient::StartMetadataGenerationRun(const StartMetadataGenerationRunRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMetadataGenerationRun", "Required field: DomainIdentifier, is not set");
    return StartMetadataGenerationRunOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata-generation-runs");
  };

  return StartMetadataGenerationRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome DataZoneClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome DataZoneClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAccountPoolOutcome DataZoneClient::UpdateAccountPool(const UpdateAccountPoolRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccountPool", "Required field: DomainIdentifier, is not set");
    return UpdateAccountPoolOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccountPool", "Required field: Identifier, is not set");
    return UpdateAccountPoolOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateAccountPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateAssetFilterOutcome DataZoneClient::UpdateAssetFilter(const UpdateAssetFilterRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssetFilter", "Required field: DomainIdentifier, is not set");
    return UpdateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.AssetIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssetFilter", "Required field: AssetIdentifier, is not set");
    return UpdateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssetIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssetFilter", "Required field: Identifier, is not set");
    return UpdateAssetFilterOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateAssetFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateConnectionOutcome DataZoneClient::UpdateConnection(const UpdateConnectionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnection", "Required field: DomainIdentifier, is not set");
    return UpdateConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnection", "Required field: Identifier, is not set");
    return UpdateConnectionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDataSourceOutcome DataZoneClient::UpdateDataSource(const UpdateDataSourceRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DomainIdentifier, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: Identifier, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDomainOutcome DataZoneClient::UpdateDomain(const UpdateDomainRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomain", "Required field: Identifier, is not set");
    return UpdateDomainOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDomainUnitOutcome DataZoneClient::UpdateDomainUnit(const UpdateDomainUnitRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainUnit", "Required field: DomainIdentifier, is not set");
    return UpdateDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainUnit", "Required field: Identifier, is not set");
    return UpdateDomainUnitOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domain-units/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateDomainUnitOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEnvironmentOutcome DataZoneClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: DomainIdentifier, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: Identifier, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateEnvironmentActionOutcome DataZoneClient::UpdateEnvironmentAction(const UpdateEnvironmentActionRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentAction", "Required field: DomainIdentifier, is not set");
    return UpdateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentAction", "Required field: EnvironmentIdentifier, is not set");
    return UpdateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentAction", "Required field: Identifier, is not set");
    return UpdateEnvironmentActionOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateEnvironmentActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateEnvironmentBlueprintOutcome DataZoneClient::UpdateEnvironmentBlueprint(const UpdateEnvironmentBlueprintRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentBlueprint", "Required field: DomainIdentifier, is not set");
    return UpdateEnvironmentBlueprintOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentBlueprint", "Required field: Identifier, is not set");
    return UpdateEnvironmentBlueprintOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-blueprints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateEnvironmentBlueprintOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateEnvironmentProfileOutcome DataZoneClient::UpdateEnvironmentProfile(const UpdateEnvironmentProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentProfile", "Required field: DomainIdentifier, is not set");
    return UpdateEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEnvironmentProfile", "Required field: Identifier, is not set");
    return UpdateEnvironmentProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateEnvironmentProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateGlossaryOutcome DataZoneClient::UpdateGlossary(const UpdateGlossaryRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGlossary", "Required field: DomainIdentifier, is not set");
    return UpdateGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGlossary", "Required field: Identifier, is not set");
    return UpdateGlossaryOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/glossaries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateGlossaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateGlossaryTermOutcome DataZoneClient::UpdateGlossaryTerm(const UpdateGlossaryTermRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGlossaryTerm", "Required field: DomainIdentifier, is not set");
    return UpdateGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGlossaryTerm", "Required field: Identifier, is not set");
    return UpdateGlossaryTermOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/glossary-terms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateGlossaryTermOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateGroupProfileOutcome DataZoneClient::UpdateGroupProfile(const UpdateGroupProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGroupProfile", "Required field: DomainIdentifier, is not set");
    return UpdateGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainIdentifier]", false));
  }
  if (!request.GroupIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGroupProfile", "Required field: GroupIdentifier, is not set");
    return UpdateGroupProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [GroupIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/group-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupIdentifier());
  };

  return UpdateGroupProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateProjectOutcome DataZoneClient::UpdateProject(const UpdateProjectRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: DomainIdentifier, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: Identifier, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateProjectProfileOutcome DataZoneClient::UpdateProjectProfile(const UpdateProjectProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProjectProfile", "Required field: DomainIdentifier, is not set");
    return UpdateProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProjectProfile", "Required field: Identifier, is not set");
    return UpdateProjectProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/project-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateProjectProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRootDomainUnitOwnerOutcome DataZoneClient::UpdateRootDomainUnitOwner(const UpdateRootDomainUnitOwnerRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRootDomainUnitOwner", "Required field: DomainIdentifier, is not set");
    return UpdateRootDomainUnitOwnerOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/root-domain-unit-owner");
  };

  return UpdateRootDomainUnitOwnerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRuleOutcome DataZoneClient::UpdateRule(const UpdateRuleRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: DomainIdentifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: Identifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSubscriptionGrantStatusOutcome DataZoneClient::UpdateSubscriptionGrantStatus(
    const UpdateSubscriptionGrantStatusRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionGrantStatus", "Required field: DomainIdentifier, is not set");
    return UpdateSubscriptionGrantStatusOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionGrantStatus", "Required field: Identifier, is not set");
    return UpdateSubscriptionGrantStatusOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  if (!request.AssetIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionGrantStatus", "Required field: AssetIdentifier, is not set");
    return UpdateSubscriptionGrantStatusOutcome(Aws::Client::AWSError<DataZoneErrors>(
        DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-grants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetIdentifier());
  };

  return UpdateSubscriptionGrantStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSubscriptionRequestOutcome DataZoneClient::UpdateSubscriptionRequest(const UpdateSubscriptionRequestRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionRequest", "Required field: DomainIdentifier, is not set");
    return UpdateSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DomainIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionRequest", "Required field: Identifier, is not set");
    return UpdateSubscriptionRequestOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-requests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateSubscriptionRequestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSubscriptionTargetOutcome DataZoneClient::UpdateSubscriptionTarget(const UpdateSubscriptionTargetRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionTarget", "Required field: DomainIdentifier, is not set");
    return UpdateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainIdentifier]", false));
  }
  if (!request.EnvironmentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionTarget", "Required field: EnvironmentIdentifier, is not set");
    return UpdateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EnvironmentIdentifier]", false));
  }
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionTarget", "Required field: Identifier, is not set");
    return UpdateSubscriptionTargetOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-targets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateSubscriptionTargetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateUserProfileOutcome DataZoneClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const {
  if (!request.DomainIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUserProfile", "Required field: DomainIdentifier, is not set");
    return UpdateUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainIdentifier]", false));
  }
  if (!request.UserIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUserProfile", "Required field: UserIdentifier, is not set");
    return UpdateUserProfileOutcome(Aws::Client::AWSError<DataZoneErrors>(DataZoneErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [UserIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserIdentifier());
  };

  return UpdateUserProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
