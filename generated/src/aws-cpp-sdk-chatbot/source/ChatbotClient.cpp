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

  return AssociateToConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateChimeWebhookConfigurationOutcome ChatbotClient::CreateChimeWebhookConfiguration(
    const CreateChimeWebhookConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-chime-webhook-configuration");
  };

  return CreateChimeWebhookConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomActionOutcome ChatbotClient::CreateCustomAction(const CreateCustomActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-custom-action");
  };

  return CreateCustomActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMicrosoftTeamsChannelConfigurationOutcome ChatbotClient::CreateMicrosoftTeamsChannelConfiguration(
    const CreateMicrosoftTeamsChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-ms-teams-channel-configuration");
  };

  return CreateMicrosoftTeamsChannelConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSlackChannelConfigurationOutcome ChatbotClient::CreateSlackChannelConfiguration(
    const CreateSlackChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-slack-channel-configuration");
  };

  return CreateSlackChannelConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteChimeWebhookConfigurationOutcome ChatbotClient::DeleteChimeWebhookConfiguration(
    const DeleteChimeWebhookConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-chime-webhook-configuration");
  };

  return DeleteChimeWebhookConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCustomActionOutcome ChatbotClient::DeleteCustomAction(const DeleteCustomActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-custom-action");
  };

  return DeleteCustomActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMicrosoftTeamsChannelConfigurationOutcome ChatbotClient::DeleteMicrosoftTeamsChannelConfiguration(
    const DeleteMicrosoftTeamsChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-ms-teams-channel-configuration");
  };

  return DeleteMicrosoftTeamsChannelConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMicrosoftTeamsConfiguredTeamOutcome ChatbotClient::DeleteMicrosoftTeamsConfiguredTeam(
    const DeleteMicrosoftTeamsConfiguredTeamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-ms-teams-configured-teams");
  };

  return DeleteMicrosoftTeamsConfiguredTeamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMicrosoftTeamsUserIdentityOutcome ChatbotClient::DeleteMicrosoftTeamsUserIdentity(
    const DeleteMicrosoftTeamsUserIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-ms-teams-user-identity");
  };

  return DeleteMicrosoftTeamsUserIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSlackChannelConfigurationOutcome ChatbotClient::DeleteSlackChannelConfiguration(
    const DeleteSlackChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-slack-channel-configuration");
  };

  return DeleteSlackChannelConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSlackUserIdentityOutcome ChatbotClient::DeleteSlackUserIdentity(const DeleteSlackUserIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-slack-user-identity");
  };

  return DeleteSlackUserIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSlackWorkspaceAuthorizationOutcome ChatbotClient::DeleteSlackWorkspaceAuthorization(
    const DeleteSlackWorkspaceAuthorizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-slack-workspace-authorization");
  };

  return DeleteSlackWorkspaceAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeChimeWebhookConfigurationsOutcome ChatbotClient::DescribeChimeWebhookConfigurations(
    const DescribeChimeWebhookConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-chime-webhook-configurations");
  };

  return DescribeChimeWebhookConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSlackChannelConfigurationsOutcome ChatbotClient::DescribeSlackChannelConfigurations(
    const DescribeSlackChannelConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-slack-channel-configurations");
  };

  return DescribeSlackChannelConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSlackUserIdentitiesOutcome ChatbotClient::DescribeSlackUserIdentities(const DescribeSlackUserIdentitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-slack-user-identities");
  };

  return DescribeSlackUserIdentitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSlackWorkspacesOutcome ChatbotClient::DescribeSlackWorkspaces(const DescribeSlackWorkspacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-slack-workspaces");
  };

  return DescribeSlackWorkspacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFromConfigurationOutcome ChatbotClient::DisassociateFromConfiguration(
    const DisassociateFromConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate-from-configuration");
  };

  return DisassociateFromConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountPreferencesOutcome ChatbotClient::GetAccountPreferences(const GetAccountPreferencesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-account-preferences");
  };

  return GetAccountPreferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCustomActionOutcome ChatbotClient::GetCustomAction(const GetCustomActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-custom-action");
  };

  return GetCustomActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMicrosoftTeamsChannelConfigurationOutcome ChatbotClient::GetMicrosoftTeamsChannelConfiguration(
    const GetMicrosoftTeamsChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-ms-teams-channel-configuration");
  };

  return GetMicrosoftTeamsChannelConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssociationsOutcome ChatbotClient::ListAssociations(const ListAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-associations");
  };

  return ListAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomActionsOutcome ChatbotClient::ListCustomActions(const ListCustomActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-custom-actions");
  };

  return ListCustomActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMicrosoftTeamsChannelConfigurationsOutcome ChatbotClient::ListMicrosoftTeamsChannelConfigurations(
    const ListMicrosoftTeamsChannelConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-ms-teams-channel-configurations");
  };

  return ListMicrosoftTeamsChannelConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMicrosoftTeamsConfiguredTeamsOutcome ChatbotClient::ListMicrosoftTeamsConfiguredTeams(
    const ListMicrosoftTeamsConfiguredTeamsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-ms-teams-configured-teams");
  };

  return ListMicrosoftTeamsConfiguredTeamsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMicrosoftTeamsUserIdentitiesOutcome ChatbotClient::ListMicrosoftTeamsUserIdentities(
    const ListMicrosoftTeamsUserIdentitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-ms-teams-user-identities");
  };

  return ListMicrosoftTeamsUserIdentitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ChatbotClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-tags-for-resource");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ChatbotClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tag-resource");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ChatbotClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/untag-resource");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccountPreferencesOutcome ChatbotClient::UpdateAccountPreferences(const UpdateAccountPreferencesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-account-preferences");
  };

  return UpdateAccountPreferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateChimeWebhookConfigurationOutcome ChatbotClient::UpdateChimeWebhookConfiguration(
    const UpdateChimeWebhookConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-chime-webhook-configuration");
  };

  return UpdateChimeWebhookConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCustomActionOutcome ChatbotClient::UpdateCustomAction(const UpdateCustomActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-custom-action");
  };

  return UpdateCustomActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMicrosoftTeamsChannelConfigurationOutcome ChatbotClient::UpdateMicrosoftTeamsChannelConfiguration(
    const UpdateMicrosoftTeamsChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-ms-teams-channel-configuration");
  };

  return UpdateMicrosoftTeamsChannelConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSlackChannelConfigurationOutcome ChatbotClient::UpdateSlackChannelConfiguration(
    const UpdateSlackChannelConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-slack-channel-configuration");
  };

  return UpdateSlackChannelConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
