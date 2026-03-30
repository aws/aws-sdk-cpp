/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/ChatbotClient.h>
#include <aws/chatbot/ChatbotEndpointProvider.h>
#include <aws/chatbot/ChatbotErrorMarshaller.h>
#include <aws/chatbot/model/AssociateToConfigurationRequest.h>
#include <aws/chatbot/model/CreateChimeWebhookConfigurationRequest.h>
#include <aws/chatbot/model/CreateCustomActionRequest.h>
#include <aws/chatbot/model/CreateMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/chatbot/model/CreateSlackChannelConfigurationRequest.h>
#include <aws/chatbot/model/DeleteChimeWebhookConfigurationRequest.h>
#include <aws/chatbot/model/DeleteCustomActionRequest.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsConfiguredTeamRequest.h>
#include <aws/chatbot/model/DeleteMicrosoftTeamsUserIdentityRequest.h>
#include <aws/chatbot/model/DeleteSlackChannelConfigurationRequest.h>
#include <aws/chatbot/model/DeleteSlackUserIdentityRequest.h>
#include <aws/chatbot/model/DeleteSlackWorkspaceAuthorizationRequest.h>
#include <aws/chatbot/model/DescribeChimeWebhookConfigurationsRequest.h>
#include <aws/chatbot/model/DescribeSlackChannelConfigurationsRequest.h>
#include <aws/chatbot/model/DescribeSlackUserIdentitiesRequest.h>
#include <aws/chatbot/model/DescribeSlackWorkspacesRequest.h>
#include <aws/chatbot/model/DisassociateFromConfigurationRequest.h>
#include <aws/chatbot/model/GetAccountPreferencesRequest.h>
#include <aws/chatbot/model/GetCustomActionRequest.h>
#include <aws/chatbot/model/GetMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/chatbot/model/ListAssociationsRequest.h>
#include <aws/chatbot/model/ListCustomActionsRequest.h>
#include <aws/chatbot/model/ListMicrosoftTeamsChannelConfigurationsRequest.h>
#include <aws/chatbot/model/ListMicrosoftTeamsConfiguredTeamsRequest.h>
#include <aws/chatbot/model/ListMicrosoftTeamsUserIdentitiesRequest.h>
#include <aws/chatbot/model/ListTagsForResourceRequest.h>
#include <aws/chatbot/model/TagResourceRequest.h>
#include <aws/chatbot/model/UntagResourceRequest.h>
#include <aws/chatbot/model/UpdateAccountPreferencesRequest.h>
#include <aws/chatbot/model/UpdateChimeWebhookConfigurationRequest.h>
#include <aws/chatbot/model/UpdateCustomActionRequest.h>
#include <aws/chatbot/model/UpdateMicrosoftTeamsChannelConfigurationRequest.h>
#include <aws/chatbot/model/UpdateSlackChannelConfigurationRequest.h>
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
using namespace Aws::chatbot;
using namespace Aws::chatbot::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace chatbot {
const char SERVICE_NAME[] = "chatbot";
const char ALLOCATION_TAG[] = "ChatbotClient";
}  // namespace chatbot
}  // namespace Aws
const char* ChatbotClient::GetServiceName() { return SERVICE_NAME; }
const char* ChatbotClient::GetAllocationTag() { return ALLOCATION_TAG; }

ChatbotClient::ChatbotClient(const chatbot::ChatbotClientConfiguration& clientConfiguration,
                             std::shared_ptr<ChatbotEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChatbotErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChatbotEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChatbotClient::ChatbotClient(const AWSCredentials& credentials, std::shared_ptr<ChatbotEndpointProviderBase> endpointProvider,
                             const chatbot::ChatbotClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChatbotErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChatbotEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChatbotClient::ChatbotClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<ChatbotEndpointProviderBase> endpointProvider,
                             const chatbot::ChatbotClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChatbotErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChatbotEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ChatbotClient::ChatbotClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChatbotErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChatbotEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChatbotClient::ChatbotClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChatbotErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChatbotEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChatbotClient::ChatbotClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChatbotErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChatbotEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ChatbotClient::~ChatbotClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ChatbotEndpointProviderBase>& ChatbotClient::accessEndpointProvider() { return m_endpointProvider; }

void ChatbotClient::init(const chatbot::ChatbotClientConfiguration& config) {
  AWSClient::SetServiceClientName("chatbot");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "chatbot");
}

void ChatbotClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ChatbotClient::InvokeOperationOutcome ChatbotClient::InvokeServiceOperation(
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

AssociateToConfigurationOutcome ChatbotClient::AssociateToConfiguration(const AssociateToConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate-to-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateToConfigurationOutcome(result.GetResultWithOwnership())
                            : AssociateToConfigurationOutcome(std::move(result.GetError()));
}

CreateChimeWebhookConfigurationOutcome ChatbotClient::CreateChimeWebhookConfiguration(
    const CreateChimeWebhookConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-chime-webhook-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChimeWebhookConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateChimeWebhookConfigurationOutcome(std::move(result.GetError()));
}

CreateCustomActionOutcome ChatbotClient::CreateCustomAction(const CreateCustomActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-custom-action");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomActionOutcome(result.GetResultWithOwnership())
                            : CreateCustomActionOutcome(std::move(result.GetError()));
}

CreateMicrosoftTeamsChannelConfigurationOutcome ChatbotClient::CreateMicrosoftTeamsChannelConfiguration(
    const CreateMicrosoftTeamsChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-ms-teams-channel-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMicrosoftTeamsChannelConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateMicrosoftTeamsChannelConfigurationOutcome(std::move(result.GetError()));
}

CreateSlackChannelConfigurationOutcome ChatbotClient::CreateSlackChannelConfiguration(
    const CreateSlackChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-slack-channel-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSlackChannelConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateSlackChannelConfigurationOutcome(std::move(result.GetError()));
}

DeleteChimeWebhookConfigurationOutcome ChatbotClient::DeleteChimeWebhookConfiguration(
    const DeleteChimeWebhookConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-chime-webhook-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteChimeWebhookConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteChimeWebhookConfigurationOutcome(std::move(result.GetError()));
}

DeleteCustomActionOutcome ChatbotClient::DeleteCustomAction(const DeleteCustomActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-custom-action");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCustomActionOutcome(result.GetResultWithOwnership())
                            : DeleteCustomActionOutcome(std::move(result.GetError()));
}

DeleteMicrosoftTeamsChannelConfigurationOutcome ChatbotClient::DeleteMicrosoftTeamsChannelConfiguration(
    const DeleteMicrosoftTeamsChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-ms-teams-channel-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMicrosoftTeamsChannelConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteMicrosoftTeamsChannelConfigurationOutcome(std::move(result.GetError()));
}

DeleteMicrosoftTeamsConfiguredTeamOutcome ChatbotClient::DeleteMicrosoftTeamsConfiguredTeam(
    const DeleteMicrosoftTeamsConfiguredTeamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-ms-teams-configured-teams");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMicrosoftTeamsConfiguredTeamOutcome(result.GetResultWithOwnership())
                            : DeleteMicrosoftTeamsConfiguredTeamOutcome(std::move(result.GetError()));
}

DeleteMicrosoftTeamsUserIdentityOutcome ChatbotClient::DeleteMicrosoftTeamsUserIdentity(
    const DeleteMicrosoftTeamsUserIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-ms-teams-user-identity");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMicrosoftTeamsUserIdentityOutcome(result.GetResultWithOwnership())
                            : DeleteMicrosoftTeamsUserIdentityOutcome(std::move(result.GetError()));
}

DeleteSlackChannelConfigurationOutcome ChatbotClient::DeleteSlackChannelConfiguration(
    const DeleteSlackChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-slack-channel-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSlackChannelConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteSlackChannelConfigurationOutcome(std::move(result.GetError()));
}

DeleteSlackUserIdentityOutcome ChatbotClient::DeleteSlackUserIdentity(const DeleteSlackUserIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-slack-user-identity");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSlackUserIdentityOutcome(result.GetResultWithOwnership())
                            : DeleteSlackUserIdentityOutcome(std::move(result.GetError()));
}

DeleteSlackWorkspaceAuthorizationOutcome ChatbotClient::DeleteSlackWorkspaceAuthorization(
    const DeleteSlackWorkspaceAuthorizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-slack-workspace-authorization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSlackWorkspaceAuthorizationOutcome(result.GetResultWithOwnership())
                            : DeleteSlackWorkspaceAuthorizationOutcome(std::move(result.GetError()));
}

DescribeChimeWebhookConfigurationsOutcome ChatbotClient::DescribeChimeWebhookConfigurations(
    const DescribeChimeWebhookConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-chime-webhook-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeChimeWebhookConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeChimeWebhookConfigurationsOutcome(std::move(result.GetError()));
}

DescribeSlackChannelConfigurationsOutcome ChatbotClient::DescribeSlackChannelConfigurations(
    const DescribeSlackChannelConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-slack-channel-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSlackChannelConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeSlackChannelConfigurationsOutcome(std::move(result.GetError()));
}

DescribeSlackUserIdentitiesOutcome ChatbotClient::DescribeSlackUserIdentities(const DescribeSlackUserIdentitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-slack-user-identities");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSlackUserIdentitiesOutcome(result.GetResultWithOwnership())
                            : DescribeSlackUserIdentitiesOutcome(std::move(result.GetError()));
}

DescribeSlackWorkspacesOutcome ChatbotClient::DescribeSlackWorkspaces(const DescribeSlackWorkspacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-slack-workspaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSlackWorkspacesOutcome(result.GetResultWithOwnership())
                            : DescribeSlackWorkspacesOutcome(std::move(result.GetError()));
}

DisassociateFromConfigurationOutcome ChatbotClient::DisassociateFromConfiguration(
    const DisassociateFromConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-from-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateFromConfigurationOutcome(result.GetResultWithOwnership())
                            : DisassociateFromConfigurationOutcome(std::move(result.GetError()));
}

GetAccountPreferencesOutcome ChatbotClient::GetAccountPreferences(const GetAccountPreferencesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-account-preferences");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccountPreferencesOutcome(result.GetResultWithOwnership())
                            : GetAccountPreferencesOutcome(std::move(result.GetError()));
}

GetCustomActionOutcome ChatbotClient::GetCustomAction(const GetCustomActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-custom-action");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCustomActionOutcome(result.GetResultWithOwnership())
                            : GetCustomActionOutcome(std::move(result.GetError()));
}

GetMicrosoftTeamsChannelConfigurationOutcome ChatbotClient::GetMicrosoftTeamsChannelConfiguration(
    const GetMicrosoftTeamsChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-ms-teams-channel-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMicrosoftTeamsChannelConfigurationOutcome(result.GetResultWithOwnership())
                            : GetMicrosoftTeamsChannelConfigurationOutcome(std::move(result.GetError()));
}

ListAssociationsOutcome ChatbotClient::ListAssociations(const ListAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssociationsOutcome(result.GetResultWithOwnership())
                            : ListAssociationsOutcome(std::move(result.GetError()));
}

ListCustomActionsOutcome ChatbotClient::ListCustomActions(const ListCustomActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-custom-actions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCustomActionsOutcome(result.GetResultWithOwnership())
                            : ListCustomActionsOutcome(std::move(result.GetError()));
}

ListMicrosoftTeamsChannelConfigurationsOutcome ChatbotClient::ListMicrosoftTeamsChannelConfigurations(
    const ListMicrosoftTeamsChannelConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-ms-teams-channel-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMicrosoftTeamsChannelConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListMicrosoftTeamsChannelConfigurationsOutcome(std::move(result.GetError()));
}

ListMicrosoftTeamsConfiguredTeamsOutcome ChatbotClient::ListMicrosoftTeamsConfiguredTeams(
    const ListMicrosoftTeamsConfiguredTeamsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-ms-teams-configured-teams");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMicrosoftTeamsConfiguredTeamsOutcome(result.GetResultWithOwnership())
                            : ListMicrosoftTeamsConfiguredTeamsOutcome(std::move(result.GetError()));
}

ListMicrosoftTeamsUserIdentitiesOutcome ChatbotClient::ListMicrosoftTeamsUserIdentities(
    const ListMicrosoftTeamsUserIdentitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-ms-teams-user-identities");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMicrosoftTeamsUserIdentitiesOutcome(result.GetResultWithOwnership())
                            : ListMicrosoftTeamsUserIdentitiesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ChatbotClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-tags-for-resource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

TagResourceOutcome ChatbotClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tag-resource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ChatbotClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/untag-resource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAccountPreferencesOutcome ChatbotClient::UpdateAccountPreferences(const UpdateAccountPreferencesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-account-preferences");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAccountPreferencesOutcome(result.GetResultWithOwnership())
                            : UpdateAccountPreferencesOutcome(std::move(result.GetError()));
}

UpdateChimeWebhookConfigurationOutcome ChatbotClient::UpdateChimeWebhookConfiguration(
    const UpdateChimeWebhookConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-chime-webhook-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateChimeWebhookConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateChimeWebhookConfigurationOutcome(std::move(result.GetError()));
}

UpdateCustomActionOutcome ChatbotClient::UpdateCustomAction(const UpdateCustomActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-custom-action");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCustomActionOutcome(result.GetResultWithOwnership())
                            : UpdateCustomActionOutcome(std::move(result.GetError()));
}

UpdateMicrosoftTeamsChannelConfigurationOutcome ChatbotClient::UpdateMicrosoftTeamsChannelConfiguration(
    const UpdateMicrosoftTeamsChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-ms-teams-channel-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMicrosoftTeamsChannelConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateMicrosoftTeamsChannelConfigurationOutcome(std::move(result.GetError()));
}

UpdateSlackChannelConfigurationOutcome ChatbotClient::UpdateSlackChannelConfiguration(
    const UpdateSlackChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-slack-channel-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSlackChannelConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateSlackChannelConfigurationOutcome(std::move(result.GetError()));
}
