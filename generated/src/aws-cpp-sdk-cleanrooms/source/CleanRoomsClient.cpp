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


#include <aws/cleanrooms/CleanRoomsClient.h>
#include <aws/cleanrooms/CleanRoomsErrorMarshaller.h>
#include <aws/cleanrooms/CleanRoomsEndpointProvider.h>
#include <aws/cleanrooms/model/BatchGetCollaborationAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/BatchGetSchemaRequest.h>
#include <aws/cleanrooms/model/BatchGetSchemaAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/CreateAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/CreateCollaborationRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/CreateIdMappingTableRequest.h>
#include <aws/cleanrooms/model/CreateIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/CreateMembershipRequest.h>
#include <aws/cleanrooms/model/CreatePrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/DeleteAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/DeleteCollaborationRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/DeleteIdMappingTableRequest.h>
#include <aws/cleanrooms/model/DeleteIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/DeleteMemberRequest.h>
#include <aws/cleanrooms/model/DeleteMembershipRequest.h>
#include <aws/cleanrooms/model/DeletePrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/GetAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/GetCollaborationRequest.h>
#include <aws/cleanrooms/model/GetCollaborationAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/GetCollaborationConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/GetCollaborationIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/GetCollaborationPrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/GetConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/GetIdMappingTableRequest.h>
#include <aws/cleanrooms/model/GetIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/GetMembershipRequest.h>
#include <aws/cleanrooms/model/GetPrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/GetProtectedQueryRequest.h>
#include <aws/cleanrooms/model/GetSchemaRequest.h>
#include <aws/cleanrooms/model/GetSchemaAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/ListAnalysisTemplatesRequest.h>
#include <aws/cleanrooms/model/ListCollaborationAnalysisTemplatesRequest.h>
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
#include <aws/cleanrooms/model/ListProtectedQueriesRequest.h>
#include <aws/cleanrooms/model/ListSchemasRequest.h>
#include <aws/cleanrooms/model/ListTagsForResourceRequest.h>
#include <aws/cleanrooms/model/PopulateIdMappingTableRequest.h>
#include <aws/cleanrooms/model/PreviewPrivacyImpactRequest.h>
#include <aws/cleanrooms/model/StartProtectedQueryRequest.h>
#include <aws/cleanrooms/model/TagResourceRequest.h>
#include <aws/cleanrooms/model/UntagResourceRequest.h>
#include <aws/cleanrooms/model/UpdateAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/UpdateCollaborationRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/UpdateConfiguredTableAssociationAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/UpdateIdMappingTableRequest.h>
#include <aws/cleanrooms/model/UpdateIdNamespaceAssociationRequest.h>
#include <aws/cleanrooms/model/UpdateMembershipRequest.h>
#include <aws/cleanrooms/model/UpdatePrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/UpdateProtectedQueryRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CleanRooms;
using namespace Aws::CleanRooms::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace CleanRooms
  {
    const char ALLOCATION_TAG[] = "CleanRoomsClient";
    const char SERVICE_NAME[] = "cleanrooms";
  }
}
const char* CleanRoomsClient::GetServiceName() {return SERVICE_NAME;}
const char* CleanRoomsClient::GetAllocationTag() {return ALLOCATION_TAG;}

CleanRoomsClient::CleanRoomsClient(const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration,
                           std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRooms",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

CleanRoomsClient::CleanRoomsClient(const AWSCredentials& credentials,
                           std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider,
                           const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRooms",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

CleanRoomsClient::CleanRoomsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider,
                           const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRooms",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
CleanRoomsClient::CleanRoomsClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "CleanRooms",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

CleanRoomsClient::CleanRoomsClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRooms",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

CleanRoomsClient::CleanRoomsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CleanRooms",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

CleanRoomsClient::~CleanRoomsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<CleanRoomsEndpointProviderBase>& CleanRoomsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CleanRoomsClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
BatchGetCollaborationAnalysisTemplateOutcome CleanRoomsClient::BatchGetCollaborationAnalysisTemplate(const BatchGetCollaborationAnalysisTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetCollaborationAnalysisTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetCollaborationAnalysisTemplate", "Required field: CollaborationIdentifier, is not set");
    return BatchGetCollaborationAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchGetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetCollaborationAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetCollaborationAnalysisTemplateOutcome>(
    [&]()-> BatchGetCollaborationAnalysisTemplateOutcome {
      return BatchGetCollaborationAnalysisTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/batch-analysistemplates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetSchemaOutcome CleanRoomsClient::BatchGetSchema(const BatchGetSchemaRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetSchema);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetSchema", "Required field: CollaborationIdentifier, is not set");
    return BatchGetSchemaOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchGetSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetSchema",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetSchemaOutcome>(
    [&]()-> BatchGetSchemaOutcome {
      return BatchGetSchemaOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/batch-schema");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetSchemaAnalysisRuleOutcome CleanRoomsClient::BatchGetSchemaAnalysisRule(const BatchGetSchemaAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetSchemaAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetSchemaAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetSchemaAnalysisRule", "Required field: CollaborationIdentifier, is not set");
    return BatchGetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchGetSchemaAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetSchemaAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetSchemaAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetSchemaAnalysisRuleOutcome>(
    [&]()-> BatchGetSchemaAnalysisRuleOutcome {
      return BatchGetSchemaAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/batch-schema-analysis-rule");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAnalysisTemplateOutcome CleanRoomsClient::CreateAnalysisTemplate(const CreateAnalysisTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAnalysisTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAnalysisTemplate", "Required field: MembershipIdentifier, is not set");
    return CreateAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAnalysisTemplateOutcome>(
    [&]()-> CreateAnalysisTemplateOutcome {
      return CreateAnalysisTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/analysistemplates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCollaborationOutcome CleanRoomsClient::CreateCollaboration(const CreateCollaborationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCollaboration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCollaboration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateCollaborationOutcome>(
    [&]()-> CreateCollaborationOutcome {
      return CreateCollaborationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConfiguredAudienceModelAssociationOutcome CleanRoomsClient::CreateConfiguredAudienceModelAssociation(const CreateConfiguredAudienceModelAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConfiguredAudienceModelAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfiguredAudienceModelAssociation", "Required field: MembershipIdentifier, is not set");
    return CreateConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredAudienceModelAssociationOutcome>(
    [&]()-> CreateConfiguredAudienceModelAssociationOutcome {
      return CreateConfiguredAudienceModelAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredaudiencemodelassociations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConfiguredTableOutcome CleanRoomsClient::CreateConfiguredTable(const CreateConfiguredTableRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConfiguredTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredTableOutcome>(
    [&]()-> CreateConfiguredTableOutcome {
      return CreateConfiguredTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configuredTables");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConfiguredTableAnalysisRuleOutcome CleanRoomsClient::CreateConfiguredTableAnalysisRule(const CreateConfiguredTableAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConfiguredTableAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return CreateConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredTableAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredTableAnalysisRuleOutcome>(
    [&]()-> CreateConfiguredTableAnalysisRuleOutcome {
      return CreateConfiguredTableAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configuredTables/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableIdentifier());
      resolvedEndpoint.AddPathSegments("/analysisRule");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConfiguredTableAssociationOutcome CleanRoomsClient::CreateConfiguredTableAssociation(const CreateConfiguredTableAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConfiguredTableAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return CreateConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredTableAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredTableAssociationOutcome>(
    [&]()-> CreateConfiguredTableAssociationOutcome {
      return CreateConfiguredTableAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredTableAssociations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConfiguredTableAssociationAnalysisRuleOutcome CleanRoomsClient::CreateConfiguredTableAssociationAnalysisRule(const CreateConfiguredTableAssociationAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConfiguredTableAssociationAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAssociationAnalysisRule", "Required field: MembershipIdentifier, is not set");
    return CreateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfiguredTableAssociationAnalysisRule", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return CreateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredTableAssociationAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredTableAssociationAnalysisRuleOutcome>(
    [&]()-> CreateConfiguredTableAssociationAnalysisRuleOutcome {
      return CreateConfiguredTableAssociationAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredTableAssociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      resolvedEndpoint.AddPathSegments("/analysisRule");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIdMappingTableOutcome CleanRoomsClient::CreateIdMappingTable(const CreateIdMappingTableRequest& request) const
{
  AWS_OPERATION_GUARD(CreateIdMappingTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIdMappingTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return CreateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateIdMappingTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateIdMappingTableOutcome>(
    [&]()-> CreateIdMappingTableOutcome {
      return CreateIdMappingTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idmappingtables");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIdNamespaceAssociationOutcome CleanRoomsClient::CreateIdNamespaceAssociation(const CreateIdNamespaceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateIdNamespaceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIdNamespaceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIdNamespaceAssociation", "Required field: MembershipIdentifier, is not set");
    return CreateIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateIdNamespaceAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateIdNamespaceAssociationOutcome>(
    [&]()-> CreateIdNamespaceAssociationOutcome {
      return CreateIdNamespaceAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idnamespaceassociations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMembershipOutcome CleanRoomsClient::CreateMembership(const CreateMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMembershipOutcome>(
    [&]()-> CreateMembershipOutcome {
      return CreateMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePrivacyBudgetTemplateOutcome CleanRoomsClient::CreatePrivacyBudgetTemplate(const CreatePrivacyBudgetTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePrivacyBudgetTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePrivacyBudgetTemplate", "Required field: MembershipIdentifier, is not set");
    return CreatePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreatePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePrivacyBudgetTemplateOutcome>(
    [&]()-> CreatePrivacyBudgetTemplateOutcome {
      return CreatePrivacyBudgetTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/privacybudgettemplates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAnalysisTemplateOutcome CleanRoomsClient::DeleteAnalysisTemplate(const DeleteAnalysisTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAnalysisTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAnalysisTemplate", "Required field: MembershipIdentifier, is not set");
    return DeleteAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.AnalysisTemplateIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAnalysisTemplate", "Required field: AnalysisTemplateIdentifier, is not set");
    return DeleteAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisTemplateIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAnalysisTemplateOutcome>(
    [&]()-> DeleteAnalysisTemplateOutcome {
      return DeleteAnalysisTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/analysistemplates/");
      resolvedEndpoint.AddPathSegment(request.GetAnalysisTemplateIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCollaborationOutcome CleanRoomsClient::DeleteCollaboration(const DeleteCollaborationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteCollaboration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCollaboration", "Required field: CollaborationIdentifier, is not set");
    return DeleteCollaborationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteCollaboration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteCollaborationOutcome>(
    [&]()-> DeleteCollaborationOutcome {
      return DeleteCollaborationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConfiguredAudienceModelAssociationOutcome CleanRoomsClient::DeleteConfiguredAudienceModelAssociation(const DeleteConfiguredAudienceModelAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConfiguredAudienceModelAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredAudienceModelAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredAudienceModelAssociation", "Required field: ConfiguredAudienceModelAssociationIdentifier, is not set");
    return DeleteConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredAudienceModelAssociation", "Required field: MembershipIdentifier, is not set");
    return DeleteConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredAudienceModelAssociationOutcome>(
    [&]()-> DeleteConfiguredAudienceModelAssociationOutcome {
      return DeleteConfiguredAudienceModelAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredaudiencemodelassociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConfiguredTableOutcome CleanRoomsClient::DeleteConfiguredTable(const DeleteConfiguredTableRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConfiguredTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTable", "Required field: ConfiguredTableIdentifier, is not set");
    return DeleteConfiguredTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredTableOutcome>(
    [&]()-> DeleteConfiguredTableOutcome {
      return DeleteConfiguredTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configuredTables/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConfiguredTableAnalysisRuleOutcome CleanRoomsClient::DeleteConfiguredTableAnalysisRule(const DeleteConfiguredTableAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConfiguredTableAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return DeleteConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return DeleteConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredTableAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredTableAnalysisRuleOutcome>(
    [&]()-> DeleteConfiguredTableAnalysisRuleOutcome {
      return DeleteConfiguredTableAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configuredTables/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableIdentifier());
      resolvedEndpoint.AddPathSegments("/analysisRule/");
      resolvedEndpoint.AddPathSegment(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConfiguredTableAssociationOutcome CleanRoomsClient::DeleteConfiguredTableAssociation(const DeleteConfiguredTableAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConfiguredTableAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociation", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return DeleteConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return DeleteConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredTableAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredTableAssociationOutcome>(
    [&]()-> DeleteConfiguredTableAssociationOutcome {
      return DeleteConfiguredTableAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredTableAssociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConfiguredTableAssociationAnalysisRuleOutcome CleanRoomsClient::DeleteConfiguredTableAssociationAnalysisRule(const DeleteConfiguredTableAssociationAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConfiguredTableAssociationAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociationAnalysisRule", "Required field: MembershipIdentifier, is not set");
    return DeleteConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociationAnalysisRule", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return DeleteConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfiguredTableAssociationAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return DeleteConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredTableAssociationAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredTableAssociationAnalysisRuleOutcome>(
    [&]()-> DeleteConfiguredTableAssociationAnalysisRuleOutcome {
      return DeleteConfiguredTableAssociationAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredTableAssociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      resolvedEndpoint.AddPathSegments("/analysisRule/");
      resolvedEndpoint.AddPathSegment(ConfiguredTableAssociationAnalysisRuleTypeMapper::GetNameForConfiguredTableAssociationAnalysisRuleType(request.GetAnalysisRuleType()));
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIdMappingTableOutcome CleanRoomsClient::DeleteIdMappingTable(const DeleteIdMappingTableRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteIdMappingTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdMappingTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdMappingTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIdMappingTable", "Required field: IdMappingTableIdentifier, is not set");
    return DeleteIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdMappingTableIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return DeleteIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIdMappingTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIdMappingTableOutcome>(
    [&]()-> DeleteIdMappingTableOutcome {
      return DeleteIdMappingTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idmappingtables/");
      resolvedEndpoint.AddPathSegment(request.GetIdMappingTableIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIdNamespaceAssociationOutcome CleanRoomsClient::DeleteIdNamespaceAssociation(const DeleteIdNamespaceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteIdNamespaceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdNamespaceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdNamespaceAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIdNamespaceAssociation", "Required field: IdNamespaceAssociationIdentifier, is not set");
    return DeleteIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIdNamespaceAssociation", "Required field: MembershipIdentifier, is not set");
    return DeleteIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIdNamespaceAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIdNamespaceAssociationOutcome>(
    [&]()-> DeleteIdNamespaceAssociationOutcome {
      return DeleteIdNamespaceAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idnamespaceassociations/");
      resolvedEndpoint.AddPathSegment(request.GetIdNamespaceAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMemberOutcome CleanRoomsClient::DeleteMember(const DeleteMemberRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMember);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: CollaborationIdentifier, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: AccountId, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMember",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMemberOutcome>(
    [&]()-> DeleteMemberOutcome {
      return DeleteMemberOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/member/");
      resolvedEndpoint.AddPathSegment(request.GetAccountId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMembershipOutcome CleanRoomsClient::DeleteMembership(const DeleteMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMembership", "Required field: MembershipIdentifier, is not set");
    return DeleteMembershipOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMembershipOutcome>(
    [&]()-> DeleteMembershipOutcome {
      return DeleteMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePrivacyBudgetTemplateOutcome CleanRoomsClient::DeletePrivacyBudgetTemplate(const DeletePrivacyBudgetTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePrivacyBudgetTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePrivacyBudgetTemplate", "Required field: MembershipIdentifier, is not set");
    return DeletePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.PrivacyBudgetTemplateIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePrivacyBudgetTemplate", "Required field: PrivacyBudgetTemplateIdentifier, is not set");
    return DeletePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetTemplateIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeletePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePrivacyBudgetTemplateOutcome>(
    [&]()-> DeletePrivacyBudgetTemplateOutcome {
      return DeletePrivacyBudgetTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/privacybudgettemplates/");
      resolvedEndpoint.AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAnalysisTemplateOutcome CleanRoomsClient::GetAnalysisTemplate(const GetAnalysisTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetAnalysisTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnalysisTemplate", "Required field: MembershipIdentifier, is not set");
    return GetAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.AnalysisTemplateIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnalysisTemplate", "Required field: AnalysisTemplateIdentifier, is not set");
    return GetAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisTemplateIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAnalysisTemplateOutcome>(
    [&]()-> GetAnalysisTemplateOutcome {
      return GetAnalysisTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/analysistemplates/");
      resolvedEndpoint.AddPathSegment(request.GetAnalysisTemplateIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCollaborationOutcome CleanRoomsClient::GetCollaboration(const GetCollaborationRequest& request) const
{
  AWS_OPERATION_GUARD(GetCollaboration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaboration", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaboration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationOutcome>(
    [&]()-> GetCollaborationOutcome {
      return GetCollaborationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCollaborationAnalysisTemplateOutcome CleanRoomsClient::GetCollaborationAnalysisTemplate(const GetCollaborationAnalysisTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetCollaborationAnalysisTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationAnalysisTemplate", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.AnalysisTemplateArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationAnalysisTemplate", "Required field: AnalysisTemplateArn, is not set");
    return GetCollaborationAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisTemplateArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationAnalysisTemplateOutcome>(
    [&]()-> GetCollaborationAnalysisTemplateOutcome {
      return GetCollaborationAnalysisTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/analysistemplates/");
      resolvedEndpoint.AddPathSegment(request.GetAnalysisTemplateArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCollaborationConfiguredAudienceModelAssociationOutcome CleanRoomsClient::GetCollaborationConfiguredAudienceModelAssociation(const GetCollaborationConfiguredAudienceModelAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetCollaborationConfiguredAudienceModelAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCollaborationConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationConfiguredAudienceModelAssociation", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.ConfiguredAudienceModelAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationConfiguredAudienceModelAssociation", "Required field: ConfiguredAudienceModelAssociationIdentifier, is not set");
    return GetCollaborationConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelAssociationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCollaborationConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationConfiguredAudienceModelAssociationOutcome>(
    [&]()-> GetCollaborationConfiguredAudienceModelAssociationOutcome {
      return GetCollaborationConfiguredAudienceModelAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredaudiencemodelassociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCollaborationIdNamespaceAssociationOutcome CleanRoomsClient::GetCollaborationIdNamespaceAssociation(const GetCollaborationIdNamespaceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetCollaborationIdNamespaceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCollaborationIdNamespaceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationIdNamespaceAssociation", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.IdNamespaceAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationIdNamespaceAssociation", "Required field: IdNamespaceAssociationIdentifier, is not set");
    return GetCollaborationIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceAssociationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCollaborationIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationIdNamespaceAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationIdNamespaceAssociationOutcome>(
    [&]()-> GetCollaborationIdNamespaceAssociationOutcome {
      return GetCollaborationIdNamespaceAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/idnamespaceassociations/");
      resolvedEndpoint.AddPathSegment(request.GetIdNamespaceAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCollaborationPrivacyBudgetTemplateOutcome CleanRoomsClient::GetCollaborationPrivacyBudgetTemplate(const GetCollaborationPrivacyBudgetTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetCollaborationPrivacyBudgetTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCollaborationPrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationPrivacyBudgetTemplate", "Required field: CollaborationIdentifier, is not set");
    return GetCollaborationPrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.PrivacyBudgetTemplateIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCollaborationPrivacyBudgetTemplate", "Required field: PrivacyBudgetTemplateIdentifier, is not set");
    return GetCollaborationPrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetTemplateIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCollaborationPrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationPrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationPrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationPrivacyBudgetTemplateOutcome>(
    [&]()-> GetCollaborationPrivacyBudgetTemplateOutcome {
      return GetCollaborationPrivacyBudgetTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/privacybudgettemplates/");
      resolvedEndpoint.AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConfiguredAudienceModelAssociationOutcome CleanRoomsClient::GetConfiguredAudienceModelAssociation(const GetConfiguredAudienceModelAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetConfiguredAudienceModelAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredAudienceModelAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredAudienceModelAssociation", "Required field: ConfiguredAudienceModelAssociationIdentifier, is not set");
    return GetConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredAudienceModelAssociation", "Required field: MembershipIdentifier, is not set");
    return GetConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredAudienceModelAssociationOutcome>(
    [&]()-> GetConfiguredAudienceModelAssociationOutcome {
      return GetConfiguredAudienceModelAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredaudiencemodelassociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConfiguredTableOutcome CleanRoomsClient::GetConfiguredTable(const GetConfiguredTableRequest& request) const
{
  AWS_OPERATION_GUARD(GetConfiguredTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTable", "Required field: ConfiguredTableIdentifier, is not set");
    return GetConfiguredTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredTableOutcome>(
    [&]()-> GetConfiguredTableOutcome {
      return GetConfiguredTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configuredTables/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConfiguredTableAnalysisRuleOutcome CleanRoomsClient::GetConfiguredTableAnalysisRule(const GetConfiguredTableAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(GetConfiguredTableAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return GetConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return GetConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredTableAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredTableAnalysisRuleOutcome>(
    [&]()-> GetConfiguredTableAnalysisRuleOutcome {
      return GetConfiguredTableAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configuredTables/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableIdentifier());
      resolvedEndpoint.AddPathSegments("/analysisRule/");
      resolvedEndpoint.AddPathSegment(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConfiguredTableAssociationOutcome CleanRoomsClient::GetConfiguredTableAssociation(const GetConfiguredTableAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetConfiguredTableAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociation", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return GetConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return GetConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredTableAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredTableAssociationOutcome>(
    [&]()-> GetConfiguredTableAssociationOutcome {
      return GetConfiguredTableAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredTableAssociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConfiguredTableAssociationAnalysisRuleOutcome CleanRoomsClient::GetConfiguredTableAssociationAnalysisRule(const GetConfiguredTableAssociationAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(GetConfiguredTableAssociationAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociationAnalysisRule", "Required field: MembershipIdentifier, is not set");
    return GetConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociationAnalysisRule", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return GetConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfiguredTableAssociationAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return GetConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredTableAssociationAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredTableAssociationAnalysisRuleOutcome>(
    [&]()-> GetConfiguredTableAssociationAnalysisRuleOutcome {
      return GetConfiguredTableAssociationAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredTableAssociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      resolvedEndpoint.AddPathSegments("/analysisRule/");
      resolvedEndpoint.AddPathSegment(ConfiguredTableAssociationAnalysisRuleTypeMapper::GetNameForConfiguredTableAssociationAnalysisRuleType(request.GetAnalysisRuleType()));
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIdMappingTableOutcome CleanRoomsClient::GetIdMappingTable(const GetIdMappingTableRequest& request) const
{
  AWS_OPERATION_GUARD(GetIdMappingTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdMappingTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdMappingTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdMappingTable", "Required field: IdMappingTableIdentifier, is not set");
    return GetIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdMappingTableIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return GetIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIdMappingTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIdMappingTableOutcome>(
    [&]()-> GetIdMappingTableOutcome {
      return GetIdMappingTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idmappingtables/");
      resolvedEndpoint.AddPathSegment(request.GetIdMappingTableIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIdNamespaceAssociationOutcome CleanRoomsClient::GetIdNamespaceAssociation(const GetIdNamespaceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetIdNamespaceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdNamespaceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdNamespaceAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdNamespaceAssociation", "Required field: IdNamespaceAssociationIdentifier, is not set");
    return GetIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdNamespaceAssociation", "Required field: MembershipIdentifier, is not set");
    return GetIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIdNamespaceAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIdNamespaceAssociationOutcome>(
    [&]()-> GetIdNamespaceAssociationOutcome {
      return GetIdNamespaceAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idnamespaceassociations/");
      resolvedEndpoint.AddPathSegment(request.GetIdNamespaceAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMembershipOutcome CleanRoomsClient::GetMembership(const GetMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(GetMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMembership", "Required field: MembershipIdentifier, is not set");
    return GetMembershipOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMembershipOutcome>(
    [&]()-> GetMembershipOutcome {
      return GetMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPrivacyBudgetTemplateOutcome CleanRoomsClient::GetPrivacyBudgetTemplate(const GetPrivacyBudgetTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetPrivacyBudgetTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPrivacyBudgetTemplate", "Required field: MembershipIdentifier, is not set");
    return GetPrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.PrivacyBudgetTemplateIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPrivacyBudgetTemplate", "Required field: PrivacyBudgetTemplateIdentifier, is not set");
    return GetPrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetTemplateIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPrivacyBudgetTemplateOutcome>(
    [&]()-> GetPrivacyBudgetTemplateOutcome {
      return GetPrivacyBudgetTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/privacybudgettemplates/");
      resolvedEndpoint.AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProtectedQueryOutcome CleanRoomsClient::GetProtectedQuery(const GetProtectedQueryRequest& request) const
{
  AWS_OPERATION_GUARD(GetProtectedQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProtectedQuery", "Required field: MembershipIdentifier, is not set");
    return GetProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ProtectedQueryIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProtectedQuery", "Required field: ProtectedQueryIdentifier, is not set");
    return GetProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProtectedQueryIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProtectedQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProtectedQueryOutcome>(
    [&]()-> GetProtectedQueryOutcome {
      return GetProtectedQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/protectedQueries/");
      resolvedEndpoint.AddPathSegment(request.GetProtectedQueryIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSchemaOutcome CleanRoomsClient::GetSchema(const GetSchemaRequest& request) const
{
  AWS_OPERATION_GUARD(GetSchema);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchema", "Required field: CollaborationIdentifier, is not set");
    return GetSchemaOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchema", "Required field: Name, is not set");
    return GetSchemaOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSchema",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSchemaOutcome>(
    [&]()-> GetSchemaOutcome {
      return GetSchemaOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/schemas/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSchemaAnalysisRuleOutcome CleanRoomsClient::GetSchemaAnalysisRule(const GetSchemaAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(GetSchemaAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSchemaAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchemaAnalysisRule", "Required field: CollaborationIdentifier, is not set");
    return GetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchemaAnalysisRule", "Required field: Name, is not set");
    return GetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchemaAnalysisRule", "Required field: Type, is not set");
    return GetSchemaAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSchemaAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSchemaAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSchemaAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSchemaAnalysisRuleOutcome>(
    [&]()-> GetSchemaAnalysisRuleOutcome {
      return GetSchemaAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/schemas/");
      resolvedEndpoint.AddPathSegment(request.GetName());
      resolvedEndpoint.AddPathSegments("/analysisRule/");
      resolvedEndpoint.AddPathSegment(AnalysisRuleTypeMapper::GetNameForAnalysisRuleType(request.GetType()));
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAnalysisTemplatesOutcome CleanRoomsClient::ListAnalysisTemplates(const ListAnalysisTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAnalysisTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnalysisTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAnalysisTemplates", "Required field: MembershipIdentifier, is not set");
    return ListAnalysisTemplatesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAnalysisTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAnalysisTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAnalysisTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAnalysisTemplatesOutcome>(
    [&]()-> ListAnalysisTemplatesOutcome {
      return ListAnalysisTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/analysistemplates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationAnalysisTemplatesOutcome CleanRoomsClient::ListCollaborationAnalysisTemplates(const ListCollaborationAnalysisTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationAnalysisTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationAnalysisTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationAnalysisTemplates", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationAnalysisTemplatesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationAnalysisTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationAnalysisTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationAnalysisTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationAnalysisTemplatesOutcome>(
    [&]()-> ListCollaborationAnalysisTemplatesOutcome {
      return ListCollaborationAnalysisTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/analysistemplates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationConfiguredAudienceModelAssociationsOutcome CleanRoomsClient::ListCollaborationConfiguredAudienceModelAssociations(const ListCollaborationConfiguredAudienceModelAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationConfiguredAudienceModelAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationConfiguredAudienceModelAssociations", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationConfiguredAudienceModelAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationConfiguredAudienceModelAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationConfiguredAudienceModelAssociationsOutcome>(
    [&]()-> ListCollaborationConfiguredAudienceModelAssociationsOutcome {
      return ListCollaborationConfiguredAudienceModelAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredaudiencemodelassociations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationIdNamespaceAssociationsOutcome CleanRoomsClient::ListCollaborationIdNamespaceAssociations(const ListCollaborationIdNamespaceAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationIdNamespaceAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationIdNamespaceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationIdNamespaceAssociations", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationIdNamespaceAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationIdNamespaceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationIdNamespaceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationIdNamespaceAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationIdNamespaceAssociationsOutcome>(
    [&]()-> ListCollaborationIdNamespaceAssociationsOutcome {
      return ListCollaborationIdNamespaceAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/idnamespaceassociations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationPrivacyBudgetTemplatesOutcome CleanRoomsClient::ListCollaborationPrivacyBudgetTemplates(const ListCollaborationPrivacyBudgetTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationPrivacyBudgetTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationPrivacyBudgetTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationPrivacyBudgetTemplates", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationPrivacyBudgetTemplatesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationPrivacyBudgetTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationPrivacyBudgetTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationPrivacyBudgetTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationPrivacyBudgetTemplatesOutcome>(
    [&]()-> ListCollaborationPrivacyBudgetTemplatesOutcome {
      return ListCollaborationPrivacyBudgetTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/privacybudgettemplates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationPrivacyBudgetsOutcome CleanRoomsClient::ListCollaborationPrivacyBudgets(const ListCollaborationPrivacyBudgetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborationPrivacyBudgets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborationPrivacyBudgets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationPrivacyBudgets", "Required field: CollaborationIdentifier, is not set");
    return ListCollaborationPrivacyBudgetsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  if (!request.PrivacyBudgetTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCollaborationPrivacyBudgets", "Required field: PrivacyBudgetType, is not set");
    return ListCollaborationPrivacyBudgetsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborationPrivacyBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationPrivacyBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationPrivacyBudgets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationPrivacyBudgetsOutcome>(
    [&]()-> ListCollaborationPrivacyBudgetsOutcome {
      return ListCollaborationPrivacyBudgetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/privacybudgets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationsOutcome CleanRoomsClient::ListCollaborations(const ListCollaborationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCollaborations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationsOutcome>(
    [&]()-> ListCollaborationsOutcome {
      return ListCollaborationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConfiguredAudienceModelAssociationsOutcome CleanRoomsClient::ListConfiguredAudienceModelAssociations(const ListConfiguredAudienceModelAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListConfiguredAudienceModelAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConfiguredAudienceModelAssociations", "Required field: MembershipIdentifier, is not set");
    return ListConfiguredAudienceModelAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConfiguredAudienceModelAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConfiguredAudienceModelAssociationsOutcome>(
    [&]()-> ListConfiguredAudienceModelAssociationsOutcome {
      return ListConfiguredAudienceModelAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredaudiencemodelassociations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConfiguredTableAssociationsOutcome CleanRoomsClient::ListConfiguredTableAssociations(const ListConfiguredTableAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListConfiguredTableAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfiguredTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConfiguredTableAssociations", "Required field: MembershipIdentifier, is not set");
    return ListConfiguredTableAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListConfiguredTableAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConfiguredTableAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConfiguredTableAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConfiguredTableAssociationsOutcome>(
    [&]()-> ListConfiguredTableAssociationsOutcome {
      return ListConfiguredTableAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredTableAssociations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConfiguredTablesOutcome CleanRoomsClient::ListConfiguredTables(const ListConfiguredTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListConfiguredTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfiguredTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListConfiguredTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConfiguredTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConfiguredTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConfiguredTablesOutcome>(
    [&]()-> ListConfiguredTablesOutcome {
      return ListConfiguredTablesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configuredTables");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIdMappingTablesOutcome CleanRoomsClient::ListIdMappingTables(const ListIdMappingTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListIdMappingTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdMappingTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdMappingTables", "Required field: MembershipIdentifier, is not set");
    return ListIdMappingTablesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIdMappingTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIdMappingTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIdMappingTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIdMappingTablesOutcome>(
    [&]()-> ListIdMappingTablesOutcome {
      return ListIdMappingTablesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idmappingtables");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIdNamespaceAssociationsOutcome CleanRoomsClient::ListIdNamespaceAssociations(const ListIdNamespaceAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIdNamespaceAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdNamespaceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdNamespaceAssociations", "Required field: MembershipIdentifier, is not set");
    return ListIdNamespaceAssociationsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIdNamespaceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIdNamespaceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIdNamespaceAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIdNamespaceAssociationsOutcome>(
    [&]()-> ListIdNamespaceAssociationsOutcome {
      return ListIdNamespaceAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idnamespaceassociations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMembersOutcome CleanRoomsClient::ListMembers(const ListMembersRequest& request) const
{
  AWS_OPERATION_GUARD(ListMembers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMembers", "Required field: CollaborationIdentifier, is not set");
    return ListMembersOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMembers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMembersOutcome>(
    [&]()-> ListMembersOutcome {
      return ListMembersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/members");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMembershipsOutcome CleanRoomsClient::ListMemberships(const ListMembershipsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMemberships);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMemberships",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMembershipsOutcome>(
    [&]()-> ListMembershipsOutcome {
      return ListMembershipsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPrivacyBudgetTemplatesOutcome CleanRoomsClient::ListPrivacyBudgetTemplates(const ListPrivacyBudgetTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListPrivacyBudgetTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrivacyBudgetTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrivacyBudgetTemplates", "Required field: MembershipIdentifier, is not set");
    return ListPrivacyBudgetTemplatesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPrivacyBudgetTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPrivacyBudgetTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPrivacyBudgetTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPrivacyBudgetTemplatesOutcome>(
    [&]()-> ListPrivacyBudgetTemplatesOutcome {
      return ListPrivacyBudgetTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/privacybudgettemplates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPrivacyBudgetsOutcome CleanRoomsClient::ListPrivacyBudgets(const ListPrivacyBudgetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPrivacyBudgets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrivacyBudgets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrivacyBudgets", "Required field: MembershipIdentifier, is not set");
    return ListPrivacyBudgetsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.PrivacyBudgetTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrivacyBudgets", "Required field: PrivacyBudgetType, is not set");
    return ListPrivacyBudgetsOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPrivacyBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPrivacyBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPrivacyBudgets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPrivacyBudgetsOutcome>(
    [&]()-> ListPrivacyBudgetsOutcome {
      return ListPrivacyBudgetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/privacybudgets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProtectedQueriesOutcome CleanRoomsClient::ListProtectedQueries(const ListProtectedQueriesRequest& request) const
{
  AWS_OPERATION_GUARD(ListProtectedQueries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProtectedQueries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProtectedQueries", "Required field: MembershipIdentifier, is not set");
    return ListProtectedQueriesOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProtectedQueries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProtectedQueries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProtectedQueries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProtectedQueriesOutcome>(
    [&]()-> ListProtectedQueriesOutcome {
      return ListProtectedQueriesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/protectedQueries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSchemasOutcome CleanRoomsClient::ListSchemas(const ListSchemasRequest& request) const
{
  AWS_OPERATION_GUARD(ListSchemas);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSchemas", "Required field: CollaborationIdentifier, is not set");
    return ListSchemasOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSchemas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSchemas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSchemas",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSchemasOutcome>(
    [&]()-> ListSchemasOutcome {
      return ListSchemasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      resolvedEndpoint.AddPathSegments("/schemas");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome CleanRoomsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

PopulateIdMappingTableOutcome CleanRoomsClient::PopulateIdMappingTable(const PopulateIdMappingTableRequest& request) const
{
  AWS_OPERATION_GUARD(PopulateIdMappingTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PopulateIdMappingTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdMappingTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PopulateIdMappingTable", "Required field: IdMappingTableIdentifier, is not set");
    return PopulateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdMappingTableIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PopulateIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return PopulateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PopulateIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PopulateIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PopulateIdMappingTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PopulateIdMappingTableOutcome>(
    [&]()-> PopulateIdMappingTableOutcome {
      return PopulateIdMappingTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idmappingtables/");
      resolvedEndpoint.AddPathSegment(request.GetIdMappingTableIdentifier());
      resolvedEndpoint.AddPathSegments("/populate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PreviewPrivacyImpactOutcome CleanRoomsClient::PreviewPrivacyImpact(const PreviewPrivacyImpactRequest& request) const
{
  AWS_OPERATION_GUARD(PreviewPrivacyImpact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PreviewPrivacyImpact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PreviewPrivacyImpact", "Required field: MembershipIdentifier, is not set");
    return PreviewPrivacyImpactOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PreviewPrivacyImpact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PreviewPrivacyImpact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PreviewPrivacyImpact",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PreviewPrivacyImpactOutcome>(
    [&]()-> PreviewPrivacyImpactOutcome {
      return PreviewPrivacyImpactOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/previewprivacyimpact");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartProtectedQueryOutcome CleanRoomsClient::StartProtectedQuery(const StartProtectedQueryRequest& request) const
{
  AWS_OPERATION_GUARD(StartProtectedQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartProtectedQuery", "Required field: MembershipIdentifier, is not set");
    return StartProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartProtectedQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartProtectedQueryOutcome>(
    [&]()-> StartProtectedQueryOutcome {
      return StartProtectedQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/protectedQueries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome CleanRoomsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

UntagResourceOutcome CleanRoomsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
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

UpdateAnalysisTemplateOutcome CleanRoomsClient::UpdateAnalysisTemplate(const UpdateAnalysisTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAnalysisTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisTemplate", "Required field: MembershipIdentifier, is not set");
    return UpdateAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.AnalysisTemplateIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisTemplate", "Required field: AnalysisTemplateIdentifier, is not set");
    return UpdateAnalysisTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisTemplateIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAnalysisTemplateOutcome>(
    [&]()-> UpdateAnalysisTemplateOutcome {
      return UpdateAnalysisTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/analysistemplates/");
      resolvedEndpoint.AddPathSegment(request.GetAnalysisTemplateIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateCollaborationOutcome CleanRoomsClient::UpdateCollaboration(const UpdateCollaborationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCollaboration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CollaborationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCollaboration", "Required field: CollaborationIdentifier, is not set");
    return UpdateCollaborationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaborationIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCollaboration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCollaborationOutcome>(
    [&]()-> UpdateCollaborationOutcome {
      return UpdateCollaborationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/collaborations/");
      resolvedEndpoint.AddPathSegment(request.GetCollaborationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateConfiguredAudienceModelAssociationOutcome CleanRoomsClient::UpdateConfiguredAudienceModelAssociation(const UpdateConfiguredAudienceModelAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateConfiguredAudienceModelAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredAudienceModelAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredAudienceModelAssociation", "Required field: ConfiguredAudienceModelAssociationIdentifier, is not set");
    return UpdateConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredAudienceModelAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredAudienceModelAssociation", "Required field: MembershipIdentifier, is not set");
    return UpdateConfiguredAudienceModelAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredAudienceModelAssociationOutcome>(
    [&]()-> UpdateConfiguredAudienceModelAssociationOutcome {
      return UpdateConfiguredAudienceModelAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredaudiencemodelassociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateConfiguredTableOutcome CleanRoomsClient::UpdateConfiguredTable(const UpdateConfiguredTableRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateConfiguredTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTable", "Required field: ConfiguredTableIdentifier, is not set");
    return UpdateConfiguredTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredTableOutcome>(
    [&]()-> UpdateConfiguredTableOutcome {
      return UpdateConfiguredTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configuredTables/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateConfiguredTableAnalysisRuleOutcome CleanRoomsClient::UpdateConfiguredTableAnalysisRule(const UpdateConfiguredTableAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateConfiguredTableAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAnalysisRule", "Required field: ConfiguredTableIdentifier, is not set");
    return UpdateConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return UpdateConfiguredTableAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredTableAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredTableAnalysisRuleOutcome>(
    [&]()-> UpdateConfiguredTableAnalysisRuleOutcome {
      return UpdateConfiguredTableAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/configuredTables/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableIdentifier());
      resolvedEndpoint.AddPathSegments("/analysisRule/");
      resolvedEndpoint.AddPathSegment(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateConfiguredTableAssociationOutcome CleanRoomsClient::UpdateConfiguredTableAssociation(const UpdateConfiguredTableAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateConfiguredTableAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociation", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return UpdateConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociation", "Required field: MembershipIdentifier, is not set");
    return UpdateConfiguredTableAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredTableAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredTableAssociationOutcome>(
    [&]()-> UpdateConfiguredTableAssociationOutcome {
      return UpdateConfiguredTableAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredTableAssociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateConfiguredTableAssociationAnalysisRuleOutcome CleanRoomsClient::UpdateConfiguredTableAssociationAnalysisRule(const UpdateConfiguredTableAssociationAnalysisRuleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateConfiguredTableAssociationAnalysisRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociationAnalysisRule", "Required field: MembershipIdentifier, is not set");
    return UpdateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ConfiguredTableAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociationAnalysisRule", "Required field: ConfiguredTableAssociationIdentifier, is not set");
    return UpdateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfiguredTableAssociationIdentifier]", false));
  }
  if (!request.AnalysisRuleTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguredTableAssociationAnalysisRule", "Required field: AnalysisRuleType, is not set");
    return UpdateConfiguredTableAssociationAnalysisRuleOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisRuleType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredTableAssociationAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredTableAssociationAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredTableAssociationAnalysisRuleOutcome>(
    [&]()-> UpdateConfiguredTableAssociationAnalysisRuleOutcome {
      return UpdateConfiguredTableAssociationAnalysisRuleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/configuredTableAssociations/");
      resolvedEndpoint.AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      resolvedEndpoint.AddPathSegments("/analysisRule/");
      resolvedEndpoint.AddPathSegment(ConfiguredTableAssociationAnalysisRuleTypeMapper::GetNameForConfiguredTableAssociationAnalysisRuleType(request.GetAnalysisRuleType()));
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIdMappingTableOutcome CleanRoomsClient::UpdateIdMappingTable(const UpdateIdMappingTableRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIdMappingTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIdMappingTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdMappingTableIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIdMappingTable", "Required field: IdMappingTableIdentifier, is not set");
    return UpdateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdMappingTableIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIdMappingTable", "Required field: MembershipIdentifier, is not set");
    return UpdateIdMappingTableOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIdMappingTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIdMappingTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIdMappingTableOutcome>(
    [&]()-> UpdateIdMappingTableOutcome {
      return UpdateIdMappingTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idmappingtables/");
      resolvedEndpoint.AddPathSegment(request.GetIdMappingTableIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIdNamespaceAssociationOutcome CleanRoomsClient::UpdateIdNamespaceAssociation(const UpdateIdNamespaceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIdNamespaceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIdNamespaceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdNamespaceAssociationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIdNamespaceAssociation", "Required field: IdNamespaceAssociationIdentifier, is not set");
    return UpdateIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdNamespaceAssociationIdentifier]", false));
  }
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIdNamespaceAssociation", "Required field: MembershipIdentifier, is not set");
    return UpdateIdNamespaceAssociationOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIdNamespaceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIdNamespaceAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIdNamespaceAssociationOutcome>(
    [&]()-> UpdateIdNamespaceAssociationOutcome {
      return UpdateIdNamespaceAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/idnamespaceassociations/");
      resolvedEndpoint.AddPathSegment(request.GetIdNamespaceAssociationIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMembershipOutcome CleanRoomsClient::UpdateMembership(const UpdateMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMembership", "Required field: MembershipIdentifier, is not set");
    return UpdateMembershipOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMembershipOutcome>(
    [&]()-> UpdateMembershipOutcome {
      return UpdateMembershipOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdatePrivacyBudgetTemplateOutcome CleanRoomsClient::UpdatePrivacyBudgetTemplate(const UpdatePrivacyBudgetTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePrivacyBudgetTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePrivacyBudgetTemplate", "Required field: MembershipIdentifier, is not set");
    return UpdatePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.PrivacyBudgetTemplateIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePrivacyBudgetTemplate", "Required field: PrivacyBudgetTemplateIdentifier, is not set");
    return UpdatePrivacyBudgetTemplateOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrivacyBudgetTemplateIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdatePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePrivacyBudgetTemplateOutcome>(
    [&]()-> UpdatePrivacyBudgetTemplateOutcome {
      return UpdatePrivacyBudgetTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/privacybudgettemplates/");
      resolvedEndpoint.AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateProtectedQueryOutcome CleanRoomsClient::UpdateProtectedQuery(const UpdateProtectedQueryRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateProtectedQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProtectedQuery", "Required field: MembershipIdentifier, is not set");
    return UpdateProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  if (!request.ProtectedQueryIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProtectedQuery", "Required field: ProtectedQueryIdentifier, is not set");
    return UpdateProtectedQueryOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProtectedQueryIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateProtectedQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateProtectedQueryOutcome>(
    [&]()-> UpdateProtectedQueryOutcome {
      return UpdateProtectedQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/memberships/");
      resolvedEndpoint.AddPathSegment(request.GetMembershipIdentifier());
      resolvedEndpoint.AddPathSegments("/protectedQueries/");
      resolvedEndpoint.AddPathSegment(request.GetProtectedQueryIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


