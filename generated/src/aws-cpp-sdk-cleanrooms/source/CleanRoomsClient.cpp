/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/CleanRoomsClient.h>
#include <aws/cleanrooms/CleanRoomsEndpointProvider.h>
#include <aws/cleanrooms/CleanRoomsErrorMarshaller.h>
#include <aws/cleanrooms/model/BatchGetCollaborationAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/BatchGetSchemaAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/BatchGetSchemaRequest.h>
#include <aws/cleanrooms/model/CreateAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/CreateCollaborationChangeRequestRequest.h>
#include <aws/cleanrooms/model/CreateCollaborationRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableRequest.h>
#include <aws/cleanrooms/model/CreateIdMappingTableRequest.h>
#include <aws/cleanrooms/model/CreateIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/CreateMembershipRequest.h>
#include <aws/cleanrooms/model/CreatePrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/DeleteAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/DeleteCollaborationRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableRequest.h>
#include <aws/cleanrooms/model/DeleteIdMappingTableRequest.h>
#include <aws/cleanrooms/model/DeleteIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/DeleteMemberRequest.h>
#include <aws/cleanrooms/model/DeleteMembershipRequest.h>
#include <aws/cleanrooms/model/DeletePrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/GetAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/GetCollaborationAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/GetCollaborationChangeRequestRequest.h>
#include <aws/cleanrooms/model/GetCollaborationConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/GetCollaborationIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/GetCollaborationPrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/GetCollaborationRequest.h>
#include <aws/cleanrooms/model/GetConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableRequest.h>
#include <aws/cleanrooms/model/GetIdMappingTableRequest.h>
#include <aws/cleanrooms/model/GetIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/GetMembershipRequest.h>
#include <aws/cleanrooms/model/GetPrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/GetProtectedJobRequest.h>
#include <aws/cleanrooms/model/GetProtectedQueryRequest.h>
#include <aws/cleanrooms/model/GetSchemaAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/GetSchemaRequest.h>
#include <aws/cleanrooms/model/ListAnalysisTemplatesRequest.h>
#include <aws/cleanrooms/model/ListCollaborationAnalysisTemplatesRequest.h>
#include <aws/cleanrooms/model/ListCollaborationChangeRequestsRequest.h>
#include <aws/cleanrooms/model/ListCollaborationConfiguredAudienceModelAssociationsRequest.h>
#include <aws/cleanrooms/model/ListCollaborationIdNamespaceAssociationsRequest.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetTemplatesRequest.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetsRequest.h>
#include <aws/cleanrooms/model/ListCollaborationsRequest.h>
#include <aws/cleanrooms/model/ListConfiguredAudienceModelAssociationsRequest.h>
#include <aws/cleanrooms/model/ListConfiguredTableAssociationsRequest.h>
#include <aws/cleanrooms/model/ListConfiguredTablesRequest.h>
#include <aws/cleanrooms/model/ListIdMappingTablesRequest.h>
#include <aws/cleanrooms/model/ListIdNamespaceAssociationsRequest.h>
#include <aws/cleanrooms/model/ListMembersRequest.h>
#include <aws/cleanrooms/model/ListMembershipsRequest.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetTemplatesRequest.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetsRequest.h>
#include <aws/cleanrooms/model/ListProtectedJobsRequest.h>
#include <aws/cleanrooms/model/ListProtectedQueriesRequest.h>
#include <aws/cleanrooms/model/ListSchemasRequest.h>
#include <aws/cleanrooms/model/ListTagsForResourceRequest.h>
#include <aws/cleanrooms/model/PopulateIdMappingTableRequest.h>
#include <aws/cleanrooms/model/PreviewPrivacyImpactRequest.h>
#include <aws/cleanrooms/model/StartProtectedJobRequest.h>
#include <aws/cleanrooms/model/StartProtectedQueryRequest.h>
#include <aws/cleanrooms/model/TagResourceRequest.h>
#include <aws/cleanrooms/model/UntagResourceRequest.h>
#include <aws/cleanrooms/model/UpdateAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/UpdateCollaborationChangeRequestRequest.h>
#include <aws/cleanrooms/model/UpdateCollaborationRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableRequest.h>
#include <aws/cleanrooms/model/UpdateIdMappingTableRequest.h>
#include <aws/cleanrooms/model/UpdateIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/UpdateMembershipRequest.h>
#include <aws/cleanrooms/model/UpdatePrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/UpdateProtectedJobRequest.h>
#include <aws/cleanrooms/model/UpdateProtectedQueryRequest.h>
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
using namespace Aws::CleanRooms;
using namespace Aws::CleanRooms::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CleanRooms {
const char SERVICE_NAME[] = "cleanrooms";
const char ALLOCATION_TAG[] = "CleanRoomsClient";
}  // namespace CleanRooms
}  // namespace Aws
const char* CleanRoomsClient::GetServiceName() { return SERVICE_NAME; }
const char* CleanRoomsClient::GetAllocationTag() { return ALLOCATION_TAG; }

CleanRoomsClient::CleanRoomsClient(const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const AWSCredentials& credentials, std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider,
                                   const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider,
                                   const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CleanRoomsClient::CleanRoomsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CleanRoomsClient::~CleanRoomsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CleanRoomsEndpointProviderBase>& CleanRoomsClient::accessEndpointProvider() { return m_endpointProvider; }

void CleanRoomsClient::init(const CleanRooms::CleanRoomsClientConfiguration& config) {
  AWSClient::SetServiceClientName("CleanRooms");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cleanrooms");
}

void CleanRoomsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CleanRoomsClient::InvokeOperationOutcome CleanRoomsClient::InvokeServiceOperation(
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

BatchGetCollaborationAnalysisTemplateOutcome CleanRoomsClient::BatchGetCollaborationAnalysisTemplate(
    const BatchGetCollaborationAnalysisTemplateRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetCollaborationAnalysisTemplate", "Required field: CollaborationIdentifier, is not set");
    return BatchGetCollaborationAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-analysistemplates");
  };

  return BatchGetCollaborationAnalysisTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetSchemaOutcome CleanRoomsClient::BatchGetSchema(const BatchGetSchemaRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetSchema", "Required field: CollaborationIdentifier, is not set");
    return BatchGetSchemaOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-schema");
  };

  return BatchGetSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetSchemaAnalysisRuleOutcome CleanRoomsClient::BatchGetSchemaAnalysisRule(const BatchGetSchemaAnalysisRuleRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetSchemaAnalysisRule", "Required field: CollaborationIdentifier, is not set");
    return BatchGetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-schema-analysis-rule");
  };

  return BatchGetSchemaAnalysisRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAnalysisTemplateOutcome CleanRoomsClient::CreateAnalysisTemplate(const CreateAnalysisTemplateRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAnalysisTemplate", "Required field: MembershipIdentifier, is not set");
    return CreateAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates");
  };

  return CreateAnalysisTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCollaborationOutcome CleanRoomsClient::CreateCollaboration(const CreateCollaborationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations");
  };

  return CreateCollaborationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCollaborationChangeRequestOutcome CleanRoomsClient::CreateCollaborationChangeRequest(
    const CreateCollaborationChangeRequestRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCollaborationChangeRequest", "Required field: CollaborationIdentifier, is not set");
    return CreateCollaborationChangeRequestOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/changeRequests");
  };

  return CreateCollaborationChangeRequestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfiguredAudienceModelAssociationOutcome CleanRoomsClient::CreateConfiguredAudienceModelAssociation(
    const CreateConfiguredAudienceModelAssociationRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfiguredAudienceModelAssociation", "Required field: MembershipIdentifier, is not set");
    return CreateConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations");
  };

  return CreateConfiguredAudienceModelAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfiguredTableOutcome CleanRoomsClient::CreateConfiguredTable(const CreateConfiguredTableRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables");
  };

  return CreateConfiguredTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfiguredTableAnalysisRuleOutcome CleanRoomsClient::CreateConfiguredTableAnalysisRule(
    const CreateConfiguredTableAnalysisRuleRequest& request) const {
  if (!request.ConfiguredTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return CreateConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule");
  };

  return CreateConfiguredTableAnalysisRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfiguredTableAssociationOutcome CleanRoomsClient::CreateConfiguredTableAssociation(
    const CreateConfiguredTableAssociationRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return CreateConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations");
  };

  return CreateConfiguredTableAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfiguredTableAssociationAnalysisRuleOutcome CleanRoomsClient::CreateConfiguredTableAssociationAnalysisRule(
    const CreateConfiguredTableAssociationAnalysisRuleRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAssociationAnalysisRule", "Required field: MembershipIdentifier, is not set");
    return CreateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAssociationAnalysisRule", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return CreateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule");
  };

  return CreateConfiguredTableAssociationAnalysisRuleOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIdMappingTableOutcome CleanRoomsClient::CreateIdMappingTable(const CreateIdMappingTableRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return CreateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingtables");
  };

  return CreateIdMappingTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIdNamespaceAssociationOutcome CleanRoomsClient::CreateIdNamespaceAssociation(
    const CreateIdNamespaceAssociationRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIdNamespaceAssociation", "Required field: MembershipIdentifier, is not set");
    return CreateIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaceassociations");
  };

  return CreateIdNamespaceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMembershipOutcome CleanRoomsClient::CreateMembership(const CreateMembershipRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  };

  return CreateMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePrivacyBudgetTemplateOutcome CleanRoomsClient::CreatePrivacyBudgetTemplate(const CreatePrivacyBudgetTemplateRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePrivacyBudgetTemplate", "Required field: MembershipIdentifier, is not set");
    return CreatePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates");
  };

  return CreatePrivacyBudgetTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAnalysisTemplateOutcome CleanRoomsClient::DeleteAnalysisTemplate(const DeleteAnalysisTemplateRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnalysisTemplate", "Required field: MembershipIdentifier, is not set");
    return DeleteAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.AnalysisTemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnalysisTemplate", "Required field: AnalysisTemplateIdentifier, is not set");
    return DeleteAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisTemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisTemplateIdentifier());
  };

  return DeleteAnalysisTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCollaborationOutcome CleanRoomsClient::DeleteCollaboration(const DeleteCollaborationRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCollaboration", "Required field: CollaborationIdentifier, is not set");
    return DeleteCollaborationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  };

  return DeleteCollaborationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfiguredAudienceModelAssociationOutcome CleanRoomsClient::DeleteConfiguredAudienceModelAssociation(
    const DeleteConfiguredAudienceModelAssociationRequest& request) const {
  if (!request.ConfiguredAudienceModelAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredAudienceModelAssociation",
                        "Required field: ConfiguredAudienceModelAssociationIdentifier, is not set");
    return DeleteConfiguredAudienceModelAssociationOutcome(
        Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ConfiguredAudienceModelAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredAudienceModelAssociation", "Required field: MembershipIdentifier, is not set");
    return DeleteConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
  };

  return DeleteConfiguredAudienceModelAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfiguredTableOutcome CleanRoomsClient::DeleteConfiguredTable(const DeleteConfiguredTableRequest& request) const {
  if (!request.ConfiguredTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTable", "Required field: ConfiguredTableIdentifier, is not set");
    return DeleteConfiguredTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  };

  return DeleteConfiguredTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfiguredTableAnalysisRuleOutcome CleanRoomsClient::DeleteConfiguredTableAnalysisRule(
    const DeleteConfiguredTableAnalysisRuleRequest& request) const {
  if (!request.ConfiguredTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return DeleteConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return DeleteConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
  };

  return DeleteConfiguredTableAnalysisRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfiguredTableAssociationOutcome CleanRoomsClient::DeleteConfiguredTableAssociation(
    const DeleteConfiguredTableAssociationRequest& request) const {
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociation", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return DeleteConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return DeleteConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
  };

  return DeleteConfiguredTableAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfiguredTableAssociationAnalysisRuleOutcome CleanRoomsClient::DeleteConfiguredTableAssociationAnalysisRule(
    const DeleteConfiguredTableAssociationAnalysisRuleRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociationAnalysisRule", "Required field: MembershipIdentifier, is not set");
    return DeleteConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociationAnalysisRule", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return DeleteConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociationAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return DeleteConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ConfiguredTableAssociationAnalysisRuleTypeMapper::GetNameForConfiguredTableAssociationAnalysisRuleType(
            request.GetAnalysisRuleType()));
  };

  return DeleteConfiguredTableAssociationAnalysisRuleOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIdMappingTableOutcome CleanRoomsClient::DeleteIdMappingTable(const DeleteIdMappingTableRequest& request) const {
  if (!request.IdMappingTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdMappingTable", "Required field: IdMappingTableIdentifier, is not set");
    return DeleteIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [IdMappingTableIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return DeleteIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingtables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdMappingTableIdentifier());
  };

  return DeleteIdMappingTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIdNamespaceAssociationOutcome CleanRoomsClient::DeleteIdNamespaceAssociation(
    const DeleteIdNamespaceAssociationRequest& request) const {
  if (!request.IdNamespaceAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdNamespaceAssociation", "Required field: IdNamespaceAssociationIdentifier, is not set");
    return DeleteIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdNamespaceAssociation", "Required field: MembershipIdentifier, is not set");
    return DeleteIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaceassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdNamespaceAssociationIdentifier());
  };

  return DeleteIdNamespaceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMemberOutcome CleanRoomsClient::DeleteMember(const DeleteMemberRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: CollaborationIdentifier, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: AccountId, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  return DeleteMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMembershipOutcome CleanRoomsClient::DeleteMembership(const DeleteMembershipRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMembership", "Required field: MembershipIdentifier, is not set");
    return DeleteMembershipOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  };

  return DeleteMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePrivacyBudgetTemplateOutcome CleanRoomsClient::DeletePrivacyBudgetTemplate(const DeletePrivacyBudgetTemplateRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrivacyBudgetTemplate", "Required field: MembershipIdentifier, is not set");
    return DeletePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.PrivacyBudgetTemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrivacyBudgetTemplate", "Required field: PrivacyBudgetTemplateIdentifier, is not set");
    return DeletePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetTemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
  };

  return DeletePrivacyBudgetTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAnalysisTemplateOutcome CleanRoomsClient::GetAnalysisTemplate(const GetAnalysisTemplateRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnalysisTemplate", "Required field: MembershipIdentifier, is not set");
    return GetAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.AnalysisTemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnalysisTemplate", "Required field: AnalysisTemplateIdentifier, is not set");
    return GetAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisTemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisTemplateIdentifier());
  };

  return GetAnalysisTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCollaborationOutcome CleanRoomsClient::GetCollaboration(const GetCollaborationRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaboration", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  };

  return GetCollaborationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCollaborationAnalysisTemplateOutcome CleanRoomsClient::GetCollaborationAnalysisTemplate(
    const GetCollaborationAnalysisTemplateRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationAnalysisTemplate", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.AnalysisTemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationAnalysisTemplate", "Required field: AnalysisTemplateArn, is not set");
    return GetCollaborationAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisTemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisTemplateArn());
  };

  return GetCollaborationAnalysisTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCollaborationChangeRequestOutcome CleanRoomsClient::GetCollaborationChangeRequest(
    const GetCollaborationChangeRequestRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationChangeRequest", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationChangeRequestOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.ChangeRequestIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationChangeRequest", "Required field: ChangeRequestIdentifier, is not set");
    return GetCollaborationChangeRequestOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeRequestIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/changeRequests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChangeRequestIdentifier());
  };

  return GetCollaborationChangeRequestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCollaborationConfiguredAudienceModelAssociationOutcome CleanRoomsClient::GetCollaborationConfiguredAudienceModelAssociation(
    const GetCollaborationConfiguredAudienceModelAssociationRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationConfiguredAudienceModelAssociation", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.ConfiguredAudienceModelAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationConfiguredAudienceModelAssociation",
                        "Required field: ConfiguredAudienceModelAssociationIdentifier, is not set");
    return GetCollaborationConfiguredAudienceModelAssociationOutcome(
        Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ConfiguredAudienceModelAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
  };

  return GetCollaborationConfiguredAudienceModelAssociationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCollaborationIdNamespaceAssociationOutcome CleanRoomsClient::GetCollaborationIdNamespaceAssociation(
    const GetCollaborationIdNamespaceAssociationRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationIdNamespaceAssociation", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.IdNamespaceAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationIdNamespaceAssociation", "Required field: IdNamespaceAssociationIdentifier, is not set");
    return GetCollaborationIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaceassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdNamespaceAssociationIdentifier());
  };

  return GetCollaborationIdNamespaceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCollaborationPrivacyBudgetTemplateOutcome CleanRoomsClient::GetCollaborationPrivacyBudgetTemplate(
    const GetCollaborationPrivacyBudgetTemplateRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationPrivacyBudgetTemplate", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationPrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.PrivacyBudgetTemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCollaborationPrivacyBudgetTemplate", "Required field: PrivacyBudgetTemplateIdentifier, is not set");
    return GetCollaborationPrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetTemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
  };

  return GetCollaborationPrivacyBudgetTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfiguredAudienceModelAssociationOutcome CleanRoomsClient::GetConfiguredAudienceModelAssociation(
    const GetConfiguredAudienceModelAssociationRequest& request) const {
  if (!request.ConfiguredAudienceModelAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredAudienceModelAssociation",
                        "Required field: ConfiguredAudienceModelAssociationIdentifier, is not set");
    return GetConfiguredAudienceModelAssociationOutcome(
        Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ConfiguredAudienceModelAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredAudienceModelAssociation", "Required field: MembershipIdentifier, is not set");
    return GetConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
  };

  return GetConfiguredAudienceModelAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfiguredTableOutcome CleanRoomsClient::GetConfiguredTable(const GetConfiguredTableRequest& request) const {
  if (!request.ConfiguredTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredTable", "Required field: ConfiguredTableIdentifier, is not set");
    return GetConfiguredTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ConfiguredTableIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  };

  return GetConfiguredTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfiguredTableAnalysisRuleOutcome CleanRoomsClient::GetConfiguredTableAnalysisRule(
    const GetConfiguredTableAnalysisRuleRequest& request) const {
  if (!request.ConfiguredTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return GetConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return GetConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
  };

  return GetConfiguredTableAnalysisRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfiguredTableAssociationOutcome CleanRoomsClient::GetConfiguredTableAssociation(
    const GetConfiguredTableAssociationRequest& request) const {
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociation", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return GetConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return GetConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
  };

  return GetConfiguredTableAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfiguredTableAssociationAnalysisRuleOutcome CleanRoomsClient::GetConfiguredTableAssociationAnalysisRule(
    const GetConfiguredTableAssociationAnalysisRuleRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociationAnalysisRule", "Required field: MembershipIdentifier, is not set");
    return GetConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociationAnalysisRule", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return GetConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociationAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return GetConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ConfiguredTableAssociationAnalysisRuleTypeMapper::GetNameForConfiguredTableAssociationAnalysisRuleType(
            request.GetAnalysisRuleType()));
  };

  return GetConfiguredTableAssociationAnalysisRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIdMappingTableOutcome CleanRoomsClient::GetIdMappingTable(const GetIdMappingTableRequest& request) const {
  if (!request.IdMappingTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdMappingTable", "Required field: IdMappingTableIdentifier, is not set");
    return GetIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [IdMappingTableIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return GetIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingtables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdMappingTableIdentifier());
  };

  return GetIdMappingTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIdNamespaceAssociationOutcome CleanRoomsClient::GetIdNamespaceAssociation(const GetIdNamespaceAssociationRequest& request) const {
  if (!request.IdNamespaceAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdNamespaceAssociation", "Required field: IdNamespaceAssociationIdentifier, is not set");
    return GetIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdNamespaceAssociation", "Required field: MembershipIdentifier, is not set");
    return GetIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaceassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdNamespaceAssociationIdentifier());
  };

  return GetIdNamespaceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMembershipOutcome CleanRoomsClient::GetMembership(const GetMembershipRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMembership", "Required field: MembershipIdentifier, is not set");
    return GetMembershipOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  };

  return GetMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPrivacyBudgetTemplateOutcome CleanRoomsClient::GetPrivacyBudgetTemplate(const GetPrivacyBudgetTemplateRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPrivacyBudgetTemplate", "Required field: MembershipIdentifier, is not set");
    return GetPrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.PrivacyBudgetTemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPrivacyBudgetTemplate", "Required field: PrivacyBudgetTemplateIdentifier, is not set");
    return GetPrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetTemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
  };

  return GetPrivacyBudgetTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProtectedJobOutcome CleanRoomsClient::GetProtectedJob(const GetProtectedJobRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProtectedJob", "Required field: MembershipIdentifier, is not set");
    return GetProtectedJobOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ProtectedJobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProtectedJob", "Required field: ProtectedJobIdentifier, is not set");
    return GetProtectedJobOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProtectedJobIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/protectedJobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProtectedJobIdentifier());
  };

  return GetProtectedJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProtectedQueryOutcome CleanRoomsClient::GetProtectedQuery(const GetProtectedQueryRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProtectedQuery", "Required field: MembershipIdentifier, is not set");
    return GetProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ProtectedQueryIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProtectedQuery", "Required field: ProtectedQueryIdentifier, is not set");
    return GetProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ProtectedQueryIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProtectedQueryIdentifier());
  };

  return GetProtectedQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSchemaOutcome CleanRoomsClient::GetSchema(const GetSchemaRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchema", "Required field: CollaborationIdentifier, is not set");
    return GetSchemaOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchema", "Required field: Name, is not set");
    return GetSchemaOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetSchemaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSchemaAnalysisRuleOutcome CleanRoomsClient::GetSchemaAnalysisRule(const GetSchemaAnalysisRuleRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchemaAnalysisRule", "Required field: CollaborationIdentifier, is not set");
    return GetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchemaAnalysisRule", "Required field: Name, is not set");
    return GetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Name]", false));
  }
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSchemaAnalysisRule", "Required field: Type, is not set");
    return GetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Type]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(AnalysisRuleTypeMapper::GetNameForAnalysisRuleType(request.GetType()));
  };

  return GetSchemaAnalysisRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAnalysisTemplatesOutcome CleanRoomsClient::ListAnalysisTemplates(const ListAnalysisTemplatesRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAnalysisTemplates", "Required field: MembershipIdentifier, is not set");
    return ListAnalysisTemplatesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates");
  };

  return ListAnalysisTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCollaborationAnalysisTemplatesOutcome CleanRoomsClient::ListCollaborationAnalysisTemplates(
    const ListCollaborationAnalysisTemplatesRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationAnalysisTemplates", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationAnalysisTemplatesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates");
  };

  return ListCollaborationAnalysisTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCollaborationChangeRequestsOutcome CleanRoomsClient::ListCollaborationChangeRequests(
    const ListCollaborationChangeRequestsRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationChangeRequests", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationChangeRequestsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/changeRequests");
  };

  return ListCollaborationChangeRequestsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCollaborationConfiguredAudienceModelAssociationsOutcome CleanRoomsClient::ListCollaborationConfiguredAudienceModelAssociations(
    const ListCollaborationConfiguredAudienceModelAssociationsRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationConfiguredAudienceModelAssociations", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationConfiguredAudienceModelAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations");
  };

  return ListCollaborationConfiguredAudienceModelAssociationsOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCollaborationIdNamespaceAssociationsOutcome CleanRoomsClient::ListCollaborationIdNamespaceAssociations(
    const ListCollaborationIdNamespaceAssociationsRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationIdNamespaceAssociations", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationIdNamespaceAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaceassociations");
  };

  return ListCollaborationIdNamespaceAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCollaborationPrivacyBudgetTemplatesOutcome CleanRoomsClient::ListCollaborationPrivacyBudgetTemplates(
    const ListCollaborationPrivacyBudgetTemplatesRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationPrivacyBudgetTemplates", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationPrivacyBudgetTemplatesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates");
  };

  return ListCollaborationPrivacyBudgetTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCollaborationPrivacyBudgetsOutcome CleanRoomsClient::ListCollaborationPrivacyBudgets(
    const ListCollaborationPrivacyBudgetsRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationPrivacyBudgets", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationPrivacyBudgetsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.PrivacyBudgetTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCollaborationPrivacyBudgets", "Required field: PrivacyBudgetType, is not set");
    return ListCollaborationPrivacyBudgetsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgets");
  };

  return ListCollaborationPrivacyBudgetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCollaborationsOutcome CleanRoomsClient::ListCollaborations(const ListCollaborationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations");
  };

  return ListCollaborationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfiguredAudienceModelAssociationsOutcome CleanRoomsClient::ListConfiguredAudienceModelAssociations(
    const ListConfiguredAudienceModelAssociationsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConfiguredAudienceModelAssociations", "Required field: MembershipIdentifier, is not set");
    return ListConfiguredAudienceModelAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations");
  };

  return ListConfiguredAudienceModelAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfiguredTableAssociationsOutcome CleanRoomsClient::ListConfiguredTableAssociations(
    const ListConfiguredTableAssociationsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConfiguredTableAssociations", "Required field: MembershipIdentifier, is not set");
    return ListConfiguredTableAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations");
  };

  return ListConfiguredTableAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfiguredTablesOutcome CleanRoomsClient::ListConfiguredTables(const ListConfiguredTablesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables");
  };

  return ListConfiguredTablesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIdMappingTablesOutcome CleanRoomsClient::ListIdMappingTables(const ListIdMappingTablesRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIdMappingTables", "Required field: MembershipIdentifier, is not set");
    return ListIdMappingTablesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingtables");
  };

  return ListIdMappingTablesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIdNamespaceAssociationsOutcome CleanRoomsClient::ListIdNamespaceAssociations(const ListIdNamespaceAssociationsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIdNamespaceAssociations", "Required field: MembershipIdentifier, is not set");
    return ListIdNamespaceAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaceassociations");
  };

  return ListIdNamespaceAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMembersOutcome CleanRoomsClient::ListMembers(const ListMembersRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMembers", "Required field: CollaborationIdentifier, is not set");
    return ListMembersOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  return ListMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMembershipsOutcome CleanRoomsClient::ListMemberships(const ListMembershipsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  };

  return ListMembershipsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPrivacyBudgetTemplatesOutcome CleanRoomsClient::ListPrivacyBudgetTemplates(const ListPrivacyBudgetTemplatesRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrivacyBudgetTemplates", "Required field: MembershipIdentifier, is not set");
    return ListPrivacyBudgetTemplatesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates");
  };

  return ListPrivacyBudgetTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPrivacyBudgetsOutcome CleanRoomsClient::ListPrivacyBudgets(const ListPrivacyBudgetsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrivacyBudgets", "Required field: MembershipIdentifier, is not set");
    return ListPrivacyBudgetsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.PrivacyBudgetTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrivacyBudgets", "Required field: PrivacyBudgetType, is not set");
    return ListPrivacyBudgetsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [PrivacyBudgetType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgets");
  };

  return ListPrivacyBudgetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProtectedJobsOutcome CleanRoomsClient::ListProtectedJobs(const ListProtectedJobsRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProtectedJobs", "Required field: MembershipIdentifier, is not set");
    return ListProtectedJobsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/protectedJobs");
  };

  return ListProtectedJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProtectedQueriesOutcome CleanRoomsClient::ListProtectedQueries(const ListProtectedQueriesRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProtectedQueries", "Required field: MembershipIdentifier, is not set");
    return ListProtectedQueriesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries");
  };

  return ListProtectedQueriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSchemasOutcome CleanRoomsClient::ListSchemas(const ListSchemasRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSchemas", "Required field: CollaborationIdentifier, is not set");
    return ListSchemasOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schemas");
  };

  return ListSchemasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome CleanRoomsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PopulateIdMappingTableOutcome CleanRoomsClient::PopulateIdMappingTable(const PopulateIdMappingTableRequest& request) const {
  if (!request.IdMappingTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PopulateIdMappingTable", "Required field: IdMappingTableIdentifier, is not set");
    return PopulateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdMappingTableIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PopulateIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return PopulateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingtables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdMappingTableIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/populate");
  };

  return PopulateIdMappingTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PreviewPrivacyImpactOutcome CleanRoomsClient::PreviewPrivacyImpact(const PreviewPrivacyImpactRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PreviewPrivacyImpact", "Required field: MembershipIdentifier, is not set");
    return PreviewPrivacyImpactOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/previewprivacyimpact");
  };

  return PreviewPrivacyImpactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartProtectedJobOutcome CleanRoomsClient::StartProtectedJob(const StartProtectedJobRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartProtectedJob", "Required field: MembershipIdentifier, is not set");
    return StartProtectedJobOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/protectedJobs");
  };

  return StartProtectedJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartProtectedQueryOutcome CleanRoomsClient::StartProtectedQuery(const StartProtectedQueryRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartProtectedQuery", "Required field: MembershipIdentifier, is not set");
    return StartProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries");
  };

  return StartProtectedQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CleanRoomsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CleanRoomsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAnalysisTemplateOutcome CleanRoomsClient::UpdateAnalysisTemplate(const UpdateAnalysisTemplateRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisTemplate", "Required field: MembershipIdentifier, is not set");
    return UpdateAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.AnalysisTemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisTemplate", "Required field: AnalysisTemplateIdentifier, is not set");
    return UpdateAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisTemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisTemplateIdentifier());
  };

  return UpdateAnalysisTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateCollaborationOutcome CleanRoomsClient::UpdateCollaboration(const UpdateCollaborationRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCollaboration", "Required field: CollaborationIdentifier, is not set");
    return UpdateCollaborationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CollaborationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
  };

  return UpdateCollaborationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateCollaborationChangeRequestOutcome CleanRoomsClient::UpdateCollaborationChangeRequest(
    const UpdateCollaborationChangeRequestRequest& request) const {
  if (!request.CollaborationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCollaborationChangeRequest", "Required field: CollaborationIdentifier, is not set");
    return UpdateCollaborationChangeRequestOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.ChangeRequestIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCollaborationChangeRequest", "Required field: ChangeRequestIdentifier, is not set");
    return UpdateCollaborationChangeRequestOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeRequestIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/changeRequests/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChangeRequestIdentifier());
  };

  return UpdateCollaborationChangeRequestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateConfiguredAudienceModelAssociationOutcome CleanRoomsClient::UpdateConfiguredAudienceModelAssociation(
    const UpdateConfiguredAudienceModelAssociationRequest& request) const {
  if (!request.ConfiguredAudienceModelAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredAudienceModelAssociation",
                        "Required field: ConfiguredAudienceModelAssociationIdentifier, is not set");
    return UpdateConfiguredAudienceModelAssociationOutcome(
        Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                "Missing required field [ConfiguredAudienceModelAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredAudienceModelAssociation", "Required field: MembershipIdentifier, is not set");
    return UpdateConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
  };

  return UpdateConfiguredAudienceModelAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateConfiguredTableOutcome CleanRoomsClient::UpdateConfiguredTable(const UpdateConfiguredTableRequest& request) const {
  if (!request.ConfiguredTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTable", "Required field: ConfiguredTableIdentifier, is not set");
    return UpdateConfiguredTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
  };

  return UpdateConfiguredTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateConfiguredTableAnalysisRuleOutcome CleanRoomsClient::UpdateConfiguredTableAnalysisRule(
    const UpdateConfiguredTableAnalysisRuleRequest& request) const {
  if (!request.ConfiguredTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return UpdateConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return UpdateConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
  };

  return UpdateConfiguredTableAnalysisRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateConfiguredTableAssociationOutcome CleanRoomsClient::UpdateConfiguredTableAssociation(
    const UpdateConfiguredTableAssociationRequest& request) const {
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociation", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return UpdateConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return UpdateConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
  };

  return UpdateConfiguredTableAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateConfiguredTableAssociationAnalysisRuleOutcome CleanRoomsClient::UpdateConfiguredTableAssociationAnalysisRule(
    const UpdateConfiguredTableAssociationAnalysisRuleRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociationAnalysisRule", "Required field: MembershipIdentifier, is not set");
    return UpdateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociationAnalysisRule", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return UpdateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociationAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return UpdateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ConfiguredTableAssociationAnalysisRuleTypeMapper::GetNameForConfiguredTableAssociationAnalysisRuleType(
            request.GetAnalysisRuleType()));
  };

  return UpdateConfiguredTableAssociationAnalysisRuleOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIdMappingTableOutcome CleanRoomsClient::UpdateIdMappingTable(const UpdateIdMappingTableRequest& request) const {
  if (!request.IdMappingTableIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIdMappingTable", "Required field: IdMappingTableIdentifier, is not set");
    return UpdateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [IdMappingTableIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return UpdateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idmappingtables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdMappingTableIdentifier());
  };

  return UpdateIdMappingTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIdNamespaceAssociationOutcome CleanRoomsClient::UpdateIdNamespaceAssociation(
    const UpdateIdNamespaceAssociationRequest& request) const {
  if (!request.IdNamespaceAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIdNamespaceAssociation", "Required field: IdNamespaceAssociationIdentifier, is not set");
    return UpdateIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIdNamespaceAssociation", "Required field: MembershipIdentifier, is not set");
    return UpdateIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/idnamespaceassociations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdNamespaceAssociationIdentifier());
  };

  return UpdateIdNamespaceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateMembershipOutcome CleanRoomsClient::UpdateMembership(const UpdateMembershipRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMembership", "Required field: MembershipIdentifier, is not set");
    return UpdateMembershipOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MembershipIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
  };

  return UpdateMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdatePrivacyBudgetTemplateOutcome CleanRoomsClient::UpdatePrivacyBudgetTemplate(const UpdatePrivacyBudgetTemplateRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePrivacyBudgetTemplate", "Required field: MembershipIdentifier, is not set");
    return UpdatePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.PrivacyBudgetTemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePrivacyBudgetTemplate", "Required field: PrivacyBudgetTemplateIdentifier, is not set");
    return UpdatePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(
        CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetTemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
  };

  return UpdatePrivacyBudgetTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateProtectedJobOutcome CleanRoomsClient::UpdateProtectedJob(const UpdateProtectedJobRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProtectedJob", "Required field: MembershipIdentifier, is not set");
    return UpdateProtectedJobOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ProtectedJobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProtectedJob", "Required field: ProtectedJobIdentifier, is not set");
    return UpdateProtectedJobOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProtectedJobIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/protectedJobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProtectedJobIdentifier());
  };

  return UpdateProtectedJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateProtectedQueryOutcome CleanRoomsClient::UpdateProtectedQuery(const UpdateProtectedQueryRequest& request) const {
  if (!request.MembershipIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProtectedQuery", "Required field: MembershipIdentifier, is not set");
    return UpdateProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ProtectedQueryIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProtectedQuery", "Required field: ProtectedQueryIdentifier, is not set");
    return UpdateProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ProtectedQueryIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProtectedQueryIdentifier());
  };

  return UpdateProtectedQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
