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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetCollaborationAnalysisTemplateOutcome(result.GetResultWithOwnership())
                            : BatchGetCollaborationAnalysisTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetSchemaOutcome(result.GetResultWithOwnership()) : BatchGetSchemaOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetSchemaAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : BatchGetSchemaAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAnalysisTemplateOutcome(result.GetResultWithOwnership())
                            : CreateAnalysisTemplateOutcome(std::move(result.GetError()));
}

CreateCollaborationOutcome CleanRoomsClient::CreateCollaboration(const CreateCollaborationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCollaborationOutcome(result.GetResultWithOwnership())
                            : CreateCollaborationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCollaborationChangeRequestOutcome(result.GetResultWithOwnership())
                            : CreateCollaborationChangeRequestOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfiguredAudienceModelAssociationOutcome(result.GetResultWithOwnership())
                            : CreateConfiguredAudienceModelAssociationOutcome(std::move(result.GetError()));
}

CreateConfiguredTableOutcome CleanRoomsClient::CreateConfiguredTable(const CreateConfiguredTableRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfiguredTableOutcome(result.GetResultWithOwnership())
                            : CreateConfiguredTableOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfiguredTableAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : CreateConfiguredTableAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfiguredTableAssociationOutcome(result.GetResultWithOwnership())
                            : CreateConfiguredTableAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfiguredTableAssociationAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : CreateConfiguredTableAssociationAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIdMappingTableOutcome(result.GetResultWithOwnership())
                            : CreateIdMappingTableOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIdNamespaceAssociationOutcome(result.GetResultWithOwnership())
                            : CreateIdNamespaceAssociationOutcome(std::move(result.GetError()));
}

CreateMembershipOutcome CleanRoomsClient::CreateMembership(const CreateMembershipRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMembershipOutcome(result.GetResultWithOwnership())
                            : CreateMembershipOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePrivacyBudgetTemplateOutcome(result.GetResultWithOwnership())
                            : CreatePrivacyBudgetTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAnalysisTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteAnalysisTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCollaborationOutcome(result.GetResultWithOwnership())
                            : DeleteCollaborationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfiguredAudienceModelAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteConfiguredAudienceModelAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfiguredTableOutcome(result.GetResultWithOwnership())
                            : DeleteConfiguredTableOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfiguredTableAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : DeleteConfiguredTableAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfiguredTableAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteConfiguredTableAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfiguredTableAssociationAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : DeleteConfiguredTableAssociationAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteIdMappingTableOutcome(result.GetResultWithOwnership())
                            : DeleteIdMappingTableOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteIdNamespaceAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteIdNamespaceAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMemberOutcome(result.GetResultWithOwnership()) : DeleteMemberOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMembershipOutcome(result.GetResultWithOwnership())
                            : DeleteMembershipOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePrivacyBudgetTemplateOutcome(result.GetResultWithOwnership())
                            : DeletePrivacyBudgetTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAnalysisTemplateOutcome(result.GetResultWithOwnership())
                            : GetAnalysisTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollaborationOutcome(result.GetResultWithOwnership())
                            : GetCollaborationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollaborationAnalysisTemplateOutcome(result.GetResultWithOwnership())
                            : GetCollaborationAnalysisTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollaborationChangeRequestOutcome(result.GetResultWithOwnership())
                            : GetCollaborationChangeRequestOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollaborationConfiguredAudienceModelAssociationOutcome(result.GetResultWithOwnership())
                            : GetCollaborationConfiguredAudienceModelAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollaborationIdNamespaceAssociationOutcome(result.GetResultWithOwnership())
                            : GetCollaborationIdNamespaceAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCollaborationPrivacyBudgetTemplateOutcome(result.GetResultWithOwnership())
                            : GetCollaborationPrivacyBudgetTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfiguredAudienceModelAssociationOutcome(result.GetResultWithOwnership())
                            : GetConfiguredAudienceModelAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfiguredTableOutcome(result.GetResultWithOwnership())
                            : GetConfiguredTableOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfiguredTableAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : GetConfiguredTableAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfiguredTableAssociationOutcome(result.GetResultWithOwnership())
                            : GetConfiguredTableAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfiguredTableAssociationAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : GetConfiguredTableAssociationAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetIdMappingTableOutcome(result.GetResultWithOwnership())
                            : GetIdMappingTableOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetIdNamespaceAssociationOutcome(result.GetResultWithOwnership())
                            : GetIdNamespaceAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMembershipOutcome(result.GetResultWithOwnership()) : GetMembershipOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPrivacyBudgetTemplateOutcome(result.GetResultWithOwnership())
                            : GetPrivacyBudgetTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProtectedJobOutcome(result.GetResultWithOwnership())
                            : GetProtectedJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetProtectedQueryOutcome(result.GetResultWithOwnership())
                            : GetProtectedQueryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSchemaOutcome(result.GetResultWithOwnership()) : GetSchemaOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSchemaAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : GetSchemaAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAnalysisTemplatesOutcome(result.GetResultWithOwnership())
                            : ListAnalysisTemplatesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationAnalysisTemplatesOutcome(result.GetResultWithOwnership())
                            : ListCollaborationAnalysisTemplatesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationChangeRequestsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationChangeRequestsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationConfiguredAudienceModelAssociationsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationConfiguredAudienceModelAssociationsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationIdNamespaceAssociationsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationIdNamespaceAssociationsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationPrivacyBudgetTemplatesOutcome(result.GetResultWithOwnership())
                            : ListCollaborationPrivacyBudgetTemplatesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationPrivacyBudgetsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationPrivacyBudgetsOutcome(std::move(result.GetError()));
}

ListCollaborationsOutcome CleanRoomsClient::ListCollaborations(const ListCollaborationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCollaborationsOutcome(result.GetResultWithOwnership())
                            : ListCollaborationsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConfiguredAudienceModelAssociationsOutcome(result.GetResultWithOwnership())
                            : ListConfiguredAudienceModelAssociationsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConfiguredTableAssociationsOutcome(result.GetResultWithOwnership())
                            : ListConfiguredTableAssociationsOutcome(std::move(result.GetError()));
}

ListConfiguredTablesOutcome CleanRoomsClient::ListConfiguredTables(const ListConfiguredTablesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConfiguredTablesOutcome(result.GetResultWithOwnership())
                            : ListConfiguredTablesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIdMappingTablesOutcome(result.GetResultWithOwnership())
                            : ListIdMappingTablesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIdNamespaceAssociationsOutcome(result.GetResultWithOwnership())
                            : ListIdNamespaceAssociationsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMembersOutcome(result.GetResultWithOwnership()) : ListMembersOutcome(std::move(result.GetError()));
}

ListMembershipsOutcome CleanRoomsClient::ListMemberships(const ListMembershipsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMembershipsOutcome(result.GetResultWithOwnership())
                            : ListMembershipsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPrivacyBudgetTemplatesOutcome(result.GetResultWithOwnership())
                            : ListPrivacyBudgetTemplatesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPrivacyBudgetsOutcome(result.GetResultWithOwnership())
                            : ListPrivacyBudgetsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProtectedJobsOutcome(result.GetResultWithOwnership())
                            : ListProtectedJobsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProtectedQueriesOutcome(result.GetResultWithOwnership())
                            : ListProtectedQueriesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSchemasOutcome(result.GetResultWithOwnership()) : ListSchemasOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PopulateIdMappingTableOutcome(result.GetResultWithOwnership())
                            : PopulateIdMappingTableOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PreviewPrivacyImpactOutcome(result.GetResultWithOwnership())
                            : PreviewPrivacyImpactOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartProtectedJobOutcome(result.GetResultWithOwnership())
                            : StartProtectedJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartProtectedQueryOutcome(result.GetResultWithOwnership())
                            : StartProtectedQueryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAnalysisTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateAnalysisTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateCollaborationOutcome(result.GetResultWithOwnership())
                            : UpdateCollaborationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateCollaborationChangeRequestOutcome(result.GetResultWithOwnership())
                            : UpdateCollaborationChangeRequestOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateConfiguredAudienceModelAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateConfiguredAudienceModelAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateConfiguredTableOutcome(result.GetResultWithOwnership())
                            : UpdateConfiguredTableOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateConfiguredTableAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : UpdateConfiguredTableAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateConfiguredTableAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateConfiguredTableAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateConfiguredTableAssociationAnalysisRuleOutcome(result.GetResultWithOwnership())
                            : UpdateConfiguredTableAssociationAnalysisRuleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateIdMappingTableOutcome(result.GetResultWithOwnership())
                            : UpdateIdMappingTableOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateIdNamespaceAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateIdNamespaceAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMembershipOutcome(result.GetResultWithOwnership())
                            : UpdateMembershipOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdatePrivacyBudgetTemplateOutcome(result.GetResultWithOwnership())
                            : UpdatePrivacyBudgetTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProtectedJobOutcome(result.GetResultWithOwnership())
                            : UpdateProtectedJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateProtectedQueryOutcome(result.GetResultWithOwnership())
                            : UpdateProtectedQueryOutcome(std::move(result.GetError()));
}
