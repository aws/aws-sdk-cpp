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
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddCustomAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddCustomAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddCustomAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddCustomAttributesOutcomeCallable CognitoIdentityProviderClient::AddCustomAttributesCallable(const AddCustomAttributesRequest& request) const
{
  std::shared_ptr<AddCustomAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AddCustomAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AddCustomAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AddCustomAttributesAsync(const AddCustomAttributesRequest& request, const AddCustomAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AddCustomAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AddCustomAttributes(*pRequest), context);
    } );
}

AdminAddUserToGroupOutcome CognitoIdentityProviderClient::AdminAddUserToGroup(const AdminAddUserToGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminAddUserToGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminAddUserToGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminAddUserToGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminAddUserToGroupOutcomeCallable CognitoIdentityProviderClient::AdminAddUserToGroupCallable(const AdminAddUserToGroupRequest& request) const
{
  std::shared_ptr<AdminAddUserToGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminAddUserToGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminAddUserToGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminAddUserToGroupAsync(const AdminAddUserToGroupRequest& request, const AdminAddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminAddUserToGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminAddUserToGroup(*pRequest), context);
    } );
}

AdminConfirmSignUpOutcome CognitoIdentityProviderClient::AdminConfirmSignUp(const AdminConfirmSignUpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminConfirmSignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminConfirmSignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminConfirmSignUpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminConfirmSignUpOutcomeCallable CognitoIdentityProviderClient::AdminConfirmSignUpCallable(const AdminConfirmSignUpRequest& request) const
{
  std::shared_ptr<AdminConfirmSignUpRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminConfirmSignUpOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminConfirmSignUp(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminConfirmSignUpAsync(const AdminConfirmSignUpRequest& request, const AdminConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminConfirmSignUpRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminConfirmSignUp(*pRequest), context);
    } );
}

AdminCreateUserOutcome CognitoIdentityProviderClient::AdminCreateUser(const AdminCreateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminCreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminCreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminCreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminCreateUserOutcomeCallable CognitoIdentityProviderClient::AdminCreateUserCallable(const AdminCreateUserRequest& request) const
{
  std::shared_ptr<AdminCreateUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminCreateUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminCreateUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminCreateUserAsync(const AdminCreateUserRequest& request, const AdminCreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminCreateUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminCreateUser(*pRequest), context);
    } );
}

AdminDeleteUserOutcome CognitoIdentityProviderClient::AdminDeleteUser(const AdminDeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminDeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminDeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminDeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminDeleteUserOutcomeCallable CognitoIdentityProviderClient::AdminDeleteUserCallable(const AdminDeleteUserRequest& request) const
{
  std::shared_ptr<AdminDeleteUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminDeleteUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminDeleteUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminDeleteUserAsync(const AdminDeleteUserRequest& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminDeleteUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminDeleteUser(*pRequest), context);
    } );
}

AdminDeleteUserAttributesOutcome CognitoIdentityProviderClient::AdminDeleteUserAttributes(const AdminDeleteUserAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminDeleteUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminDeleteUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminDeleteUserAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminDeleteUserAttributesOutcomeCallable CognitoIdentityProviderClient::AdminDeleteUserAttributesCallable(const AdminDeleteUserAttributesRequest& request) const
{
  std::shared_ptr<AdminDeleteUserAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminDeleteUserAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminDeleteUserAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminDeleteUserAttributesAsync(const AdminDeleteUserAttributesRequest& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminDeleteUserAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminDeleteUserAttributes(*pRequest), context);
    } );
}

AdminDisableProviderForUserOutcome CognitoIdentityProviderClient::AdminDisableProviderForUser(const AdminDisableProviderForUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminDisableProviderForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminDisableProviderForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminDisableProviderForUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminDisableProviderForUserOutcomeCallable CognitoIdentityProviderClient::AdminDisableProviderForUserCallable(const AdminDisableProviderForUserRequest& request) const
{
  std::shared_ptr<AdminDisableProviderForUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminDisableProviderForUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminDisableProviderForUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminDisableProviderForUserAsync(const AdminDisableProviderForUserRequest& request, const AdminDisableProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminDisableProviderForUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminDisableProviderForUser(*pRequest), context);
    } );
}

AdminDisableUserOutcome CognitoIdentityProviderClient::AdminDisableUser(const AdminDisableUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminDisableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminDisableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminDisableUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminDisableUserOutcomeCallable CognitoIdentityProviderClient::AdminDisableUserCallable(const AdminDisableUserRequest& request) const
{
  std::shared_ptr<AdminDisableUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminDisableUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminDisableUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminDisableUserAsync(const AdminDisableUserRequest& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminDisableUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminDisableUser(*pRequest), context);
    } );
}

AdminEnableUserOutcome CognitoIdentityProviderClient::AdminEnableUser(const AdminEnableUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminEnableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminEnableUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminEnableUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminEnableUserOutcomeCallable CognitoIdentityProviderClient::AdminEnableUserCallable(const AdminEnableUserRequest& request) const
{
  std::shared_ptr<AdminEnableUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminEnableUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminEnableUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminEnableUserAsync(const AdminEnableUserRequest& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminEnableUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminEnableUser(*pRequest), context);
    } );
}

AdminForgetDeviceOutcome CognitoIdentityProviderClient::AdminForgetDevice(const AdminForgetDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminForgetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminForgetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminForgetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminForgetDeviceOutcomeCallable CognitoIdentityProviderClient::AdminForgetDeviceCallable(const AdminForgetDeviceRequest& request) const
{
  std::shared_ptr<AdminForgetDeviceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminForgetDeviceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminForgetDevice(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminForgetDeviceAsync(const AdminForgetDeviceRequest& request, const AdminForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminForgetDeviceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminForgetDevice(*pRequest), context);
    } );
}

AdminGetDeviceOutcome CognitoIdentityProviderClient::AdminGetDevice(const AdminGetDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminGetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminGetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminGetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminGetDeviceOutcomeCallable CognitoIdentityProviderClient::AdminGetDeviceCallable(const AdminGetDeviceRequest& request) const
{
  std::shared_ptr<AdminGetDeviceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminGetDeviceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminGetDevice(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminGetDeviceAsync(const AdminGetDeviceRequest& request, const AdminGetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminGetDeviceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminGetDevice(*pRequest), context);
    } );
}

AdminGetUserOutcome CognitoIdentityProviderClient::AdminGetUser(const AdminGetUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminGetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminGetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminGetUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminGetUserOutcomeCallable CognitoIdentityProviderClient::AdminGetUserCallable(const AdminGetUserRequest& request) const
{
  std::shared_ptr<AdminGetUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminGetUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminGetUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminGetUserAsync(const AdminGetUserRequest& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminGetUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminGetUser(*pRequest), context);
    } );
}

AdminInitiateAuthOutcome CognitoIdentityProviderClient::AdminInitiateAuth(const AdminInitiateAuthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminInitiateAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminInitiateAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminInitiateAuthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminInitiateAuthOutcomeCallable CognitoIdentityProviderClient::AdminInitiateAuthCallable(const AdminInitiateAuthRequest& request) const
{
  std::shared_ptr<AdminInitiateAuthRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminInitiateAuthOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminInitiateAuth(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminInitiateAuthAsync(const AdminInitiateAuthRequest& request, const AdminInitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminInitiateAuthRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminInitiateAuth(*pRequest), context);
    } );
}

AdminLinkProviderForUserOutcome CognitoIdentityProviderClient::AdminLinkProviderForUser(const AdminLinkProviderForUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminLinkProviderForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminLinkProviderForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminLinkProviderForUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminLinkProviderForUserOutcomeCallable CognitoIdentityProviderClient::AdminLinkProviderForUserCallable(const AdminLinkProviderForUserRequest& request) const
{
  std::shared_ptr<AdminLinkProviderForUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminLinkProviderForUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminLinkProviderForUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminLinkProviderForUserAsync(const AdminLinkProviderForUserRequest& request, const AdminLinkProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminLinkProviderForUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminLinkProviderForUser(*pRequest), context);
    } );
}

AdminListDevicesOutcome CognitoIdentityProviderClient::AdminListDevices(const AdminListDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminListDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminListDevicesOutcomeCallable CognitoIdentityProviderClient::AdminListDevicesCallable(const AdminListDevicesRequest& request) const
{
  std::shared_ptr<AdminListDevicesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminListDevicesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminListDevices(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminListDevicesAsync(const AdminListDevicesRequest& request, const AdminListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminListDevicesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminListDevices(*pRequest), context);
    } );
}

AdminListGroupsForUserOutcome CognitoIdentityProviderClient::AdminListGroupsForUser(const AdminListGroupsForUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminListGroupsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminListGroupsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminListGroupsForUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminListGroupsForUserOutcomeCallable CognitoIdentityProviderClient::AdminListGroupsForUserCallable(const AdminListGroupsForUserRequest& request) const
{
  std::shared_ptr<AdminListGroupsForUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminListGroupsForUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminListGroupsForUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminListGroupsForUserAsync(const AdminListGroupsForUserRequest& request, const AdminListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminListGroupsForUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminListGroupsForUser(*pRequest), context);
    } );
}

AdminListUserAuthEventsOutcome CognitoIdentityProviderClient::AdminListUserAuthEvents(const AdminListUserAuthEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminListUserAuthEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminListUserAuthEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminListUserAuthEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminListUserAuthEventsOutcomeCallable CognitoIdentityProviderClient::AdminListUserAuthEventsCallable(const AdminListUserAuthEventsRequest& request) const
{
  std::shared_ptr<AdminListUserAuthEventsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminListUserAuthEventsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminListUserAuthEvents(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminListUserAuthEventsAsync(const AdminListUserAuthEventsRequest& request, const AdminListUserAuthEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminListUserAuthEventsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminListUserAuthEvents(*pRequest), context);
    } );
}

AdminRemoveUserFromGroupOutcome CognitoIdentityProviderClient::AdminRemoveUserFromGroup(const AdminRemoveUserFromGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminRemoveUserFromGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminRemoveUserFromGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminRemoveUserFromGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminRemoveUserFromGroupOutcomeCallable CognitoIdentityProviderClient::AdminRemoveUserFromGroupCallable(const AdminRemoveUserFromGroupRequest& request) const
{
  std::shared_ptr<AdminRemoveUserFromGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminRemoveUserFromGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminRemoveUserFromGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminRemoveUserFromGroupAsync(const AdminRemoveUserFromGroupRequest& request, const AdminRemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminRemoveUserFromGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminRemoveUserFromGroup(*pRequest), context);
    } );
}

AdminResetUserPasswordOutcome CognitoIdentityProviderClient::AdminResetUserPassword(const AdminResetUserPasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminResetUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminResetUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminResetUserPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminResetUserPasswordOutcomeCallable CognitoIdentityProviderClient::AdminResetUserPasswordCallable(const AdminResetUserPasswordRequest& request) const
{
  std::shared_ptr<AdminResetUserPasswordRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminResetUserPasswordOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminResetUserPassword(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminResetUserPasswordAsync(const AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminResetUserPasswordRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminResetUserPassword(*pRequest), context);
    } );
}

AdminRespondToAuthChallengeOutcome CognitoIdentityProviderClient::AdminRespondToAuthChallenge(const AdminRespondToAuthChallengeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminRespondToAuthChallenge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminRespondToAuthChallenge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminRespondToAuthChallengeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminRespondToAuthChallengeOutcomeCallable CognitoIdentityProviderClient::AdminRespondToAuthChallengeCallable(const AdminRespondToAuthChallengeRequest& request) const
{
  std::shared_ptr<AdminRespondToAuthChallengeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminRespondToAuthChallengeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminRespondToAuthChallenge(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminRespondToAuthChallengeAsync(const AdminRespondToAuthChallengeRequest& request, const AdminRespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminRespondToAuthChallengeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminRespondToAuthChallenge(*pRequest), context);
    } );
}

AdminSetUserMFAPreferenceOutcome CognitoIdentityProviderClient::AdminSetUserMFAPreference(const AdminSetUserMFAPreferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminSetUserMFAPreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminSetUserMFAPreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminSetUserMFAPreferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminSetUserMFAPreferenceOutcomeCallable CognitoIdentityProviderClient::AdminSetUserMFAPreferenceCallable(const AdminSetUserMFAPreferenceRequest& request) const
{
  std::shared_ptr<AdminSetUserMFAPreferenceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminSetUserMFAPreferenceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminSetUserMFAPreference(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminSetUserMFAPreferenceAsync(const AdminSetUserMFAPreferenceRequest& request, const AdminSetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminSetUserMFAPreferenceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminSetUserMFAPreference(*pRequest), context);
    } );
}

AdminSetUserPasswordOutcome CognitoIdentityProviderClient::AdminSetUserPassword(const AdminSetUserPasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminSetUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminSetUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminSetUserPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminSetUserPasswordOutcomeCallable CognitoIdentityProviderClient::AdminSetUserPasswordCallable(const AdminSetUserPasswordRequest& request) const
{
  std::shared_ptr<AdminSetUserPasswordRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminSetUserPasswordOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminSetUserPassword(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminSetUserPasswordAsync(const AdminSetUserPasswordRequest& request, const AdminSetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminSetUserPasswordRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminSetUserPassword(*pRequest), context);
    } );
}

AdminSetUserSettingsOutcome CognitoIdentityProviderClient::AdminSetUserSettings(const AdminSetUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminSetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminSetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminSetUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminSetUserSettingsOutcomeCallable CognitoIdentityProviderClient::AdminSetUserSettingsCallable(const AdminSetUserSettingsRequest& request) const
{
  std::shared_ptr<AdminSetUserSettingsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminSetUserSettingsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminSetUserSettings(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminSetUserSettingsAsync(const AdminSetUserSettingsRequest& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminSetUserSettingsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminSetUserSettings(*pRequest), context);
    } );
}

AdminUpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::AdminUpdateAuthEventFeedback(const AdminUpdateAuthEventFeedbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminUpdateAuthEventFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminUpdateAuthEventFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminUpdateAuthEventFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminUpdateAuthEventFeedbackOutcomeCallable CognitoIdentityProviderClient::AdminUpdateAuthEventFeedbackCallable(const AdminUpdateAuthEventFeedbackRequest& request) const
{
  std::shared_ptr<AdminUpdateAuthEventFeedbackRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminUpdateAuthEventFeedbackOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminUpdateAuthEventFeedback(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminUpdateAuthEventFeedbackAsync(const AdminUpdateAuthEventFeedbackRequest& request, const AdminUpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminUpdateAuthEventFeedbackRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminUpdateAuthEventFeedback(*pRequest), context);
    } );
}

AdminUpdateDeviceStatusOutcome CognitoIdentityProviderClient::AdminUpdateDeviceStatus(const AdminUpdateDeviceStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminUpdateDeviceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminUpdateDeviceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminUpdateDeviceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminUpdateDeviceStatusOutcomeCallable CognitoIdentityProviderClient::AdminUpdateDeviceStatusCallable(const AdminUpdateDeviceStatusRequest& request) const
{
  std::shared_ptr<AdminUpdateDeviceStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminUpdateDeviceStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminUpdateDeviceStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminUpdateDeviceStatusAsync(const AdminUpdateDeviceStatusRequest& request, const AdminUpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminUpdateDeviceStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminUpdateDeviceStatus(*pRequest), context);
    } );
}

AdminUpdateUserAttributesOutcome CognitoIdentityProviderClient::AdminUpdateUserAttributes(const AdminUpdateUserAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminUpdateUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminUpdateUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminUpdateUserAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminUpdateUserAttributesOutcomeCallable CognitoIdentityProviderClient::AdminUpdateUserAttributesCallable(const AdminUpdateUserAttributesRequest& request) const
{
  std::shared_ptr<AdminUpdateUserAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminUpdateUserAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminUpdateUserAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminUpdateUserAttributesAsync(const AdminUpdateUserAttributesRequest& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminUpdateUserAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminUpdateUserAttributes(*pRequest), context);
    } );
}

AdminUserGlobalSignOutOutcome CognitoIdentityProviderClient::AdminUserGlobalSignOut(const AdminUserGlobalSignOutRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AdminUserGlobalSignOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AdminUserGlobalSignOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AdminUserGlobalSignOutOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AdminUserGlobalSignOutOutcomeCallable CognitoIdentityProviderClient::AdminUserGlobalSignOutCallable(const AdminUserGlobalSignOutRequest& request) const
{
  std::shared_ptr<AdminUserGlobalSignOutRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AdminUserGlobalSignOutOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AdminUserGlobalSignOut(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AdminUserGlobalSignOutAsync(const AdminUserGlobalSignOutRequest& request, const AdminUserGlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AdminUserGlobalSignOutRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AdminUserGlobalSignOut(*pRequest), context);
    } );
}

AssociateSoftwareTokenOutcome CognitoIdentityProviderClient::AssociateSoftwareToken(const AssociateSoftwareTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSoftwareToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSoftwareToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateSoftwareTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateSoftwareTokenOutcomeCallable CognitoIdentityProviderClient::AssociateSoftwareTokenCallable(const AssociateSoftwareTokenRequest& request) const
{
  std::shared_ptr<AssociateSoftwareTokenRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< AssociateSoftwareTokenOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->AssociateSoftwareToken(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::AssociateSoftwareTokenAsync(const AssociateSoftwareTokenRequest& request, const AssociateSoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<AssociateSoftwareTokenRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, AssociateSoftwareToken(*pRequest), context);
    } );
}

ChangePasswordOutcome CognitoIdentityProviderClient::ChangePassword(const ChangePasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ChangePassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ChangePassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ChangePasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

ChangePasswordOutcomeCallable CognitoIdentityProviderClient::ChangePasswordCallable(const ChangePasswordRequest& request) const
{
  std::shared_ptr<ChangePasswordRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ChangePasswordOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ChangePassword(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ChangePasswordAsync(const ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ChangePasswordRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ChangePassword(*pRequest), context);
    } );
}

ConfirmDeviceOutcome CognitoIdentityProviderClient::ConfirmDevice(const ConfirmDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfirmDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfirmDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConfirmDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ConfirmDeviceOutcomeCallable CognitoIdentityProviderClient::ConfirmDeviceCallable(const ConfirmDeviceRequest& request) const
{
  std::shared_ptr<ConfirmDeviceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ConfirmDeviceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ConfirmDevice(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ConfirmDeviceAsync(const ConfirmDeviceRequest& request, const ConfirmDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ConfirmDeviceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ConfirmDevice(*pRequest), context);
    } );
}

ConfirmForgotPasswordOutcome CognitoIdentityProviderClient::ConfirmForgotPassword(const ConfirmForgotPasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfirmForgotPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfirmForgotPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConfirmForgotPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

ConfirmForgotPasswordOutcomeCallable CognitoIdentityProviderClient::ConfirmForgotPasswordCallable(const ConfirmForgotPasswordRequest& request) const
{
  std::shared_ptr<ConfirmForgotPasswordRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ConfirmForgotPasswordOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ConfirmForgotPassword(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ConfirmForgotPasswordAsync(const ConfirmForgotPasswordRequest& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ConfirmForgotPasswordRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ConfirmForgotPassword(*pRequest), context);
    } );
}

ConfirmSignUpOutcome CognitoIdentityProviderClient::ConfirmSignUp(const ConfirmSignUpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfirmSignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfirmSignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ConfirmSignUpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

ConfirmSignUpOutcomeCallable CognitoIdentityProviderClient::ConfirmSignUpCallable(const ConfirmSignUpRequest& request) const
{
  std::shared_ptr<ConfirmSignUpRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ConfirmSignUpOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ConfirmSignUp(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ConfirmSignUpAsync(const ConfirmSignUpRequest& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ConfirmSignUpRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ConfirmSignUp(*pRequest), context);
    } );
}

CreateGroupOutcome CognitoIdentityProviderClient::CreateGroup(const CreateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable CognitoIdentityProviderClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  std::shared_ptr<CreateGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateGroup(*pRequest), context);
    } );
}

CreateIdentityProviderOutcome CognitoIdentityProviderClient::CreateIdentityProvider(const CreateIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIdentityProviderOutcomeCallable CognitoIdentityProviderClient::CreateIdentityProviderCallable(const CreateIdentityProviderRequest& request) const
{
  std::shared_ptr<CreateIdentityProviderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateIdentityProvider(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::CreateIdentityProviderAsync(const CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateIdentityProviderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateIdentityProvider(*pRequest), context);
    } );
}

CreateResourceServerOutcome CognitoIdentityProviderClient::CreateResourceServer(const CreateResourceServerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateResourceServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceServerOutcomeCallable CognitoIdentityProviderClient::CreateResourceServerCallable(const CreateResourceServerRequest& request) const
{
  std::shared_ptr<CreateResourceServerRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceServerOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateResourceServer(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::CreateResourceServerAsync(const CreateResourceServerRequest& request, const CreateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateResourceServerRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateResourceServer(*pRequest), context);
    } );
}

CreateUserImportJobOutcome CognitoIdentityProviderClient::CreateUserImportJob(const CreateUserImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserImportJobOutcomeCallable CognitoIdentityProviderClient::CreateUserImportJobCallable(const CreateUserImportJobRequest& request) const
{
  std::shared_ptr<CreateUserImportJobRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateUserImportJobOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateUserImportJob(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::CreateUserImportJobAsync(const CreateUserImportJobRequest& request, const CreateUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateUserImportJobRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateUserImportJob(*pRequest), context);
    } );
}

CreateUserPoolOutcome CognitoIdentityProviderClient::CreateUserPool(const CreateUserPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserPoolOutcomeCallable CognitoIdentityProviderClient::CreateUserPoolCallable(const CreateUserPoolRequest& request) const
{
  std::shared_ptr<CreateUserPoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateUserPoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateUserPool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::CreateUserPoolAsync(const CreateUserPoolRequest& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateUserPoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateUserPool(*pRequest), context);
    } );
}

CreateUserPoolClientOutcome CognitoIdentityProviderClient::CreateUserPoolClient(const CreateUserPoolClientRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserPoolClientOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserPoolClientOutcomeCallable CognitoIdentityProviderClient::CreateUserPoolClientCallable(const CreateUserPoolClientRequest& request) const
{
  std::shared_ptr<CreateUserPoolClientRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateUserPoolClientOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateUserPoolClient(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::CreateUserPoolClientAsync(const CreateUserPoolClientRequest& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateUserPoolClientRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateUserPoolClient(*pRequest), context);
    } );
}

CreateUserPoolDomainOutcome CognitoIdentityProviderClient::CreateUserPoolDomain(const CreateUserPoolDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserPoolDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserPoolDomainOutcomeCallable CognitoIdentityProviderClient::CreateUserPoolDomainCallable(const CreateUserPoolDomainRequest& request) const
{
  std::shared_ptr<CreateUserPoolDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< CreateUserPoolDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->CreateUserPoolDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::CreateUserPoolDomainAsync(const CreateUserPoolDomainRequest& request, const CreateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<CreateUserPoolDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, CreateUserPoolDomain(*pRequest), context);
    } );
}

DeleteGroupOutcome CognitoIdentityProviderClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcomeCallable CognitoIdentityProviderClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  std::shared_ptr<DeleteGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteGroup(*pRequest), context);
    } );
}

DeleteIdentityProviderOutcome CognitoIdentityProviderClient::DeleteIdentityProvider(const DeleteIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentityProviderOutcomeCallable CognitoIdentityProviderClient::DeleteIdentityProviderCallable(const DeleteIdentityProviderRequest& request) const
{
  std::shared_ptr<DeleteIdentityProviderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteIdentityProvider(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DeleteIdentityProviderAsync(const DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteIdentityProviderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteIdentityProvider(*pRequest), context);
    } );
}

DeleteResourceServerOutcome CognitoIdentityProviderClient::DeleteResourceServer(const DeleteResourceServerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteResourceServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceServerOutcomeCallable CognitoIdentityProviderClient::DeleteResourceServerCallable(const DeleteResourceServerRequest& request) const
{
  std::shared_ptr<DeleteResourceServerRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceServerOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteResourceServer(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DeleteResourceServerAsync(const DeleteResourceServerRequest& request, const DeleteResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteResourceServerRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteResourceServer(*pRequest), context);
    } );
}

DeleteUserOutcome CognitoIdentityProviderClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

DeleteUserOutcomeCallable CognitoIdentityProviderClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  std::shared_ptr<DeleteUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteUser(*pRequest), context);
    } );
}

DeleteUserAttributesOutcome CognitoIdentityProviderClient::DeleteUserAttributes(const DeleteUserAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

DeleteUserAttributesOutcomeCallable CognitoIdentityProviderClient::DeleteUserAttributesCallable(const DeleteUserAttributesRequest& request) const
{
  std::shared_ptr<DeleteUserAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteUserAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DeleteUserAttributesAsync(const DeleteUserAttributesRequest& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteUserAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteUserAttributes(*pRequest), context);
    } );
}

DeleteUserPoolOutcome CognitoIdentityProviderClient::DeleteUserPool(const DeleteUserPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserPoolOutcomeCallable CognitoIdentityProviderClient::DeleteUserPoolCallable(const DeleteUserPoolRequest& request) const
{
  std::shared_ptr<DeleteUserPoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteUserPool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DeleteUserPoolAsync(const DeleteUserPoolRequest& request, const DeleteUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteUserPoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteUserPool(*pRequest), context);
    } );
}

DeleteUserPoolClientOutcome CognitoIdentityProviderClient::DeleteUserPoolClient(const DeleteUserPoolClientRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserPoolClientOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserPoolClientOutcomeCallable CognitoIdentityProviderClient::DeleteUserPoolClientCallable(const DeleteUserPoolClientRequest& request) const
{
  std::shared_ptr<DeleteUserPoolClientRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPoolClientOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteUserPoolClient(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DeleteUserPoolClientAsync(const DeleteUserPoolClientRequest& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteUserPoolClientRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteUserPoolClient(*pRequest), context);
    } );
}

DeleteUserPoolDomainOutcome CognitoIdentityProviderClient::DeleteUserPoolDomain(const DeleteUserPoolDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserPoolDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserPoolDomainOutcomeCallable CognitoIdentityProviderClient::DeleteUserPoolDomainCallable(const DeleteUserPoolDomainRequest& request) const
{
  std::shared_ptr<DeleteUserPoolDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPoolDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DeleteUserPoolDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DeleteUserPoolDomainAsync(const DeleteUserPoolDomainRequest& request, const DeleteUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DeleteUserPoolDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DeleteUserPoolDomain(*pRequest), context);
    } );
}

DescribeIdentityProviderOutcome CognitoIdentityProviderClient::DescribeIdentityProvider(const DescribeIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityProviderOutcomeCallable CognitoIdentityProviderClient::DescribeIdentityProviderCallable(const DescribeIdentityProviderRequest& request) const
{
  std::shared_ptr<DescribeIdentityProviderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeIdentityProvider(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DescribeIdentityProviderAsync(const DescribeIdentityProviderRequest& request, const DescribeIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeIdentityProviderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeIdentityProvider(*pRequest), context);
    } );
}

DescribeResourceServerOutcome CognitoIdentityProviderClient::DescribeResourceServer(const DescribeResourceServerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeResourceServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceServerOutcomeCallable CognitoIdentityProviderClient::DescribeResourceServerCallable(const DescribeResourceServerRequest& request) const
{
  std::shared_ptr<DescribeResourceServerRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceServerOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeResourceServer(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DescribeResourceServerAsync(const DescribeResourceServerRequest& request, const DescribeResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeResourceServerRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeResourceServer(*pRequest), context);
    } );
}

DescribeRiskConfigurationOutcome CognitoIdentityProviderClient::DescribeRiskConfiguration(const DescribeRiskConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRiskConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRiskConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRiskConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRiskConfigurationOutcomeCallable CognitoIdentityProviderClient::DescribeRiskConfigurationCallable(const DescribeRiskConfigurationRequest& request) const
{
  std::shared_ptr<DescribeRiskConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeRiskConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeRiskConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DescribeRiskConfigurationAsync(const DescribeRiskConfigurationRequest& request, const DescribeRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeRiskConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeRiskConfiguration(*pRequest), context);
    } );
}

DescribeUserImportJobOutcome CognitoIdentityProviderClient::DescribeUserImportJob(const DescribeUserImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserImportJobOutcomeCallable CognitoIdentityProviderClient::DescribeUserImportJobCallable(const DescribeUserImportJobRequest& request) const
{
  std::shared_ptr<DescribeUserImportJobRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserImportJobOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeUserImportJob(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DescribeUserImportJobAsync(const DescribeUserImportJobRequest& request, const DescribeUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeUserImportJobRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeUserImportJob(*pRequest), context);
    } );
}

DescribeUserPoolOutcome CognitoIdentityProviderClient::DescribeUserPool(const DescribeUserPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserPoolOutcomeCallable CognitoIdentityProviderClient::DescribeUserPoolCallable(const DescribeUserPoolRequest& request) const
{
  std::shared_ptr<DescribeUserPoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserPoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeUserPool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DescribeUserPoolAsync(const DescribeUserPoolRequest& request, const DescribeUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeUserPoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeUserPool(*pRequest), context);
    } );
}

DescribeUserPoolClientOutcome CognitoIdentityProviderClient::DescribeUserPoolClient(const DescribeUserPoolClientRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserPoolClientOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserPoolClientOutcomeCallable CognitoIdentityProviderClient::DescribeUserPoolClientCallable(const DescribeUserPoolClientRequest& request) const
{
  std::shared_ptr<DescribeUserPoolClientRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserPoolClientOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeUserPoolClient(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DescribeUserPoolClientAsync(const DescribeUserPoolClientRequest& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeUserPoolClientRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeUserPoolClient(*pRequest), context);
    } );
}

DescribeUserPoolDomainOutcome CognitoIdentityProviderClient::DescribeUserPoolDomain(const DescribeUserPoolDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserPoolDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserPoolDomainOutcomeCallable CognitoIdentityProviderClient::DescribeUserPoolDomainCallable(const DescribeUserPoolDomainRequest& request) const
{
  std::shared_ptr<DescribeUserPoolDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserPoolDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->DescribeUserPoolDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::DescribeUserPoolDomainAsync(const DescribeUserPoolDomainRequest& request, const DescribeUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<DescribeUserPoolDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, DescribeUserPoolDomain(*pRequest), context);
    } );
}

ForgetDeviceOutcome CognitoIdentityProviderClient::ForgetDevice(const ForgetDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ForgetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ForgetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ForgetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ForgetDeviceOutcomeCallable CognitoIdentityProviderClient::ForgetDeviceCallable(const ForgetDeviceRequest& request) const
{
  std::shared_ptr<ForgetDeviceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ForgetDeviceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ForgetDevice(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ForgetDeviceAsync(const ForgetDeviceRequest& request, const ForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ForgetDeviceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ForgetDevice(*pRequest), context);
    } );
}

ForgotPasswordOutcome CognitoIdentityProviderClient::ForgotPassword(const ForgotPasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ForgotPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ForgotPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ForgotPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

ForgotPasswordOutcomeCallable CognitoIdentityProviderClient::ForgotPasswordCallable(const ForgotPasswordRequest& request) const
{
  std::shared_ptr<ForgotPasswordRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ForgotPasswordOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ForgotPassword(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ForgotPasswordAsync(const ForgotPasswordRequest& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ForgotPasswordRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ForgotPassword(*pRequest), context);
    } );
}

GetCSVHeaderOutcome CognitoIdentityProviderClient::GetCSVHeader(const GetCSVHeaderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCSVHeader, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCSVHeader, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCSVHeaderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCSVHeaderOutcomeCallable CognitoIdentityProviderClient::GetCSVHeaderCallable(const GetCSVHeaderRequest& request) const
{
  std::shared_ptr<GetCSVHeaderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetCSVHeaderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetCSVHeader(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GetCSVHeaderAsync(const GetCSVHeaderRequest& request, const GetCSVHeaderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetCSVHeaderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetCSVHeader(*pRequest), context);
    } );
}

GetDeviceOutcome CognitoIdentityProviderClient::GetDevice(const GetDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceOutcomeCallable CognitoIdentityProviderClient::GetDeviceCallable(const GetDeviceRequest& request) const
{
  std::shared_ptr<GetDeviceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetDevice(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetDeviceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetDevice(*pRequest), context);
    } );
}

GetGroupOutcome CognitoIdentityProviderClient::GetGroup(const GetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGroupOutcomeCallable CognitoIdentityProviderClient::GetGroupCallable(const GetGroupRequest& request) const
{
  std::shared_ptr<GetGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetGroup(*pRequest), context);
    } );
}

GetIdentityProviderByIdentifierOutcome CognitoIdentityProviderClient::GetIdentityProviderByIdentifier(const GetIdentityProviderByIdentifierRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdentityProviderByIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIdentityProviderByIdentifier, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIdentityProviderByIdentifierOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityProviderByIdentifierOutcomeCallable CognitoIdentityProviderClient::GetIdentityProviderByIdentifierCallable(const GetIdentityProviderByIdentifierRequest& request) const
{
  std::shared_ptr<GetIdentityProviderByIdentifierRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityProviderByIdentifierOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetIdentityProviderByIdentifier(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GetIdentityProviderByIdentifierAsync(const GetIdentityProviderByIdentifierRequest& request, const GetIdentityProviderByIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetIdentityProviderByIdentifierRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetIdentityProviderByIdentifier(*pRequest), context);
    } );
}

GetSigningCertificateOutcome CognitoIdentityProviderClient::GetSigningCertificate(const GetSigningCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSigningCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSigningCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSigningCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSigningCertificateOutcomeCallable CognitoIdentityProviderClient::GetSigningCertificateCallable(const GetSigningCertificateRequest& request) const
{
  std::shared_ptr<GetSigningCertificateRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetSigningCertificateOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetSigningCertificate(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GetSigningCertificateAsync(const GetSigningCertificateRequest& request, const GetSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetSigningCertificateRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetSigningCertificate(*pRequest), context);
    } );
}

GetUICustomizationOutcome CognitoIdentityProviderClient::GetUICustomization(const GetUICustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUICustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUICustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUICustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUICustomizationOutcomeCallable CognitoIdentityProviderClient::GetUICustomizationCallable(const GetUICustomizationRequest& request) const
{
  std::shared_ptr<GetUICustomizationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetUICustomizationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetUICustomization(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GetUICustomizationAsync(const GetUICustomizationRequest& request, const GetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetUICustomizationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetUICustomization(*pRequest), context);
    } );
}

GetUserOutcome CognitoIdentityProviderClient::GetUser(const GetUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetUserOutcomeCallable CognitoIdentityProviderClient::GetUserCallable(const GetUserRequest& request) const
{
  std::shared_ptr<GetUserRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetUserOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetUser(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GetUserAsync(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetUserRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetUser(*pRequest), context);
    } );
}

GetUserAttributeVerificationCodeOutcome CognitoIdentityProviderClient::GetUserAttributeVerificationCode(const GetUserAttributeVerificationCodeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserAttributeVerificationCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserAttributeVerificationCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUserAttributeVerificationCodeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetUserAttributeVerificationCodeOutcomeCallable CognitoIdentityProviderClient::GetUserAttributeVerificationCodeCallable(const GetUserAttributeVerificationCodeRequest& request) const
{
  std::shared_ptr<GetUserAttributeVerificationCodeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetUserAttributeVerificationCodeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetUserAttributeVerificationCode(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GetUserAttributeVerificationCodeAsync(const GetUserAttributeVerificationCodeRequest& request, const GetUserAttributeVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetUserAttributeVerificationCodeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetUserAttributeVerificationCode(*pRequest), context);
    } );
}

GetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::GetUserPoolMfaConfig(const GetUserPoolMfaConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserPoolMfaConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserPoolMfaConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUserPoolMfaConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUserPoolMfaConfigOutcomeCallable CognitoIdentityProviderClient::GetUserPoolMfaConfigCallable(const GetUserPoolMfaConfigRequest& request) const
{
  std::shared_ptr<GetUserPoolMfaConfigRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GetUserPoolMfaConfigOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GetUserPoolMfaConfig(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GetUserPoolMfaConfigAsync(const GetUserPoolMfaConfigRequest& request, const GetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GetUserPoolMfaConfigRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GetUserPoolMfaConfig(*pRequest), context);
    } );
}

GlobalSignOutOutcome CognitoIdentityProviderClient::GlobalSignOut(const GlobalSignOutRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GlobalSignOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GlobalSignOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GlobalSignOutOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GlobalSignOutOutcomeCallable CognitoIdentityProviderClient::GlobalSignOutCallable(const GlobalSignOutRequest& request) const
{
  std::shared_ptr<GlobalSignOutRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< GlobalSignOutOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->GlobalSignOut(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::GlobalSignOutAsync(const GlobalSignOutRequest& request, const GlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<GlobalSignOutRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, GlobalSignOut(*pRequest), context);
    } );
}

InitiateAuthOutcome CognitoIdentityProviderClient::InitiateAuth(const InitiateAuthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InitiateAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InitiateAuth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return InitiateAuthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

InitiateAuthOutcomeCallable CognitoIdentityProviderClient::InitiateAuthCallable(const InitiateAuthRequest& request) const
{
  std::shared_ptr<InitiateAuthRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< InitiateAuthOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->InitiateAuth(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::InitiateAuthAsync(const InitiateAuthRequest& request, const InitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<InitiateAuthRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, InitiateAuth(*pRequest), context);
    } );
}

ListDevicesOutcome CognitoIdentityProviderClient::ListDevices(const ListDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesOutcomeCallable CognitoIdentityProviderClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  std::shared_ptr<ListDevicesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListDevices(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListDevicesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListDevices(*pRequest), context);
    } );
}

ListGroupsOutcome CognitoIdentityProviderClient::ListGroups(const ListGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcomeCallable CognitoIdentityProviderClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  std::shared_ptr<ListGroupsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListGroups(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListGroupsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListGroups(*pRequest), context);
    } );
}

ListIdentityProvidersOutcome CognitoIdentityProviderClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListIdentityProvidersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityProvidersOutcomeCallable CognitoIdentityProviderClient::ListIdentityProvidersCallable(const ListIdentityProvidersRequest& request) const
{
  std::shared_ptr<ListIdentityProvidersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityProvidersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListIdentityProviders(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListIdentityProvidersAsync(const ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListIdentityProvidersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListIdentityProviders(*pRequest), context);
    } );
}

ListResourceServersOutcome CognitoIdentityProviderClient::ListResourceServers(const ListResourceServersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListResourceServersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceServersOutcomeCallable CognitoIdentityProviderClient::ListResourceServersCallable(const ListResourceServersRequest& request) const
{
  std::shared_ptr<ListResourceServersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListResourceServersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListResourceServers(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListResourceServersAsync(const ListResourceServersRequest& request, const ListResourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListResourceServersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListResourceServers(*pRequest), context);
    } );
}

ListTagsForResourceOutcome CognitoIdentityProviderClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CognitoIdentityProviderClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  std::shared_ptr<ListTagsForResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListTagsForResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListTagsForResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListTagsForResource(*pRequest), context);
    } );
}

ListUserImportJobsOutcome CognitoIdentityProviderClient::ListUserImportJobs(const ListUserImportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUserImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserImportJobsOutcomeCallable CognitoIdentityProviderClient::ListUserImportJobsCallable(const ListUserImportJobsRequest& request) const
{
  std::shared_ptr<ListUserImportJobsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListUserImportJobsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListUserImportJobs(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListUserImportJobsAsync(const ListUserImportJobsRequest& request, const ListUserImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListUserImportJobsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListUserImportJobs(*pRequest), context);
    } );
}

ListUserPoolClientsOutcome CognitoIdentityProviderClient::ListUserPoolClients(const ListUserPoolClientsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserPoolClients, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserPoolClients, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUserPoolClientsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserPoolClientsOutcomeCallable CognitoIdentityProviderClient::ListUserPoolClientsCallable(const ListUserPoolClientsRequest& request) const
{
  std::shared_ptr<ListUserPoolClientsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListUserPoolClientsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListUserPoolClients(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListUserPoolClientsAsync(const ListUserPoolClientsRequest& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListUserPoolClientsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListUserPoolClients(*pRequest), context);
    } );
}

ListUserPoolsOutcome CognitoIdentityProviderClient::ListUserPools(const ListUserPoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUserPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserPoolsOutcomeCallable CognitoIdentityProviderClient::ListUserPoolsCallable(const ListUserPoolsRequest& request) const
{
  std::shared_ptr<ListUserPoolsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListUserPoolsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListUserPools(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListUserPoolsAsync(const ListUserPoolsRequest& request, const ListUserPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListUserPoolsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListUserPools(*pRequest), context);
    } );
}

ListUsersOutcome CognitoIdentityProviderClient::ListUsers(const ListUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcomeCallable CognitoIdentityProviderClient::ListUsersCallable(const ListUsersRequest& request) const
{
  std::shared_ptr<ListUsersRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListUsers(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListUsersRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListUsers(*pRequest), context);
    } );
}

ListUsersInGroupOutcome CognitoIdentityProviderClient::ListUsersInGroup(const ListUsersInGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsersInGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsersInGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUsersInGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsersInGroupOutcomeCallable CognitoIdentityProviderClient::ListUsersInGroupCallable(const ListUsersInGroupRequest& request) const
{
  std::shared_ptr<ListUsersInGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ListUsersInGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ListUsersInGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ListUsersInGroupAsync(const ListUsersInGroupRequest& request, const ListUsersInGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ListUsersInGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ListUsersInGroup(*pRequest), context);
    } );
}

ResendConfirmationCodeOutcome CognitoIdentityProviderClient::ResendConfirmationCode(const ResendConfirmationCodeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResendConfirmationCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResendConfirmationCode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResendConfirmationCodeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

ResendConfirmationCodeOutcomeCallable CognitoIdentityProviderClient::ResendConfirmationCodeCallable(const ResendConfirmationCodeRequest& request) const
{
  std::shared_ptr<ResendConfirmationCodeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< ResendConfirmationCodeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->ResendConfirmationCode(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::ResendConfirmationCodeAsync(const ResendConfirmationCodeRequest& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<ResendConfirmationCodeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, ResendConfirmationCode(*pRequest), context);
    } );
}

RespondToAuthChallengeOutcome CognitoIdentityProviderClient::RespondToAuthChallenge(const RespondToAuthChallengeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RespondToAuthChallenge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RespondToAuthChallenge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RespondToAuthChallengeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

RespondToAuthChallengeOutcomeCallable CognitoIdentityProviderClient::RespondToAuthChallengeCallable(const RespondToAuthChallengeRequest& request) const
{
  std::shared_ptr<RespondToAuthChallengeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RespondToAuthChallengeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RespondToAuthChallenge(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::RespondToAuthChallengeAsync(const RespondToAuthChallengeRequest& request, const RespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RespondToAuthChallengeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RespondToAuthChallenge(*pRequest), context);
    } );
}

RevokeTokenOutcome CognitoIdentityProviderClient::RevokeToken(const RevokeTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokeTokenOutcomeCallable CognitoIdentityProviderClient::RevokeTokenCallable(const RevokeTokenRequest& request) const
{
  std::shared_ptr<RevokeTokenRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< RevokeTokenOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->RevokeToken(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::RevokeTokenAsync(const RevokeTokenRequest& request, const RevokeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<RevokeTokenRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, RevokeToken(*pRequest), context);
    } );
}

SetRiskConfigurationOutcome CognitoIdentityProviderClient::SetRiskConfiguration(const SetRiskConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetRiskConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetRiskConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetRiskConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetRiskConfigurationOutcomeCallable CognitoIdentityProviderClient::SetRiskConfigurationCallable(const SetRiskConfigurationRequest& request) const
{
  std::shared_ptr<SetRiskConfigurationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SetRiskConfigurationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SetRiskConfiguration(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::SetRiskConfigurationAsync(const SetRiskConfigurationRequest& request, const SetRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SetRiskConfigurationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SetRiskConfiguration(*pRequest), context);
    } );
}

SetUICustomizationOutcome CognitoIdentityProviderClient::SetUICustomization(const SetUICustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetUICustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetUICustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetUICustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetUICustomizationOutcomeCallable CognitoIdentityProviderClient::SetUICustomizationCallable(const SetUICustomizationRequest& request) const
{
  std::shared_ptr<SetUICustomizationRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SetUICustomizationOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SetUICustomization(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::SetUICustomizationAsync(const SetUICustomizationRequest& request, const SetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SetUICustomizationRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SetUICustomization(*pRequest), context);
    } );
}

SetUserMFAPreferenceOutcome CognitoIdentityProviderClient::SetUserMFAPreference(const SetUserMFAPreferenceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetUserMFAPreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetUserMFAPreference, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetUserMFAPreferenceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetUserMFAPreferenceOutcomeCallable CognitoIdentityProviderClient::SetUserMFAPreferenceCallable(const SetUserMFAPreferenceRequest& request) const
{
  std::shared_ptr<SetUserMFAPreferenceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SetUserMFAPreferenceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SetUserMFAPreference(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::SetUserMFAPreferenceAsync(const SetUserMFAPreferenceRequest& request, const SetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SetUserMFAPreferenceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SetUserMFAPreference(*pRequest), context);
    } );
}

SetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::SetUserPoolMfaConfig(const SetUserPoolMfaConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetUserPoolMfaConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetUserPoolMfaConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetUserPoolMfaConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetUserPoolMfaConfigOutcomeCallable CognitoIdentityProviderClient::SetUserPoolMfaConfigCallable(const SetUserPoolMfaConfigRequest& request) const
{
  std::shared_ptr<SetUserPoolMfaConfigRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SetUserPoolMfaConfigOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SetUserPoolMfaConfig(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::SetUserPoolMfaConfigAsync(const SetUserPoolMfaConfigRequest& request, const SetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SetUserPoolMfaConfigRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SetUserPoolMfaConfig(*pRequest), context);
    } );
}

SetUserSettingsOutcome CognitoIdentityProviderClient::SetUserSettings(const SetUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

SetUserSettingsOutcomeCallable CognitoIdentityProviderClient::SetUserSettingsCallable(const SetUserSettingsRequest& request) const
{
  std::shared_ptr<SetUserSettingsRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SetUserSettingsOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SetUserSettings(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::SetUserSettingsAsync(const SetUserSettingsRequest& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SetUserSettingsRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SetUserSettings(*pRequest), context);
    } );
}

SignUpOutcome CognitoIdentityProviderClient::SignUp(const SignUpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SignUp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SignUpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

SignUpOutcomeCallable CognitoIdentityProviderClient::SignUpCallable(const SignUpRequest& request) const
{
  std::shared_ptr<SignUpRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< SignUpOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->SignUp(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::SignUpAsync(const SignUpRequest& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<SignUpRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, SignUp(*pRequest), context);
    } );
}

StartUserImportJobOutcome CognitoIdentityProviderClient::StartUserImportJob(const StartUserImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartUserImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartUserImportJobOutcomeCallable CognitoIdentityProviderClient::StartUserImportJobCallable(const StartUserImportJobRequest& request) const
{
  std::shared_ptr<StartUserImportJobRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< StartUserImportJobOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->StartUserImportJob(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::StartUserImportJobAsync(const StartUserImportJobRequest& request, const StartUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<StartUserImportJobRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, StartUserImportJob(*pRequest), context);
    } );
}

StopUserImportJobOutcome CognitoIdentityProviderClient::StopUserImportJob(const StopUserImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopUserImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopUserImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopUserImportJobOutcomeCallable CognitoIdentityProviderClient::StopUserImportJobCallable(const StopUserImportJobRequest& request) const
{
  std::shared_ptr<StopUserImportJobRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< StopUserImportJobOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->StopUserImportJob(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::StopUserImportJobAsync(const StopUserImportJobRequest& request, const StopUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<StopUserImportJobRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, StopUserImportJob(*pRequest), context);
    } );
}

TagResourceOutcome CognitoIdentityProviderClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CognitoIdentityProviderClient::TagResourceCallable(const TagResourceRequest& request) const
{
  std::shared_ptr<TagResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->TagResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<TagResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, TagResource(*pRequest), context);
    } );
}

UntagResourceOutcome CognitoIdentityProviderClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CognitoIdentityProviderClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  std::shared_ptr<UntagResourceRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UntagResource(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UntagResourceRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UntagResource(*pRequest), context);
    } );
}

UpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::UpdateAuthEventFeedback(const UpdateAuthEventFeedbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAuthEventFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAuthEventFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAuthEventFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAuthEventFeedbackOutcomeCallable CognitoIdentityProviderClient::UpdateAuthEventFeedbackCallable(const UpdateAuthEventFeedbackRequest& request) const
{
  std::shared_ptr<UpdateAuthEventFeedbackRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateAuthEventFeedbackOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateAuthEventFeedback(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UpdateAuthEventFeedbackAsync(const UpdateAuthEventFeedbackRequest& request, const UpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateAuthEventFeedbackRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateAuthEventFeedback(*pRequest), context);
    } );
}

UpdateDeviceStatusOutcome CognitoIdentityProviderClient::UpdateDeviceStatus(const UpdateDeviceStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeviceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeviceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDeviceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceStatusOutcomeCallable CognitoIdentityProviderClient::UpdateDeviceStatusCallable(const UpdateDeviceStatusRequest& request) const
{
  std::shared_ptr<UpdateDeviceStatusRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceStatusOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateDeviceStatus(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UpdateDeviceStatusAsync(const UpdateDeviceStatusRequest& request, const UpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateDeviceStatusRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateDeviceStatus(*pRequest), context);
    } );
}

UpdateGroupOutcome CognitoIdentityProviderClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupOutcomeCallable CognitoIdentityProviderClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  std::shared_ptr<UpdateGroupRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateGroup(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateGroupRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateGroup(*pRequest), context);
    } );
}

UpdateIdentityProviderOutcome CognitoIdentityProviderClient::UpdateIdentityProvider(const UpdateIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIdentityProviderOutcomeCallable CognitoIdentityProviderClient::UpdateIdentityProviderCallable(const UpdateIdentityProviderRequest& request) const
{
  std::shared_ptr<UpdateIdentityProviderRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateIdentityProvider(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UpdateIdentityProviderAsync(const UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateIdentityProviderRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateIdentityProvider(*pRequest), context);
    } );
}

UpdateResourceServerOutcome CognitoIdentityProviderClient::UpdateResourceServer(const UpdateResourceServerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourceServer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateResourceServerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceServerOutcomeCallable CognitoIdentityProviderClient::UpdateResourceServerCallable(const UpdateResourceServerRequest& request) const
{
  std::shared_ptr<UpdateResourceServerRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceServerOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateResourceServer(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UpdateResourceServerAsync(const UpdateResourceServerRequest& request, const UpdateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateResourceServerRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateResourceServer(*pRequest), context);
    } );
}

UpdateUserAttributesOutcome CognitoIdentityProviderClient::UpdateUserAttributes(const UpdateUserAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

UpdateUserAttributesOutcomeCallable CognitoIdentityProviderClient::UpdateUserAttributesCallable(const UpdateUserAttributesRequest& request) const
{
  std::shared_ptr<UpdateUserAttributesRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserAttributesOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateUserAttributes(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UpdateUserAttributesAsync(const UpdateUserAttributesRequest& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateUserAttributesRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateUserAttributes(*pRequest), context);
    } );
}

UpdateUserPoolOutcome CognitoIdentityProviderClient::UpdateUserPool(const UpdateUserPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserPoolOutcomeCallable CognitoIdentityProviderClient::UpdateUserPoolCallable(const UpdateUserPoolRequest& request) const
{
  std::shared_ptr<UpdateUserPoolRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserPoolOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateUserPool(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UpdateUserPoolAsync(const UpdateUserPoolRequest& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateUserPoolRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateUserPool(*pRequest), context);
    } );
}

UpdateUserPoolClientOutcome CognitoIdentityProviderClient::UpdateUserPoolClient(const UpdateUserPoolClientRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserPoolClient, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserPoolClientOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserPoolClientOutcomeCallable CognitoIdentityProviderClient::UpdateUserPoolClientCallable(const UpdateUserPoolClientRequest& request) const
{
  std::shared_ptr<UpdateUserPoolClientRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserPoolClientOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateUserPoolClient(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UpdateUserPoolClientAsync(const UpdateUserPoolClientRequest& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateUserPoolClientRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateUserPoolClient(*pRequest), context);
    } );
}

UpdateUserPoolDomainOutcome CognitoIdentityProviderClient::UpdateUserPoolDomain(const UpdateUserPoolDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserPoolDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserPoolDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserPoolDomainOutcomeCallable CognitoIdentityProviderClient::UpdateUserPoolDomainCallable(const UpdateUserPoolDomainRequest& request) const
{
  std::shared_ptr<UpdateUserPoolDomainRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserPoolDomainOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->UpdateUserPoolDomain(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::UpdateUserPoolDomainAsync(const UpdateUserPoolDomainRequest& request, const UpdateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<UpdateUserPoolDomainRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, UpdateUserPoolDomain(*pRequest), context);
    } );
}

VerifySoftwareTokenOutcome CognitoIdentityProviderClient::VerifySoftwareToken(const VerifySoftwareTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifySoftwareToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifySoftwareToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return VerifySoftwareTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifySoftwareTokenOutcomeCallable CognitoIdentityProviderClient::VerifySoftwareTokenCallable(const VerifySoftwareTokenRequest& request) const
{
  std::shared_ptr<VerifySoftwareTokenRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< VerifySoftwareTokenOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->VerifySoftwareToken(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::VerifySoftwareTokenAsync(const VerifySoftwareTokenRequest& request, const VerifySoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<VerifySoftwareTokenRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, VerifySoftwareToken(*pRequest), context);
    } );
}

VerifyUserAttributeOutcome CognitoIdentityProviderClient::VerifyUserAttribute(const VerifyUserAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, VerifyUserAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, VerifyUserAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return VerifyUserAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

VerifyUserAttributeOutcomeCallable CognitoIdentityProviderClient::VerifyUserAttributeCallable(const VerifyUserAttributeRequest& request) const
{
  std::shared_ptr<VerifyUserAttributeRequest> pRequest = request.Clone();
  auto task = Aws::MakeShared< std::packaged_task< VerifyUserAttributeOutcome() > >(ALLOCATION_TAG, [this, pRequest](){ return this->VerifyUserAttribute(*pRequest); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}
void CognitoIdentityProviderClient::VerifyUserAttributeAsync(const VerifyUserAttributeRequest& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  std::shared_ptr<VerifyUserAttributeRequest> pRequest = request.Clone();
  m_executor->Submit( [this, pRequest, handler, context]()
    {
      handler(this, *pRequest, VerifyUserAttribute(*pRequest), context);
    } );
}

