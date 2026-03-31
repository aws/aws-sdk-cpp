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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AcceptPredictionsOutcome(result.GetResultWithOwnership())
                            : AcceptPredictionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AcceptSubscriptionRequestOutcome(result.GetResultWithOwnership())
                            : AcceptSubscriptionRequestOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddEntityOwnerOutcome(result.GetResultWithOwnership()) : AddEntityOwnerOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddPolicyGrantOutcome(result.GetResultWithOwnership()) : AddPolicyGrantOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateEnvironmentRoleOutcome(result.GetResultWithOwnership())
                            : AssociateEnvironmentRoleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? AssociateGovernedTermsOutcome(result.GetResultWithOwnership())
                            : AssociateGovernedTermsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? BatchGetAttributesMetadataOutcome(result.GetResultWithOwnership())
                            : BatchGetAttributesMetadataOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? BatchPutAttributesMetadataOutcome(result.GetResultWithOwnership())
                            : BatchPutAttributesMetadataOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelMetadataGenerationRunOutcome(result.GetResultWithOwnership())
                            : CancelMetadataGenerationRunOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CancelSubscriptionOutcome(result.GetResultWithOwnership())
                            : CancelSubscriptionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccountPoolOutcome(result.GetResultWithOwnership())
                            : CreateAccountPoolOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAssetOutcome(result.GetResultWithOwnership()) : CreateAssetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAssetFilterOutcome(result.GetResultWithOwnership())
                            : CreateAssetFilterOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAssetRevisionOutcome(result.GetResultWithOwnership())
                            : CreateAssetRevisionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAssetTypeOutcome(result.GetResultWithOwnership())
                            : CreateAssetTypeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectionOutcome(result.GetResultWithOwnership())
                            : CreateConnectionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataProductOutcome(result.GetResultWithOwnership())
                            : CreateDataProductOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataProductRevisionOutcome(result.GetResultWithOwnership())
                            : CreateDataProductRevisionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataSourceOutcome(result.GetResultWithOwnership())
                            : CreateDataSourceOutcome(std::move(result.GetError()));
}

CreateDomainOutcome DataZoneClient::CreateDomain(const CreateDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainOutcome(result.GetResultWithOwnership()) : CreateDomainOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainUnitOutcome(result.GetResultWithOwnership())
                            : CreateDomainUnitOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEnvironmentOutcome(result.GetResultWithOwnership())
                            : CreateEnvironmentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEnvironmentActionOutcome(result.GetResultWithOwnership())
                            : CreateEnvironmentActionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEnvironmentBlueprintOutcome(result.GetResultWithOwnership())
                            : CreateEnvironmentBlueprintOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEnvironmentProfileOutcome(result.GetResultWithOwnership())
                            : CreateEnvironmentProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFormTypeOutcome(result.GetResultWithOwnership()) : CreateFormTypeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGlossaryOutcome(result.GetResultWithOwnership()) : CreateGlossaryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGlossaryTermOutcome(result.GetResultWithOwnership())
                            : CreateGlossaryTermOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGroupProfileOutcome(result.GetResultWithOwnership())
                            : CreateGroupProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateListingChangeSetOutcome(result.GetResultWithOwnership())
                            : CreateListingChangeSetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProjectOutcome(result.GetResultWithOwnership()) : CreateProjectOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProjectMembershipOutcome(result.GetResultWithOwnership())
                            : CreateProjectMembershipOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProjectProfileOutcome(result.GetResultWithOwnership())
                            : CreateProjectProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRuleOutcome(result.GetResultWithOwnership()) : CreateRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubscriptionGrantOutcome(result.GetResultWithOwnership())
                            : CreateSubscriptionGrantOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubscriptionRequestOutcome(result.GetResultWithOwnership())
                            : CreateSubscriptionRequestOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubscriptionTargetOutcome(result.GetResultWithOwnership())
                            : CreateSubscriptionTargetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserProfileOutcome(result.GetResultWithOwnership())
                            : CreateUserProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccountPoolOutcome(result.GetResultWithOwnership())
                            : DeleteAccountPoolOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAssetOutcome(result.GetResultWithOwnership()) : DeleteAssetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAssetFilterOutcome(result.GetResultWithOwnership())
                            : DeleteAssetFilterOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAssetTypeOutcome(result.GetResultWithOwnership())
                            : DeleteAssetTypeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteConnectionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataExportConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteDataExportConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataProductOutcome(result.GetResultWithOwnership())
                            : DeleteDataProductOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataSourceOutcome(result.GetResultWithOwnership())
                            : DeleteDataSourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDomainOutcome(result.GetResultWithOwnership()) : DeleteDomainOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDomainUnitOutcome(result.GetResultWithOwnership())
                            : DeleteDomainUnitOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEnvironmentOutcome(result.GetResultWithOwnership())
                            : DeleteEnvironmentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEnvironmentActionOutcome(result.GetResultWithOwnership())
                            : DeleteEnvironmentActionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEnvironmentBlueprintOutcome(result.GetResultWithOwnership())
                            : DeleteEnvironmentBlueprintOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEnvironmentBlueprintConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteEnvironmentBlueprintConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEnvironmentProfileOutcome(result.GetResultWithOwnership())
                            : DeleteEnvironmentProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFormTypeOutcome(result.GetResultWithOwnership()) : DeleteFormTypeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGlossaryOutcome(result.GetResultWithOwnership()) : DeleteGlossaryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGlossaryTermOutcome(result.GetResultWithOwnership())
                            : DeleteGlossaryTermOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteListingOutcome(result.GetResultWithOwnership()) : DeleteListingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProjectOutcome(result.GetResultWithOwnership()) : DeleteProjectOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProjectMembershipOutcome(result.GetResultWithOwnership())
                            : DeleteProjectMembershipOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProjectProfileOutcome(result.GetResultWithOwnership())
                            : DeleteProjectProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRuleOutcome(result.GetResultWithOwnership()) : DeleteRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSubscriptionGrantOutcome(result.GetResultWithOwnership())
                            : DeleteSubscriptionGrantOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSubscriptionRequestOutcome(result.GetResultWithOwnership())
                            : DeleteSubscriptionRequestOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSubscriptionTargetOutcome(result.GetResultWithOwnership())
                            : DeleteSubscriptionTargetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTimeSeriesDataPointsOutcome(result.GetResultWithOwnership())
                            : DeleteTimeSeriesDataPointsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateEnvironmentRoleOutcome(result.GetResultWithOwnership())
                            : DisassociateEnvironmentRoleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? DisassociateGovernedTermsOutcome(result.GetResultWithOwnership())
                            : DisassociateGovernedTermsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccountPoolOutcome(result.GetResultWithOwnership()) : GetAccountPoolOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAssetOutcome(result.GetResultWithOwnership()) : GetAssetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAssetFilterOutcome(result.GetResultWithOwnership()) : GetAssetFilterOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAssetTypeOutcome(result.GetResultWithOwnership()) : GetAssetTypeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConnectionOutcome(result.GetResultWithOwnership()) : GetConnectionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataExportConfigurationOutcome(result.GetResultWithOwnership())
                            : GetDataExportConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataProductOutcome(result.GetResultWithOwnership()) : GetDataProductOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataSourceOutcome(result.GetResultWithOwnership()) : GetDataSourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataSourceRunOutcome(result.GetResultWithOwnership())
                            : GetDataSourceRunOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDomainOutcome(result.GetResultWithOwnership()) : GetDomainOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDomainUnitOutcome(result.GetResultWithOwnership()) : GetDomainUnitOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEnvironmentOutcome(result.GetResultWithOwnership()) : GetEnvironmentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEnvironmentActionOutcome(result.GetResultWithOwnership())
                            : GetEnvironmentActionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEnvironmentBlueprintOutcome(result.GetResultWithOwnership())
                            : GetEnvironmentBlueprintOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEnvironmentBlueprintConfigurationOutcome(result.GetResultWithOwnership())
                            : GetEnvironmentBlueprintConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEnvironmentCredentialsOutcome(result.GetResultWithOwnership())
                            : GetEnvironmentCredentialsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEnvironmentProfileOutcome(result.GetResultWithOwnership())
                            : GetEnvironmentProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFormTypeOutcome(result.GetResultWithOwnership()) : GetFormTypeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGlossaryOutcome(result.GetResultWithOwnership()) : GetGlossaryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGlossaryTermOutcome(result.GetResultWithOwnership())
                            : GetGlossaryTermOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGroupProfileOutcome(result.GetResultWithOwnership())
                            : GetGroupProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIamPortalLoginUrlOutcome(result.GetResultWithOwnership())
                            : GetIamPortalLoginUrlOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetJobRunOutcome(result.GetResultWithOwnership()) : GetJobRunOutcome(std::move(result.GetError()));
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
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? GetLineageEventOutcome(result.GetResultWithOwnership())
                                  : GetLineageEventOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLineageNodeOutcome(result.GetResultWithOwnership()) : GetLineageNodeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetListingOutcome(result.GetResultWithOwnership()) : GetListingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMetadataGenerationRunOutcome(result.GetResultWithOwnership())
                            : GetMetadataGenerationRunOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProjectOutcome(result.GetResultWithOwnership()) : GetProjectOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProjectProfileOutcome(result.GetResultWithOwnership())
                            : GetProjectProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRuleOutcome(result.GetResultWithOwnership()) : GetRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSubscriptionOutcome(result.GetResultWithOwnership())
                            : GetSubscriptionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSubscriptionGrantOutcome(result.GetResultWithOwnership())
                            : GetSubscriptionGrantOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSubscriptionRequestDetailsOutcome(result.GetResultWithOwnership())
                            : GetSubscriptionRequestDetailsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSubscriptionTargetOutcome(result.GetResultWithOwnership())
                            : GetSubscriptionTargetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTimeSeriesDataPointOutcome(result.GetResultWithOwnership())
                            : GetTimeSeriesDataPointOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetUserProfileOutcome(result.GetResultWithOwnership()) : GetUserProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccountPoolsOutcome(result.GetResultWithOwnership())
                            : ListAccountPoolsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAccountsInAccountPoolOutcome(result.GetResultWithOwnership())
                            : ListAccountsInAccountPoolOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssetFiltersOutcome(result.GetResultWithOwnership())
                            : ListAssetFiltersOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssetRevisionsOutcome(result.GetResultWithOwnership())
                            : ListAssetRevisionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConnectionsOutcome(result.GetResultWithOwnership())
                            : ListConnectionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataProductRevisionsOutcome(result.GetResultWithOwnership())
                            : ListDataProductRevisionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSourceRunActivitiesOutcome(result.GetResultWithOwnership())
                            : ListDataSourceRunActivitiesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSourceRunsOutcome(result.GetResultWithOwnership())
                            : ListDataSourceRunsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSourcesOutcome(result.GetResultWithOwnership())
                            : ListDataSourcesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDomainUnitsForParentOutcome(result.GetResultWithOwnership())
                            : ListDomainUnitsForParentOutcome(std::move(result.GetError()));
}

ListDomainsOutcome DataZoneClient::ListDomains(const ListDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/domains");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDomainsOutcome(result.GetResultWithOwnership()) : ListDomainsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEntityOwnersOutcome(result.GetResultWithOwnership())
                            : ListEntityOwnersOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEnvironmentActionsOutcome(result.GetResultWithOwnership())
                            : ListEnvironmentActionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEnvironmentBlueprintConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListEnvironmentBlueprintConfigurationsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEnvironmentBlueprintsOutcome(result.GetResultWithOwnership())
                            : ListEnvironmentBlueprintsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEnvironmentProfilesOutcome(result.GetResultWithOwnership())
                            : ListEnvironmentProfilesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEnvironmentsOutcome(result.GetResultWithOwnership())
                            : ListEnvironmentsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListJobRunsOutcome(result.GetResultWithOwnership()) : ListJobRunsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLineageEventsOutcome(result.GetResultWithOwnership())
                            : ListLineageEventsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLineageNodeHistoryOutcome(result.GetResultWithOwnership())
                            : ListLineageNodeHistoryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMetadataGenerationRunsOutcome(result.GetResultWithOwnership())
                            : ListMetadataGenerationRunsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNotificationsOutcome(result.GetResultWithOwnership())
                            : ListNotificationsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPolicyGrantsOutcome(result.GetResultWithOwnership())
                            : ListPolicyGrantsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProjectMembershipsOutcome(result.GetResultWithOwnership())
                            : ListProjectMembershipsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProjectProfilesOutcome(result.GetResultWithOwnership())
                            : ListProjectProfilesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProjectsOutcome(result.GetResultWithOwnership()) : ListProjectsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRulesOutcome(result.GetResultWithOwnership()) : ListRulesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSubscriptionGrantsOutcome(result.GetResultWithOwnership())
                            : ListSubscriptionGrantsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSubscriptionRequestsOutcome(result.GetResultWithOwnership())
                            : ListSubscriptionRequestsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSubscriptionTargetsOutcome(result.GetResultWithOwnership())
                            : ListSubscriptionTargetsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSubscriptionsOutcome(result.GetResultWithOwnership())
                            : ListSubscriptionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTimeSeriesDataPointsOutcome(result.GetResultWithOwnership())
                            : ListTimeSeriesDataPointsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PostLineageEventOutcome(result.GetResultWithOwnership())
                            : PostLineageEventOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PostTimeSeriesDataPointsOutcome(result.GetResultWithOwnership())
                            : PostTimeSeriesDataPointsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutDataExportConfigurationOutcome(result.GetResultWithOwnership())
                            : PutDataExportConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutEnvironmentBlueprintConfigurationOutcome(result.GetResultWithOwnership())
                            : PutEnvironmentBlueprintConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryGraphOutcome(result.GetResultWithOwnership()) : QueryGraphOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RejectPredictionsOutcome(result.GetResultWithOwnership())
                            : RejectPredictionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RejectSubscriptionRequestOutcome(result.GetResultWithOwnership())
                            : RejectSubscriptionRequestOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveEntityOwnerOutcome(result.GetResultWithOwnership())
                            : RemoveEntityOwnerOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemovePolicyGrantOutcome(result.GetResultWithOwnership())
                            : RemovePolicyGrantOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? RevokeSubscriptionOutcome(result.GetResultWithOwnership())
                            : RevokeSubscriptionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchOutcome(result.GetResultWithOwnership()) : SearchOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchGroupProfilesOutcome(result.GetResultWithOwnership())
                            : SearchGroupProfilesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchListingsOutcome(result.GetResultWithOwnership()) : SearchListingsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchTypesOutcome(result.GetResultWithOwnership()) : SearchTypesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchUserProfilesOutcome(result.GetResultWithOwnership())
                            : SearchUserProfilesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDataSourceRunOutcome(result.GetResultWithOwnership())
                            : StartDataSourceRunOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMetadataGenerationRunOutcome(result.GetResultWithOwnership())
                            : StartMetadataGenerationRunOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAccountPoolOutcome(result.GetResultWithOwnership())
                            : UpdateAccountPoolOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAssetFilterOutcome(result.GetResultWithOwnership())
                            : UpdateAssetFilterOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateConnectionOutcome(result.GetResultWithOwnership())
                            : UpdateConnectionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateDataSourceOutcome(result.GetResultWithOwnership())
                            : UpdateDataSourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDomainOutcome(result.GetResultWithOwnership()) : UpdateDomainOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDomainUnitOutcome(result.GetResultWithOwnership())
                            : UpdateDomainUnitOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEnvironmentOutcome(result.GetResultWithOwnership())
                            : UpdateEnvironmentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEnvironmentActionOutcome(result.GetResultWithOwnership())
                            : UpdateEnvironmentActionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEnvironmentBlueprintOutcome(result.GetResultWithOwnership())
                            : UpdateEnvironmentBlueprintOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEnvironmentProfileOutcome(result.GetResultWithOwnership())
                            : UpdateEnvironmentProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateGlossaryOutcome(result.GetResultWithOwnership()) : UpdateGlossaryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateGlossaryTermOutcome(result.GetResultWithOwnership())
                            : UpdateGlossaryTermOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateGroupProfileOutcome(result.GetResultWithOwnership())
                            : UpdateGroupProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProjectOutcome(result.GetResultWithOwnership()) : UpdateProjectOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProjectProfileOutcome(result.GetResultWithOwnership())
                            : UpdateProjectProfileOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRootDomainUnitOwnerOutcome(result.GetResultWithOwnership())
                            : UpdateRootDomainUnitOwnerOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRuleOutcome(result.GetResultWithOwnership()) : UpdateRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSubscriptionGrantStatusOutcome(result.GetResultWithOwnership())
                            : UpdateSubscriptionGrantStatusOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSubscriptionRequestOutcome(result.GetResultWithOwnership())
                            : UpdateSubscriptionRequestOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSubscriptionTargetOutcome(result.GetResultWithOwnership())
                            : UpdateSubscriptionTargetOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateUserProfileOutcome(result.GetResultWithOwnership())
                            : UpdateUserProfileOutcome(std::move(result.GetError()));
}
