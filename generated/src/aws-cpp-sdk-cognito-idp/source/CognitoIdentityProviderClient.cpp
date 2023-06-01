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

#include <aws/cognito-idp/CognitoIdentityProviderClient.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrorMarshaller.h>
#include <aws/cognito-idp/CognitoIdentityProviderEndpointProvider.h>
#include <aws/cognito-idp/model/AddCustomAttributesRequest.h>
#include <aws/cognito-idp/model/AdminAddUserToGroupRequest.h>
#include <aws/cognito-idp/model/AdminConfirmSignUpRequest.h>
#include <aws/cognito-idp/model/AdminCreateUserRequest.h>
#include <aws/cognito-idp/model/AdminDeleteUserRequest.h>
#include <aws/cognito-idp/model/AdminDeleteUserAttributesRequest.h>
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
#include <aws/cognito-idp/model/ConfirmDeviceRequest.h>
#include <aws/cognito-idp/model/ConfirmForgotPasswordRequest.h>
#include <aws/cognito-idp/model/ConfirmSignUpRequest.h>
#include <aws/cognito-idp/model/CreateGroupRequest.h>
#include <aws/cognito-idp/model/CreateIdentityProviderRequest.h>
#include <aws/cognito-idp/model/CreateResourceServerRequest.h>
#include <aws/cognito-idp/model/CreateUserImportJobRequest.h>
#include <aws/cognito-idp/model/CreateUserPoolRequest.h>
#include <aws/cognito-idp/model/CreateUserPoolClientRequest.h>
#include <aws/cognito-idp/model/CreateUserPoolDomainRequest.h>
#include <aws/cognito-idp/model/DeleteGroupRequest.h>
#include <aws/cognito-idp/model/DeleteIdentityProviderRequest.h>
#include <aws/cognito-idp/model/DeleteResourceServerRequest.h>
#include <aws/cognito-idp/model/DeleteUserRequest.h>
#include <aws/cognito-idp/model/DeleteUserAttributesRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolClientRequest.h>
#include <aws/cognito-idp/model/DeleteUserPoolDomainRequest.h>
#include <aws/cognito-idp/model/DescribeIdentityProviderRequest.h>
#include <aws/cognito-idp/model/DescribeResourceServerRequest.h>
#include <aws/cognito-idp/model/DescribeRiskConfigurationRequest.h>
#include <aws/cognito-idp/model/DescribeUserImportJobRequest.h>
#include <aws/cognito-idp/model/DescribeUserPoolRequest.h>
#include <aws/cognito-idp/model/DescribeUserPoolClientRequest.h>
#include <aws/cognito-idp/model/DescribeUserPoolDomainRequest.h>
#include <aws/cognito-idp/model/ForgetDeviceRequest.h>
#include <aws/cognito-idp/model/ForgotPasswordRequest.h>
#include <aws/cognito-idp/model/GetCSVHeaderRequest.h>
#include <aws/cognito-idp/model/GetDeviceRequest.h>
#include <aws/cognito-idp/model/GetGroupRequest.h>
#include <aws/cognito-idp/model/GetIdentityProviderByIdentifierRequest.h>
#include <aws/cognito-idp/model/GetSigningCertificateRequest.h>
#include <aws/cognito-idp/model/GetUICustomizationRequest.h>
#include <aws/cognito-idp/model/GetUserRequest.h>
#include <aws/cognito-idp/model/GetUserAttributeVerificationCodeRequest.h>
#include <aws/cognito-idp/model/GetUserPoolMfaConfigRequest.h>
#include <aws/cognito-idp/model/GlobalSignOutRequest.h>
#include <aws/cognito-idp/model/InitiateAuthRequest.h>
#include <aws/cognito-idp/model/ListDevicesRequest.h>
#include <aws/cognito-idp/model/ListGroupsRequest.h>
#include <aws/cognito-idp/model/ListIdentityProvidersRequest.h>
#include <aws/cognito-idp/model/ListResourceServersRequest.h>
#include <aws/cognito-idp/model/ListTagsForResourceRequest.h>
#include <aws/cognito-idp/model/ListUserImportJobsRequest.h>
#include <aws/cognito-idp/model/ListUserPoolClientsRequest.h>
#include <aws/cognito-idp/model/ListUserPoolsRequest.h>
#include <aws/cognito-idp/model/ListUsersRequest.h>
#include <aws/cognito-idp/model/ListUsersInGroupRequest.h>
#include <aws/cognito-idp/model/ResendConfirmationCodeRequest.h>
#include <aws/cognito-idp/model/RespondToAuthChallengeRequest.h>
#include <aws/cognito-idp/model/RevokeTokenRequest.h>
#include <aws/cognito-idp/model/SetRiskConfigurationRequest.h>
#include <aws/cognito-idp/model/SetUICustomizationRequest.h>
#include <aws/cognito-idp/model/SetUserMFAPreferenceRequest.h>
#include <aws/cognito-idp/model/SetUserPoolMfaConfigRequest.h>
#include <aws/cognito-idp/model/SetUserSettingsRequest.h>
#include <aws/cognito-idp/model/SignUpRequest.h>
#include <aws/cognito-idp/model/StartUserImportJobRequest.h>
#include <aws/cognito-idp/model/StopUserImportJobRequest.h>
#include <aws/cognito-idp/model/TagResourceRequest.h>
#include <aws/cognito-idp/model/UntagResourceRequest.h>
#include <aws/cognito-idp/model/UpdateAuthEventFeedbackRequest.h>
#include <aws/cognito-idp/model/UpdateDeviceStatusRequest.h>
#include <aws/cognito-idp/model/UpdateGroupRequest.h>
#include <aws/cognito-idp/model/UpdateIdentityProviderRequest.h>
#include <aws/cognito-idp/model/UpdateResourceServerRequest.h>
#include <aws/cognito-idp/model/UpdateUserAttributesRequest.h>
#include <aws/cognito-idp/model/UpdateUserPoolRequest.h>
#include <aws/cognito-idp/model/UpdateUserPoolClientRequest.h>
#include <aws/cognito-idp/model/UpdateUserPoolDomainRequest.h>
#include <aws/cognito-idp/model/VerifySoftwareTokenRequest.h>
#include <aws/cognito-idp/model/VerifyUserAttributeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CognitoIdentityProvider;
using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CognitoIdentityProviderClient::SERVICE_NAME = "cognito-idp";
const char* CognitoIdentityProviderClient::ALLOCATION_TAG = "CognitoIdentityProviderClient";

CognitoIdentityProviderClient::CognitoIdentityProviderClient(const CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration,
                                                             std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(const AWSCredentials& credentials,
                                                             std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider,
                                                             const CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             std::shared_ptr<CognitoIdentityProviderEndpointProviderBase> endpointProvider,
                                                             const CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CognitoIdentityProviderClient::CognitoIdentityProviderClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(const AWSCredentials& credentials,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CognitoIdentityProviderEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CognitoIdentityProviderClient::~CognitoIdentityProviderClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<CognitoIdentityProviderEndpointProviderBase>& CognitoIdentityProviderClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CognitoIdentityProviderClient::init(const CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Cognito Identity Provider");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CognitoIdentityProviderClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddCustomAttributesOutcome CognitoIdentityProviderClient::AddCustomAttributes(const AddCustomAttributesRequest& request) const
{
  AWS_OPERATION_GUARD(AddCustomAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddCustomAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddCustomAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddCustomAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminAddUserToGroupOutcome CognitoIdentityProviderClient::AdminAddUserToGroup(const AdminAddUserToGroupRequest& request) const
{
  AWS_OPERATION_GUARD(AdminAddUserToGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminAddUserToGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminAddUserToGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminAddUserToGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminConfirmSignUpOutcome CognitoIdentityProviderClient::AdminConfirmSignUp(const AdminConfirmSignUpRequest& request) const
{
  AWS_OPERATION_GUARD(AdminConfirmSignUp);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminConfirmSignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminConfirmSignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminConfirmSignUpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminCreateUserOutcome CognitoIdentityProviderClient::AdminCreateUser(const AdminCreateUserRequest& request) const
{
  AWS_OPERATION_GUARD(AdminCreateUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminCreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminCreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminCreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminDeleteUserOutcome CognitoIdentityProviderClient::AdminDeleteUser(const AdminDeleteUserRequest& request) const
{
  AWS_OPERATION_GUARD(AdminDeleteUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminDeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminDeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminDeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminDeleteUserAttributesOutcome CognitoIdentityProviderClient::AdminDeleteUserAttributes(const AdminDeleteUserAttributesRequest& request) const
{
  AWS_OPERATION_GUARD(AdminDeleteUserAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminDeleteUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminDeleteUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminDeleteUserAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminDisableProviderForUserOutcome CognitoIdentityProviderClient::AdminDisableProviderForUser(const AdminDisableProviderForUserRequest& request) const
{
  AWS_OPERATION_GUARD(AdminDisableProviderForUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminDisableProviderForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminDisableProviderForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminDisableProviderForUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminDisableUserOutcome CognitoIdentityProviderClient::AdminDisableUser(const AdminDisableUserRequest& request) const
{
  AWS_OPERATION_GUARD(AdminDisableUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminDisableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminDisableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminDisableUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminEnableUserOutcome CognitoIdentityProviderClient::AdminEnableUser(const AdminEnableUserRequest& request) const
{
  AWS_OPERATION_GUARD(AdminEnableUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminEnableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminEnableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminEnableUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminForgetDeviceOutcome CognitoIdentityProviderClient::AdminForgetDevice(const AdminForgetDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(AdminForgetDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminForgetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminForgetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminForgetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminGetDeviceOutcome CognitoIdentityProviderClient::AdminGetDevice(const AdminGetDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(AdminGetDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminGetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminGetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminGetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminGetUserOutcome CognitoIdentityProviderClient::AdminGetUser(const AdminGetUserRequest& request) const
{
  AWS_OPERATION_GUARD(AdminGetUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminGetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminGetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminGetUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminInitiateAuthOutcome CognitoIdentityProviderClient::AdminInitiateAuth(const AdminInitiateAuthRequest& request) const
{
  AWS_OPERATION_GUARD(AdminInitiateAuth);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminInitiateAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminInitiateAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminInitiateAuthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminLinkProviderForUserOutcome CognitoIdentityProviderClient::AdminLinkProviderForUser(const AdminLinkProviderForUserRequest& request) const
{
  AWS_OPERATION_GUARD(AdminLinkProviderForUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminLinkProviderForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminLinkProviderForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminLinkProviderForUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminListDevicesOutcome CognitoIdentityProviderClient::AdminListDevices(const AdminListDevicesRequest& request) const
{
  AWS_OPERATION_GUARD(AdminListDevices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminListDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminListGroupsForUserOutcome CognitoIdentityProviderClient::AdminListGroupsForUser(const AdminListGroupsForUserRequest& request) const
{
  AWS_OPERATION_GUARD(AdminListGroupsForUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminListGroupsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminListGroupsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminListGroupsForUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminListUserAuthEventsOutcome CognitoIdentityProviderClient::AdminListUserAuthEvents(const AdminListUserAuthEventsRequest& request) const
{
  AWS_OPERATION_GUARD(AdminListUserAuthEvents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminListUserAuthEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminListUserAuthEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminListUserAuthEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminRemoveUserFromGroupOutcome CognitoIdentityProviderClient::AdminRemoveUserFromGroup(const AdminRemoveUserFromGroupRequest& request) const
{
  AWS_OPERATION_GUARD(AdminRemoveUserFromGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminRemoveUserFromGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminRemoveUserFromGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminRemoveUserFromGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminResetUserPasswordOutcome CognitoIdentityProviderClient::AdminResetUserPassword(const AdminResetUserPasswordRequest& request) const
{
  AWS_OPERATION_GUARD(AdminResetUserPassword);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminResetUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminResetUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminResetUserPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminRespondToAuthChallengeOutcome CognitoIdentityProviderClient::AdminRespondToAuthChallenge(const AdminRespondToAuthChallengeRequest& request) const
{
  AWS_OPERATION_GUARD(AdminRespondToAuthChallenge);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminRespondToAuthChallenge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminRespondToAuthChallenge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminRespondToAuthChallengeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminSetUserMFAPreferenceOutcome CognitoIdentityProviderClient::AdminSetUserMFAPreference(const AdminSetUserMFAPreferenceRequest& request) const
{
  AWS_OPERATION_GUARD(AdminSetUserMFAPreference);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminSetUserMFAPreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminSetUserMFAPreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminSetUserMFAPreferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminSetUserPasswordOutcome CognitoIdentityProviderClient::AdminSetUserPassword(const AdminSetUserPasswordRequest& request) const
{
  AWS_OPERATION_GUARD(AdminSetUserPassword);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminSetUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminSetUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminSetUserPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminSetUserSettingsOutcome CognitoIdentityProviderClient::AdminSetUserSettings(const AdminSetUserSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(AdminSetUserSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminSetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminSetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminSetUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminUpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::AdminUpdateAuthEventFeedback(const AdminUpdateAuthEventFeedbackRequest& request) const
{
  AWS_OPERATION_GUARD(AdminUpdateAuthEventFeedback);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminUpdateAuthEventFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminUpdateAuthEventFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminUpdateAuthEventFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminUpdateDeviceStatusOutcome CognitoIdentityProviderClient::AdminUpdateDeviceStatus(const AdminUpdateDeviceStatusRequest& request) const
{
  AWS_OPERATION_GUARD(AdminUpdateDeviceStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminUpdateDeviceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminUpdateDeviceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminUpdateDeviceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminUpdateUserAttributesOutcome CognitoIdentityProviderClient::AdminUpdateUserAttributes(const AdminUpdateUserAttributesRequest& request) const
{
  AWS_OPERATION_GUARD(AdminUpdateUserAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminUpdateUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminUpdateUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminUpdateUserAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminUserGlobalSignOutOutcome CognitoIdentityProviderClient::AdminUserGlobalSignOut(const AdminUserGlobalSignOutRequest& request) const
{
  AWS_OPERATION_GUARD(AdminUserGlobalSignOut);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminUserGlobalSignOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminUserGlobalSignOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminUserGlobalSignOutOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateSoftwareTokenOutcome CognitoIdentityProviderClient::AssociateSoftwareToken(const AssociateSoftwareTokenRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateSoftwareToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSoftwareToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSoftwareToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateSoftwareTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ChangePasswordOutcome CognitoIdentityProviderClient::ChangePassword(const ChangePasswordRequest& request) const
{
  AWS_OPERATION_GUARD(ChangePassword);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ChangePassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ChangePassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ChangePasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

ConfirmDeviceOutcome CognitoIdentityProviderClient::ConfirmDevice(const ConfirmDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(ConfirmDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfirmDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfirmDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConfirmDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ConfirmForgotPasswordOutcome CognitoIdentityProviderClient::ConfirmForgotPassword(const ConfirmForgotPasswordRequest& request) const
{
  AWS_OPERATION_GUARD(ConfirmForgotPassword);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfirmForgotPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfirmForgotPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConfirmForgotPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

ConfirmSignUpOutcome CognitoIdentityProviderClient::ConfirmSignUp(const ConfirmSignUpRequest& request) const
{
  AWS_OPERATION_GUARD(ConfirmSignUp);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfirmSignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfirmSignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConfirmSignUpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

CreateGroupOutcome CognitoIdentityProviderClient::CreateGroup(const CreateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIdentityProviderOutcome CognitoIdentityProviderClient::CreateIdentityProvider(const CreateIdentityProviderRequest& request) const
{
  AWS_OPERATION_GUARD(CreateIdentityProvider);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceServerOutcome CognitoIdentityProviderClient::CreateResourceServer(const CreateResourceServerRequest& request) const
{
  AWS_OPERATION_GUARD(CreateResourceServer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateResourceServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserImportJobOutcome CognitoIdentityProviderClient::CreateUserImportJob(const CreateUserImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUserImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserPoolOutcome CognitoIdentityProviderClient::CreateUserPool(const CreateUserPoolRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUserPool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserPoolClientOutcome CognitoIdentityProviderClient::CreateUserPoolClient(const CreateUserPoolClientRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUserPoolClient);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserPoolClientOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserPoolDomainOutcome CognitoIdentityProviderClient::CreateUserPoolDomain(const CreateUserPoolDomainRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUserPoolDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserPoolDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcome CognitoIdentityProviderClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentityProviderOutcome CognitoIdentityProviderClient::DeleteIdentityProvider(const DeleteIdentityProviderRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteIdentityProvider);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceServerOutcome CognitoIdentityProviderClient::DeleteResourceServer(const DeleteResourceServerRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteResourceServer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourceServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcome CognitoIdentityProviderClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

DeleteUserAttributesOutcome CognitoIdentityProviderClient::DeleteUserAttributes(const DeleteUserAttributesRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUserAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

DeleteUserPoolOutcome CognitoIdentityProviderClient::DeleteUserPool(const DeleteUserPoolRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUserPool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserPoolClientOutcome CognitoIdentityProviderClient::DeleteUserPoolClient(const DeleteUserPoolClientRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUserPoolClient);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserPoolClientOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserPoolDomainOutcome CognitoIdentityProviderClient::DeleteUserPoolDomain(const DeleteUserPoolDomainRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUserPoolDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserPoolDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityProviderOutcome CognitoIdentityProviderClient::DescribeIdentityProvider(const DescribeIdentityProviderRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeIdentityProvider);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceServerOutcome CognitoIdentityProviderClient::DescribeResourceServer(const DescribeResourceServerRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeResourceServer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeResourceServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRiskConfigurationOutcome CognitoIdentityProviderClient::DescribeRiskConfiguration(const DescribeRiskConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRiskConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRiskConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRiskConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRiskConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserImportJobOutcome CognitoIdentityProviderClient::DescribeUserImportJob(const DescribeUserImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeUserImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserPoolOutcome CognitoIdentityProviderClient::DescribeUserPool(const DescribeUserPoolRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeUserPool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserPoolClientOutcome CognitoIdentityProviderClient::DescribeUserPoolClient(const DescribeUserPoolClientRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeUserPoolClient);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserPoolClientOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserPoolDomainOutcome CognitoIdentityProviderClient::DescribeUserPoolDomain(const DescribeUserPoolDomainRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeUserPoolDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserPoolDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ForgetDeviceOutcome CognitoIdentityProviderClient::ForgetDevice(const ForgetDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(ForgetDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ForgetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ForgetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ForgetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ForgotPasswordOutcome CognitoIdentityProviderClient::ForgotPassword(const ForgotPasswordRequest& request) const
{
  AWS_OPERATION_GUARD(ForgotPassword);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ForgotPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ForgotPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ForgotPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetCSVHeaderOutcome CognitoIdentityProviderClient::GetCSVHeader(const GetCSVHeaderRequest& request) const
{
  AWS_OPERATION_GUARD(GetCSVHeader);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCSVHeader, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCSVHeader, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCSVHeaderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceOutcome CognitoIdentityProviderClient::GetDevice(const GetDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(GetDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGroupOutcome CognitoIdentityProviderClient::GetGroup(const GetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityProviderByIdentifierOutcome CognitoIdentityProviderClient::GetIdentityProviderByIdentifier(const GetIdentityProviderByIdentifierRequest& request) const
{
  AWS_OPERATION_GUARD(GetIdentityProviderByIdentifier);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdentityProviderByIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIdentityProviderByIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIdentityProviderByIdentifierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSigningCertificateOutcome CognitoIdentityProviderClient::GetSigningCertificate(const GetSigningCertificateRequest& request) const
{
  AWS_OPERATION_GUARD(GetSigningCertificate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSigningCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSigningCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSigningCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUICustomizationOutcome CognitoIdentityProviderClient::GetUICustomization(const GetUICustomizationRequest& request) const
{
  AWS_OPERATION_GUARD(GetUICustomization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUICustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUICustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUICustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUserOutcome CognitoIdentityProviderClient::GetUser(const GetUserRequest& request) const
{
  AWS_OPERATION_GUARD(GetUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetUserAttributeVerificationCodeOutcome CognitoIdentityProviderClient::GetUserAttributeVerificationCode(const GetUserAttributeVerificationCodeRequest& request) const
{
  AWS_OPERATION_GUARD(GetUserAttributeVerificationCode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserAttributeVerificationCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserAttributeVerificationCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUserAttributeVerificationCodeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::GetUserPoolMfaConfig(const GetUserPoolMfaConfigRequest& request) const
{
  AWS_OPERATION_GUARD(GetUserPoolMfaConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserPoolMfaConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserPoolMfaConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUserPoolMfaConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GlobalSignOutOutcome CognitoIdentityProviderClient::GlobalSignOut(const GlobalSignOutRequest& request) const
{
  AWS_OPERATION_GUARD(GlobalSignOut);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GlobalSignOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GlobalSignOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GlobalSignOutOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InitiateAuthOutcome CognitoIdentityProviderClient::InitiateAuth(const InitiateAuthRequest& request) const
{
  AWS_OPERATION_GUARD(InitiateAuth);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InitiateAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InitiateAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return InitiateAuthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

ListDevicesOutcome CognitoIdentityProviderClient::ListDevices(const ListDevicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDevices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcome CognitoIdentityProviderClient::ListGroups(const ListGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityProvidersOutcome CognitoIdentityProviderClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const
{
  AWS_OPERATION_GUARD(ListIdentityProviders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListIdentityProvidersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceServersOutcome CognitoIdentityProviderClient::ListResourceServers(const ListResourceServersRequest& request) const
{
  AWS_OPERATION_GUARD(ListResourceServers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourceServersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome CognitoIdentityProviderClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserImportJobsOutcome CognitoIdentityProviderClient::ListUserImportJobs(const ListUserImportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListUserImportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUserImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserPoolClientsOutcome CognitoIdentityProviderClient::ListUserPoolClients(const ListUserPoolClientsRequest& request) const
{
  AWS_OPERATION_GUARD(ListUserPoolClients);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserPoolClients, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserPoolClients, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUserPoolClientsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserPoolsOutcome CognitoIdentityProviderClient::ListUserPools(const ListUserPoolsRequest& request) const
{
  AWS_OPERATION_GUARD(ListUserPools);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUserPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcome CognitoIdentityProviderClient::ListUsers(const ListUsersRequest& request) const
{
  AWS_OPERATION_GUARD(ListUsers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsersInGroupOutcome CognitoIdentityProviderClient::ListUsersInGroup(const ListUsersInGroupRequest& request) const
{
  AWS_OPERATION_GUARD(ListUsersInGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsersInGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsersInGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUsersInGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResendConfirmationCodeOutcome CognitoIdentityProviderClient::ResendConfirmationCode(const ResendConfirmationCodeRequest& request) const
{
  AWS_OPERATION_GUARD(ResendConfirmationCode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResendConfirmationCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResendConfirmationCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResendConfirmationCodeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

RespondToAuthChallengeOutcome CognitoIdentityProviderClient::RespondToAuthChallenge(const RespondToAuthChallengeRequest& request) const
{
  AWS_OPERATION_GUARD(RespondToAuthChallenge);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RespondToAuthChallenge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RespondToAuthChallenge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RespondToAuthChallengeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

RevokeTokenOutcome CognitoIdentityProviderClient::RevokeToken(const RevokeTokenRequest& request) const
{
  AWS_OPERATION_GUARD(RevokeToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetRiskConfigurationOutcome CognitoIdentityProviderClient::SetRiskConfiguration(const SetRiskConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(SetRiskConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetRiskConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetRiskConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetRiskConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetUICustomizationOutcome CognitoIdentityProviderClient::SetUICustomization(const SetUICustomizationRequest& request) const
{
  AWS_OPERATION_GUARD(SetUICustomization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetUICustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetUICustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetUICustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetUserMFAPreferenceOutcome CognitoIdentityProviderClient::SetUserMFAPreference(const SetUserMFAPreferenceRequest& request) const
{
  AWS_OPERATION_GUARD(SetUserMFAPreference);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetUserMFAPreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetUserMFAPreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetUserMFAPreferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::SetUserPoolMfaConfig(const SetUserPoolMfaConfigRequest& request) const
{
  AWS_OPERATION_GUARD(SetUserPoolMfaConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetUserPoolMfaConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetUserPoolMfaConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetUserPoolMfaConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetUserSettingsOutcome CognitoIdentityProviderClient::SetUserSettings(const SetUserSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(SetUserSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

SignUpOutcome CognitoIdentityProviderClient::SignUp(const SignUpRequest& request) const
{
  AWS_OPERATION_GUARD(SignUp);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SignUpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

StartUserImportJobOutcome CognitoIdentityProviderClient::StartUserImportJob(const StartUserImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartUserImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartUserImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopUserImportJobOutcome CognitoIdentityProviderClient::StopUserImportJob(const StopUserImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopUserImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopUserImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome CognitoIdentityProviderClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome CognitoIdentityProviderClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::UpdateAuthEventFeedback(const UpdateAuthEventFeedbackRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAuthEventFeedback);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAuthEventFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAuthEventFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAuthEventFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceStatusOutcome CognitoIdentityProviderClient::UpdateDeviceStatus(const UpdateDeviceStatusRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDeviceStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeviceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeviceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDeviceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupOutcome CognitoIdentityProviderClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIdentityProviderOutcome CognitoIdentityProviderClient::UpdateIdentityProvider(const UpdateIdentityProviderRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIdentityProvider);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceServerOutcome CognitoIdentityProviderClient::UpdateResourceServer(const UpdateResourceServerRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateResourceServer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateResourceServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserAttributesOutcome CognitoIdentityProviderClient::UpdateUserAttributes(const UpdateUserAttributesRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateUserAttributes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

UpdateUserPoolOutcome CognitoIdentityProviderClient::UpdateUserPool(const UpdateUserPoolRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateUserPool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserPoolClientOutcome CognitoIdentityProviderClient::UpdateUserPoolClient(const UpdateUserPoolClientRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateUserPoolClient);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserPoolClientOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserPoolDomainOutcome CognitoIdentityProviderClient::UpdateUserPoolDomain(const UpdateUserPoolDomainRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateUserPoolDomain);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserPoolDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifySoftwareTokenOutcome CognitoIdentityProviderClient::VerifySoftwareToken(const VerifySoftwareTokenRequest& request) const
{
  AWS_OPERATION_GUARD(VerifySoftwareToken);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifySoftwareToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifySoftwareToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return VerifySoftwareTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyUserAttributeOutcome CognitoIdentityProviderClient::VerifyUserAttribute(const VerifyUserAttributeRequest& request) const
{
  AWS_OPERATION_GUARD(VerifyUserAttribute);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifyUserAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifyUserAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return VerifyUserAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

