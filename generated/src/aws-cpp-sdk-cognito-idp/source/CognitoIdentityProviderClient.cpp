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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddCustomAttributesOutcome(result.GetResultWithOwnership())
                            : AddCustomAttributesOutcome(std::move(result.GetError()));
}

AddUserPoolClientSecretOutcome CognitoIdentityProviderClient::AddUserPoolClientSecret(const AddUserPoolClientSecretRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddUserPoolClientSecretOutcome(result.GetResultWithOwnership())
                            : AddUserPoolClientSecretOutcome(std::move(result.GetError()));
}

AdminAddUserToGroupOutcome CognitoIdentityProviderClient::AdminAddUserToGroup(const AdminAddUserToGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminAddUserToGroupOutcome(result.GetResultWithOwnership())
                            : AdminAddUserToGroupOutcome(std::move(result.GetError()));
}

AdminConfirmSignUpOutcome CognitoIdentityProviderClient::AdminConfirmSignUp(const AdminConfirmSignUpRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminConfirmSignUpOutcome(result.GetResultWithOwnership())
                            : AdminConfirmSignUpOutcome(std::move(result.GetError()));
}

AdminCreateUserOutcome CognitoIdentityProviderClient::AdminCreateUser(const AdminCreateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminCreateUserOutcome(result.GetResultWithOwnership())
                            : AdminCreateUserOutcome(std::move(result.GetError()));
}

AdminDeleteUserOutcome CognitoIdentityProviderClient::AdminDeleteUser(const AdminDeleteUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminDeleteUserOutcome(result.GetResultWithOwnership())
                            : AdminDeleteUserOutcome(std::move(result.GetError()));
}

AdminDeleteUserAttributesOutcome CognitoIdentityProviderClient::AdminDeleteUserAttributes(
    const AdminDeleteUserAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminDeleteUserAttributesOutcome(result.GetResultWithOwnership())
                            : AdminDeleteUserAttributesOutcome(std::move(result.GetError()));
}

AdminDisableProviderForUserOutcome CognitoIdentityProviderClient::AdminDisableProviderForUser(
    const AdminDisableProviderForUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminDisableProviderForUserOutcome(result.GetResultWithOwnership())
                            : AdminDisableProviderForUserOutcome(std::move(result.GetError()));
}

AdminDisableUserOutcome CognitoIdentityProviderClient::AdminDisableUser(const AdminDisableUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminDisableUserOutcome(result.GetResultWithOwnership())
                            : AdminDisableUserOutcome(std::move(result.GetError()));
}

AdminEnableUserOutcome CognitoIdentityProviderClient::AdminEnableUser(const AdminEnableUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminEnableUserOutcome(result.GetResultWithOwnership())
                            : AdminEnableUserOutcome(std::move(result.GetError()));
}

AdminForgetDeviceOutcome CognitoIdentityProviderClient::AdminForgetDevice(const AdminForgetDeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminForgetDeviceOutcome(result.GetResultWithOwnership())
                            : AdminForgetDeviceOutcome(std::move(result.GetError()));
}

AdminGetDeviceOutcome CognitoIdentityProviderClient::AdminGetDevice(const AdminGetDeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminGetDeviceOutcome(result.GetResultWithOwnership()) : AdminGetDeviceOutcome(std::move(result.GetError()));
}

AdminGetUserOutcome CognitoIdentityProviderClient::AdminGetUser(const AdminGetUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminGetUserOutcome(result.GetResultWithOwnership()) : AdminGetUserOutcome(std::move(result.GetError()));
}

AdminInitiateAuthOutcome CognitoIdentityProviderClient::AdminInitiateAuth(const AdminInitiateAuthRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminInitiateAuthOutcome(result.GetResultWithOwnership())
                            : AdminInitiateAuthOutcome(std::move(result.GetError()));
}

AdminLinkProviderForUserOutcome CognitoIdentityProviderClient::AdminLinkProviderForUser(
    const AdminLinkProviderForUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminLinkProviderForUserOutcome(result.GetResultWithOwnership())
                            : AdminLinkProviderForUserOutcome(std::move(result.GetError()));
}

AdminListDevicesOutcome CognitoIdentityProviderClient::AdminListDevices(const AdminListDevicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminListDevicesOutcome(result.GetResultWithOwnership())
                            : AdminListDevicesOutcome(std::move(result.GetError()));
}

AdminListGroupsForUserOutcome CognitoIdentityProviderClient::AdminListGroupsForUser(const AdminListGroupsForUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminListGroupsForUserOutcome(result.GetResultWithOwnership())
                            : AdminListGroupsForUserOutcome(std::move(result.GetError()));
}

AdminListUserAuthEventsOutcome CognitoIdentityProviderClient::AdminListUserAuthEvents(const AdminListUserAuthEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminListUserAuthEventsOutcome(result.GetResultWithOwnership())
                            : AdminListUserAuthEventsOutcome(std::move(result.GetError()));
}

AdminRemoveUserFromGroupOutcome CognitoIdentityProviderClient::AdminRemoveUserFromGroup(
    const AdminRemoveUserFromGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminRemoveUserFromGroupOutcome(result.GetResultWithOwnership())
                            : AdminRemoveUserFromGroupOutcome(std::move(result.GetError()));
}

AdminResetUserPasswordOutcome CognitoIdentityProviderClient::AdminResetUserPassword(const AdminResetUserPasswordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminResetUserPasswordOutcome(result.GetResultWithOwnership())
                            : AdminResetUserPasswordOutcome(std::move(result.GetError()));
}

AdminRespondToAuthChallengeOutcome CognitoIdentityProviderClient::AdminRespondToAuthChallenge(
    const AdminRespondToAuthChallengeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminRespondToAuthChallengeOutcome(result.GetResultWithOwnership())
                            : AdminRespondToAuthChallengeOutcome(std::move(result.GetError()));
}

AdminSetUserMFAPreferenceOutcome CognitoIdentityProviderClient::AdminSetUserMFAPreference(
    const AdminSetUserMFAPreferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminSetUserMFAPreferenceOutcome(result.GetResultWithOwnership())
                            : AdminSetUserMFAPreferenceOutcome(std::move(result.GetError()));
}

AdminSetUserPasswordOutcome CognitoIdentityProviderClient::AdminSetUserPassword(const AdminSetUserPasswordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminSetUserPasswordOutcome(result.GetResultWithOwnership())
                            : AdminSetUserPasswordOutcome(std::move(result.GetError()));
}

AdminSetUserSettingsOutcome CognitoIdentityProviderClient::AdminSetUserSettings(const AdminSetUserSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminSetUserSettingsOutcome(result.GetResultWithOwnership())
                            : AdminSetUserSettingsOutcome(std::move(result.GetError()));
}

AdminUpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::AdminUpdateAuthEventFeedback(
    const AdminUpdateAuthEventFeedbackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminUpdateAuthEventFeedbackOutcome(result.GetResultWithOwnership())
                            : AdminUpdateAuthEventFeedbackOutcome(std::move(result.GetError()));
}

AdminUpdateDeviceStatusOutcome CognitoIdentityProviderClient::AdminUpdateDeviceStatus(const AdminUpdateDeviceStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminUpdateDeviceStatusOutcome(result.GetResultWithOwnership())
                            : AdminUpdateDeviceStatusOutcome(std::move(result.GetError()));
}

AdminUpdateUserAttributesOutcome CognitoIdentityProviderClient::AdminUpdateUserAttributes(
    const AdminUpdateUserAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminUpdateUserAttributesOutcome(result.GetResultWithOwnership())
                            : AdminUpdateUserAttributesOutcome(std::move(result.GetError()));
}

AdminUserGlobalSignOutOutcome CognitoIdentityProviderClient::AdminUserGlobalSignOut(const AdminUserGlobalSignOutRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AdminUserGlobalSignOutOutcome(result.GetResultWithOwnership())
                            : AdminUserGlobalSignOutOutcome(std::move(result.GetError()));
}

AssociateSoftwareTokenOutcome CognitoIdentityProviderClient::AssociateSoftwareToken(const AssociateSoftwareTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateSoftwareTokenOutcome(result.GetResultWithOwnership())
                            : AssociateSoftwareTokenOutcome(std::move(result.GetError()));
}

ChangePasswordOutcome CognitoIdentityProviderClient::ChangePassword(const ChangePasswordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ChangePasswordOutcome(result.GetResultWithOwnership()) : ChangePasswordOutcome(std::move(result.GetError()));
}

CompleteWebAuthnRegistrationOutcome CognitoIdentityProviderClient::CompleteWebAuthnRegistration(
    const CompleteWebAuthnRegistrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CompleteWebAuthnRegistrationOutcome(result.GetResultWithOwnership())
                            : CompleteWebAuthnRegistrationOutcome(std::move(result.GetError()));
}

ConfirmDeviceOutcome CognitoIdentityProviderClient::ConfirmDevice(const ConfirmDeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ConfirmDeviceOutcome(result.GetResultWithOwnership()) : ConfirmDeviceOutcome(std::move(result.GetError()));
}

ConfirmForgotPasswordOutcome CognitoIdentityProviderClient::ConfirmForgotPassword(const ConfirmForgotPasswordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ConfirmForgotPasswordOutcome(result.GetResultWithOwnership())
                            : ConfirmForgotPasswordOutcome(std::move(result.GetError()));
}

ConfirmSignUpOutcome CognitoIdentityProviderClient::ConfirmSignUp(const ConfirmSignUpRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ConfirmSignUpOutcome(result.GetResultWithOwnership()) : ConfirmSignUpOutcome(std::move(result.GetError()));
}

CreateGroupOutcome CognitoIdentityProviderClient::CreateGroup(const CreateGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGroupOutcome(result.GetResultWithOwnership()) : CreateGroupOutcome(std::move(result.GetError()));
}

CreateIdentityProviderOutcome CognitoIdentityProviderClient::CreateIdentityProvider(const CreateIdentityProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIdentityProviderOutcome(result.GetResultWithOwnership())
                            : CreateIdentityProviderOutcome(std::move(result.GetError()));
}

CreateManagedLoginBrandingOutcome CognitoIdentityProviderClient::CreateManagedLoginBranding(
    const CreateManagedLoginBrandingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateManagedLoginBrandingOutcome(result.GetResultWithOwnership())
                            : CreateManagedLoginBrandingOutcome(std::move(result.GetError()));
}

CreateResourceServerOutcome CognitoIdentityProviderClient::CreateResourceServer(const CreateResourceServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResourceServerOutcome(result.GetResultWithOwnership())
                            : CreateResourceServerOutcome(std::move(result.GetError()));
}

CreateTermsOutcome CognitoIdentityProviderClient::CreateTerms(const CreateTermsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTermsOutcome(result.GetResultWithOwnership()) : CreateTermsOutcome(std::move(result.GetError()));
}

CreateUserImportJobOutcome CognitoIdentityProviderClient::CreateUserImportJob(const CreateUserImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserImportJobOutcome(result.GetResultWithOwnership())
                            : CreateUserImportJobOutcome(std::move(result.GetError()));
}

CreateUserPoolOutcome CognitoIdentityProviderClient::CreateUserPool(const CreateUserPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserPoolOutcome(result.GetResultWithOwnership()) : CreateUserPoolOutcome(std::move(result.GetError()));
}

CreateUserPoolClientOutcome CognitoIdentityProviderClient::CreateUserPoolClient(const CreateUserPoolClientRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserPoolClientOutcome(result.GetResultWithOwnership())
                            : CreateUserPoolClientOutcome(std::move(result.GetError()));
}

CreateUserPoolDomainOutcome CognitoIdentityProviderClient::CreateUserPoolDomain(const CreateUserPoolDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserPoolDomainOutcome(result.GetResultWithOwnership())
                            : CreateUserPoolDomainOutcome(std::move(result.GetError()));
}

DeleteGroupOutcome CognitoIdentityProviderClient::DeleteGroup(const DeleteGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGroupOutcome(result.GetResultWithOwnership()) : DeleteGroupOutcome(std::move(result.GetError()));
}

DeleteIdentityProviderOutcome CognitoIdentityProviderClient::DeleteIdentityProvider(const DeleteIdentityProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIdentityProviderOutcome(result.GetResultWithOwnership())
                            : DeleteIdentityProviderOutcome(std::move(result.GetError()));
}

DeleteManagedLoginBrandingOutcome CognitoIdentityProviderClient::DeleteManagedLoginBranding(
    const DeleteManagedLoginBrandingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteManagedLoginBrandingOutcome(result.GetResultWithOwnership())
                            : DeleteManagedLoginBrandingOutcome(std::move(result.GetError()));
}

DeleteResourceServerOutcome CognitoIdentityProviderClient::DeleteResourceServer(const DeleteResourceServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourceServerOutcome(result.GetResultWithOwnership())
                            : DeleteResourceServerOutcome(std::move(result.GetError()));
}

DeleteTermsOutcome CognitoIdentityProviderClient::DeleteTerms(const DeleteTermsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTermsOutcome(result.GetResultWithOwnership()) : DeleteTermsOutcome(std::move(result.GetError()));
}

DeleteUserOutcome CognitoIdentityProviderClient::DeleteUser(const DeleteUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserOutcome(result.GetResultWithOwnership()) : DeleteUserOutcome(std::move(result.GetError()));
}

DeleteUserAttributesOutcome CognitoIdentityProviderClient::DeleteUserAttributes(const DeleteUserAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserAttributesOutcome(result.GetResultWithOwnership())
                            : DeleteUserAttributesOutcome(std::move(result.GetError()));
}

DeleteUserPoolOutcome CognitoIdentityProviderClient::DeleteUserPool(const DeleteUserPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserPoolOutcome(result.GetResultWithOwnership()) : DeleteUserPoolOutcome(std::move(result.GetError()));
}

DeleteUserPoolClientOutcome CognitoIdentityProviderClient::DeleteUserPoolClient(const DeleteUserPoolClientRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserPoolClientOutcome(result.GetResultWithOwnership())
                            : DeleteUserPoolClientOutcome(std::move(result.GetError()));
}

DeleteUserPoolClientSecretOutcome CognitoIdentityProviderClient::DeleteUserPoolClientSecret(
    const DeleteUserPoolClientSecretRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserPoolClientSecretOutcome(result.GetResultWithOwnership())
                            : DeleteUserPoolClientSecretOutcome(std::move(result.GetError()));
}

DeleteUserPoolDomainOutcome CognitoIdentityProviderClient::DeleteUserPoolDomain(const DeleteUserPoolDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserPoolDomainOutcome(result.GetResultWithOwnership())
                            : DeleteUserPoolDomainOutcome(std::move(result.GetError()));
}

DeleteWebAuthnCredentialOutcome CognitoIdentityProviderClient::DeleteWebAuthnCredential(
    const DeleteWebAuthnCredentialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWebAuthnCredentialOutcome(result.GetResultWithOwnership())
                            : DeleteWebAuthnCredentialOutcome(std::move(result.GetError()));
}

DescribeIdentityProviderOutcome CognitoIdentityProviderClient::DescribeIdentityProvider(
    const DescribeIdentityProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIdentityProviderOutcome(result.GetResultWithOwnership())
                            : DescribeIdentityProviderOutcome(std::move(result.GetError()));
}

DescribeManagedLoginBrandingOutcome CognitoIdentityProviderClient::DescribeManagedLoginBranding(
    const DescribeManagedLoginBrandingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeManagedLoginBrandingOutcome(result.GetResultWithOwnership())
                            : DescribeManagedLoginBrandingOutcome(std::move(result.GetError()));
}

DescribeManagedLoginBrandingByClientOutcome CognitoIdentityProviderClient::DescribeManagedLoginBrandingByClient(
    const DescribeManagedLoginBrandingByClientRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeManagedLoginBrandingByClientOutcome(result.GetResultWithOwnership())
                            : DescribeManagedLoginBrandingByClientOutcome(std::move(result.GetError()));
}

DescribeResourceServerOutcome CognitoIdentityProviderClient::DescribeResourceServer(const DescribeResourceServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeResourceServerOutcome(result.GetResultWithOwnership())
                            : DescribeResourceServerOutcome(std::move(result.GetError()));
}

DescribeRiskConfigurationOutcome CognitoIdentityProviderClient::DescribeRiskConfiguration(
    const DescribeRiskConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRiskConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeRiskConfigurationOutcome(std::move(result.GetError()));
}

DescribeTermsOutcome CognitoIdentityProviderClient::DescribeTerms(const DescribeTermsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTermsOutcome(result.GetResultWithOwnership()) : DescribeTermsOutcome(std::move(result.GetError()));
}

DescribeUserImportJobOutcome CognitoIdentityProviderClient::DescribeUserImportJob(const DescribeUserImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUserImportJobOutcome(result.GetResultWithOwnership())
                            : DescribeUserImportJobOutcome(std::move(result.GetError()));
}

DescribeUserPoolOutcome CognitoIdentityProviderClient::DescribeUserPool(const DescribeUserPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUserPoolOutcome(result.GetResultWithOwnership())
                            : DescribeUserPoolOutcome(std::move(result.GetError()));
}

DescribeUserPoolClientOutcome CognitoIdentityProviderClient::DescribeUserPoolClient(const DescribeUserPoolClientRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUserPoolClientOutcome(result.GetResultWithOwnership())
                            : DescribeUserPoolClientOutcome(std::move(result.GetError()));
}

DescribeUserPoolDomainOutcome CognitoIdentityProviderClient::DescribeUserPoolDomain(const DescribeUserPoolDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUserPoolDomainOutcome(result.GetResultWithOwnership())
                            : DescribeUserPoolDomainOutcome(std::move(result.GetError()));
}

ForgetDeviceOutcome CognitoIdentityProviderClient::ForgetDevice(const ForgetDeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ForgetDeviceOutcome(result.GetResultWithOwnership()) : ForgetDeviceOutcome(std::move(result.GetError()));
}

ForgotPasswordOutcome CognitoIdentityProviderClient::ForgotPassword(const ForgotPasswordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ForgotPasswordOutcome(result.GetResultWithOwnership()) : ForgotPasswordOutcome(std::move(result.GetError()));
}

GetCSVHeaderOutcome CognitoIdentityProviderClient::GetCSVHeader(const GetCSVHeaderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCSVHeaderOutcome(result.GetResultWithOwnership()) : GetCSVHeaderOutcome(std::move(result.GetError()));
}

GetDeviceOutcome CognitoIdentityProviderClient::GetDevice(const GetDeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDeviceOutcome(result.GetResultWithOwnership()) : GetDeviceOutcome(std::move(result.GetError()));
}

GetGroupOutcome CognitoIdentityProviderClient::GetGroup(const GetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetGroupOutcome(result.GetResultWithOwnership()) : GetGroupOutcome(std::move(result.GetError()));
}

GetIdentityProviderByIdentifierOutcome CognitoIdentityProviderClient::GetIdentityProviderByIdentifier(
    const GetIdentityProviderByIdentifierRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIdentityProviderByIdentifierOutcome(result.GetResultWithOwnership())
                            : GetIdentityProviderByIdentifierOutcome(std::move(result.GetError()));
}

GetLogDeliveryConfigurationOutcome CognitoIdentityProviderClient::GetLogDeliveryConfiguration(
    const GetLogDeliveryConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLogDeliveryConfigurationOutcome(result.GetResultWithOwnership())
                            : GetLogDeliveryConfigurationOutcome(std::move(result.GetError()));
}

GetSigningCertificateOutcome CognitoIdentityProviderClient::GetSigningCertificate(const GetSigningCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSigningCertificateOutcome(result.GetResultWithOwnership())
                            : GetSigningCertificateOutcome(std::move(result.GetError()));
}

GetTokensFromRefreshTokenOutcome CognitoIdentityProviderClient::GetTokensFromRefreshToken(
    const GetTokensFromRefreshTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTokensFromRefreshTokenOutcome(result.GetResultWithOwnership())
                            : GetTokensFromRefreshTokenOutcome(std::move(result.GetError()));
}

GetUICustomizationOutcome CognitoIdentityProviderClient::GetUICustomization(const GetUICustomizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUICustomizationOutcome(result.GetResultWithOwnership())
                            : GetUICustomizationOutcome(std::move(result.GetError()));
}

GetUserOutcome CognitoIdentityProviderClient::GetUser(const GetUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUserOutcome(result.GetResultWithOwnership()) : GetUserOutcome(std::move(result.GetError()));
}

GetUserAttributeVerificationCodeOutcome CognitoIdentityProviderClient::GetUserAttributeVerificationCode(
    const GetUserAttributeVerificationCodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUserAttributeVerificationCodeOutcome(result.GetResultWithOwnership())
                            : GetUserAttributeVerificationCodeOutcome(std::move(result.GetError()));
}

GetUserAuthFactorsOutcome CognitoIdentityProviderClient::GetUserAuthFactors(const GetUserAuthFactorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUserAuthFactorsOutcome(result.GetResultWithOwnership())
                            : GetUserAuthFactorsOutcome(std::move(result.GetError()));
}

GetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::GetUserPoolMfaConfig(const GetUserPoolMfaConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUserPoolMfaConfigOutcome(result.GetResultWithOwnership())
                            : GetUserPoolMfaConfigOutcome(std::move(result.GetError()));
}

GlobalSignOutOutcome CognitoIdentityProviderClient::GlobalSignOut(const GlobalSignOutRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GlobalSignOutOutcome(result.GetResultWithOwnership()) : GlobalSignOutOutcome(std::move(result.GetError()));
}

InitiateAuthOutcome CognitoIdentityProviderClient::InitiateAuth(const InitiateAuthRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InitiateAuthOutcome(result.GetResultWithOwnership()) : InitiateAuthOutcome(std::move(result.GetError()));
}

ListDevicesOutcome CognitoIdentityProviderClient::ListDevices(const ListDevicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDevicesOutcome(result.GetResultWithOwnership()) : ListDevicesOutcome(std::move(result.GetError()));
}

ListGroupsOutcome CognitoIdentityProviderClient::ListGroups(const ListGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGroupsOutcome(result.GetResultWithOwnership()) : ListGroupsOutcome(std::move(result.GetError()));
}

ListIdentityProvidersOutcome CognitoIdentityProviderClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIdentityProvidersOutcome(result.GetResultWithOwnership())
                            : ListIdentityProvidersOutcome(std::move(result.GetError()));
}

ListResourceServersOutcome CognitoIdentityProviderClient::ListResourceServers(const ListResourceServersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceServersOutcome(result.GetResultWithOwnership())
                            : ListResourceServersOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome CognitoIdentityProviderClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTermsOutcome CognitoIdentityProviderClient::ListTerms(const ListTermsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTermsOutcome(result.GetResultWithOwnership()) : ListTermsOutcome(std::move(result.GetError()));
}

ListUserImportJobsOutcome CognitoIdentityProviderClient::ListUserImportJobs(const ListUserImportJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUserImportJobsOutcome(result.GetResultWithOwnership())
                            : ListUserImportJobsOutcome(std::move(result.GetError()));
}

ListUserPoolClientSecretsOutcome CognitoIdentityProviderClient::ListUserPoolClientSecrets(
    const ListUserPoolClientSecretsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUserPoolClientSecretsOutcome(result.GetResultWithOwnership())
                            : ListUserPoolClientSecretsOutcome(std::move(result.GetError()));
}

ListUserPoolClientsOutcome CognitoIdentityProviderClient::ListUserPoolClients(const ListUserPoolClientsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUserPoolClientsOutcome(result.GetResultWithOwnership())
                            : ListUserPoolClientsOutcome(std::move(result.GetError()));
}

ListUserPoolsOutcome CognitoIdentityProviderClient::ListUserPools(const ListUserPoolsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUserPoolsOutcome(result.GetResultWithOwnership()) : ListUserPoolsOutcome(std::move(result.GetError()));
}

ListUsersOutcome CognitoIdentityProviderClient::ListUsers(const ListUsersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsersOutcome(result.GetResultWithOwnership()) : ListUsersOutcome(std::move(result.GetError()));
}

ListUsersInGroupOutcome CognitoIdentityProviderClient::ListUsersInGroup(const ListUsersInGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsersInGroupOutcome(result.GetResultWithOwnership())
                            : ListUsersInGroupOutcome(std::move(result.GetError()));
}

ListWebAuthnCredentialsOutcome CognitoIdentityProviderClient::ListWebAuthnCredentials(const ListWebAuthnCredentialsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWebAuthnCredentialsOutcome(result.GetResultWithOwnership())
                            : ListWebAuthnCredentialsOutcome(std::move(result.GetError()));
}

ResendConfirmationCodeOutcome CognitoIdentityProviderClient::ResendConfirmationCode(const ResendConfirmationCodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResendConfirmationCodeOutcome(result.GetResultWithOwnership())
                            : ResendConfirmationCodeOutcome(std::move(result.GetError()));
}

RespondToAuthChallengeOutcome CognitoIdentityProviderClient::RespondToAuthChallenge(const RespondToAuthChallengeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RespondToAuthChallengeOutcome(result.GetResultWithOwnership())
                            : RespondToAuthChallengeOutcome(std::move(result.GetError()));
}

RevokeTokenOutcome CognitoIdentityProviderClient::RevokeToken(const RevokeTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeTokenOutcome(result.GetResultWithOwnership()) : RevokeTokenOutcome(std::move(result.GetError()));
}

SetLogDeliveryConfigurationOutcome CognitoIdentityProviderClient::SetLogDeliveryConfiguration(
    const SetLogDeliveryConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetLogDeliveryConfigurationOutcome(result.GetResultWithOwnership())
                            : SetLogDeliveryConfigurationOutcome(std::move(result.GetError()));
}

SetRiskConfigurationOutcome CognitoIdentityProviderClient::SetRiskConfiguration(const SetRiskConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetRiskConfigurationOutcome(result.GetResultWithOwnership())
                            : SetRiskConfigurationOutcome(std::move(result.GetError()));
}

SetUICustomizationOutcome CognitoIdentityProviderClient::SetUICustomization(const SetUICustomizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetUICustomizationOutcome(result.GetResultWithOwnership())
                            : SetUICustomizationOutcome(std::move(result.GetError()));
}

SetUserMFAPreferenceOutcome CognitoIdentityProviderClient::SetUserMFAPreference(const SetUserMFAPreferenceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetUserMFAPreferenceOutcome(result.GetResultWithOwnership())
                            : SetUserMFAPreferenceOutcome(std::move(result.GetError()));
}

SetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::SetUserPoolMfaConfig(const SetUserPoolMfaConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetUserPoolMfaConfigOutcome(result.GetResultWithOwnership())
                            : SetUserPoolMfaConfigOutcome(std::move(result.GetError()));
}

SetUserSettingsOutcome CognitoIdentityProviderClient::SetUserSettings(const SetUserSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetUserSettingsOutcome(result.GetResultWithOwnership())
                            : SetUserSettingsOutcome(std::move(result.GetError()));
}

SignUpOutcome CognitoIdentityProviderClient::SignUp(const SignUpRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SignUpOutcome(result.GetResultWithOwnership()) : SignUpOutcome(std::move(result.GetError()));
}

StartUserImportJobOutcome CognitoIdentityProviderClient::StartUserImportJob(const StartUserImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartUserImportJobOutcome(result.GetResultWithOwnership())
                            : StartUserImportJobOutcome(std::move(result.GetError()));
}

StartWebAuthnRegistrationOutcome CognitoIdentityProviderClient::StartWebAuthnRegistration(
    const StartWebAuthnRegistrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartWebAuthnRegistrationOutcome(result.GetResultWithOwnership())
                            : StartWebAuthnRegistrationOutcome(std::move(result.GetError()));
}

StopUserImportJobOutcome CognitoIdentityProviderClient::StopUserImportJob(const StopUserImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopUserImportJobOutcome(result.GetResultWithOwnership())
                            : StopUserImportJobOutcome(std::move(result.GetError()));
}

TagResourceOutcome CognitoIdentityProviderClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome CognitoIdentityProviderClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::UpdateAuthEventFeedback(const UpdateAuthEventFeedbackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAuthEventFeedbackOutcome(result.GetResultWithOwnership())
                            : UpdateAuthEventFeedbackOutcome(std::move(result.GetError()));
}

UpdateDeviceStatusOutcome CognitoIdentityProviderClient::UpdateDeviceStatus(const UpdateDeviceStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDeviceStatusOutcome(result.GetResultWithOwnership())
                            : UpdateDeviceStatusOutcome(std::move(result.GetError()));
}

UpdateGroupOutcome CognitoIdentityProviderClient::UpdateGroup(const UpdateGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGroupOutcome(result.GetResultWithOwnership()) : UpdateGroupOutcome(std::move(result.GetError()));
}

UpdateIdentityProviderOutcome CognitoIdentityProviderClient::UpdateIdentityProvider(const UpdateIdentityProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIdentityProviderOutcome(result.GetResultWithOwnership())
                            : UpdateIdentityProviderOutcome(std::move(result.GetError()));
}

UpdateManagedLoginBrandingOutcome CognitoIdentityProviderClient::UpdateManagedLoginBranding(
    const UpdateManagedLoginBrandingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateManagedLoginBrandingOutcome(result.GetResultWithOwnership())
                            : UpdateManagedLoginBrandingOutcome(std::move(result.GetError()));
}

UpdateResourceServerOutcome CognitoIdentityProviderClient::UpdateResourceServer(const UpdateResourceServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateResourceServerOutcome(result.GetResultWithOwnership())
                            : UpdateResourceServerOutcome(std::move(result.GetError()));
}

UpdateTermsOutcome CognitoIdentityProviderClient::UpdateTerms(const UpdateTermsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTermsOutcome(result.GetResultWithOwnership()) : UpdateTermsOutcome(std::move(result.GetError()));
}

UpdateUserAttributesOutcome CognitoIdentityProviderClient::UpdateUserAttributes(const UpdateUserAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserAttributesOutcome(result.GetResultWithOwnership())
                            : UpdateUserAttributesOutcome(std::move(result.GetError()));
}

UpdateUserPoolOutcome CognitoIdentityProviderClient::UpdateUserPool(const UpdateUserPoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserPoolOutcome(result.GetResultWithOwnership()) : UpdateUserPoolOutcome(std::move(result.GetError()));
}

UpdateUserPoolClientOutcome CognitoIdentityProviderClient::UpdateUserPoolClient(const UpdateUserPoolClientRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserPoolClientOutcome(result.GetResultWithOwnership())
                            : UpdateUserPoolClientOutcome(std::move(result.GetError()));
}

UpdateUserPoolDomainOutcome CognitoIdentityProviderClient::UpdateUserPoolDomain(const UpdateUserPoolDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserPoolDomainOutcome(result.GetResultWithOwnership())
                            : UpdateUserPoolDomainOutcome(std::move(result.GetError()));
}

VerifySoftwareTokenOutcome CognitoIdentityProviderClient::VerifySoftwareToken(const VerifySoftwareTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? VerifySoftwareTokenOutcome(result.GetResultWithOwnership())
                            : VerifySoftwareTokenOutcome(std::move(result.GetError()));
}

VerifyUserAttributeOutcome CognitoIdentityProviderClient::VerifyUserAttribute(const VerifyUserAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? VerifyUserAttributeOutcome(result.GetResultWithOwnership())
                            : VerifyUserAttributeOutcome(std::move(result.GetError()));
}
