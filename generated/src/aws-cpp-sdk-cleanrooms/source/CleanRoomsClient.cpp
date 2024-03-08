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

#include <aws/cleanrooms/CleanRoomsClient.h>
#include <aws/cleanrooms/CleanRoomsErrorMarshaller.h>
#include <aws/cleanrooms/CleanRoomsEndpointProvider.h>
#include <aws/cleanrooms/model/BatchGetCollaborationAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/BatchGetSchemaRequest.h>
#include <aws/cleanrooms/model/CreateAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/CreateCollaborationRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/CreateConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/CreateMembershipRequest.h>
#include <aws/cleanrooms/model/CreatePrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/DeleteAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/DeleteCollaborationRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/DeleteConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/DeleteMemberRequest.h>
#include <aws/cleanrooms/model/DeleteMembershipRequest.h>
#include <aws/cleanrooms/model/DeletePrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/GetAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/GetCollaborationRequest.h>
#include <aws/cleanrooms/model/GetCollaborationAnalysisTemplateRequest.h>
#include <aws/cleanrooms/model/GetCollaborationConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/GetCollaborationPrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/GetConfiguredAudienceModelAssociationRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/GetConfiguredTableAssociationRequest.h>
#include <aws/cleanrooms/model/GetMembershipRequest.h>
#include <aws/cleanrooms/model/GetPrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/GetProtectedQueryRequest.h>
#include <aws/cleanrooms/model/GetSchemaRequest.h>
#include <aws/cleanrooms/model/GetSchemaAnalysisRuleRequest.h>
#include <aws/cleanrooms/model/ListAnalysisTemplatesRequest.h>
#include <aws/cleanrooms/model/ListCollaborationAnalysisTemplatesRequest.h>
#include <aws/cleanrooms/model/ListCollaborationConfiguredAudienceModelAssociationsRequest.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetTemplatesRequest.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetsRequest.h>
#include <aws/cleanrooms/model/ListCollaborationsRequest.h>
#include <aws/cleanrooms/model/ListConfiguredAudienceModelAssociationsRequest.h>
#include <aws/cleanrooms/model/ListConfiguredTableAssociationsRequest.h>
#include <aws/cleanrooms/model/ListConfiguredTablesRequest.h>
#include <aws/cleanrooms/model/ListMembersRequest.h>
#include <aws/cleanrooms/model/ListMembershipsRequest.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetTemplatesRequest.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetsRequest.h>
#include <aws/cleanrooms/model/ListProtectedQueriesRequest.h>
#include <aws/cleanrooms/model/ListSchemasRequest.h>
#include <aws/cleanrooms/model/ListTagsForResourceRequest.h>
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
#include <aws/cleanrooms/model/UpdateMembershipRequest.h>
#include <aws/cleanrooms/model/UpdatePrivacyBudgetTemplateRequest.h>
#include <aws/cleanrooms/model/UpdateProtectedQueryRequest.h>

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

namespace Aws
{
  namespace CleanRooms
  {
    const char SERVICE_NAME[] = "cleanrooms";
    const char ALLOCATION_TAG[] = "CleanRoomsClient";
  }
}
const char* CleanRoomsClient::GetServiceName() {return SERVICE_NAME;}
const char* CleanRoomsClient::GetAllocationTag() {return ALLOCATION_TAG;}

CleanRoomsClient::CleanRoomsClient(const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const AWSCredentials& credentials,
                                   std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider,
                                   const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CleanRoomsEndpointProviderBase> endpointProvider,
                                   const CleanRooms::CleanRoomsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CleanRoomsClient::CleanRoomsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CleanRoomsClient::CleanRoomsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CleanRoomsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CleanRoomsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CleanRoomsClient::~CleanRoomsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<CleanRoomsEndpointProviderBase>& CleanRoomsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CleanRoomsClient::init(const CleanRooms::CleanRoomsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CleanRooms");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetCollaborationAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetCollaborationAnalysisTemplateOutcome>(
    [&]()-> BatchGetCollaborationAnalysisTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/batch-analysistemplates");
      return BatchGetCollaborationAnalysisTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetSchema",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetSchemaOutcome>(
    [&]()-> BatchGetSchemaOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/batch-schema");
      return BatchGetSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAnalysisTemplateOutcome>(
    [&]()-> CreateAnalysisTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates");
      return CreateAnalysisTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCollaborationOutcome CleanRoomsClient::CreateCollaboration(const CreateCollaborationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCollaboration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCollaboration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateCollaborationOutcome>(
    [&]()-> CreateCollaborationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations");
      return CreateCollaborationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredAudienceModelAssociationOutcome>(
    [&]()-> CreateConfiguredAudienceModelAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations");
      return CreateConfiguredAudienceModelAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateConfiguredTableOutcome CleanRoomsClient::CreateConfiguredTable(const CreateConfiguredTableRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConfiguredTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredTableOutcome>(
    [&]()-> CreateConfiguredTableOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables");
      return CreateConfiguredTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredTableAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredTableAnalysisRuleOutcome>(
    [&]()-> CreateConfiguredTableAnalysisRuleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule");
      return CreateConfiguredTableAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConfiguredTableAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConfiguredTableAssociationOutcome>(
    [&]()-> CreateConfiguredTableAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations");
      return CreateConfiguredTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMembershipOutcome CleanRoomsClient::CreateMembership(const CreateMembershipRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMembership);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMembershipOutcome>(
    [&]()-> CreateMembershipOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
      return CreateMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreatePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePrivacyBudgetTemplateOutcome>(
    [&]()-> CreatePrivacyBudgetTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates");
      return CreatePrivacyBudgetTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAnalysisTemplateOutcome>(
    [&]()-> DeleteAnalysisTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisTemplateIdentifier());
      return DeleteAnalysisTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteCollaboration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteCollaborationOutcome>(
    [&]()-> DeleteCollaborationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      return DeleteCollaborationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredAudienceModelAssociationOutcome>(
    [&]()-> DeleteConfiguredAudienceModelAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
      return DeleteConfiguredAudienceModelAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredTableOutcome>(
    [&]()-> DeleteConfiguredTableOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
      return DeleteConfiguredTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredTableAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredTableAnalysisRuleOutcome>(
    [&]()-> DeleteConfiguredTableAnalysisRuleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
      endpointResolutionOutcome.GetResult().AddPathSegment(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
      return DeleteConfiguredTableAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConfiguredTableAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConfiguredTableAssociationOutcome>(
    [&]()-> DeleteConfiguredTableAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      return DeleteConfiguredTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMember, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMember",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMemberOutcome>(
    [&]()-> DeleteMemberOutcome {
      if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
      {
          AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: AccountId has invalid value");
          return DeleteMemberOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
      }
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/member/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
      return DeleteMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMembershipOutcome>(
    [&]()-> DeleteMembershipOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      return DeleteMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeletePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePrivacyBudgetTemplateOutcome>(
    [&]()-> DeletePrivacyBudgetTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
      return DeletePrivacyBudgetTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAnalysisTemplateOutcome>(
    [&]()-> GetAnalysisTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisTemplateIdentifier());
      return GetAnalysisTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaboration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationOutcome>(
    [&]()-> GetCollaborationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      return GetCollaborationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationAnalysisTemplateOutcome>(
    [&]()-> GetCollaborationAnalysisTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCollaborationAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisTemplateArn());
      return GetCollaborationAnalysisTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetCollaborationConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationConfiguredAudienceModelAssociationOutcome>(
    [&]()-> GetCollaborationConfiguredAudienceModelAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCollaborationConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
      return GetCollaborationConfiguredAudienceModelAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetCollaborationPrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCollaborationPrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCollaborationPrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCollaborationPrivacyBudgetTemplateOutcome>(
    [&]()-> GetCollaborationPrivacyBudgetTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCollaborationPrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
      return GetCollaborationPrivacyBudgetTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredAudienceModelAssociationOutcome>(
    [&]()-> GetConfiguredAudienceModelAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
      return GetConfiguredAudienceModelAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredTableOutcome>(
    [&]()-> GetConfiguredTableOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
      return GetConfiguredTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredTableAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredTableAnalysisRuleOutcome>(
    [&]()-> GetConfiguredTableAnalysisRuleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
      endpointResolutionOutcome.GetResult().AddPathSegment(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
      return GetConfiguredTableAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConfiguredTableAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConfiguredTableAssociationOutcome>(
    [&]()-> GetConfiguredTableAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      return GetConfiguredTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMembershipOutcome>(
    [&]()-> GetMembershipOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      return GetMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetPrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPrivacyBudgetTemplateOutcome>(
    [&]()-> GetPrivacyBudgetTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
      return GetPrivacyBudgetTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProtectedQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProtectedQueryOutcome>(
    [&]()-> GetProtectedQueryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProtectedQueryIdentifier());
      return GetProtectedQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSchema, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSchema",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSchemaOutcome>(
    [&]()-> GetSchemaOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      return GetSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSchemaAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSchemaAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSchemaAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSchemaAnalysisRuleOutcome>(
    [&]()-> GetSchemaAnalysisRuleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSchemaAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
      endpointResolutionOutcome.GetResult().AddPathSegment(AnalysisRuleTypeMapper::GetNameForAnalysisRuleType(request.GetType()));
      return GetSchemaAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAnalysisTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAnalysisTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAnalysisTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAnalysisTemplatesOutcome>(
    [&]()-> ListAnalysisTemplatesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnalysisTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates");
      return ListAnalysisTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListCollaborationAnalysisTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationAnalysisTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationAnalysisTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationAnalysisTemplatesOutcome>(
    [&]()-> ListCollaborationAnalysisTemplatesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCollaborationAnalysisTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates");
      return ListCollaborationAnalysisTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListCollaborationConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationConfiguredAudienceModelAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationConfiguredAudienceModelAssociationsOutcome>(
    [&]()-> ListCollaborationConfiguredAudienceModelAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCollaborationConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations");
      return ListCollaborationConfiguredAudienceModelAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListCollaborationPrivacyBudgetTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationPrivacyBudgetTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationPrivacyBudgetTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationPrivacyBudgetTemplatesOutcome>(
    [&]()-> ListCollaborationPrivacyBudgetTemplatesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCollaborationPrivacyBudgetTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates");
      return ListCollaborationPrivacyBudgetTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListCollaborationPrivacyBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborationPrivacyBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborationPrivacyBudgets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationPrivacyBudgetsOutcome>(
    [&]()-> ListCollaborationPrivacyBudgetsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCollaborationPrivacyBudgets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgets");
      return ListCollaborationPrivacyBudgetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCollaborationsOutcome CleanRoomsClient::ListCollaborations(const ListCollaborationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollaborations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollaborations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListCollaborations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCollaborations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCollaborations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCollaborationsOutcome>(
    [&]()-> ListCollaborationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCollaborations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations");
      return ListCollaborationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConfiguredAudienceModelAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConfiguredAudienceModelAssociationsOutcome>(
    [&]()-> ListConfiguredAudienceModelAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfiguredAudienceModelAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations");
      return ListConfiguredAudienceModelAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListConfiguredTableAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConfiguredTableAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConfiguredTableAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConfiguredTableAssociationsOutcome>(
    [&]()-> ListConfiguredTableAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfiguredTableAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations");
      return ListConfiguredTableAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConfiguredTablesOutcome CleanRoomsClient::ListConfiguredTables(const ListConfiguredTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListConfiguredTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfiguredTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListConfiguredTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConfiguredTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConfiguredTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConfiguredTablesOutcome>(
    [&]()-> ListConfiguredTablesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfiguredTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables");
      return ListConfiguredTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMembers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMembersOutcome>(
    [&]()-> ListMembersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/members");
      return ListMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMembershipsOutcome CleanRoomsClient::ListMemberships(const ListMembershipsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMemberships);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMemberships",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMembershipsOutcome>(
    [&]()-> ListMembershipsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
      return ListMembershipsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPrivacyBudgetTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPrivacyBudgetTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPrivacyBudgetTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPrivacyBudgetTemplatesOutcome>(
    [&]()-> ListPrivacyBudgetTemplatesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPrivacyBudgetTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates");
      return ListPrivacyBudgetTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListPrivacyBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPrivacyBudgets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPrivacyBudgets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPrivacyBudgetsOutcome>(
    [&]()-> ListPrivacyBudgetsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPrivacyBudgets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgets");
      return ListPrivacyBudgetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListProtectedQueries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProtectedQueries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProtectedQueries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProtectedQueriesOutcome>(
    [&]()-> ListProtectedQueriesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProtectedQueries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries");
      return ListProtectedQueriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSchemas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSchemas, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSchemas",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSchemasOutcome>(
    [&]()-> ListSchemasOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/schemas");
      return ListSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

PreviewPrivacyImpactOutcome CleanRoomsClient::PreviewPrivacyImpact(const PreviewPrivacyImpactRequest& request) const
{
  AWS_OPERATION_GUARD(PreviewPrivacyImpact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PreviewPrivacyImpact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MembershipIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PreviewPrivacyImpact", "Required field: MembershipIdentifier, is not set");
    return PreviewPrivacyImpactOutcome(Aws::Client::AWSError<CleanRoomsErrors>(CleanRoomsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MembershipIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PreviewPrivacyImpact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PreviewPrivacyImpact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PreviewPrivacyImpact",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PreviewPrivacyImpactOutcome>(
    [&]()-> PreviewPrivacyImpactOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PreviewPrivacyImpact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/previewprivacyimpact");
      return PreviewPrivacyImpactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartProtectedQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartProtectedQueryOutcome>(
    [&]()-> StartProtectedQueryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries");
      return StartProtectedQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAnalysisTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAnalysisTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAnalysisTemplateOutcome>(
    [&]()-> UpdateAnalysisTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnalysisTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysistemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisTemplateIdentifier());
      return UpdateAnalysisTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCollaboration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCollaboration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCollaborationOutcome>(
    [&]()-> UpdateCollaborationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCollaboration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/collaborations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCollaborationIdentifier());
      return UpdateCollaborationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredAudienceModelAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredAudienceModelAssociationOutcome>(
    [&]()-> UpdateConfiguredAudienceModelAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfiguredAudienceModelAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredaudiencemodelassociations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredAudienceModelAssociationIdentifier());
      return UpdateConfiguredAudienceModelAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredTableOutcome>(
    [&]()-> UpdateConfiguredTableOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfiguredTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
      return UpdateConfiguredTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredTableAnalysisRule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredTableAnalysisRuleOutcome>(
    [&]()-> UpdateConfiguredTableAnalysisRuleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfiguredTableAnalysisRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analysisRule/");
      endpointResolutionOutcome.GetResult().AddPathSegment(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(request.GetAnalysisRuleType()));
      return UpdateConfiguredTableAnalysisRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateConfiguredTableAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateConfiguredTableAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateConfiguredTableAssociationOutcome>(
    [&]()-> UpdateConfiguredTableAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfiguredTableAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/configuredTableAssociations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfiguredTableAssociationIdentifier());
      return UpdateConfiguredTableAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMembership, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMembership",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMembershipOutcome>(
    [&]()-> UpdateMembershipOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      return UpdateMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdatePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePrivacyBudgetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePrivacyBudgetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePrivacyBudgetTemplateOutcome>(
    [&]()-> UpdatePrivacyBudgetTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePrivacyBudgetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/privacybudgettemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrivacyBudgetTemplateIdentifier());
      return UpdatePrivacyBudgetTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateProtectedQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateProtectedQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateProtectedQueryOutcome>(
    [&]()-> UpdateProtectedQueryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProtectedQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMembershipIdentifier());
      endpointResolutionOutcome.GetResult().AddPathSegments("/protectedQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProtectedQueryIdentifier());
      return UpdateProtectedQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

