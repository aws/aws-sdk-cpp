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
#include <aws/connect/model/AssociateQueueEmailAddressesRequest.h>
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
#include <aws/connect/model/CreateNotificationRequest.h>
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
#include <aws/connect/model/DeleteNotificationRequest.h>
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
ConnectClient::ConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration)
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

ConnectClient::ConnectClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectClient::ConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
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
ConnectClient::InvokeOperationOutcome ConnectClient::InvokeServiceOperation(
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

ActivateEvaluationFormOutcome ConnectClient::ActivateEvaluationForm(const ActivateEvaluationFormRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activate");
  };

  return ActivateEvaluationFormOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateAnalyticsDataSetOutcome ConnectClient::AssociateAnalyticsDataSet(const AssociateAnalyticsDataSetRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAnalyticsDataSet", "Required field: InstanceId, is not set");
    return AssociateAnalyticsDataSetOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics-data/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/association");
  };

  return AssociateAnalyticsDataSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateApprovedOriginOutcome ConnectClient::AssociateApprovedOrigin(const AssociateApprovedOriginRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateApprovedOrigin", "Required field: InstanceId, is not set");
    return AssociateApprovedOriginOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/approved-origin");
  };

  return AssociateApprovedOriginOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateBotOutcome ConnectClient::AssociateBot(const AssociateBotRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateBot", "Required field: InstanceId, is not set");
    return AssociateBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bot");
  };

  return AssociateBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateContactWithUserOutcome ConnectClient::AssociateContactWithUser(const AssociateContactWithUserRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-user");
  };

  return AssociateContactWithUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateDefaultVocabularyOutcome ConnectClient::AssociateDefaultVocabulary(const AssociateDefaultVocabularyRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/default-vocabulary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(
        VocabularyLanguageCodeMapper::GetNameForVocabularyLanguageCode(request.GetLanguageCode()));
  };

  return AssociateDefaultVocabularyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateEmailAddressAliasOutcome ConnectClient::AssociateEmailAddressAlias(const AssociateEmailAddressAliasRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/email-addresses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddressId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-alias");
  };

  return AssociateEmailAddressAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateFlowOutcome ConnectClient::AssociateFlow(const AssociateFlowRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateFlow", "Required field: InstanceId, is not set");
    return AssociateFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/flow-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return AssociateFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateHoursOfOperationsOutcome ConnectClient::AssociateHoursOfOperations(const AssociateHoursOfOperationsRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-hours");
  };

  return AssociateHoursOfOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateInstanceStorageConfigOutcome ConnectClient::AssociateInstanceStorageConfig(
    const AssociateInstanceStorageConfigRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateInstanceStorageConfig", "Required field: InstanceId, is not set");
    return AssociateInstanceStorageConfigOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage-config");
  };

  return AssociateInstanceStorageConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateLambdaFunctionOutcome ConnectClient::AssociateLambdaFunction(const AssociateLambdaFunctionRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateLambdaFunction", "Required field: InstanceId, is not set");
    return AssociateLambdaFunctionOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lambda-function");
  };

  return AssociateLambdaFunctionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateLexBotOutcome ConnectClient::AssociateLexBot(const AssociateLexBotRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateLexBot", "Required field: InstanceId, is not set");
    return AssociateLexBotOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lex-bot");
  };

  return AssociateLexBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociatePhoneNumberContactFlowOutcome ConnectClient::AssociatePhoneNumberContactFlow(
    const AssociatePhoneNumberContactFlowRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumberContactFlow", "Required field: PhoneNumberId, is not set");
    return AssociatePhoneNumberContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow");
  };

  return AssociatePhoneNumberContactFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateQueueEmailAddressesOutcome ConnectClient::AssociateQueueEmailAddresses(const AssociateQueueEmailAddressesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateQueueEmailAddresses", "Required field: InstanceId, is not set");
    return AssociateQueueEmailAddressesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.QueueIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateQueueEmailAddresses", "Required field: QueueId, is not set");
    return AssociateQueueEmailAddressesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [QueueId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-email-addresses");
  };

  return AssociateQueueEmailAddressesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateQueueQuickConnectsOutcome ConnectClient::AssociateQueueQuickConnects(const AssociateQueueQuickConnectsRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-quick-connects");
  };

  return AssociateQueueQuickConnectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateRoutingProfileQueuesOutcome ConnectClient::AssociateRoutingProfileQueues(
    const AssociateRoutingProfileQueuesRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-queues");
  };

  return AssociateRoutingProfileQueuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateSecurityKeyOutcome ConnectClient::AssociateSecurityKey(const AssociateSecurityKeyRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSecurityKey", "Required field: InstanceId, is not set");
    return AssociateSecurityKeyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-key");
  };

  return AssociateSecurityKeyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateSecurityProfilesOutcome ConnectClient::AssociateSecurityProfiles(const AssociateSecurityProfilesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSecurityProfiles", "Required field: InstanceId, is not set");
    return AssociateSecurityProfilesOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return AssociateSecurityProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateTrafficDistributionGroupUserOutcome ConnectClient::AssociateTrafficDistributionGroupUser(
    const AssociateTrafficDistributionGroupUserRequest& request) const {
  if (!request.TrafficDistributionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTrafficDistributionGroupUser", "Required field: TrafficDistributionGroupId, is not set");
    return AssociateTrafficDistributionGroupUserOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/user");
  };

  return AssociateTrafficDistributionGroupUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

AssociateUserProficienciesOutcome ConnectClient::AssociateUserProficiencies(const AssociateUserProficienciesRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-proficiencies");
  };

  return AssociateUserProficienciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateWorkspaceOutcome ConnectClient::AssociateWorkspace(const AssociateWorkspaceRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate");
  };

  return AssociateWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchAssociateAnalyticsDataSetOutcome ConnectClient::BatchAssociateAnalyticsDataSet(
    const BatchAssociateAnalyticsDataSetRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchAssociateAnalyticsDataSet", "Required field: InstanceId, is not set");
    return BatchAssociateAnalyticsDataSetOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics-data/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return BatchAssociateAnalyticsDataSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

BatchCreateDataTableValueOutcome ConnectClient::BatchCreateDataTableValue(const BatchCreateDataTableValueRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/values/create");
  };

  return BatchCreateDataTableValueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteDataTableValueOutcome ConnectClient::BatchDeleteDataTableValue(const BatchDeleteDataTableValueRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/values/delete");
  };

  return BatchDeleteDataTableValueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDescribeDataTableValueOutcome ConnectClient::BatchDescribeDataTableValue(const BatchDescribeDataTableValueRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/values/describe");
  };

  return BatchDescribeDataTableValueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisassociateAnalyticsDataSetOutcome ConnectClient::BatchDisassociateAnalyticsDataSet(
    const BatchDisassociateAnalyticsDataSetRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDisassociateAnalyticsDataSet", "Required field: InstanceId, is not set");
    return BatchDisassociateAnalyticsDataSetOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/analytics-data/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return BatchDisassociateAnalyticsDataSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetAttachedFileMetadataOutcome ConnectClient::BatchGetAttachedFileMetadata(const BatchGetAttachedFileMetadataRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attached-files/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return BatchGetAttachedFileMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetFlowAssociationOutcome ConnectClient::BatchGetFlowAssociation(const BatchGetFlowAssociationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetFlowAssociation", "Required field: InstanceId, is not set");
    return BatchGetFlowAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/flow-associations-batch/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return BatchGetFlowAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchPutContactOutcome ConnectClient::BatchPutContact(const BatchPutContactRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutContact", "Required field: InstanceId, is not set");
    return BatchPutContactOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/batch/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return BatchPutContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

BatchUpdateDataTableValueOutcome ConnectClient::BatchUpdateDataTableValue(const BatchUpdateDataTableValueRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/values/update");
  };

  return BatchUpdateDataTableValueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ClaimPhoneNumberOutcome ConnectClient::ClaimPhoneNumber(const ClaimPhoneNumberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number/claim");
  };

  return ClaimPhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CompleteAttachedFileUploadOutcome ConnectClient::CompleteAttachedFileUpload(const CompleteAttachedFileUploadRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attached-files/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileId());
  };

  return CompleteAttachedFileUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAgentStatusOutcome ConnectClient::CreateAgentStatus(const CreateAgentStatusRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAgentStatus", "Required field: InstanceId, is not set");
    return CreateAgentStatusOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agent-status/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateAgentStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateContactOutcome ConnectClient::CreateContact(const CreateContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/create-contact");
  };

  return CreateContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateContactFlowOutcome ConnectClient::CreateContactFlow(const CreateContactFlowRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlow", "Required field: InstanceId, is not set");
    return CreateContactFlowOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateContactFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateContactFlowModuleOutcome ConnectClient::CreateContactFlowModule(const CreateContactFlowModuleRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContactFlowModule", "Required field: InstanceId, is not set");
    return CreateContactFlowModuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateContactFlowModuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateContactFlowModuleAliasOutcome ConnectClient::CreateContactFlowModuleAlias(const CreateContactFlowModuleAliasRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alias");
  };

  return CreateContactFlowModuleAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateContactFlowModuleVersionOutcome ConnectClient::CreateContactFlowModuleVersion(
    const CreateContactFlowModuleVersionRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version");
  };

  return CreateContactFlowModuleVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateContactFlowVersionOutcome ConnectClient::CreateContactFlowVersion(const CreateContactFlowVersionRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version");
  };

  return CreateContactFlowVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateDataTableOutcome ConnectClient::CreateDataTable(const CreateDataTableRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataTable", "Required field: InstanceId, is not set");
    return CreateDataTableOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateDataTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateDataTableAttributeOutcome ConnectClient::CreateDataTableAttribute(const CreateDataTableAttributeRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes");
  };

  return CreateDataTableAttributeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateEmailAddressOutcome ConnectClient::CreateEmailAddress(const CreateEmailAddressRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEmailAddress", "Required field: InstanceId, is not set");
    return CreateEmailAddressOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/email-addresses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateEmailAddressOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateEvaluationFormOutcome ConnectClient::CreateEvaluationForm(const CreateEvaluationFormRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEvaluationForm", "Required field: InstanceId, is not set");
    return CreateEvaluationFormOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateEvaluationFormOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateHoursOfOperationOutcome ConnectClient::CreateHoursOfOperation(const CreateHoursOfOperationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateHoursOfOperation", "Required field: InstanceId, is not set");
    return CreateHoursOfOperationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateHoursOfOperationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateHoursOfOperationOverrideOutcome ConnectClient::CreateHoursOfOperationOverride(
    const CreateHoursOfOperationOverrideRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/overrides");
  };

  return CreateHoursOfOperationOverrideOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateInstanceOutcome ConnectClient::CreateInstance(const CreateInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance");
  };

  return CreateInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateIntegrationAssociationOutcome ConnectClient::CreateIntegrationAssociation(const CreateIntegrationAssociationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIntegrationAssociation", "Required field: InstanceId, is not set");
    return CreateIntegrationAssociationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations");
  };

  return CreateIntegrationAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateNotificationOutcome ConnectClient::CreateNotification(const CreateNotificationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateNotification", "Required field: InstanceId, is not set");
    return CreateNotificationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notifications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateNotificationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateParticipantOutcome ConnectClient::CreateParticipant(const CreateParticipantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/create-participant");
  };

  return CreateParticipantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePersistentContactAssociationOutcome ConnectClient::CreatePersistentContactAssociation(
    const CreatePersistentContactAssociationRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/persistent-contact-association/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInitialContactId());
  };

  return CreatePersistentContactAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePredefinedAttributeOutcome ConnectClient::CreatePredefinedAttribute(const CreatePredefinedAttributeRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePredefinedAttribute", "Required field: InstanceId, is not set");
    return CreatePredefinedAttributeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/predefined-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreatePredefinedAttributeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreatePromptOutcome ConnectClient::CreatePrompt(const CreatePromptRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePrompt", "Required field: InstanceId, is not set");
    return CreatePromptOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreatePromptOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreatePushNotificationRegistrationOutcome ConnectClient::CreatePushNotificationRegistration(
    const CreatePushNotificationRegistrationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePushNotificationRegistration", "Required field: InstanceId, is not set");
    return CreatePushNotificationRegistrationOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/push-notification/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/registrations");
  };

  return CreatePushNotificationRegistrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateQueueOutcome ConnectClient::CreateQueue(const CreateQueueRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQueue", "Required field: InstanceId, is not set");
    return CreateQueueOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateQuickConnectOutcome ConnectClient::CreateQuickConnect(const CreateQuickConnectRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQuickConnect", "Required field: InstanceId, is not set");
    return CreateQuickConnectOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateQuickConnectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateRoutingProfileOutcome ConnectClient::CreateRoutingProfile(const CreateRoutingProfileRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoutingProfile", "Required field: InstanceId, is not set");
    return CreateRoutingProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateRoutingProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateRuleOutcome ConnectClient::CreateRule(const CreateRuleRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRule", "Required field: InstanceId, is not set");
    return CreateRuleOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSecurityProfileOutcome ConnectClient::CreateSecurityProfile(const CreateSecurityProfileRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSecurityProfile", "Required field: InstanceId, is not set");
    return CreateSecurityProfileOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateSecurityProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateTaskTemplateOutcome ConnectClient::CreateTaskTemplate(const CreateTaskTemplateRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTaskTemplate", "Required field: InstanceId, is not set");
    return CreateTaskTemplateOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/task/template");
  };

  return CreateTaskTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateTestCaseOutcome ConnectClient::CreateTestCase(const CreateTestCaseRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTestCase", "Required field: InstanceId, is not set");
    return CreateTestCaseOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateTestCaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateTrafficDistributionGroupOutcome ConnectClient::CreateTrafficDistributionGroup(
    const CreateTrafficDistributionGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group");
  };

  return CreateTrafficDistributionGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateUseCaseOutcome ConnectClient::CreateUseCase(const CreateUseCaseRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/use-cases");
  };

  return CreateUseCaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateUserOutcome ConnectClient::CreateUser(const CreateUserRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: InstanceId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateUserHierarchyGroupOutcome ConnectClient::CreateUserHierarchyGroup(const CreateUserHierarchyGroupRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUserHierarchyGroup", "Required field: InstanceId, is not set");
    return CreateUserHierarchyGroupOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateUserHierarchyGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateViewOutcome ConnectClient::CreateView(const CreateViewRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateView", "Required field: InstanceId, is not set");
    return CreateViewOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateViewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateViewVersionOutcome ConnectClient::CreateViewVersion(const CreateViewVersionRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/views/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetViewId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateViewVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateVocabularyOutcome ConnectClient::CreateVocabulary(const CreateVocabularyRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVocabulary", "Required field: InstanceId, is not set");
    return CreateVocabularyOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vocabulary/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateVocabularyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkspaceOutcome ConnectClient::CreateWorkspace(const CreateWorkspaceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkspace", "Required field: InstanceId, is not set");
    return CreateWorkspaceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return CreateWorkspaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateWorkspacePageOutcome ConnectClient::CreateWorkspacePage(const CreateWorkspacePageRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pages");
  };

  return CreateWorkspacePageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

DeactivateEvaluationFormOutcome ConnectClient::DeactivateEvaluationForm(const DeactivateEvaluationFormRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deactivate");
  };

  return DeactivateEvaluationFormOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAttachedFileOutcome ConnectClient::DeleteAttachedFile(const DeleteAttachedFileRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attached-files/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileId());
  };

  return DeleteAttachedFileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContactEvaluationOutcome ConnectClient::DeleteContactEvaluation(const DeleteContactEvaluationRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-evaluations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationId());
  };

  return DeleteContactEvaluationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContactFlowOutcome ConnectClient::DeleteContactFlow(const DeleteContactFlowRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
  };

  return DeleteContactFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContactFlowModuleOutcome ConnectClient::DeleteContactFlowModule(const DeleteContactFlowModuleRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
  };

  return DeleteContactFlowModuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContactFlowModuleAliasOutcome ConnectClient::DeleteContactFlowModuleAlias(const DeleteContactFlowModuleAliasRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alias/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasId());
  };

  return DeleteContactFlowModuleAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContactFlowModuleVersionOutcome ConnectClient::DeleteContactFlowModuleVersion(
    const DeleteContactFlowModuleVersionRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flow-modules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowModuleVersion());
  };

  return DeleteContactFlowModuleVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContactFlowVersionOutcome ConnectClient::DeleteContactFlowVersion(const DeleteContactFlowVersionRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactFlowVersion());
  };

  return DeleteContactFlowVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataTableOutcome ConnectClient::DeleteDataTable(const DeleteDataTableRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
  };

  return DeleteDataTableOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataTableAttributeOutcome ConnectClient::DeleteDataTableAttribute(const DeleteDataTableAttributeRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-tables/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataTableId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeName());
  };

  return DeleteDataTableAttributeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEmailAddressOutcome ConnectClient::DeleteEmailAddress(const DeleteEmailAddressRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/email-addresses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddressId());
  };

  return DeleteEmailAddressOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEvaluationFormOutcome ConnectClient::DeleteEvaluationForm(const DeleteEvaluationFormRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluation-forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluationFormId());
  };

  return DeleteEvaluationFormOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteHoursOfOperationOutcome ConnectClient::DeleteHoursOfOperation(const DeleteHoursOfOperationRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
  };

  return DeleteHoursOfOperationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteHoursOfOperationOverrideOutcome ConnectClient::DeleteHoursOfOperationOverride(
    const DeleteHoursOfOperationOverrideRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/hours-of-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/overrides/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHoursOfOperationOverrideId());
  };

  return DeleteHoursOfOperationOverrideOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInstanceOutcome ConnectClient::DeleteInstance(const DeleteInstanceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInstance", "Required field: InstanceId, is not set");
    return DeleteInstanceOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  return DeleteInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIntegrationAssociationOutcome ConnectClient::DeleteIntegrationAssociation(const DeleteIntegrationAssociationRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
  };

  return DeleteIntegrationAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteNotificationOutcome ConnectClient::DeleteNotification(const DeleteNotificationRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNotification", "Required field: InstanceId, is not set");
    return DeleteNotificationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }
  if (!request.NotificationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNotification", "Required field: NotificationId, is not set");
    return DeleteNotificationOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [NotificationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notifications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNotificationId());
  };

  return DeleteNotificationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePredefinedAttributeOutcome ConnectClient::DeletePredefinedAttribute(const DeletePredefinedAttributeRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/predefined-attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeletePredefinedAttributeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePromptOutcome ConnectClient::DeletePrompt(const DeletePromptRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPromptId());
  };

  return DeletePromptOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePushNotificationRegistrationOutcome ConnectClient::DeletePushNotificationRegistration(
    const DeletePushNotificationRegistrationRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/push-notification/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/registrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistrationId());
  };

  return DeletePushNotificationRegistrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteQueueOutcome ConnectClient::DeleteQueue(const DeleteQueueRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queues/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueueId());
  };

  return DeleteQueueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteQuickConnectOutcome ConnectClient::DeleteQuickConnect(const DeleteQuickConnectRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/quick-connects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickConnectId());
  };

  return DeleteQuickConnectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRoutingProfileOutcome ConnectClient::DeleteRoutingProfile(const DeleteRoutingProfileRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoutingProfileId());
  };

  return DeleteRoutingProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRuleOutcome ConnectClient::DeleteRule(const DeleteRuleRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleId());
  };

  return DeleteRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSecurityProfileOutcome ConnectClient::DeleteSecurityProfile(const DeleteSecurityProfileRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileId());
  };

  return DeleteSecurityProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTaskTemplateOutcome ConnectClient::DeleteTaskTemplate(const DeleteTaskTemplateRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/task/template/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskTemplateId());
  };

  return DeleteTaskTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTestCaseOutcome ConnectClient::DeleteTestCase(const DeleteTestCaseRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/test-cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTestCaseId());
  };

  return DeleteTestCaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTrafficDistributionGroupOutcome ConnectClient::DeleteTrafficDistributionGroup(
    const DeleteTrafficDistributionGroupRequest& request) const {
  if (!request.TrafficDistributionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrafficDistributionGroup", "Required field: TrafficDistributionGroupId, is not set");
    return DeleteTrafficDistributionGroupOutcome(Aws::Client::AWSError<ConnectErrors>(
        ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrafficDistributionGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/traffic-distribution-group/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrafficDistributionGroupId());
  };

  return DeleteTrafficDistributionGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUseCaseOutcome ConnectClient::DeleteUseCase(const DeleteUseCaseRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/integration-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIntegrationAssociationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/use-cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUseCaseId());
  };

  return DeleteUseCaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserOutcome ConnectClient::DeleteUser(const DeleteUserRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return DeleteUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserHierarchyGroupOutcome ConnectClient::DeleteUserHierarchyGroup(const DeleteUserHierarchyGroupRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-hierarchy-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHierarchyGroupId());
  };

  return DeleteUserHierarchyGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}
