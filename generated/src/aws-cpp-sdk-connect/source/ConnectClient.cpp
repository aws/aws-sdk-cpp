/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/ConnectClient.h>
#include <aws/connect/ConnectEndpointProvider.h>
#include <aws/connect/ConnectErrorMarshaller.h>
#include <aws/connect/model/ActivateEvaluationFormRequest.h>
#include <aws/connect/model/AssociateAnalyticsDataSetRequest.h>
#include <aws/connect/model/AssociateApprovedOriginRequest.h>
#include <aws/connect/model/AssociateBotRequest.h>
#include <aws/connect/model/AssociateContactWithUserRequest.h>
#include <aws/connect/model/AssociateDefaultVocabularyRequest.h>
#include <aws/connect/model/AssociateEmailAddressAliasRequest.h>
#include <aws/connect/model/AssociateFlowRequest.h>
#include <aws/connect/model/AssociateHoursOfOperationsRequest.h>
#include <aws/connect/model/AssociateInstanceStorageConfigRequest.h>
#include <aws/connect/model/AssociateLambdaFunctionRequest.h>
#include <aws/connect/model/AssociateLexBotRequest.h>
#include <aws/connect/model/AssociatePhoneNumberContactFlowRequest.h>
#include <aws/connect/model/AssociateQueueQuickConnectsRequest.h>
#include <aws/connect/model/AssociateRoutingProfileQueuesRequest.h>
#include <aws/connect/model/AssociateSecurityKeyRequest.h>
#include <aws/connect/model/AssociateSecurityProfilesRequest.h>
#include <aws/connect/model/AssociateTrafficDistributionGroupUserRequest.h>
#include <aws/connect/model/AssociateUserProficienciesRequest.h>
#include <aws/connect/model/AssociateWorkspaceRequest.h>
#include <aws/connect/model/BatchAssociateAnalyticsDataSetRequest.h>
#include <aws/connect/model/BatchCreateDataTableValueRequest.h>
#include <aws/connect/model/BatchDeleteDataTableValueRequest.h>
#include <aws/connect/model/BatchDescribeDataTableValueRequest.h>
#include <aws/connect/model/BatchDisassociateAnalyticsDataSetRequest.h>
#include <aws/connect/model/BatchGetAttachedFileMetadataRequest.h>
#include <aws/connect/model/BatchGetFlowAssociationRequest.h>
#include <aws/connect/model/BatchPutContactRequest.h>
#include <aws/connect/model/BatchUpdateDataTableValueRequest.h>
#include <aws/connect/model/ClaimPhoneNumberRequest.h>
#include <aws/connect/model/CompleteAttachedFileUploadRequest.h>
#include <aws/connect/model/CreateAgentStatusRequest.h>
#include <aws/connect/model/CreateContactFlowModuleAliasRequest.h>
#include <aws/connect/model/CreateContactFlowModuleRequest.h>
#include <aws/connect/model/CreateContactFlowModuleVersionRequest.h>
#include <aws/connect/model/CreateContactFlowRequest.h>
#include <aws/connect/model/CreateContactFlowVersionRequest.h>
#include <aws/connect/model/CreateContactRequest.h>
#include <aws/connect/model/CreateDataTableAttributeRequest.h>
#include <aws/connect/model/CreateDataTableRequest.h>
#include <aws/connect/model/CreateEmailAddressRequest.h>
#include <aws/connect/model/CreateEvaluationFormRequest.h>
#include <aws/connect/model/CreateHoursOfOperationOverrideRequest.h>
#include <aws/connect/model/CreateHoursOfOperationRequest.h>
#include <aws/connect/model/CreateInstanceRequest.h>
#include <aws/connect/model/CreateIntegrationAssociationRequest.h>
#include <aws/connect/model/CreateParticipantRequest.h>
#include <aws/connect/model/CreatePersistentContactAssociationRequest.h>
#include <aws/connect/model/CreatePredefinedAttributeRequest.h>
#include <aws/connect/model/CreatePromptRequest.h>
#include <aws/connect/model/CreatePushNotificationRegistrationRequest.h>
#include <aws/connect/model/CreateQueueRequest.h>
#include <aws/connect/model/CreateQuickConnectRequest.h>
#include <aws/connect/model/CreateRoutingProfileRequest.h>
#include <aws/connect/model/CreateRuleRequest.h>
#include <aws/connect/model/CreateSecurityProfileRequest.h>
#include <aws/connect/model/CreateTaskTemplateRequest.h>
#include <aws/connect/model/CreateTestCaseRequest.h>
#include <aws/connect/model/CreateTrafficDistributionGroupRequest.h>
#include <aws/connect/model/CreateUseCaseRequest.h>
#include <aws/connect/model/CreateUserHierarchyGroupRequest.h>
#include <aws/connect/model/CreateUserRequest.h>
#include <aws/connect/model/CreateViewRequest.h>
#include <aws/connect/model/CreateViewVersionRequest.h>
#include <aws/connect/model/CreateVocabularyRequest.h>
#include <aws/connect/model/CreateWorkspacePageRequest.h>
#include <aws/connect/model/CreateWorkspaceRequest.h>
#include <aws/connect/model/DeactivateEvaluationFormRequest.h>
#include <aws/connect/model/DeleteAttachedFileRequest.h>
#include <aws/connect/model/DeleteContactEvaluationRequest.h>
#include <aws/connect/model/DeleteContactFlowModuleAliasRequest.h>
#include <aws/connect/model/DeleteContactFlowModuleRequest.h>
#include <aws/connect/model/DeleteContactFlowModuleVersionRequest.h>
#include <aws/connect/model/DeleteContactFlowRequest.h>
#include <aws/connect/model/DeleteContactFlowVersionRequest.h>
#include <aws/connect/model/DeleteDataTableAttributeRequest.h>
#include <aws/connect/model/DeleteDataTableRequest.h>
#include <aws/connect/model/DeleteEmailAddressRequest.h>
#include <aws/connect/model/DeleteEvaluationFormRequest.h>
#include <aws/connect/model/DeleteHoursOfOperationOverrideRequest.h>
#include <aws/connect/model/DeleteHoursOfOperationRequest.h>
#include <aws/connect/model/DeleteInstanceRequest.h>
#include <aws/connect/model/DeleteIntegrationAssociationRequest.h>
#include <aws/connect/model/DeletePredefinedAttributeRequest.h>
#include <aws/connect/model/DeletePromptRequest.h>
#include <aws/connect/model/DeletePushNotificationRegistrationRequest.h>
#include <aws/connect/model/DeleteQueueRequest.h>
#include <aws/connect/model/DeleteQuickConnectRequest.h>
#include <aws/connect/model/DeleteRoutingProfileRequest.h>
#include <aws/connect/model/DeleteRuleRequest.h>
#include <aws/connect/model/DeleteSecurityProfileRequest.h>
#include <aws/connect/model/DeleteTaskTemplateRequest.h>
#include <aws/connect/model/DeleteTestCaseRequest.h>
#include <aws/connect/model/DeleteTrafficDistributionGroupRequest.h>
#include <aws/connect/model/DeleteUseCaseRequest.h>
#include <aws/connect/model/DeleteUserHierarchyGroupRequest.h>
#include <aws/connect/model/DeleteUserRequest.h>
#include <aws/connect/model/DeleteViewRequest.h>
#include <aws/connect/model/DeleteViewVersionRequest.h>
#include <aws/connect/model/DeleteVocabularyRequest.h>
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
using namespace Aws::Connect;
using namespace Aws::Connect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Connect {
const char SERVICE_NAME[] = "connect";
const char ALLOCATION_TAG[] = "ConnectClient";
}  // namespace Connect
}  // namespace Aws
const char* ConnectClient::GetServiceName() { return SERVICE_NAME; }
const char* ConnectClient::GetAllocationTag() { return ALLOCATION_TAG; }

ConnectClient::ConnectClient(const Connect::ConnectClientConfiguration& clientConfiguration,
                             std::shared_ptr<ConnectEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectClient::ConnectClient(const AWSCredentials& credentials, std::shared_ptr<ConnectEndpointProviderBase> endpointProvider,
                             const Connect::ConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectClient::ConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<ConnectEndpointProviderBase> endpointProvider,
                             const Connect::ConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ConnectClient::ConnectClient(const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectClient::ConnectClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectClient::ConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ConnectClient::~ConnectClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ConnectEndpointProviderBase>& ConnectClient::accessEndpointProvider() { return m_endpointProvider; }

void ConnectClient::init(const Connect::ConnectClientConfiguration& config) {
  AWSClient::SetServiceClientName("Connect");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "connect");
}

void ConnectClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ActivateEvaluationFormOutcome ConnectClient::ActivateEvaluationForm(const ActivateEvaluationFormRequest& request) const {
  AWS_OPERATION_GUARD(ActivateEvaluationForm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ActivateEvaluationForm", "Required field: InstanceId, is not set");
    return ActivateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ActivateEvaluationForm", "Required field: EvaluationFormId, is not set");
    return ActivateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EvaluationFormId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ActivateEvaluationForm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ActivateEvaluationForm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ActivateEvaluationForm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ActivateEvaluationFormOutcome>(
      [&]() -> ActivateEvaluationFormOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/activate");
        return ActivateEvaluationFormOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateAnalyticsDataSetOutcome ConnectClient::AssociateAnalyticsDataSet(const AssociateAnalyticsDataSetRequest& request) const {
  AWS_OPERATION_GUARD(AssociateAnalyticsDataSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAnalyticsDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAnalyticsDataSet", "Required field: InstanceId, is not set");
    return AssociateAnalyticsDataSetOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateAnalyticsDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateAnalyticsDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateAnalyticsDataSet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateAnalyticsDataSetOutcome>(
      [&]() -> AssociateAnalyticsDataSetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateAnalyticsDataSet, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/analytics-data/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/association");
        return AssociateAnalyticsDataSetOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateApprovedOriginOutcome ConnectClient::AssociateApprovedOrigin(const AssociateApprovedOriginRequest& request) const {
  AWS_OPERATION_GUARD(AssociateApprovedOrigin);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateApprovedOrigin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateApprovedOrigin", "Required field: InstanceId, is not set");
    return AssociateApprovedOriginOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateApprovedOrigin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateApprovedOrigin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateApprovedOrigin",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateApprovedOriginOutcome>(
      [&]() -> AssociateApprovedOriginOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateApprovedOrigin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/approved-origin");
        return AssociateApprovedOriginOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateBotOutcome ConnectClient::AssociateBot(const AssociateBotRequest& request) const {
  AWS_OPERATION_GUARD(AssociateBot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateBot", "Required field: InstanceId, is not set");
    return AssociateBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateBot",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateBotOutcome>(
      [&]() -> AssociateBotOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/bot");
        return AssociateBotOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateContactWithUserOutcome ConnectClient::AssociateContactWithUser(const AssociateContactWithUserRequest& request) const {
  AWS_OPERATION_GUARD(AssociateContactWithUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateContactWithUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateContactWithUser", "Required field: InstanceId, is not set");
    return AssociateContactWithUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateContactWithUser", "Required field: ContactId, is not set");
    return AssociateContactWithUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ContactId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateContactWithUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateContactWithUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateContactWithUser",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateContactWithUserOutcome>(
      [&]() -> AssociateContactWithUserOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateContactWithUser, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associate-user");
        return AssociateContactWithUserOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateDefaultVocabularyOutcome ConnectClient::AssociateDefaultVocabulary(const AssociateDefaultVocabularyRequest& request) const {
  AWS_OPERATION_GUARD(AssociateDefaultVocabulary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDefaultVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateDefaultVocabulary", "Required field: InstanceId, is not set");
    return AssociateDefaultVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.LanguageCodeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateDefaultVocabulary", "Required field: LanguageCode, is not set");
    return AssociateDefaultVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [LanguageCode]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateDefaultVocabulary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateDefaultVocabulary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateDefaultVocabulary",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateDefaultVocabularyOutcome>(
      [&]() -> AssociateDefaultVocabularyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDefaultVocabulary, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/default-vocabulary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(
            VocabularyLanguageCodeMapper::GetNameForVocabularyLanguageCode(request.GetLanguageCode()));
        return AssociateDefaultVocabularyOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateEmailAddressAliasOutcome ConnectClient::AssociateEmailAddressAlias(const AssociateEmailAddressAliasRequest& request) const {
  AWS_OPERATION_GUARD(AssociateEmailAddressAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateEmailAddressAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EmailAddressIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateEmailAddressAlias", "Required field: EmailAddressId, is not set");
    return AssociateEmailAddressAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [EmailAddressId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateEmailAddressAlias", "Required field: InstanceId, is not set");
    return AssociateEmailAddressAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateEmailAddressAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateEmailAddressAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateEmailAddressAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateEmailAddressAliasOutcome>(
      [&]() -> AssociateEmailAddressAliasOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateEmailAddressAlias, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/email-addresses/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddressId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associate-alias");
        return AssociateEmailAddressAliasOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateFlowOutcome ConnectClient::AssociateFlow(const AssociateFlowRequest& request) const {
  AWS_OPERATION_GUARD(AssociateFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateFlow", "Required field: InstanceId, is not set");
    return AssociateFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateFlowOutcome>(
      [&]() -> AssociateFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/flow-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return AssociateFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateHoursOfOperationsOutcome ConnectClient::AssociateHoursOfOperations(const AssociateHoursOfOperationsRequest& request) const {
  AWS_OPERATION_GUARD(AssociateHoursOfOperations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateHoursOfOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateHoursOfOperations", "Required field: InstanceId, is not set");
    return AssociateHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateHoursOfOperations", "Required field: HoursOfOperationId, is not set");
    return AssociateHoursOfOperationsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [HoursOfOperationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateHoursOfOperations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateHoursOfOperations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateHoursOfOperations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateHoursOfOperationsOutcome>(
      [&]() -> AssociateHoursOfOperationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateHoursOfOperations, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associate-hours");
        return AssociateHoursOfOperationsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateInstanceStorageConfigOutcome ConnectClient::AssociateInstanceStorageConfig(
    const AssociateInstanceStorageConfigRequest& request) const {
  AWS_OPERATION_GUARD(AssociateInstanceStorageConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateInstanceStorageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateInstanceStorageConfig", "Required field: InstanceId, is not set");
    return AssociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateInstanceStorageConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateInstanceStorageConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateInstanceStorageConfig",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateInstanceStorageConfigOutcome>(
      [&]() -> AssociateInstanceStorageConfigOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateInstanceStorageConfig, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/storage-config");
        return AssociateInstanceStorageConfigOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateLambdaFunctionOutcome ConnectClient::AssociateLambdaFunction(const AssociateLambdaFunctionRequest& request) const {
  AWS_OPERATION_GUARD(AssociateLambdaFunction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateLambdaFunction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateLambdaFunction", "Required field: InstanceId, is not set");
    return AssociateLambdaFunctionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateLambdaFunction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateLambdaFunction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateLambdaFunction",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateLambdaFunctionOutcome>(
      [&]() -> AssociateLambdaFunctionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateLambdaFunction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/lambda-function");
        return AssociateLambdaFunctionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateLexBotOutcome ConnectClient::AssociateLexBot(const AssociateLexBotRequest& request) const {
  AWS_OPERATION_GUARD(AssociateLexBot);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateLexBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateLexBot", "Required field: InstanceId, is not set");
    return AssociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateLexBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateLexBot, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateLexBot",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateLexBotOutcome>(
      [&]() -> AssociateLexBotOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateLexBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/lex-bot");
        return AssociateLexBotOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociatePhoneNumberContactFlowOutcome ConnectClient::AssociatePhoneNumberContactFlow(
    const AssociatePhoneNumberContactFlowRequest& request) const {
  AWS_OPERATION_GUARD(AssociatePhoneNumberContactFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePhoneNumberContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumberContactFlow", "Required field: PhoneNumberId, is not set");
    return AssociatePhoneNumberContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociatePhoneNumberContactFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociatePhoneNumberContactFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociatePhoneNumberContactFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociatePhoneNumberContactFlowOutcome>(
      [&]() -> AssociatePhoneNumberContactFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePhoneNumberContactFlow, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow");
        return AssociatePhoneNumberContactFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateQueueQuickConnectsOutcome ConnectClient::AssociateQueueQuickConnects(const AssociateQueueQuickConnectsRequest& request) const {
  AWS_OPERATION_GUARD(AssociateQueueQuickConnects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateQueueQuickConnects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateQueueQuickConnects", "Required field: InstanceId, is not set");
    return AssociateQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateQueueQuickConnects", "Required field: QueueId, is not set");
    return AssociateQueueQuickConnectsOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateQueueQuickConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateQueueQuickConnects, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateQueueQuickConnects",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateQueueQuickConnectsOutcome>(
      [&]() -> AssociateQueueQuickConnectsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateQueueQuickConnects, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associate-quick-connects");
        return AssociateQueueQuickConnectsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateRoutingProfileQueuesOutcome ConnectClient::AssociateRoutingProfileQueues(
    const AssociateRoutingProfileQueuesRequest& request) const {
  AWS_OPERATION_GUARD(AssociateRoutingProfileQueues);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateRoutingProfileQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateRoutingProfileQueues", "Required field: InstanceId, is not set");
    return AssociateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateRoutingProfileQueues", "Required field: RoutingProfileId, is not set");
    return AssociateRoutingProfileQueuesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [RoutingProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateRoutingProfileQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateRoutingProfileQueues, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateRoutingProfileQueues",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateRoutingProfileQueuesOutcome>(
      [&]() -> AssociateRoutingProfileQueuesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateRoutingProfileQueues, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associate-queues");
        return AssociateRoutingProfileQueuesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateSecurityKeyOutcome ConnectClient::AssociateSecurityKey(const AssociateSecurityKeyRequest& request) const {
  AWS_OPERATION_GUARD(AssociateSecurityKey);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSecurityKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSecurityKey", "Required field: InstanceId, is not set");
    return AssociateSecurityKeyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateSecurityKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateSecurityKey, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateSecurityKey",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateSecurityKeyOutcome>(
      [&]() -> AssociateSecurityKeyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSecurityKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/security-key");
        return AssociateSecurityKeyOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateSecurityProfilesOutcome ConnectClient::AssociateSecurityProfiles(const AssociateSecurityProfilesRequest& request) const {
  AWS_OPERATION_GUARD(AssociateSecurityProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSecurityProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSecurityProfiles", "Required field: InstanceId, is not set");
    return AssociateSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateSecurityProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateSecurityProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateSecurityProfiles",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateSecurityProfilesOutcome>(
      [&]() -> AssociateSecurityProfilesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSecurityProfiles, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associate-security-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return AssociateSecurityProfilesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateTrafficDistributionGroupUserOutcome ConnectClient::AssociateTrafficDistributionGroupUser(
    const AssociateTrafficDistributionGroupUserRequest& request) const {
  AWS_OPERATION_GUARD(AssociateTrafficDistributionGroupUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTrafficDistributionGroupUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrafficDistributionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTrafficDistributionGroupUser", "Required field: TrafficDistributionGroupId, is not set");
    return AssociateTrafficDistributionGroupUserOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateTrafficDistributionGroupUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateTrafficDistributionGroupUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateTrafficDistributionGroupUser",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateTrafficDistributionGroupUserOutcome>(
      [&]() -> AssociateTrafficDistributionGroupUserOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTrafficDistributionGroupUser, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/user");
        return AssociateTrafficDistributionGroupUserOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateUserProficienciesOutcome ConnectClient::AssociateUserProficiencies(const AssociateUserProficienciesRequest& request) const {
  AWS_OPERATION_GUARD(AssociateUserProficiencies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateUserProficiencies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateUserProficiencies", "Required field: InstanceId, is not set");
    return AssociateUserProficienciesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateUserProficiencies", "Required field: UserId, is not set");
    return AssociateUserProficienciesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateUserProficiencies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateUserProficiencies, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateUserProficiencies",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateUserProficienciesOutcome>(
      [&]() -> AssociateUserProficienciesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateUserProficiencies, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associate-proficiencies");
        return AssociateUserProficienciesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateWorkspaceOutcome ConnectClient::AssociateWorkspace(const AssociateWorkspaceRequest& request) const {
  AWS_OPERATION_GUARD(AssociateWorkspace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateWorkspace", "Required field: InstanceId, is not set");
    return AssociateWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateWorkspace", "Required field: WorkspaceId, is not set");
    return AssociateWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AssociateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateWorkspace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateWorkspaceOutcome>(
      [&]() -> AssociateWorkspaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associate");
        return AssociateWorkspaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchAssociateAnalyticsDataSetOutcome ConnectClient::BatchAssociateAnalyticsDataSet(
    const BatchAssociateAnalyticsDataSetRequest& request) const {
  AWS_OPERATION_GUARD(BatchAssociateAnalyticsDataSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchAssociateAnalyticsDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchAssociateAnalyticsDataSet", "Required field: InstanceId, is not set");
    return BatchAssociateAnalyticsDataSetOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchAssociateAnalyticsDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchAssociateAnalyticsDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchAssociateAnalyticsDataSet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchAssociateAnalyticsDataSetOutcome>(
      [&]() -> BatchAssociateAnalyticsDataSetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchAssociateAnalyticsDataSet, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/analytics-data/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
        return BatchAssociateAnalyticsDataSetOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchCreateDataTableValueOutcome ConnectClient::BatchCreateDataTableValue(const BatchCreateDataTableValueRequest& request) const {
  AWS_OPERATION_GUARD(BatchCreateDataTableValue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateDataTableValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateDataTableValue", "Required field: InstanceId, is not set");
    return BatchCreateDataTableValueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateDataTableValue", "Required field: DataTableId, is not set");
    return BatchCreateDataTableValueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DataTableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchCreateDataTableValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchCreateDataTableValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchCreateDataTableValue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchCreateDataTableValueOutcome>(
      [&]() -> BatchCreateDataTableValueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateDataTableValue, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/values/create");
        return BatchCreateDataTableValueOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchDeleteDataTableValueOutcome ConnectClient::BatchDeleteDataTableValue(const BatchDeleteDataTableValueRequest& request) const {
  AWS_OPERATION_GUARD(BatchDeleteDataTableValue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteDataTableValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteDataTableValue", "Required field: InstanceId, is not set");
    return BatchDeleteDataTableValueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteDataTableValue", "Required field: DataTableId, is not set");
    return BatchDeleteDataTableValueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DataTableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchDeleteDataTableValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDeleteDataTableValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDeleteDataTableValue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDeleteDataTableValueOutcome>(
      [&]() -> BatchDeleteDataTableValueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteDataTableValue, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/values/delete");
        return BatchDeleteDataTableValueOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchDescribeDataTableValueOutcome ConnectClient::BatchDescribeDataTableValue(const BatchDescribeDataTableValueRequest& request) const {
  AWS_OPERATION_GUARD(BatchDescribeDataTableValue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDescribeDataTableValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDescribeDataTableValue", "Required field: InstanceId, is not set");
    return BatchDescribeDataTableValueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDescribeDataTableValue", "Required field: DataTableId, is not set");
    return BatchDescribeDataTableValueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DataTableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchDescribeDataTableValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDescribeDataTableValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDescribeDataTableValue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDescribeDataTableValueOutcome>(
      [&]() -> BatchDescribeDataTableValueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDescribeDataTableValue, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/values/describe");
        return BatchDescribeDataTableValueOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchDisassociateAnalyticsDataSetOutcome ConnectClient::BatchDisassociateAnalyticsDataSet(
    const BatchDisassociateAnalyticsDataSetRequest& request) const {
  AWS_OPERATION_GUARD(BatchDisassociateAnalyticsDataSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDisassociateAnalyticsDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDisassociateAnalyticsDataSet", "Required field: InstanceId, is not set");
    return BatchDisassociateAnalyticsDataSetOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchDisassociateAnalyticsDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDisassociateAnalyticsDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDisassociateAnalyticsDataSet",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDisassociateAnalyticsDataSetOutcome>(
      [&]() -> BatchDisassociateAnalyticsDataSetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDisassociateAnalyticsDataSet, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/analytics-data/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
        return BatchDisassociateAnalyticsDataSetOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetAttachedFileMetadataOutcome ConnectClient::BatchGetAttachedFileMetadata(const BatchGetAttachedFileMetadataRequest& request) const {
  AWS_OPERATION_GUARD(BatchGetAttachedFileMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetAttachedFileMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetAttachedFileMetadata", "Required field: InstanceId, is not set");
    return BatchGetAttachedFileMetadataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.AssociatedResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetAttachedFileMetadata", "Required field: AssociatedResourceArn, is not set");
    return BatchGetAttachedFileMetadataOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociatedResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetAttachedFileMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetAttachedFileMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetAttachedFileMetadata",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetAttachedFileMetadataOutcome>(
      [&]() -> BatchGetAttachedFileMetadataOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetAttachedFileMetadata, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/attached-files/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return BatchGetAttachedFileMetadataOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetFlowAssociationOutcome ConnectClient::BatchGetFlowAssociation(const BatchGetFlowAssociationRequest& request) const {
  AWS_OPERATION_GUARD(BatchGetFlowAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetFlowAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetFlowAssociation", "Required field: InstanceId, is not set");
    return BatchGetFlowAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetFlowAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetFlowAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetFlowAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetFlowAssociationOutcome>(
      [&]() -> BatchGetFlowAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetFlowAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/flow-associations-batch/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return BatchGetFlowAssociationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchPutContactOutcome ConnectClient::BatchPutContact(const BatchPutContactRequest& request) const {
  AWS_OPERATION_GUARD(BatchPutContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchPutContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutContact", "Required field: InstanceId, is not set");
    return BatchPutContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchPutContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchPutContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchPutContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchPutContactOutcome>(
      [&]() -> BatchPutContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchPutContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/batch/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return BatchPutContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchUpdateDataTableValueOutcome ConnectClient::BatchUpdateDataTableValue(const BatchUpdateDataTableValueRequest& request) const {
  AWS_OPERATION_GUARD(BatchUpdateDataTableValue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateDataTableValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateDataTableValue", "Required field: InstanceId, is not set");
    return BatchUpdateDataTableValueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateDataTableValue", "Required field: DataTableId, is not set");
    return BatchUpdateDataTableValueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DataTableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchUpdateDataTableValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchUpdateDataTableValue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchUpdateDataTableValue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchUpdateDataTableValueOutcome>(
      [&]() -> BatchUpdateDataTableValueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateDataTableValue, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/values/update");
        return BatchUpdateDataTableValueOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ClaimPhoneNumberOutcome ConnectClient::ClaimPhoneNumber(const ClaimPhoneNumberRequest& request) const {
  AWS_OPERATION_GUARD(ClaimPhoneNumber);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ClaimPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ClaimPhoneNumber, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ClaimPhoneNumber, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ClaimPhoneNumber",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ClaimPhoneNumberOutcome>(
      [&]() -> ClaimPhoneNumberOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ClaimPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/claim");
        return ClaimPhoneNumberOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CompleteAttachedFileUploadOutcome ConnectClient::CompleteAttachedFileUpload(const CompleteAttachedFileUploadRequest& request) const {
  AWS_OPERATION_GUARD(CompleteAttachedFileUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteAttachedFileUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteAttachedFileUpload", "Required field: InstanceId, is not set");
    return CompleteAttachedFileUploadOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.FileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteAttachedFileUpload", "Required field: FileId, is not set");
    return CompleteAttachedFileUploadOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FileId]", false));
  }
  if (!request.AssociatedResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CompleteAttachedFileUpload", "Required field: AssociatedResourceArn, is not set");
    return CompleteAttachedFileUploadOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AssociatedResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CompleteAttachedFileUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CompleteAttachedFileUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CompleteAttachedFileUpload",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CompleteAttachedFileUploadOutcome>(
      [&]() -> CompleteAttachedFileUploadOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompleteAttachedFileUpload, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/attached-files/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileId());
        return CompleteAttachedFileUploadOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAgentStatusOutcome ConnectClient::CreateAgentStatus(const CreateAgentStatusRequest& request) const {
  AWS_OPERATION_GUARD(CreateAgentStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAgentStatus", "Required field: InstanceId, is not set");
    return CreateAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAgentStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAgentStatus, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAgentStatus",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAgentStatusOutcome>(
      [&]() -> CreateAgentStatusOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAgentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/agent-status/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateAgentStatusOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateContactOutcome ConnectClient::CreateContact(const CreateContactRequest& request) const {
  AWS_OPERATION_GUARD(CreateContact);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateContact, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateContact",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateContactOutcome>(
      [&]() -> CreateContactOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/create-contact");
        return CreateContactOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateContactFlowOutcome ConnectClient::CreateContactFlow(const CreateContactFlowRequest& request) const {
  AWS_OPERATION_GUARD(CreateContactFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlow", "Required field: InstanceId, is not set");
    return CreateContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateContactFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateContactFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateContactFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateContactFlowOutcome>(
      [&]() -> CreateContactFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateContactFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateContactFlowModuleOutcome ConnectClient::CreateContactFlowModule(const CreateContactFlowModuleRequest& request) const {
  AWS_OPERATION_GUARD(CreateContactFlowModule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlowModule", "Required field: InstanceId, is not set");
    return CreateContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateContactFlowModule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateContactFlowModule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateContactFlowModule",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateContactFlowModuleOutcome>(
      [&]() -> CreateContactFlowModuleOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateContactFlowModuleOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateContactFlowModuleAliasOutcome ConnectClient::CreateContactFlowModuleAlias(const CreateContactFlowModuleAliasRequest& request) const {
  AWS_OPERATION_GUARD(CreateContactFlowModuleAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContactFlowModuleAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlowModuleAlias", "Required field: InstanceId, is not set");
    return CreateContactFlowModuleAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlowModuleAlias", "Required field: ContactFlowModuleId, is not set");
    return CreateContactFlowModuleAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ContactFlowModuleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateContactFlowModuleAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateContactFlowModuleAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateContactFlowModuleAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateContactFlowModuleAliasOutcome>(
      [&]() -> CreateContactFlowModuleAliasOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContactFlowModuleAlias, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/alias");
        return CreateContactFlowModuleAliasOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateContactFlowModuleVersionOutcome ConnectClient::CreateContactFlowModuleVersion(
    const CreateContactFlowModuleVersionRequest& request) const {
  AWS_OPERATION_GUARD(CreateContactFlowModuleVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContactFlowModuleVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlowModuleVersion", "Required field: InstanceId, is not set");
    return CreateContactFlowModuleVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlowModuleVersion", "Required field: ContactFlowModuleId, is not set");
    return CreateContactFlowModuleVersionOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowModuleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateContactFlowModuleVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateContactFlowModuleVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateContactFlowModuleVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateContactFlowModuleVersionOutcome>(
      [&]() -> CreateContactFlowModuleVersionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContactFlowModuleVersion, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/version");
        return CreateContactFlowModuleVersionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateContactFlowVersionOutcome ConnectClient::CreateContactFlowVersion(const CreateContactFlowVersionRequest& request) const {
  AWS_OPERATION_GUARD(CreateContactFlowVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContactFlowVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlowVersion", "Required field: InstanceId, is not set");
    return CreateContactFlowVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlowVersion", "Required field: ContactFlowId, is not set");
    return CreateContactFlowVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ContactFlowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateContactFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateContactFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateContactFlowVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateContactFlowVersionOutcome>(
      [&]() -> CreateContactFlowVersionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContactFlowVersion, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/version");
        return CreateContactFlowVersionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataTableOutcome ConnectClient::CreateDataTable(const CreateDataTableRequest& request) const {
  AWS_OPERATION_GUARD(CreateDataTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataTable", "Required field: InstanceId, is not set");
    return CreateDataTableOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDataTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataTable",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataTableOutcome>(
      [&]() -> CreateDataTableOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateDataTableOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataTableAttributeOutcome ConnectClient::CreateDataTableAttribute(const CreateDataTableAttributeRequest& request) const {
  AWS_OPERATION_GUARD(CreateDataTableAttribute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataTableAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataTableAttribute", "Required field: InstanceId, is not set");
    return CreateDataTableAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataTableAttribute", "Required field: DataTableId, is not set");
    return CreateDataTableAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DataTableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDataTableAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataTableAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataTableAttribute",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataTableAttributeOutcome>(
      [&]() -> CreateDataTableAttributeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataTableAttribute, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/attributes");
        return CreateDataTableAttributeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEmailAddressOutcome ConnectClient::CreateEmailAddress(const CreateEmailAddressRequest& request) const {
  AWS_OPERATION_GUARD(CreateEmailAddress);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEmailAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEmailAddress", "Required field: InstanceId, is not set");
    return CreateEmailAddressOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateEmailAddress, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEmailAddress, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEmailAddress",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEmailAddressOutcome>(
      [&]() -> CreateEmailAddressOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEmailAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/email-addresses/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateEmailAddressOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEvaluationFormOutcome ConnectClient::CreateEvaluationForm(const CreateEvaluationFormRequest& request) const {
  AWS_OPERATION_GUARD(CreateEvaluationForm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEvaluationForm", "Required field: InstanceId, is not set");
    return CreateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateEvaluationForm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEvaluationForm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEvaluationForm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEvaluationFormOutcome>(
      [&]() -> CreateEvaluationFormOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateEvaluationFormOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateHoursOfOperationOutcome ConnectClient::CreateHoursOfOperation(const CreateHoursOfOperationRequest& request) const {
  AWS_OPERATION_GUARD(CreateHoursOfOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateHoursOfOperation", "Required field: InstanceId, is not set");
    return CreateHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateHoursOfOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateHoursOfOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateHoursOfOperation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateHoursOfOperationOutcome>(
      [&]() -> CreateHoursOfOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateHoursOfOperationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateHoursOfOperationOverrideOutcome ConnectClient::CreateHoursOfOperationOverride(
    const CreateHoursOfOperationOverrideRequest& request) const {
  AWS_OPERATION_GUARD(CreateHoursOfOperationOverride);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHoursOfOperationOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateHoursOfOperationOverride", "Required field: InstanceId, is not set");
    return CreateHoursOfOperationOverrideOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateHoursOfOperationOverride", "Required field: HoursOfOperationId, is not set");
    return CreateHoursOfOperationOverrideOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HoursOfOperationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateHoursOfOperationOverride, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateHoursOfOperationOverride, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateHoursOfOperationOverride",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateHoursOfOperationOverrideOutcome>(
      [&]() -> CreateHoursOfOperationOverrideOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHoursOfOperationOverride, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/overrides");
        return CreateHoursOfOperationOverrideOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInstanceOutcome ConnectClient::CreateInstance(const CreateInstanceRequest& request) const {
  AWS_OPERATION_GUARD(CreateInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateInstance",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateInstanceOutcome>(
      [&]() -> CreateInstanceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance");
        return CreateInstanceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIntegrationAssociationOutcome ConnectClient::CreateIntegrationAssociation(const CreateIntegrationAssociationRequest& request) const {
  AWS_OPERATION_GUARD(CreateIntegrationAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIntegrationAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntegrationAssociation", "Required field: InstanceId, is not set");
    return CreateIntegrationAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateIntegrationAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateIntegrationAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateIntegrationAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateIntegrationAssociationOutcome>(
      [&]() -> CreateIntegrationAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIntegrationAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations");
        return CreateIntegrationAssociationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateParticipantOutcome ConnectClient::CreateParticipant(const CreateParticipantRequest& request) const {
  AWS_OPERATION_GUARD(CreateParticipant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateParticipant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateParticipant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateParticipant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateParticipant",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateParticipantOutcome>(
      [&]() -> CreateParticipantOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateParticipant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/create-participant");
        return CreateParticipantOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePersistentContactAssociationOutcome ConnectClient::CreatePersistentContactAssociation(
    const CreatePersistentContactAssociationRequest& request) const {
  AWS_OPERATION_GUARD(CreatePersistentContactAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePersistentContactAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePersistentContactAssociation", "Required field: InstanceId, is not set");
    return CreatePersistentContactAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.InitialContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePersistentContactAssociation", "Required field: InitialContactId, is not set");
    return CreatePersistentContactAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InitialContactId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreatePersistentContactAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePersistentContactAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePersistentContactAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePersistentContactAssociationOutcome>(
      [&]() -> CreatePersistentContactAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePersistentContactAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact/persistent-contact-association/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInitialContactId());
        return CreatePersistentContactAssociationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePredefinedAttributeOutcome ConnectClient::CreatePredefinedAttribute(const CreatePredefinedAttributeRequest& request) const {
  AWS_OPERATION_GUARD(CreatePredefinedAttribute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePredefinedAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePredefinedAttribute", "Required field: InstanceId, is not set");
    return CreatePredefinedAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreatePredefinedAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePredefinedAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePredefinedAttribute",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePredefinedAttributeOutcome>(
      [&]() -> CreatePredefinedAttributeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePredefinedAttribute, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/predefined-attributes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreatePredefinedAttributeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePromptOutcome ConnectClient::CreatePrompt(const CreatePromptRequest& request) const {
  AWS_OPERATION_GUARD(CreatePrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePrompt", "Required field: InstanceId, is not set");
    return CreatePromptOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreatePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePrompt",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePromptOutcome>(
      [&]() -> CreatePromptOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/prompts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreatePromptOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePushNotificationRegistrationOutcome ConnectClient::CreatePushNotificationRegistration(
    const CreatePushNotificationRegistrationRequest& request) const {
  AWS_OPERATION_GUARD(CreatePushNotificationRegistration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePushNotificationRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePushNotificationRegistration", "Required field: InstanceId, is not set");
    return CreatePushNotificationRegistrationOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreatePushNotificationRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePushNotificationRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePushNotificationRegistration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePushNotificationRegistrationOutcome>(
      [&]() -> CreatePushNotificationRegistrationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePushNotificationRegistration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/push-notification/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/registrations");
        return CreatePushNotificationRegistrationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQueueOutcome ConnectClient::CreateQueue(const CreateQueueRequest& request) const {
  AWS_OPERATION_GUARD(CreateQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueue", "Required field: InstanceId, is not set");
    return CreateQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQueueOutcome>(
      [&]() -> CreateQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateQueueOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQuickConnectOutcome ConnectClient::CreateQuickConnect(const CreateQuickConnectRequest& request) const {
  AWS_OPERATION_GUARD(CreateQuickConnect);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQuickConnect", "Required field: InstanceId, is not set");
    return CreateQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateQuickConnect, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQuickConnect, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQuickConnect",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQuickConnectOutcome>(
      [&]() -> CreateQuickConnectOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateQuickConnectOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRoutingProfileOutcome ConnectClient::CreateRoutingProfile(const CreateRoutingProfileRequest& request) const {
  AWS_OPERATION_GUARD(CreateRoutingProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoutingProfile", "Required field: InstanceId, is not set");
    return CreateRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateRoutingProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRoutingProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRoutingProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRoutingProfileOutcome>(
      [&]() -> CreateRoutingProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateRoutingProfileOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRuleOutcome ConnectClient::CreateRule(const CreateRuleRequest& request) const {
  AWS_OPERATION_GUARD(CreateRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRule", "Required field: InstanceId, is not set");
    return CreateRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRule",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRuleOutcome>(
      [&]() -> CreateRuleOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateRuleOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSecurityProfileOutcome ConnectClient::CreateSecurityProfile(const CreateSecurityProfileRequest& request) const {
  AWS_OPERATION_GUARD(CreateSecurityProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSecurityProfile", "Required field: InstanceId, is not set");
    return CreateSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSecurityProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSecurityProfileOutcome>(
      [&]() -> CreateSecurityProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateSecurityProfileOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTaskTemplateOutcome ConnectClient::CreateTaskTemplate(const CreateTaskTemplateRequest& request) const {
  AWS_OPERATION_GUARD(CreateTaskTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTaskTemplate", "Required field: InstanceId, is not set");
    return CreateTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTaskTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTaskTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTaskTemplate",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTaskTemplateOutcome>(
      [&]() -> CreateTaskTemplateOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/task/template");
        return CreateTaskTemplateOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTestCaseOutcome ConnectClient::CreateTestCase(const CreateTestCaseRequest& request) const {
  AWS_OPERATION_GUARD(CreateTestCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTestCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTestCase", "Required field: InstanceId, is not set");
    return CreateTestCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTestCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTestCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTestCase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTestCaseOutcome>(
      [&]() -> CreateTestCaseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTestCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateTestCaseOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTrafficDistributionGroupOutcome ConnectClient::CreateTrafficDistributionGroup(
    const CreateTrafficDistributionGroupRequest& request) const {
  AWS_OPERATION_GUARD(CreateTrafficDistributionGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrafficDistributionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTrafficDistributionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTrafficDistributionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTrafficDistributionGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTrafficDistributionGroupOutcome>(
      [&]() -> CreateTrafficDistributionGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrafficDistributionGroup, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group");
        return CreateTrafficDistributionGroupOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateUseCaseOutcome ConnectClient::CreateUseCase(const CreateUseCaseRequest& request) const {
  AWS_OPERATION_GUARD(CreateUseCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUseCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUseCase", "Required field: InstanceId, is not set");
    return CreateUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.IntegrationAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUseCase", "Required field: IntegrationAssociationId, is not set");
    return CreateUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [IntegrationAssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateUseCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateUseCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateUseCase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateUseCaseOutcome>(
      [&]() -> CreateUseCaseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUseCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/use-cases");
        return CreateUseCaseOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateUserOutcome ConnectClient::CreateUser(const CreateUserRequest& request) const {
  AWS_OPERATION_GUARD(CreateUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: InstanceId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateUser",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateUserOutcome>(
      [&]() -> CreateUserOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateUserOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateUserHierarchyGroupOutcome ConnectClient::CreateUserHierarchyGroup(const CreateUserHierarchyGroupRequest& request) const {
  AWS_OPERATION_GUARD(CreateUserHierarchyGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserHierarchyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUserHierarchyGroup", "Required field: InstanceId, is not set");
    return CreateUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateUserHierarchyGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateUserHierarchyGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateUserHierarchyGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateUserHierarchyGroupOutcome>(
      [&]() -> CreateUserHierarchyGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserHierarchyGroup, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateUserHierarchyGroupOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateViewOutcome ConnectClient::CreateView(const CreateViewRequest& request) const {
  AWS_OPERATION_GUARD(CreateView);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateView", "Required field: InstanceId, is not set");
    return CreateViewOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateView, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateView, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateView",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateViewOutcome>(
      [&]() -> CreateViewOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateViewOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateViewVersionOutcome ConnectClient::CreateViewVersion(const CreateViewVersionRequest& request) const {
  AWS_OPERATION_GUARD(CreateViewVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateViewVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateViewVersion", "Required field: InstanceId, is not set");
    return CreateViewVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  if (!request.ViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateViewVersion", "Required field: ViewId, is not set");
    return CreateViewVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ViewId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateViewVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateViewVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateViewVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateViewVersionOutcome>(
      [&]() -> CreateViewVersionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateViewVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
        return CreateViewVersionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateVocabularyOutcome ConnectClient::CreateVocabulary(const CreateVocabularyRequest& request) const {
  AWS_OPERATION_GUARD(CreateVocabulary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVocabulary", "Required field: InstanceId, is not set");
    return CreateVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateVocabulary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateVocabulary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateVocabulary",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateVocabularyOutcome>(
      [&]() -> CreateVocabularyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateVocabularyOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkspaceOutcome ConnectClient::CreateWorkspace(const CreateWorkspaceRequest& request) const {
  AWS_OPERATION_GUARD(CreateWorkspace);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspace", "Required field: InstanceId, is not set");
    return CreateWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorkspace, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorkspace",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkspaceOutcome>(
      [&]() -> CreateWorkspaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return CreateWorkspaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkspacePageOutcome ConnectClient::CreateWorkspacePage(const CreateWorkspacePageRequest& request) const {
  AWS_OPERATION_GUARD(CreateWorkspacePage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspacePage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspacePage", "Required field: InstanceId, is not set");
    return CreateWorkspacePageOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspacePage", "Required field: WorkspaceId, is not set");
    return CreateWorkspacePageOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkspaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateWorkspacePage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorkspacePage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorkspacePage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkspacePageOutcome>(
      [&]() -> CreateWorkspacePageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspacePage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/pages");
        return CreateWorkspacePageOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeactivateEvaluationFormOutcome ConnectClient::DeactivateEvaluationForm(const DeactivateEvaluationFormRequest& request) const {
  AWS_OPERATION_GUARD(DeactivateEvaluationForm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeactivateEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeactivateEvaluationForm", "Required field: InstanceId, is not set");
    return DeactivateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeactivateEvaluationForm", "Required field: EvaluationFormId, is not set");
    return DeactivateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [EvaluationFormId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeactivateEvaluationForm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeactivateEvaluationForm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeactivateEvaluationForm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeactivateEvaluationFormOutcome>(
      [&]() -> DeactivateEvaluationFormOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeactivateEvaluationForm, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/deactivate");
        return DeactivateEvaluationFormOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAttachedFileOutcome ConnectClient::DeleteAttachedFile(const DeleteAttachedFileRequest& request) const {
  AWS_OPERATION_GUARD(DeleteAttachedFile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAttachedFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttachedFile", "Required field: InstanceId, is not set");
    return DeleteAttachedFileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.FileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttachedFile", "Required field: FileId, is not set");
    return DeleteAttachedFileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [FileId]", false));
  }
  if (!request.AssociatedResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttachedFile", "Required field: AssociatedResourceArn, is not set");
    return DeleteAttachedFileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssociatedResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAttachedFile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAttachedFile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAttachedFile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAttachedFileOutcome>(
      [&]() -> DeleteAttachedFileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAttachedFile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/attached-files/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileId());
        return DeleteAttachedFileOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteContactEvaluationOutcome ConnectClient::DeleteContactEvaluation(const DeleteContactEvaluationRequest& request) const {
  AWS_OPERATION_GUARD(DeleteContactEvaluation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactEvaluation", "Required field: InstanceId, is not set");
    return DeleteContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactEvaluation", "Required field: EvaluationId, is not set");
    return DeleteContactEvaluationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EvaluationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteContactEvaluation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteContactEvaluation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteContactEvaluation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteContactEvaluationOutcome>(
      [&]() -> DeleteContactEvaluationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactEvaluation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
        return DeleteContactEvaluationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteContactFlowOutcome ConnectClient::DeleteContactFlow(const DeleteContactFlowRequest& request) const {
  AWS_OPERATION_GUARD(DeleteContactFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlow", "Required field: InstanceId, is not set");
    return DeleteContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlow", "Required field: ContactFlowId, is not set");
    return DeleteContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ContactFlowId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteContactFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteContactFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteContactFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteContactFlowOutcome>(
      [&]() -> DeleteContactFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
        return DeleteContactFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteContactFlowModuleOutcome ConnectClient::DeleteContactFlowModule(const DeleteContactFlowModuleRequest& request) const {
  AWS_OPERATION_GUARD(DeleteContactFlowModule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModule", "Required field: InstanceId, is not set");
    return DeleteContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModule", "Required field: ContactFlowModuleId, is not set");
    return DeleteContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ContactFlowModuleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteContactFlowModule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteContactFlowModule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteContactFlowModule",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteContactFlowModuleOutcome>(
      [&]() -> DeleteContactFlowModuleOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactFlowModule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
        return DeleteContactFlowModuleOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteContactFlowModuleAliasOutcome ConnectClient::DeleteContactFlowModuleAlias(const DeleteContactFlowModuleAliasRequest& request) const {
  AWS_OPERATION_GUARD(DeleteContactFlowModuleAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactFlowModuleAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModuleAlias", "Required field: InstanceId, is not set");
    return DeleteContactFlowModuleAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModuleAlias", "Required field: ContactFlowModuleId, is not set");
    return DeleteContactFlowModuleAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ContactFlowModuleId]", false));
  }
  if (!request.AliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModuleAlias", "Required field: AliasId, is not set");
    return DeleteContactFlowModuleAliasOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [AliasId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteContactFlowModuleAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteContactFlowModuleAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteContactFlowModuleAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteContactFlowModuleAliasOutcome>(
      [&]() -> DeleteContactFlowModuleAliasOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactFlowModuleAlias, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/alias/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasId());
        return DeleteContactFlowModuleAliasOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteContactFlowModuleVersionOutcome ConnectClient::DeleteContactFlowModuleVersion(
    const DeleteContactFlowModuleVersionRequest& request) const {
  AWS_OPERATION_GUARD(DeleteContactFlowModuleVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactFlowModuleVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModuleVersion", "Required field: InstanceId, is not set");
    return DeleteContactFlowModuleVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowModuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModuleVersion", "Required field: ContactFlowModuleId, is not set");
    return DeleteContactFlowModuleVersionOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowModuleId]", false));
  }
  if (!request.ContactFlowModuleVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowModuleVersion", "Required field: ContactFlowModuleVersion, is not set");
    return DeleteContactFlowModuleVersionOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactFlowModuleVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteContactFlowModuleVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteContactFlowModuleVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteContactFlowModuleVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteContactFlowModuleVersionOutcome>(
      [&]() -> DeleteContactFlowModuleVersionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactFlowModuleVersion, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleVersion());
        return DeleteContactFlowModuleVersionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteContactFlowVersionOutcome ConnectClient::DeleteContactFlowVersion(const DeleteContactFlowVersionRequest& request) const {
  AWS_OPERATION_GUARD(DeleteContactFlowVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactFlowVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowVersion", "Required field: InstanceId, is not set");
    return DeleteContactFlowVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.ContactFlowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowVersion", "Required field: ContactFlowId, is not set");
    return DeleteContactFlowVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ContactFlowId]", false));
  }
  if (!request.ContactFlowVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactFlowVersion", "Required field: ContactFlowVersion, is not set");
    return DeleteContactFlowVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ContactFlowVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteContactFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteContactFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteContactFlowVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteContactFlowVersionOutcome>(
      [&]() -> DeleteContactFlowVersionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactFlowVersion, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowVersion());
        return DeleteContactFlowVersionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataTableOutcome ConnectClient::DeleteDataTable(const DeleteDataTableRequest& request) const {
  AWS_OPERATION_GUARD(DeleteDataTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataTable", "Required field: InstanceId, is not set");
    return DeleteDataTableOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataTable", "Required field: DataTableId, is not set");
    return DeleteDataTableOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DataTableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDataTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataTable",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataTableOutcome>(
      [&]() -> DeleteDataTableOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
        return DeleteDataTableOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataTableAttributeOutcome ConnectClient::DeleteDataTableAttribute(const DeleteDataTableAttributeRequest& request) const {
  AWS_OPERATION_GUARD(DeleteDataTableAttribute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataTableAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataTableAttribute", "Required field: InstanceId, is not set");
    return DeleteDataTableAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.DataTableIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataTableAttribute", "Required field: DataTableId, is not set");
    return DeleteDataTableAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DataTableId]", false));
  }
  if (!request.AttributeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataTableAttribute", "Required field: AttributeName, is not set");
    return DeleteDataTableAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AttributeName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDataTableAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataTableAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataTableAttribute",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataTableAttributeOutcome>(
      [&]() -> DeleteDataTableAttributeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataTableAttribute, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeName());
        return DeleteDataTableAttributeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEmailAddressOutcome ConnectClient::DeleteEmailAddress(const DeleteEmailAddressRequest& request) const {
  AWS_OPERATION_GUARD(DeleteEmailAddress);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEmailAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEmailAddress", "Required field: InstanceId, is not set");
    return DeleteEmailAddressOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.EmailAddressIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEmailAddress", "Required field: EmailAddressId, is not set");
    return DeleteEmailAddressOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [EmailAddressId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteEmailAddress, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEmailAddress, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEmailAddress",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEmailAddressOutcome>(
      [&]() -> DeleteEmailAddressOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEmailAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/email-addresses/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddressId());
        return DeleteEmailAddressOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEvaluationFormOutcome ConnectClient::DeleteEvaluationForm(const DeleteEvaluationFormRequest& request) const {
  AWS_OPERATION_GUARD(DeleteEvaluationForm);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEvaluationForm", "Required field: InstanceId, is not set");
    return DeleteEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.EvaluationFormIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEvaluationForm", "Required field: EvaluationFormId, is not set");
    return DeleteEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EvaluationFormId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteEvaluationForm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEvaluationForm, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEvaluationForm",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEvaluationFormOutcome>(
      [&]() -> DeleteEvaluationFormOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEvaluationForm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
        return DeleteEvaluationFormOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteHoursOfOperationOutcome ConnectClient::DeleteHoursOfOperation(const DeleteHoursOfOperationRequest& request) const {
  AWS_OPERATION_GUARD(DeleteHoursOfOperation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHoursOfOperation", "Required field: InstanceId, is not set");
    return DeleteHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHoursOfOperation", "Required field: HoursOfOperationId, is not set");
    return DeleteHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [HoursOfOperationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteHoursOfOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteHoursOfOperation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteHoursOfOperation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteHoursOfOperationOutcome>(
      [&]() -> DeleteHoursOfOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHoursOfOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
        return DeleteHoursOfOperationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteHoursOfOperationOverrideOutcome ConnectClient::DeleteHoursOfOperationOverride(
    const DeleteHoursOfOperationOverrideRequest& request) const {
  AWS_OPERATION_GUARD(DeleteHoursOfOperationOverride);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHoursOfOperationOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHoursOfOperationOverride", "Required field: InstanceId, is not set");
    return DeleteHoursOfOperationOverrideOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }
  if (!request.HoursOfOperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHoursOfOperationOverride", "Required field: HoursOfOperationId, is not set");
    return DeleteHoursOfOperationOverrideOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HoursOfOperationId]", false));
  }
  if (!request.HoursOfOperationOverrideIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHoursOfOperationOverride", "Required field: HoursOfOperationOverrideId, is not set");
    return DeleteHoursOfOperationOverrideOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HoursOfOperationOverrideId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteHoursOfOperationOverride, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteHoursOfOperationOverride, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteHoursOfOperationOverride",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteHoursOfOperationOverrideOutcome>(
      [&]() -> DeleteHoursOfOperationOverrideOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHoursOfOperationOverride, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/overrides/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationOverrideId());
        return DeleteHoursOfOperationOverrideOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteInstanceOutcome ConnectClient::DeleteInstance(const DeleteInstanceRequest& request) const {
  AWS_OPERATION_GUARD(DeleteInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInstance", "Required field: InstanceId, is not set");
    return DeleteInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteInstance",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteInstanceOutcome>(
      [&]() -> DeleteInstanceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        return DeleteInstanceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIntegrationAssociationOutcome ConnectClient::DeleteIntegrationAssociation(const DeleteIntegrationAssociationRequest& request) const {
  AWS_OPERATION_GUARD(DeleteIntegrationAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIntegrationAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationAssociation", "Required field: InstanceId, is not set");
    return DeleteIntegrationAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.IntegrationAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationAssociation", "Required field: IntegrationAssociationId, is not set");
    return DeleteIntegrationAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationAssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteIntegrationAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIntegrationAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIntegrationAssociation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIntegrationAssociationOutcome>(
      [&]() -> DeleteIntegrationAssociationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIntegrationAssociation, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
        return DeleteIntegrationAssociationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePredefinedAttributeOutcome ConnectClient::DeletePredefinedAttribute(const DeletePredefinedAttributeRequest& request) const {
  AWS_OPERATION_GUARD(DeletePredefinedAttribute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePredefinedAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePredefinedAttribute", "Required field: InstanceId, is not set");
    return DeletePredefinedAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePredefinedAttribute", "Required field: Name, is not set");
    return DeletePredefinedAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Name]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeletePredefinedAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePredefinedAttribute, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePredefinedAttribute",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePredefinedAttributeOutcome>(
      [&]() -> DeletePredefinedAttributeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePredefinedAttribute, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/predefined-attributes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
        return DeletePredefinedAttributeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePromptOutcome ConnectClient::DeletePrompt(const DeletePromptRequest& request) const {
  AWS_OPERATION_GUARD(DeletePrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrompt", "Required field: InstanceId, is not set");
    return DeletePromptOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.PromptIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrompt", "Required field: PromptId, is not set");
    return DeletePromptOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [PromptId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeletePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePrompt",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePromptOutcome>(
      [&]() -> DeletePromptOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/prompts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPromptId());
        return DeletePromptOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePushNotificationRegistrationOutcome ConnectClient::DeletePushNotificationRegistration(
    const DeletePushNotificationRegistrationRequest& request) const {
  AWS_OPERATION_GUARD(DeletePushNotificationRegistration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePushNotificationRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePushNotificationRegistration", "Required field: InstanceId, is not set");
    return DeletePushNotificationRegistrationOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.RegistrationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePushNotificationRegistration", "Required field: RegistrationId, is not set");
    return DeletePushNotificationRegistrationOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistrationId]", false));
  }
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePushNotificationRegistration", "Required field: ContactId, is not set");
    return DeletePushNotificationRegistrationOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeletePushNotificationRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePushNotificationRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePushNotificationRegistration",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePushNotificationRegistrationOutcome>(
      [&]() -> DeletePushNotificationRegistrationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePushNotificationRegistration, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/push-notification/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/registrations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistrationId());
        return DeletePushNotificationRegistrationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQueueOutcome ConnectClient::DeleteQueue(const DeleteQueueRequest& request) const {
  AWS_OPERATION_GUARD(DeleteQueue);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueue", "Required field: InstanceId, is not set");
    return DeleteQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQueue", "Required field: QueueId, is not set");
    return DeleteQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [QueueId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQueue, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQueue",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQueueOutcome>(
      [&]() -> DeleteQueueOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
        return DeleteQueueOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQuickConnectOutcome ConnectClient::DeleteQuickConnect(const DeleteQuickConnectRequest& request) const {
  AWS_OPERATION_GUARD(DeleteQuickConnect);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQuickConnect", "Required field: InstanceId, is not set");
    return DeleteQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.QuickConnectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQuickConnect", "Required field: QuickConnectId, is not set");
    return DeleteQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [QuickConnectId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteQuickConnect, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQuickConnect, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQuickConnect",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQuickConnectOutcome>(
      [&]() -> DeleteQuickConnectOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQuickConnect, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickConnectId());
        return DeleteQuickConnectOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRoutingProfileOutcome ConnectClient::DeleteRoutingProfile(const DeleteRoutingProfileRequest& request) const {
  AWS_OPERATION_GUARD(DeleteRoutingProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoutingProfile", "Required field: InstanceId, is not set");
    return DeleteRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.RoutingProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoutingProfile", "Required field: RoutingProfileId, is not set");
    return DeleteRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RoutingProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRoutingProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRoutingProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRoutingProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRoutingProfileOutcome>(
      [&]() -> DeleteRoutingProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRoutingProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
        return DeleteRoutingProfileOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRuleOutcome ConnectClient::DeleteRule(const DeleteRuleRequest& request) const {
  AWS_OPERATION_GUARD(DeleteRule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: InstanceId, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.RuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: RuleId, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [RuleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRule",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRuleOutcome>(
      [&]() -> DeleteRuleOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleId());
        return DeleteRuleOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSecurityProfileOutcome ConnectClient::DeleteSecurityProfile(const DeleteSecurityProfileRequest& request) const {
  AWS_OPERATION_GUARD(DeleteSecurityProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSecurityProfile", "Required field: InstanceId, is not set");
    return DeleteSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }
  if (!request.SecurityProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSecurityProfile", "Required field: SecurityProfileId, is not set");
    return DeleteSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SecurityProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSecurityProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSecurityProfile",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSecurityProfileOutcome>(
      [&]() -> DeleteSecurityProfileOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSecurityProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
        return DeleteSecurityProfileOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTaskTemplateOutcome ConnectClient::DeleteTaskTemplate(const DeleteTaskTemplateRequest& request) const {
  AWS_OPERATION_GUARD(DeleteTaskTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTaskTemplate", "Required field: InstanceId, is not set");
    return DeleteTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.TaskTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTaskTemplate", "Required field: TaskTemplateId, is not set");
    return DeleteTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TaskTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTaskTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTaskTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTaskTemplate",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTaskTemplateOutcome>(
      [&]() -> DeleteTaskTemplateOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTaskTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/task/template/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskTemplateId());
        return DeleteTaskTemplateOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTestCaseOutcome ConnectClient::DeleteTestCase(const DeleteTestCaseRequest& request) const {
  AWS_OPERATION_GUARD(DeleteTestCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTestCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTestCase", "Required field: InstanceId, is not set");
    return DeleteTestCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }
  if (!request.TestCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTestCase", "Required field: TestCaseId, is not set");
    return DeleteTestCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TestCaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTestCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTestCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTestCase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTestCaseOutcome>(
      [&]() -> DeleteTestCaseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTestCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
        return DeleteTestCaseOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTrafficDistributionGroupOutcome ConnectClient::DeleteTrafficDistributionGroup(
    const DeleteTrafficDistributionGroupRequest& request) const {
  AWS_OPERATION_GUARD(DeleteTrafficDistributionGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrafficDistributionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrafficDistributionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrafficDistributionGroup", "Required field: TrafficDistributionGroupId, is not set");
    return DeleteTrafficDistributionGroupOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTrafficDistributionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTrafficDistributionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTrafficDistributionGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTrafficDistributionGroupOutcome>(
      [&]() -> DeleteTrafficDistributionGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrafficDistributionGroup, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
        return DeleteTrafficDistributionGroupOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteUseCaseOutcome ConnectClient::DeleteUseCase(const DeleteUseCaseRequest& request) const {
  AWS_OPERATION_GUARD(DeleteUseCase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUseCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUseCase", "Required field: InstanceId, is not set");
    return DeleteUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }
  if (!request.IntegrationAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUseCase", "Required field: IntegrationAssociationId, is not set");
    return DeleteUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [IntegrationAssociationId]", false));
  }
  if (!request.UseCaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUseCase", "Required field: UseCaseId, is not set");
    return DeleteUseCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [UseCaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteUseCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteUseCase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteUseCase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteUseCaseOutcome>(
      [&]() -> DeleteUseCaseOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUseCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/use-cases/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUseCaseId());
        return DeleteUseCaseOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteUserOutcome ConnectClient::DeleteUser(const DeleteUserRequest& request) const {
  AWS_OPERATION_GUARD(DeleteUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: InstanceId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteUser",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteUserOutcome>(
      [&]() -> DeleteUserOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
        return DeleteUserOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteUserHierarchyGroupOutcome ConnectClient::DeleteUserHierarchyGroup(const DeleteUserHierarchyGroupRequest& request) const {
  AWS_OPERATION_GUARD(DeleteUserHierarchyGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserHierarchyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HierarchyGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserHierarchyGroup", "Required field: HierarchyGroupId, is not set");
    return DeleteUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [HierarchyGroupId]", false));
  }
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserHierarchyGroup", "Required field: InstanceId, is not set");
    return DeleteUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteUserHierarchyGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteUserHierarchyGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteUserHierarchyGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteUserHierarchyGroupOutcome>(
      [&]() -> DeleteUserHierarchyGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserHierarchyGroup, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHierarchyGroupId());
        return DeleteUserHierarchyGroupOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteViewOutcome ConnectClient::DeleteView(const DeleteViewRequest& request) const {
  AWS_OPERATION_GUARD(DeleteView);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteView", "Required field: InstanceId, is not set");
    return DeleteViewOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.ViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteView", "Required field: ViewId, is not set");
    return DeleteViewOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ViewId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteView, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteView, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteView",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteViewOutcome>(
      [&]() -> DeleteViewOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteView, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewId());
        return DeleteViewOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteViewVersionOutcome ConnectClient::DeleteViewVersion(const DeleteViewVersionRequest& request) const {
  AWS_OPERATION_GUARD(DeleteViewVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteViewVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteViewVersion", "Required field: InstanceId, is not set");
    return DeleteViewVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  if (!request.ViewIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteViewVersion", "Required field: ViewId, is not set");
    return DeleteViewVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ViewId]", false));
  }
  if (!request.ViewVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteViewVersion", "Required field: ViewVersion, is not set");
    return DeleteViewVersionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ViewVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteViewVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteViewVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteViewVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteViewVersionOutcome>(
      [&]() -> DeleteViewVersionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteViewVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewVersion());
        return DeleteViewVersionOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteVocabularyOutcome ConnectClient::DeleteVocabulary(const DeleteVocabularyRequest& request) const {
  AWS_OPERATION_GUARD(DeleteVocabulary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVocabulary", "Required field: InstanceId, is not set");
    return DeleteVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }
  if (!request.VocabularyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVocabulary", "Required field: VocabularyId, is not set");
    return DeleteVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [VocabularyId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteVocabulary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteVocabulary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteVocabulary",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteVocabularyOutcome>(
      [&]() -> DeleteVocabularyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVocabulary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary-remove/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVocabularyId());
        return DeleteVocabularyOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
