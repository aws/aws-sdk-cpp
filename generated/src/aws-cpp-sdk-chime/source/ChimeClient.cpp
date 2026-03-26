/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/ChimeClient.h>
#include <aws/chime/ChimeEndpointProvider.h>
#include <aws/chime/ChimeErrorMarshaller.h>
#include <aws/chime/model/AssociatePhoneNumberWithUserRequest.h>
#include <aws/chime/model/AssociateSigninDelegateGroupsWithAccountRequest.h>
#include <aws/chime/model/BatchCreateRoomMembershipRequest.h>
#include <aws/chime/model/BatchDeletePhoneNumberRequest.h>
#include <aws/chime/model/BatchSuspendUserRequest.h>
#include <aws/chime/model/BatchUnsuspendUserRequest.h>
#include <aws/chime/model/BatchUpdatePhoneNumberRequest.h>
#include <aws/chime/model/BatchUpdateUserRequest.h>
#include <aws/chime/model/CreateAccountRequest.h>
#include <aws/chime/model/CreateBotRequest.h>
#include <aws/chime/model/CreateMeetingDialOutRequest.h>
#include <aws/chime/model/CreatePhoneNumberOrderRequest.h>
#include <aws/chime/model/CreateRoomMembershipRequest.h>
#include <aws/chime/model/CreateRoomRequest.h>
#include <aws/chime/model/CreateUserRequest.h>
#include <aws/chime/model/DeleteAccountRequest.h>
#include <aws/chime/model/DeleteEventsConfigurationRequest.h>
#include <aws/chime/model/DeletePhoneNumberRequest.h>
#include <aws/chime/model/DeleteRoomMembershipRequest.h>
#include <aws/chime/model/DeleteRoomRequest.h>
#include <aws/chime/model/DisassociatePhoneNumberFromUserRequest.h>
#include <aws/chime/model/DisassociateSigninDelegateGroupsFromAccountRequest.h>
#include <aws/chime/model/GetAccountRequest.h>
#include <aws/chime/model/GetAccountSettingsRequest.h>
#include <aws/chime/model/GetBotRequest.h>
#include <aws/chime/model/GetEventsConfigurationRequest.h>
#include <aws/chime/model/GetGlobalSettingsRequest.h>
#include <aws/chime/model/GetPhoneNumberOrderRequest.h>
#include <aws/chime/model/GetPhoneNumberRequest.h>
#include <aws/chime/model/GetPhoneNumberSettingsRequest.h>
#include <aws/chime/model/GetRetentionSettingsRequest.h>
#include <aws/chime/model/GetRoomRequest.h>
#include <aws/chime/model/GetUserRequest.h>
#include <aws/chime/model/GetUserSettingsRequest.h>
#include <aws/chime/model/InviteUsersRequest.h>
#include <aws/chime/model/ListAccountsRequest.h>
#include <aws/chime/model/ListBotsRequest.h>
#include <aws/chime/model/ListPhoneNumberOrdersRequest.h>
#include <aws/chime/model/ListPhoneNumbersRequest.h>
#include <aws/chime/model/ListRoomMembershipsRequest.h>
#include <aws/chime/model/ListRoomsRequest.h>
#include <aws/chime/model/ListSupportedPhoneNumberCountriesRequest.h>
#include <aws/chime/model/ListUsersRequest.h>
#include <aws/chime/model/LogoutUserRequest.h>
#include <aws/chime/model/PutEventsConfigurationRequest.h>
#include <aws/chime/model/PutRetentionSettingsRequest.h>
#include <aws/chime/model/RedactConversationMessageRequest.h>
#include <aws/chime/model/RedactRoomMessageRequest.h>
#include <aws/chime/model/RegenerateSecurityTokenRequest.h>
#include <aws/chime/model/ResetPersonalPINRequest.h>
#include <aws/chime/model/RestorePhoneNumberRequest.h>
#include <aws/chime/model/SearchAvailablePhoneNumbersRequest.h>
#include <aws/chime/model/UpdateAccountRequest.h>
#include <aws/chime/model/UpdateAccountSettingsRequest.h>
#include <aws/chime/model/UpdateBotRequest.h>
#include <aws/chime/model/UpdateGlobalSettingsRequest.h>
#include <aws/chime/model/UpdatePhoneNumberRequest.h>
#include <aws/chime/model/UpdatePhoneNumberSettingsRequest.h>
#include <aws/chime/model/UpdateRoomMembershipRequest.h>
#include <aws/chime/model/UpdateRoomRequest.h>
#include <aws/chime/model/UpdateUserRequest.h>
#include <aws/chime/model/UpdateUserSettingsRequest.h>
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
using namespace Aws::Chime;
using namespace Aws::Chime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Chime {
const char SERVICE_NAME[] = "chime";
const char ALLOCATION_TAG[] = "ChimeClient";
}  // namespace Chime
}  // namespace Aws
const char* ChimeClient::GetServiceName() { return SERVICE_NAME; }
const char* ChimeClient::GetAllocationTag() { return ALLOCATION_TAG; }

ChimeClient::ChimeClient(const Chime::ChimeClientConfiguration& clientConfiguration,
                         std::shared_ptr<ChimeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeClient::ChimeClient(const AWSCredentials& credentials, std::shared_ptr<ChimeEndpointProviderBase> endpointProvider,
                         const Chime::ChimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeClient::ChimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<ChimeEndpointProviderBase> endpointProvider,
                         const Chime::ChimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ChimeClient::ChimeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeClient::ChimeClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ChimeClient::ChimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ChimeClient::~ChimeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ChimeEndpointProviderBase>& ChimeClient::accessEndpointProvider() { return m_endpointProvider; }

void ChimeClient::init(const Chime::ChimeClientConfiguration& config) {
  AWSClient::SetServiceClientName("Chime");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "chime");
}

void ChimeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ChimeClient::InvokeOperationOutcome ChimeClient::InvokeServiceOperation(
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

AssociatePhoneNumberWithUserOutcome ChimeClient::AssociatePhoneNumberWithUser(const AssociatePhoneNumberWithUserRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumberWithUser", "Required field: AccountId, is not set");
    return AssociatePhoneNumberWithUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumberWithUser", "Required field: UserId, is not set");
    return AssociatePhoneNumberWithUserOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    ss.str("?operation=associate-phone-number");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return AssociatePhoneNumberWithUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateSigninDelegateGroupsWithAccountOutcome ChimeClient::AssociateSigninDelegateGroupsWithAccount(
    const AssociateSigninDelegateGroupsWithAccountRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSigninDelegateGroupsWithAccount", "Required field: AccountId, is not set");
    return AssociateSigninDelegateGroupsWithAccountOutcome(Aws::Client::AWSError<ChimeErrors>(
        ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    ss.str("?operation=associate-signin-delegate-groups");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return AssociateSigninDelegateGroupsWithAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchCreateRoomMembershipOutcome ChimeClient::BatchCreateRoomMembership(const BatchCreateRoomMembershipRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateRoomMembership", "Required field: AccountId, is not set");
    return BatchCreateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateRoomMembership", "Required field: RoomId, is not set");
    return BatchCreateRoomMembershipOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
    ss.str("?operation=batch-create");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return BatchCreateRoomMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeletePhoneNumberOutcome ChimeClient::BatchDeletePhoneNumber(const BatchDeletePhoneNumberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
    ss.str("?operation=batch-delete");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return BatchDeletePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchSuspendUserOutcome ChimeClient::BatchSuspendUser(const BatchSuspendUserRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchSuspendUser", "Required field: AccountId, is not set");
    return BatchSuspendUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
    ss.str("?operation=suspend");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return BatchSuspendUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUnsuspendUserOutcome ChimeClient::BatchUnsuspendUser(const BatchUnsuspendUserRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUnsuspendUser", "Required field: AccountId, is not set");
    return BatchUnsuspendUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
    ss.str("?operation=unsuspend");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return BatchUnsuspendUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdatePhoneNumberOutcome ChimeClient::BatchUpdatePhoneNumber(const BatchUpdatePhoneNumberRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
    ss.str("?operation=batch-update");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return BatchUpdatePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateUserOutcome ChimeClient::BatchUpdateUser(const BatchUpdateUserRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateUser", "Required field: AccountId, is not set");
    return BatchUpdateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  return BatchUpdateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccountOutcome ChimeClient::CreateAccount(const CreateAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  };

  return CreateAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBotOutcome ChimeClient::CreateBot(const CreateBotRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBot", "Required field: AccountId, is not set");
    return CreateBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots");
  };

  return CreateBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMeetingDialOutOutcome ChimeClient::CreateMeetingDialOut(const CreateMeetingDialOutRequest& request) const {
  if (!request.MeetingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMeetingDialOut", "Required field: MeetingId, is not set");
    return CreateMeetingDialOutOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MeetingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dial-outs");
  };

  return CreateMeetingDialOutOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePhoneNumberOrderOutcome ChimeClient::CreatePhoneNumberOrder(const CreatePhoneNumberOrderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  };

  return CreatePhoneNumberOrderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRoomOutcome ChimeClient::CreateRoom(const CreateRoomRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoom", "Required field: AccountId, is not set");
    return CreateRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms");
  };

  return CreateRoomOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRoomMembershipOutcome ChimeClient::CreateRoomMembership(const CreateRoomMembershipRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoomMembership", "Required field: AccountId, is not set");
    return CreateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoomMembership", "Required field: RoomId, is not set");
    return CreateRoomMembershipOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  };

  return CreateRoomMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome ChimeClient::CreateUser(const CreateUserRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: AccountId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
    ss.str("?operation=create");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return CreateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccountOutcome ChimeClient::DeleteAccount(const DeleteAccountRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccount", "Required field: AccountId, is not set");
    return DeleteAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  return DeleteAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEventsConfigurationOutcome ChimeClient::DeleteEventsConfiguration(const DeleteEventsConfigurationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventsConfiguration", "Required field: AccountId, is not set");
    return DeleteEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventsConfiguration", "Required field: BotId, is not set");
    return DeleteEventsConfigurationOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events-configuration");
  };

  return DeleteEventsConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePhoneNumberOutcome ChimeClient::DeletePhoneNumber(const DeletePhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePhoneNumber", "Required field: PhoneNumberId, is not set");
    return DeletePhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  };

  return DeletePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRoomOutcome ChimeClient::DeleteRoom(const DeleteRoomRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoom", "Required field: AccountId, is not set");
    return DeleteRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoom", "Required field: RoomId, is not set");
    return DeleteRoomOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  };

  return DeleteRoomOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRoomMembershipOutcome ChimeClient::DeleteRoomMembership(const DeleteRoomMembershipRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoomMembership", "Required field: AccountId, is not set");
    return DeleteRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoomMembership", "Required field: RoomId, is not set");
    return DeleteRoomMembershipOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  if (!request.MemberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoomMembership", "Required field: MemberId, is not set");
    return DeleteRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MemberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  };

  return DeleteRoomMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociatePhoneNumberFromUserOutcome ChimeClient::DisassociatePhoneNumberFromUser(
    const DisassociatePhoneNumberFromUserRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumberFromUser", "Required field: AccountId, is not set");
    return DisassociatePhoneNumberFromUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumberFromUser", "Required field: UserId, is not set");
    return DisassociatePhoneNumberFromUserOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    ss.str("?operation=disassociate-phone-number");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return DisassociatePhoneNumberFromUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateSigninDelegateGroupsFromAccountOutcome ChimeClient::DisassociateSigninDelegateGroupsFromAccount(
    const DisassociateSigninDelegateGroupsFromAccountRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateSigninDelegateGroupsFromAccount", "Required field: AccountId, is not set");
    return DisassociateSigninDelegateGroupsFromAccountOutcome(Aws::Client::AWSError<ChimeErrors>(
        ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    ss.str("?operation=disassociate-signin-delegate-groups");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return DisassociateSigninDelegateGroupsFromAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountOutcome ChimeClient::GetAccount(const GetAccountRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccount", "Required field: AccountId, is not set");
    return GetAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  return GetAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAccountSettingsOutcome ChimeClient::GetAccountSettings(const GetAccountSettingsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAccountSettings", "Required field: AccountId, is not set");
    return GetAccountSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return GetAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBotOutcome ChimeClient::GetBot(const GetBotRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: AccountId, is not set");
    return GetBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                            "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: BotId, is not set");
    return GetBotOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  };

  return GetBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEventsConfigurationOutcome ChimeClient::GetEventsConfiguration(const GetEventsConfigurationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventsConfiguration", "Required field: AccountId, is not set");
    return GetEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventsConfiguration", "Required field: BotId, is not set");
    return GetEventsConfigurationOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events-configuration");
  };

  return GetEventsConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGlobalSettingsOutcome ChimeClient::GetGlobalSettings(const GetGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return GetGlobalSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPhoneNumberOutcome ChimeClient::GetPhoneNumber(const GetPhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPhoneNumber", "Required field: PhoneNumberId, is not set");
    return GetPhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  };

  return GetPhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPhoneNumberOrderOutcome ChimeClient::GetPhoneNumberOrder(const GetPhoneNumberOrderRequest& request) const {
  if (!request.PhoneNumberOrderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPhoneNumberOrder", "Required field: PhoneNumberOrderId, is not set");
    return GetPhoneNumberOrderOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PhoneNumberOrderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberOrderId());
  };

  return GetPhoneNumberOrderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPhoneNumberSettingsOutcome ChimeClient::GetPhoneNumberSettings(const GetPhoneNumberSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  };

  return GetPhoneNumberSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRetentionSettingsOutcome ChimeClient::GetRetentionSettings(const GetRetentionSettingsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRetentionSettings", "Required field: AccountId, is not set");
    return GetRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/retention-settings");
  };

  return GetRetentionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRoomOutcome ChimeClient::GetRoom(const GetRoomRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoom", "Required field: AccountId, is not set");
    return GetRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                             "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRoom", "Required field: RoomId, is not set");
    return GetRoomOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  };

  return GetRoomOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUserOutcome ChimeClient::GetUser(const GetUserRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: AccountId, is not set");
    return GetUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                             "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: UserId, is not set");
    return GetUserOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return GetUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUserSettingsOutcome ChimeClient::GetUserSettings(const GetUserSettingsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserSettings", "Required field: AccountId, is not set");
    return GetUserSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserSettings", "Required field: UserId, is not set");
    return GetUserSettingsOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return GetUserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

InviteUsersOutcome ChimeClient::InviteUsers(const InviteUsersRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InviteUsers", "Required field: AccountId, is not set");
    return InviteUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
    ss.str("?operation=add");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return InviteUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountsOutcome ChimeClient::ListAccounts(const ListAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  };

  return ListAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBotsOutcome ChimeClient::ListBots(const ListBotsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBots", "Required field: AccountId, is not set");
    return ListBotsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                              "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots");
  };

  return ListBotsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPhoneNumberOrdersOutcome ChimeClient::ListPhoneNumberOrders(const ListPhoneNumberOrdersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  };

  return ListPhoneNumberOrdersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPhoneNumbersOutcome ChimeClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  };

  return ListPhoneNumbersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRoomMembershipsOutcome ChimeClient::ListRoomMemberships(const ListRoomMembershipsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoomMemberships", "Required field: AccountId, is not set");
    return ListRoomMembershipsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoomMemberships", "Required field: RoomId, is not set");
    return ListRoomMembershipsOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  };

  return ListRoomMembershipsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRoomsOutcome ChimeClient::ListRooms(const ListRoomsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRooms", "Required field: AccountId, is not set");
    return ListRoomsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms");
  };

  return ListRoomsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSupportedPhoneNumberCountriesOutcome ChimeClient::ListSupportedPhoneNumberCountries(
    const ListSupportedPhoneNumberCountriesRequest& request) const {
  if (!request.ProductTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSupportedPhoneNumberCountries", "Required field: ProductType, is not set");
    return ListSupportedPhoneNumberCountriesOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                       "Missing required field [ProductType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-countries");
  };

  return ListSupportedPhoneNumberCountriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUsersOutcome ChimeClient::ListUsers(const ListUsersRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: AccountId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  return ListUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

LogoutUserOutcome ChimeClient::LogoutUser(const LogoutUserRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("LogoutUser", "Required field: AccountId, is not set");
    return LogoutUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("LogoutUser", "Required field: UserId, is not set");
    return LogoutUserOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    ss.str("?operation=logout");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return LogoutUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEventsConfigurationOutcome ChimeClient::PutEventsConfiguration(const PutEventsConfigurationRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEventsConfiguration", "Required field: AccountId, is not set");
    return PutEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEventsConfiguration", "Required field: BotId, is not set");
    return PutEventsConfigurationOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events-configuration");
  };

  return PutEventsConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutRetentionSettingsOutcome ChimeClient::PutRetentionSettings(const PutRetentionSettingsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRetentionSettings", "Required field: AccountId, is not set");
    return PutRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/retention-settings");
  };

  return PutRetentionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RedactConversationMessageOutcome ChimeClient::RedactConversationMessage(const RedactConversationMessageRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RedactConversationMessage", "Required field: AccountId, is not set");
    return RedactConversationMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AccountId]", false));
  }
  if (!request.ConversationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RedactConversationMessage", "Required field: ConversationId, is not set");
    return RedactConversationMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ConversationId]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RedactConversationMessage", "Required field: MessageId, is not set");
    return RedactConversationMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MessageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/conversations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConversationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
    ss.str("?operation=redact");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return RedactConversationMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RedactRoomMessageOutcome ChimeClient::RedactRoomMessage(const RedactRoomMessageRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RedactRoomMessage", "Required field: AccountId, is not set");
    return RedactRoomMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RedactRoomMessage", "Required field: RoomId, is not set");
    return RedactRoomMessageOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RedactRoomMessage", "Required field: MessageId, is not set");
    return RedactRoomMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [MessageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
    ss.str("?operation=redact");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return RedactRoomMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegenerateSecurityTokenOutcome ChimeClient::RegenerateSecurityToken(const RegenerateSecurityTokenRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegenerateSecurityToken", "Required field: AccountId, is not set");
    return RegenerateSecurityTokenOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegenerateSecurityToken", "Required field: BotId, is not set");
    return RegenerateSecurityTokenOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
    ss.str("?operation=regenerate-security-token");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return RegenerateSecurityTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetPersonalPINOutcome ChimeClient::ResetPersonalPIN(const ResetPersonalPINRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetPersonalPIN", "Required field: AccountId, is not set");
    return ResetPersonalPINOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetPersonalPIN", "Required field: UserId, is not set");
    return ResetPersonalPINOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    ss.str("?operation=reset-personal-pin");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return ResetPersonalPINOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RestorePhoneNumberOutcome ChimeClient::RestorePhoneNumber(const RestorePhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestorePhoneNumber", "Required field: PhoneNumberId, is not set");
    return RestorePhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
    ss.str("?operation=restore");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return RestorePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchAvailablePhoneNumbersOutcome ChimeClient::SearchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search");
    ss.str("?type=phone-numbers");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return SearchAvailablePhoneNumbersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

UpdateAccountOutcome ChimeClient::UpdateAccount(const UpdateAccountRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccount", "Required field: AccountId, is not set");
    return UpdateAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  return UpdateAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccountSettingsOutcome ChimeClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccountSettings", "Required field: AccountId, is not set");
    return UpdateAccountSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return UpdateAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateBotOutcome ChimeClient::UpdateBot(const UpdateBotRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: AccountId, is not set");
    return UpdateBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: BotId, is not set");
    return UpdateBotOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  };

  return UpdateBotOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGlobalSettingsOutcome ChimeClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return UpdateGlobalSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePhoneNumberOutcome ChimeClient::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const {
  if (!request.PhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePhoneNumber", "Required field: PhoneNumberId, is not set");
    return UpdatePhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [PhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  };

  return UpdatePhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePhoneNumberSettingsOutcome ChimeClient::UpdatePhoneNumberSettings(const UpdatePhoneNumberSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  };

  return UpdatePhoneNumberSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRoomOutcome ChimeClient::UpdateRoom(const UpdateRoomRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoom", "Required field: AccountId, is not set");
    return UpdateRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoom", "Required field: RoomId, is not set");
    return UpdateRoomOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  };

  return UpdateRoomOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRoomMembershipOutcome ChimeClient::UpdateRoomMembership(const UpdateRoomMembershipRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoomMembership", "Required field: AccountId, is not set");
    return UpdateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoomMembership", "Required field: RoomId, is not set");
    return UpdateRoomMembershipOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  if (!request.MemberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoomMembership", "Required field: MemberId, is not set");
    return UpdateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MemberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  };

  return UpdateRoomMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserOutcome ChimeClient::UpdateUser(const UpdateUserRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: AccountId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserId, is not set");
    return UpdateUserOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return UpdateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserSettingsOutcome ChimeClient::UpdateUserSettings(const UpdateUserSettingsRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUserSettings", "Required field: AccountId, is not set");
    return UpdateUserSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUserSettings", "Required field: UserId, is not set");
    return UpdateUserSettingsOutcome(
        Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return UpdateUserSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
