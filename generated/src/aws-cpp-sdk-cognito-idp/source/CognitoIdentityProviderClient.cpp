/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/CognitoIdentityProviderClient.h>
#include <aws/cognito-idp/CognitoIdentityProviderEndpointProvider.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrorMarshaller.h>
#include <aws/cognito-idp/model/AddCustomAttributesRequest.h>
#include <aws/cognito-idp/model/AddUserPoolClientSecretRequest.h>
#include <aws/cognito-idp/model/AdminAddUserToGroupRequest.h>
#include <aws/cognito-idp/model/AdminConfirmSignUpRequest.h>
#include <aws/cognito-idp/model/AdminCreateUserRequest.h>
#include <aws/cognito-idp/model/AdminDeleteUserAttributesRequest.h>
#include <aws/cognito-idp/model/AdminDeleteUserRequest.h>
#include <aws/cognito-idp/model/AdminDisableProviderForUserRequest.h>
#include <aws/cognito-idp/model/AdminDisableUserRequest.h>
#include <aws/cognito-idp/model/AdminEnableUserRequest.h>
#include <aws/cognito-idp/model/AdminForgetDeviceRequest.h>
#include <aws/cognito-idp/model/AdminGetDeviceRequest.h>
#include <aws/cognito-idp/model/AdminGetUserRequest.h>
#include <aws/cognito-idp/model/AdminInitiateAuthRequest.h>
#include <aws/cognito-idp/model/AdminLinkProviderForUserRequest.h>
#include <aws/cognito-idp/model/AdminListDevicesRequest.h>
#include <aws/cognito-idp/model/AdminListGroupsForUserRequest.h>
#include <aws/cognito-idp/model/AdminListUserAuthEventsRequest.h>
#include <aws/cognito-idp/model/AdminRemoveUserFromGroupRequest.h>
#include <aws/cognito-idp/model/AdminResetUserPasswordRequest.h>
#include <aws/cognito-idp/model/AdminRespondToAuthChallengeRequest.h>
#include <aws/cognito-idp/model/AdminSetUserMFAPreferenceRequest.h>
#include <aws/cognito-idp/model/AdminSetUserPasswordRequest.h>
#include <aws/cognito-idp/model/AdminSetUserSettingsRequest.h>
#include <aws/cognito-idp/model/AdminUpdateAuthEventFeedbackRequest.h>
#include <aws/cognito-idp/model/AdminUpdateDeviceStatusRequest.h>
#include <aws/cognito-idp/model/AdminUpdateUserAttributesRequest.h>
#include <aws/cognito-idp/model/AdminUserGlobalSignOutRequest.h>
#include <aws/cognito-idp/model/AssociateSoftwareTokenRequest.h>
#include <aws/cognito-idp/model/ChangePasswordRequest.h>
#include <aws/cognito-idp/model/CompleteWebAuthnRegistrationRequest.h>
#include <aws/cognito-idp/model/ConfirmDeviceRequest.h>
#include <aws/cognito-idp/model/ConfirmForgotPasswordRequest.h>
#include <aws/cognito-idp/model/ConfirmSignUpRequest.h>
#include <aws/cognito-idp/model/CreateGroupRequest.h>
#include <aws/cognito-idp/model/CreateIdentityProviderRequest.h>
#include <aws/cognito-idp/model/CreateManagedLoginBrandingRequest.h>
#include <aws/cognito-idp/model/CreateResourceServerRequest.h>
#include <aws/cognito-idp/model/CreateTermsRequest.h>
#include <aws/cognito-idp/model/CreateUserImportJobRequest.h>
#include <aws/cognito-idp/model/CreateUserPoolClientRequest.h>
#include <aws/cognito-idp/model/CreateUserPoolDomainRequest.h>
#include <aws/cognito-idp/model/CreateUserPoolRequest.h>
#include <aws/cognito-idp/model/DeleteGroupRequest.h>
#include <aws/cognito-idp/model/DeleteIdentityProviderRequest.h>
#include <aws/cognito-idp/model/DeleteManagedLoginBrandingRequest.h>
#include <aws/cognito-idp/model/DeleteResourceServerRequest.h>
#include <aws/cognito-idp/model/DeleteTermsRequest.h>
#include <aws/cognito-idp/model/DeleteUserAttributesRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolClientRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolClientSecretRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolDomainRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolRequest.h>
#include <aws/cognito-idp/model/DeleteUserRequest.h>
#include <aws/cognito-idp/model/DeleteWebAuthnCredentialRequest.h>
#include <aws/cognito-idp/model/DescribeIdentityProviderRequest.h>
#include <aws/cognito-idp/model/DescribeManagedLoginBrandingByClientRequest.h>
#include <aws/cognito-idp/model/DescribeManagedLoginBrandingRequest.h>
#include <aws/cognito-idp/model/DescribeResourceServerRequest.h>
#include <aws/cognito-idp/model/DescribeRiskConfigurationRequest.h>
#include <aws/cognito-idp/model/DescribeTermsRequest.h>
#include <aws/cognito-idp/model/DescribeUserImportJobRequest.h>
#include <aws/cognito-idp/model/DescribeUserPoolClientRequest.h>
#include <aws/cognito-idp/model/DescribeUserPoolDomainRequest.h>
#include <aws/cognito-idp/model/DescribeUserPoolRequest.h>
#include <aws/cognito-idp/model/ForgetDeviceRequest.h>
#include <aws/cognito-idp/model/ForgotPasswordRequest.h>
#include <aws/cognito-idp/model/GetCSVHeaderRequest.h>
#include <aws/cognito-idp/model/GetDeviceRequest.h>
#include <aws/cognito-idp/model/GetGroupRequest.h>
#include <aws/cognito-idp/model/GetIdentityProviderByIdentifierRequest.h>
#include <aws/cognito-idp/model/GetLogDeliveryConfigurationRequest.h>
#include <aws/cognito-idp/model/GetSigningCertificateRequest.h>
#include <aws/cognito-idp/model/GetTokensFromRefreshTokenRequest.h>
#include <aws/cognito-idp/model/GetUICustomizationRequest.h>
#include <aws/cognito-idp/model/GetUserAttributeVerificationCodeRequest.h>
#include <aws/cognito-idp/model/GetUserAuthFactorsRequest.h>
#include <aws/cognito-idp/model/GetUserPoolMfaConfigRequest.h>
#include <aws/cognito-idp/model/GetUserRequest.h>
#include <aws/cognito-idp/model/GlobalSignOutRequest.h>
#include <aws/cognito-idp/model/InitiateAuthRequest.h>
#include <aws/cognito-idp/model/ListDevicesRequest.h>
#include <aws/cognito-idp/model/ListGroupsRequest.h>
#include <aws/cognito-idp/model/ListIdentityProvidersRequest.h>
#include <aws/cognito-idp/model/ListResourceServersRequest.h>
#include <aws/cognito-idp/model/ListTagsForResourceRequest.h>
#include <aws/cognito-idp/model/ListTermsRequest.h>
#include <aws/cognito-idp/model/ListUserImportJobsRequest.h>
#include <aws/cognito-idp/model/ListUserPoolClientSecretsRequest.h>
#include <aws/cognito-idp/model/ListUserPoolClientsRequest.h>
#include <aws/cognito-idp/model/ListUserPoolsRequest.h>
#include <aws/cognito-idp/model/ListUsersInGroupRequest.h>
#include <aws/cognito-idp/model/ListUsersRequest.h>
#include <aws/cognito-idp/model/ListWebAuthnCredentialsRequest.h>
#include <aws/cognito-idp/model/ResendConfirmationCodeRequest.h>
#include <aws/cognito-idp/model/RespondToAuthChallengeRequest.h>
#include <aws/cognito-idp/model/RevokeTokenRequest.h>
#include <aws/cognito-idp/model/SetLogDeliveryConfigurationRequest.h>
#include <aws/cognito-idp/model/SetRiskConfigurationRequest.h>
#include <aws/cognito-idp/model/SetUICustomizationRequest.h>
#include <aws/cognito-idp/model/SetUserMFAPreferenceRequest.h>
#include <aws/cognito-idp/model/SetUserPoolMfaConfigRequest.h>
#include <aws/cognito-idp/model/SetUserSettingsRequest.h>
#include <aws/cognito-idp/model/SignUpRequest.h>
#include <aws/cognito-idp/model/StartUserImportJobRequest.h>
#include <aws/cognito-idp/model/StartWebAuthnRegistrationRequest.h>
#include <aws/cognito-idp/model/StopUserImportJobRequest.h>
#include <aws/cognito-idp/model/TagResourceRequest.h>
#include <aws/cognito-idp/model/UntagResourceRequest.h>
#include <aws/cognito-idp/model/UpdateAuthEventFeedbackRequest.h>
#include <aws/cognito-idp/model/UpdateDeviceStatusRequest.h>
#include <aws/cognito-idp/model/UpdateGroupRequest.h>
#include <aws/cognito-idp/model/UpdateIdentityProviderRequest.h>
#include <aws/cognito-idp/model/UpdateManagedLoginBrandingRequest.h>
#include <aws/cognito-idp/model/UpdateResourceServerRequest.h>
#include <aws/cognito-idp/model/UpdateTermsRequest.h>
#include <aws/cognito-idp/model/UpdateUserAttributesRequest.h>
#include <aws/cognito-idp/model/UpdateUserPoolClientRequest.h>
#include <aws/cognito-idp/model/UpdateUserPoolDomainRequest.h>
#include <aws/cognito-idp/model/UpdateUserPoolRequest.h>
#include <aws/cognito-idp/model/VerifySoftwareTokenRequest.h>
#include <aws/cognito-idp/model/VerifyUserAttributeRequest.h>
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
using namespace Aws::CognitoIdentityProvider;
using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CognitoIdentityProvider {
const char SERVICE_NAME[] = "cognito-idp";
const char ALLOCATION_TAG[] = "CognitoIdentityProviderClient";
}  // namespace CognitoIdentityProvider
}  // namespace Aws
const char* CognitoIdentityProviderClient::GetServiceName() { return SERVICE_NAME; }
const char* CognitoIdentityProviderClient::GetAllocationTag() { return ALLOCATION_TAG; }

CognitoIdentityProviderClient::CognitoIdentityProviderClient(
    const CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration,
    std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(
    const AWSCredentials& credentials, std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider,
    const CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider,
    const CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CognitoIdentityProviderClient::CognitoIdentityProviderClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(const AWSCredentials& credentials,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CognitoIdentityProviderClient::~CognitoIdentityProviderClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CognitoIdentityProviderEndpointProviderBase>& CognitoIdentityProviderClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void CognitoIdentityProviderClient::init(const CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& config) {
  AWSClient::SetServiceClientName("Cognito Identity Provider");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cognito-idp");
}

void CognitoIdentityProviderClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CognitoIdentityProviderClient::InvokeOperationOutcome CognitoIdentityProviderClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddCustomAttributesOutcome CognitoIdentityProviderClient::AddCustomAttributes(const AddCustomAttributesRequest& request) const {
  return AddCustomAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddUserPoolClientSecretOutcome CognitoIdentityProviderClient::AddUserPoolClientSecret(const AddUserPoolClientSecretRequest& request) const {
  return AddUserPoolClientSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminAddUserToGroupOutcome CognitoIdentityProviderClient::AdminAddUserToGroup(const AdminAddUserToGroupRequest& request) const {
  return AdminAddUserToGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminConfirmSignUpOutcome CognitoIdentityProviderClient::AdminConfirmSignUp(const AdminConfirmSignUpRequest& request) const {
  return AdminConfirmSignUpOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminCreateUserOutcome CognitoIdentityProviderClient::AdminCreateUser(const AdminCreateUserRequest& request) const {
  return AdminCreateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminDeleteUserOutcome CognitoIdentityProviderClient::AdminDeleteUser(const AdminDeleteUserRequest& request) const {
  return AdminDeleteUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminDeleteUserAttributesOutcome CognitoIdentityProviderClient::AdminDeleteUserAttributes(
    const AdminDeleteUserAttributesRequest& request) const {
  return AdminDeleteUserAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminDisableProviderForUserOutcome CognitoIdentityProviderClient::AdminDisableProviderForUser(
    const AdminDisableProviderForUserRequest& request) const {
  return AdminDisableProviderForUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminDisableUserOutcome CognitoIdentityProviderClient::AdminDisableUser(const AdminDisableUserRequest& request) const {
  return AdminDisableUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminEnableUserOutcome CognitoIdentityProviderClient::AdminEnableUser(const AdminEnableUserRequest& request) const {
  return AdminEnableUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminForgetDeviceOutcome CognitoIdentityProviderClient::AdminForgetDevice(const AdminForgetDeviceRequest& request) const {
  return AdminForgetDeviceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminGetDeviceOutcome CognitoIdentityProviderClient::AdminGetDevice(const AdminGetDeviceRequest& request) const {
  return AdminGetDeviceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminGetUserOutcome CognitoIdentityProviderClient::AdminGetUser(const AdminGetUserRequest& request) const {
  return AdminGetUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminInitiateAuthOutcome CognitoIdentityProviderClient::AdminInitiateAuth(const AdminInitiateAuthRequest& request) const {
  return AdminInitiateAuthOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminLinkProviderForUserOutcome CognitoIdentityProviderClient::AdminLinkProviderForUser(
    const AdminLinkProviderForUserRequest& request) const {
  return AdminLinkProviderForUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminListDevicesOutcome CognitoIdentityProviderClient::AdminListDevices(const AdminListDevicesRequest& request) const {
  return AdminListDevicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminListGroupsForUserOutcome CognitoIdentityProviderClient::AdminListGroupsForUser(const AdminListGroupsForUserRequest& request) const {
  return AdminListGroupsForUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminListUserAuthEventsOutcome CognitoIdentityProviderClient::AdminListUserAuthEvents(const AdminListUserAuthEventsRequest& request) const {
  return AdminListUserAuthEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminRemoveUserFromGroupOutcome CognitoIdentityProviderClient::AdminRemoveUserFromGroup(
    const AdminRemoveUserFromGroupRequest& request) const {
  return AdminRemoveUserFromGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminResetUserPasswordOutcome CognitoIdentityProviderClient::AdminResetUserPassword(const AdminResetUserPasswordRequest& request) const {
  return AdminResetUserPasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminRespondToAuthChallengeOutcome CognitoIdentityProviderClient::AdminRespondToAuthChallenge(
    const AdminRespondToAuthChallengeRequest& request) const {
  return AdminRespondToAuthChallengeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminSetUserMFAPreferenceOutcome CognitoIdentityProviderClient::AdminSetUserMFAPreference(
    const AdminSetUserMFAPreferenceRequest& request) const {
  return AdminSetUserMFAPreferenceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminSetUserPasswordOutcome CognitoIdentityProviderClient::AdminSetUserPassword(const AdminSetUserPasswordRequest& request) const {
  return AdminSetUserPasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminSetUserSettingsOutcome CognitoIdentityProviderClient::AdminSetUserSettings(const AdminSetUserSettingsRequest& request) const {
  return AdminSetUserSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminUpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::AdminUpdateAuthEventFeedback(
    const AdminUpdateAuthEventFeedbackRequest& request) const {
  return AdminUpdateAuthEventFeedbackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminUpdateDeviceStatusOutcome CognitoIdentityProviderClient::AdminUpdateDeviceStatus(const AdminUpdateDeviceStatusRequest& request) const {
  return AdminUpdateDeviceStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminUpdateUserAttributesOutcome CognitoIdentityProviderClient::AdminUpdateUserAttributes(
    const AdminUpdateUserAttributesRequest& request) const {
  return AdminUpdateUserAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AdminUserGlobalSignOutOutcome CognitoIdentityProviderClient::AdminUserGlobalSignOut(const AdminUserGlobalSignOutRequest& request) const {
  return AdminUserGlobalSignOutOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateSoftwareTokenOutcome CognitoIdentityProviderClient::AssociateSoftwareToken(const AssociateSoftwareTokenRequest& request) const {
  return AssociateSoftwareTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ChangePasswordOutcome CognitoIdentityProviderClient::ChangePassword(const ChangePasswordRequest& request) const {
  return ChangePasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CompleteWebAuthnRegistrationOutcome CognitoIdentityProviderClient::CompleteWebAuthnRegistration(
    const CompleteWebAuthnRegistrationRequest& request) const {
  return CompleteWebAuthnRegistrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfirmDeviceOutcome CognitoIdentityProviderClient::ConfirmDevice(const ConfirmDeviceRequest& request) const {
  return ConfirmDeviceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfirmForgotPasswordOutcome CognitoIdentityProviderClient::ConfirmForgotPassword(const ConfirmForgotPasswordRequest& request) const {
  return ConfirmForgotPasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConfirmSignUpOutcome CognitoIdentityProviderClient::ConfirmSignUp(const ConfirmSignUpRequest& request) const {
  return ConfirmSignUpOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupOutcome CognitoIdentityProviderClient::CreateGroup(const CreateGroupRequest& request) const {
  return CreateGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIdentityProviderOutcome CognitoIdentityProviderClient::CreateIdentityProvider(const CreateIdentityProviderRequest& request) const {
  return CreateIdentityProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateManagedLoginBrandingOutcome CognitoIdentityProviderClient::CreateManagedLoginBranding(
    const CreateManagedLoginBrandingRequest& request) const {
  return CreateManagedLoginBrandingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceServerOutcome CognitoIdentityProviderClient::CreateResourceServer(const CreateResourceServerRequest& request) const {
  return CreateResourceServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTermsOutcome CognitoIdentityProviderClient::CreateTerms(const CreateTermsRequest& request) const {
  return CreateTermsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserImportJobOutcome CognitoIdentityProviderClient::CreateUserImportJob(const CreateUserImportJobRequest& request) const {
  return CreateUserImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserPoolOutcome CognitoIdentityProviderClient::CreateUserPool(const CreateUserPoolRequest& request) const {
  return CreateUserPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserPoolClientOutcome CognitoIdentityProviderClient::CreateUserPoolClient(const CreateUserPoolClientRequest& request) const {
  return CreateUserPoolClientOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserPoolDomainOutcome CognitoIdentityProviderClient::CreateUserPoolDomain(const CreateUserPoolDomainRequest& request) const {
  return CreateUserPoolDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGroupOutcome CognitoIdentityProviderClient::DeleteGroup(const DeleteGroupRequest& request) const {
  return DeleteGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIdentityProviderOutcome CognitoIdentityProviderClient::DeleteIdentityProvider(const DeleteIdentityProviderRequest& request) const {
  return DeleteIdentityProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteManagedLoginBrandingOutcome CognitoIdentityProviderClient::DeleteManagedLoginBranding(
    const DeleteManagedLoginBrandingRequest& request) const {
  return DeleteManagedLoginBrandingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourceServerOutcome CognitoIdentityProviderClient::DeleteResourceServer(const DeleteResourceServerRequest& request) const {
  return DeleteResourceServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTermsOutcome CognitoIdentityProviderClient::DeleteTerms(const DeleteTermsRequest& request) const {
  return DeleteTermsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserOutcome CognitoIdentityProviderClient::DeleteUser(const DeleteUserRequest& request) const {
  return DeleteUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserAttributesOutcome CognitoIdentityProviderClient::DeleteUserAttributes(const DeleteUserAttributesRequest& request) const {
  return DeleteUserAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserPoolOutcome CognitoIdentityProviderClient::DeleteUserPool(const DeleteUserPoolRequest& request) const {
  return DeleteUserPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserPoolClientOutcome CognitoIdentityProviderClient::DeleteUserPoolClient(const DeleteUserPoolClientRequest& request) const {
  return DeleteUserPoolClientOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserPoolClientSecretOutcome CognitoIdentityProviderClient::DeleteUserPoolClientSecret(
    const DeleteUserPoolClientSecretRequest& request) const {
  return DeleteUserPoolClientSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserPoolDomainOutcome CognitoIdentityProviderClient::DeleteUserPoolDomain(const DeleteUserPoolDomainRequest& request) const {
  return DeleteUserPoolDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWebAuthnCredentialOutcome CognitoIdentityProviderClient::DeleteWebAuthnCredential(
    const DeleteWebAuthnCredentialRequest& request) const {
  return DeleteWebAuthnCredentialOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIdentityProviderOutcome CognitoIdentityProviderClient::DescribeIdentityProvider(
    const DescribeIdentityProviderRequest& request) const {
  return DescribeIdentityProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeManagedLoginBrandingOutcome CognitoIdentityProviderClient::DescribeManagedLoginBranding(
    const DescribeManagedLoginBrandingRequest& request) const {
  return DescribeManagedLoginBrandingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeManagedLoginBrandingByClientOutcome CognitoIdentityProviderClient::DescribeManagedLoginBrandingByClient(
    const DescribeManagedLoginBrandingByClientRequest& request) const {
  return DescribeManagedLoginBrandingByClientOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourceServerOutcome CognitoIdentityProviderClient::DescribeResourceServer(const DescribeResourceServerRequest& request) const {
  return DescribeResourceServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRiskConfigurationOutcome CognitoIdentityProviderClient::DescribeRiskConfiguration(
    const DescribeRiskConfigurationRequest& request) const {
  return DescribeRiskConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTermsOutcome CognitoIdentityProviderClient::DescribeTerms(const DescribeTermsRequest& request) const {
  return DescribeTermsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserImportJobOutcome CognitoIdentityProviderClient::DescribeUserImportJob(const DescribeUserImportJobRequest& request) const {
  return DescribeUserImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserPoolOutcome CognitoIdentityProviderClient::DescribeUserPool(const DescribeUserPoolRequest& request) const {
  return DescribeUserPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserPoolClientOutcome CognitoIdentityProviderClient::DescribeUserPoolClient(const DescribeUserPoolClientRequest& request) const {
  return DescribeUserPoolClientOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserPoolDomainOutcome CognitoIdentityProviderClient::DescribeUserPoolDomain(const DescribeUserPoolDomainRequest& request) const {
  return DescribeUserPoolDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ForgetDeviceOutcome CognitoIdentityProviderClient::ForgetDevice(const ForgetDeviceRequest& request) const {
  return ForgetDeviceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ForgotPasswordOutcome CognitoIdentityProviderClient::ForgotPassword(const ForgotPasswordRequest& request) const {
  return ForgotPasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCSVHeaderOutcome CognitoIdentityProviderClient::GetCSVHeader(const GetCSVHeaderRequest& request) const {
  return GetCSVHeaderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeviceOutcome CognitoIdentityProviderClient::GetDevice(const GetDeviceRequest& request) const {
  return GetDeviceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGroupOutcome CognitoIdentityProviderClient::GetGroup(const GetGroupRequest& request) const {
  return GetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdentityProviderByIdentifierOutcome CognitoIdentityProviderClient::GetIdentityProviderByIdentifier(
    const GetIdentityProviderByIdentifierRequest& request) const {
  return GetIdentityProviderByIdentifierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLogDeliveryConfigurationOutcome CognitoIdentityProviderClient::GetLogDeliveryConfiguration(
    const GetLogDeliveryConfigurationRequest& request) const {
  return GetLogDeliveryConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSigningCertificateOutcome CognitoIdentityProviderClient::GetSigningCertificate(const GetSigningCertificateRequest& request) const {
  return GetSigningCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTokensFromRefreshTokenOutcome CognitoIdentityProviderClient::GetTokensFromRefreshToken(
    const GetTokensFromRefreshTokenRequest& request) const {
  return GetTokensFromRefreshTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUICustomizationOutcome CognitoIdentityProviderClient::GetUICustomization(const GetUICustomizationRequest& request) const {
  return GetUICustomizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUserOutcome CognitoIdentityProviderClient::GetUser(const GetUserRequest& request) const {
  return GetUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUserAttributeVerificationCodeOutcome CognitoIdentityProviderClient::GetUserAttributeVerificationCode(
    const GetUserAttributeVerificationCodeRequest& request) const {
  return GetUserAttributeVerificationCodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUserAuthFactorsOutcome CognitoIdentityProviderClient::GetUserAuthFactors(const GetUserAuthFactorsRequest& request) const {
  return GetUserAuthFactorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::GetUserPoolMfaConfig(const GetUserPoolMfaConfigRequest& request) const {
  return GetUserPoolMfaConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GlobalSignOutOutcome CognitoIdentityProviderClient::GlobalSignOut(const GlobalSignOutRequest& request) const {
  return GlobalSignOutOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InitiateAuthOutcome CognitoIdentityProviderClient::InitiateAuth(const InitiateAuthRequest& request) const {
  return InitiateAuthOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDevicesOutcome CognitoIdentityProviderClient::ListDevices(const ListDevicesRequest& request) const {
  return ListDevicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupsOutcome CognitoIdentityProviderClient::ListGroups(const ListGroupsRequest& request) const {
  return ListGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIdentityProvidersOutcome CognitoIdentityProviderClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const {
  return ListIdentityProvidersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceServersOutcome CognitoIdentityProviderClient::ListResourceServers(const ListResourceServersRequest& request) const {
  return ListResourceServersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CognitoIdentityProviderClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTermsOutcome CognitoIdentityProviderClient::ListTerms(const ListTermsRequest& request) const {
  return ListTermsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUserImportJobsOutcome CognitoIdentityProviderClient::ListUserImportJobs(const ListUserImportJobsRequest& request) const {
  return ListUserImportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUserPoolClientSecretsOutcome CognitoIdentityProviderClient::ListUserPoolClientSecrets(
    const ListUserPoolClientSecretsRequest& request) const {
  return ListUserPoolClientSecretsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUserPoolClientsOutcome CognitoIdentityProviderClient::ListUserPoolClients(const ListUserPoolClientsRequest& request) const {
  return ListUserPoolClientsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUserPoolsOutcome CognitoIdentityProviderClient::ListUserPools(const ListUserPoolsRequest& request) const {
  return ListUserPoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsersOutcome CognitoIdentityProviderClient::ListUsers(const ListUsersRequest& request) const {
  return ListUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsersInGroupOutcome CognitoIdentityProviderClient::ListUsersInGroup(const ListUsersInGroupRequest& request) const {
  return ListUsersInGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWebAuthnCredentialsOutcome CognitoIdentityProviderClient::ListWebAuthnCredentials(const ListWebAuthnCredentialsRequest& request) const {
  return ListWebAuthnCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResendConfirmationCodeOutcome CognitoIdentityProviderClient::ResendConfirmationCode(const ResendConfirmationCodeRequest& request) const {
  return ResendConfirmationCodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RespondToAuthChallengeOutcome CognitoIdentityProviderClient::RespondToAuthChallenge(const RespondToAuthChallengeRequest& request) const {
  return RespondToAuthChallengeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeTokenOutcome CognitoIdentityProviderClient::RevokeToken(const RevokeTokenRequest& request) const {
  return RevokeTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetLogDeliveryConfigurationOutcome CognitoIdentityProviderClient::SetLogDeliveryConfiguration(
    const SetLogDeliveryConfigurationRequest& request) const {
  return SetLogDeliveryConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetRiskConfigurationOutcome CognitoIdentityProviderClient::SetRiskConfiguration(const SetRiskConfigurationRequest& request) const {
  return SetRiskConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetUICustomizationOutcome CognitoIdentityProviderClient::SetUICustomization(const SetUICustomizationRequest& request) const {
  return SetUICustomizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetUserMFAPreferenceOutcome CognitoIdentityProviderClient::SetUserMFAPreference(const SetUserMFAPreferenceRequest& request) const {
  return SetUserMFAPreferenceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::SetUserPoolMfaConfig(const SetUserPoolMfaConfigRequest& request) const {
  return SetUserPoolMfaConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetUserSettingsOutcome CognitoIdentityProviderClient::SetUserSettings(const SetUserSettingsRequest& request) const {
  return SetUserSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SignUpOutcome CognitoIdentityProviderClient::SignUp(const SignUpRequest& request) const {
  return SignUpOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartUserImportJobOutcome CognitoIdentityProviderClient::StartUserImportJob(const StartUserImportJobRequest& request) const {
  return StartUserImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartWebAuthnRegistrationOutcome CognitoIdentityProviderClient::StartWebAuthnRegistration(
    const StartWebAuthnRegistrationRequest& request) const {
  return StartWebAuthnRegistrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopUserImportJobOutcome CognitoIdentityProviderClient::StopUserImportJob(const StopUserImportJobRequest& request) const {
  return StopUserImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CognitoIdentityProviderClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CognitoIdentityProviderClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::UpdateAuthEventFeedback(const UpdateAuthEventFeedbackRequest& request) const {
  return UpdateAuthEventFeedbackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDeviceStatusOutcome CognitoIdentityProviderClient::UpdateDeviceStatus(const UpdateDeviceStatusRequest& request) const {
  return UpdateDeviceStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGroupOutcome CognitoIdentityProviderClient::UpdateGroup(const UpdateGroupRequest& request) const {
  return UpdateGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIdentityProviderOutcome CognitoIdentityProviderClient::UpdateIdentityProvider(const UpdateIdentityProviderRequest& request) const {
  return UpdateIdentityProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateManagedLoginBrandingOutcome CognitoIdentityProviderClient::UpdateManagedLoginBranding(
    const UpdateManagedLoginBrandingRequest& request) const {
  return UpdateManagedLoginBrandingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResourceServerOutcome CognitoIdentityProviderClient::UpdateResourceServer(const UpdateResourceServerRequest& request) const {
  return UpdateResourceServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTermsOutcome CognitoIdentityProviderClient::UpdateTerms(const UpdateTermsRequest& request) const {
  return UpdateTermsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserAttributesOutcome CognitoIdentityProviderClient::UpdateUserAttributes(const UpdateUserAttributesRequest& request) const {
  return UpdateUserAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserPoolOutcome CognitoIdentityProviderClient::UpdateUserPool(const UpdateUserPoolRequest& request) const {
  return UpdateUserPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserPoolClientOutcome CognitoIdentityProviderClient::UpdateUserPoolClient(const UpdateUserPoolClientRequest& request) const {
  return UpdateUserPoolClientOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserPoolDomainOutcome CognitoIdentityProviderClient::UpdateUserPoolDomain(const UpdateUserPoolDomainRequest& request) const {
  return UpdateUserPoolDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifySoftwareTokenOutcome CognitoIdentityProviderClient::VerifySoftwareToken(const VerifySoftwareTokenRequest& request) const {
  return VerifySoftwareTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyUserAttributeOutcome CognitoIdentityProviderClient::VerifyUserAttribute(const VerifyUserAttributeRequest& request) const {
  return VerifyUserAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
