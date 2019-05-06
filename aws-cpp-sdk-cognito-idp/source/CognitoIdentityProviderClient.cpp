/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/cognito-idp/CognitoIdentityProviderClient.h>
#include <aws/cognito-idp/CognitoIdentityProviderEndpoint.h>
#include <aws/cognito-idp/CognitoIdentityProviderErrorMarshaller.h>
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

static const char* SERVICE_NAME = "cognito-idp";
static const char* ALLOCATION_TAG = "CognitoIdentityProviderClient";


CognitoIdentityProviderClient::CognitoIdentityProviderClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoIdentityProviderClient::CognitoIdentityProviderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CognitoIdentityProviderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CognitoIdentityProviderClient::~CognitoIdentityProviderClient()
{
}

void CognitoIdentityProviderClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CognitoIdentityProviderEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CognitoIdentityProviderClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AddCustomAttributesOutcome CognitoIdentityProviderClient::AddCustomAttributes(const AddCustomAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddCustomAttributesOutcome(AddCustomAttributesResult(outcome.GetResult()));
  }
  else
  {
    return AddCustomAttributesOutcome(outcome.GetError());
  }
}

AddCustomAttributesOutcomeCallable CognitoIdentityProviderClient::AddCustomAttributesCallable(const AddCustomAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddCustomAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddCustomAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AddCustomAttributesAsync(const AddCustomAttributesRequest& request, const AddCustomAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddCustomAttributesAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AddCustomAttributesAsyncHelper(const AddCustomAttributesRequest& request, const AddCustomAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddCustomAttributes(request), context);
}

AdminAddUserToGroupOutcome CognitoIdentityProviderClient::AdminAddUserToGroup(const AdminAddUserToGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminAddUserToGroupOutcome(NoResult());
  }
  else
  {
    return AdminAddUserToGroupOutcome(outcome.GetError());
  }
}

AdminAddUserToGroupOutcomeCallable CognitoIdentityProviderClient::AdminAddUserToGroupCallable(const AdminAddUserToGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminAddUserToGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminAddUserToGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminAddUserToGroupAsync(const AdminAddUserToGroupRequest& request, const AdminAddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminAddUserToGroupAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminAddUserToGroupAsyncHelper(const AdminAddUserToGroupRequest& request, const AdminAddUserToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminAddUserToGroup(request), context);
}

AdminConfirmSignUpOutcome CognitoIdentityProviderClient::AdminConfirmSignUp(const AdminConfirmSignUpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminConfirmSignUpOutcome(AdminConfirmSignUpResult(outcome.GetResult()));
  }
  else
  {
    return AdminConfirmSignUpOutcome(outcome.GetError());
  }
}

AdminConfirmSignUpOutcomeCallable CognitoIdentityProviderClient::AdminConfirmSignUpCallable(const AdminConfirmSignUpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminConfirmSignUpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminConfirmSignUp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminConfirmSignUpAsync(const AdminConfirmSignUpRequest& request, const AdminConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminConfirmSignUpAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminConfirmSignUpAsyncHelper(const AdminConfirmSignUpRequest& request, const AdminConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminConfirmSignUp(request), context);
}

AdminCreateUserOutcome CognitoIdentityProviderClient::AdminCreateUser(const AdminCreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminCreateUserOutcome(AdminCreateUserResult(outcome.GetResult()));
  }
  else
  {
    return AdminCreateUserOutcome(outcome.GetError());
  }
}

AdminCreateUserOutcomeCallable CognitoIdentityProviderClient::AdminCreateUserCallable(const AdminCreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminCreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminCreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminCreateUserAsync(const AdminCreateUserRequest& request, const AdminCreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminCreateUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminCreateUserAsyncHelper(const AdminCreateUserRequest& request, const AdminCreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminCreateUser(request), context);
}

AdminDeleteUserOutcome CognitoIdentityProviderClient::AdminDeleteUser(const AdminDeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminDeleteUserOutcome(NoResult());
  }
  else
  {
    return AdminDeleteUserOutcome(outcome.GetError());
  }
}

AdminDeleteUserOutcomeCallable CognitoIdentityProviderClient::AdminDeleteUserCallable(const AdminDeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminDeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminDeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminDeleteUserAsync(const AdminDeleteUserRequest& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminDeleteUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminDeleteUserAsyncHelper(const AdminDeleteUserRequest& request, const AdminDeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminDeleteUser(request), context);
}

AdminDeleteUserAttributesOutcome CognitoIdentityProviderClient::AdminDeleteUserAttributes(const AdminDeleteUserAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminDeleteUserAttributesOutcome(AdminDeleteUserAttributesResult(outcome.GetResult()));
  }
  else
  {
    return AdminDeleteUserAttributesOutcome(outcome.GetError());
  }
}

AdminDeleteUserAttributesOutcomeCallable CognitoIdentityProviderClient::AdminDeleteUserAttributesCallable(const AdminDeleteUserAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminDeleteUserAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminDeleteUserAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminDeleteUserAttributesAsync(const AdminDeleteUserAttributesRequest& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminDeleteUserAttributesAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminDeleteUserAttributesAsyncHelper(const AdminDeleteUserAttributesRequest& request, const AdminDeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminDeleteUserAttributes(request), context);
}

AdminDisableProviderForUserOutcome CognitoIdentityProviderClient::AdminDisableProviderForUser(const AdminDisableProviderForUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminDisableProviderForUserOutcome(AdminDisableProviderForUserResult(outcome.GetResult()));
  }
  else
  {
    return AdminDisableProviderForUserOutcome(outcome.GetError());
  }
}

AdminDisableProviderForUserOutcomeCallable CognitoIdentityProviderClient::AdminDisableProviderForUserCallable(const AdminDisableProviderForUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminDisableProviderForUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminDisableProviderForUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminDisableProviderForUserAsync(const AdminDisableProviderForUserRequest& request, const AdminDisableProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminDisableProviderForUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminDisableProviderForUserAsyncHelper(const AdminDisableProviderForUserRequest& request, const AdminDisableProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminDisableProviderForUser(request), context);
}

AdminDisableUserOutcome CognitoIdentityProviderClient::AdminDisableUser(const AdminDisableUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminDisableUserOutcome(AdminDisableUserResult(outcome.GetResult()));
  }
  else
  {
    return AdminDisableUserOutcome(outcome.GetError());
  }
}

AdminDisableUserOutcomeCallable CognitoIdentityProviderClient::AdminDisableUserCallable(const AdminDisableUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminDisableUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminDisableUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminDisableUserAsync(const AdminDisableUserRequest& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminDisableUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminDisableUserAsyncHelper(const AdminDisableUserRequest& request, const AdminDisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminDisableUser(request), context);
}

AdminEnableUserOutcome CognitoIdentityProviderClient::AdminEnableUser(const AdminEnableUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminEnableUserOutcome(AdminEnableUserResult(outcome.GetResult()));
  }
  else
  {
    return AdminEnableUserOutcome(outcome.GetError());
  }
}

AdminEnableUserOutcomeCallable CognitoIdentityProviderClient::AdminEnableUserCallable(const AdminEnableUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminEnableUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminEnableUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminEnableUserAsync(const AdminEnableUserRequest& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminEnableUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminEnableUserAsyncHelper(const AdminEnableUserRequest& request, const AdminEnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminEnableUser(request), context);
}

AdminForgetDeviceOutcome CognitoIdentityProviderClient::AdminForgetDevice(const AdminForgetDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminForgetDeviceOutcome(NoResult());
  }
  else
  {
    return AdminForgetDeviceOutcome(outcome.GetError());
  }
}

AdminForgetDeviceOutcomeCallable CognitoIdentityProviderClient::AdminForgetDeviceCallable(const AdminForgetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminForgetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminForgetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminForgetDeviceAsync(const AdminForgetDeviceRequest& request, const AdminForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminForgetDeviceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminForgetDeviceAsyncHelper(const AdminForgetDeviceRequest& request, const AdminForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminForgetDevice(request), context);
}

AdminGetDeviceOutcome CognitoIdentityProviderClient::AdminGetDevice(const AdminGetDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminGetDeviceOutcome(AdminGetDeviceResult(outcome.GetResult()));
  }
  else
  {
    return AdminGetDeviceOutcome(outcome.GetError());
  }
}

AdminGetDeviceOutcomeCallable CognitoIdentityProviderClient::AdminGetDeviceCallable(const AdminGetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminGetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminGetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminGetDeviceAsync(const AdminGetDeviceRequest& request, const AdminGetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminGetDeviceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminGetDeviceAsyncHelper(const AdminGetDeviceRequest& request, const AdminGetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminGetDevice(request), context);
}

AdminGetUserOutcome CognitoIdentityProviderClient::AdminGetUser(const AdminGetUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminGetUserOutcome(AdminGetUserResult(outcome.GetResult()));
  }
  else
  {
    return AdminGetUserOutcome(outcome.GetError());
  }
}

AdminGetUserOutcomeCallable CognitoIdentityProviderClient::AdminGetUserCallable(const AdminGetUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminGetUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminGetUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminGetUserAsync(const AdminGetUserRequest& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminGetUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminGetUserAsyncHelper(const AdminGetUserRequest& request, const AdminGetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminGetUser(request), context);
}

AdminInitiateAuthOutcome CognitoIdentityProviderClient::AdminInitiateAuth(const AdminInitiateAuthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminInitiateAuthOutcome(AdminInitiateAuthResult(outcome.GetResult()));
  }
  else
  {
    return AdminInitiateAuthOutcome(outcome.GetError());
  }
}

AdminInitiateAuthOutcomeCallable CognitoIdentityProviderClient::AdminInitiateAuthCallable(const AdminInitiateAuthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminInitiateAuthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminInitiateAuth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminInitiateAuthAsync(const AdminInitiateAuthRequest& request, const AdminInitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminInitiateAuthAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminInitiateAuthAsyncHelper(const AdminInitiateAuthRequest& request, const AdminInitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminInitiateAuth(request), context);
}

AdminLinkProviderForUserOutcome CognitoIdentityProviderClient::AdminLinkProviderForUser(const AdminLinkProviderForUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminLinkProviderForUserOutcome(AdminLinkProviderForUserResult(outcome.GetResult()));
  }
  else
  {
    return AdminLinkProviderForUserOutcome(outcome.GetError());
  }
}

AdminLinkProviderForUserOutcomeCallable CognitoIdentityProviderClient::AdminLinkProviderForUserCallable(const AdminLinkProviderForUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminLinkProviderForUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminLinkProviderForUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminLinkProviderForUserAsync(const AdminLinkProviderForUserRequest& request, const AdminLinkProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminLinkProviderForUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminLinkProviderForUserAsyncHelper(const AdminLinkProviderForUserRequest& request, const AdminLinkProviderForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminLinkProviderForUser(request), context);
}

AdminListDevicesOutcome CognitoIdentityProviderClient::AdminListDevices(const AdminListDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminListDevicesOutcome(AdminListDevicesResult(outcome.GetResult()));
  }
  else
  {
    return AdminListDevicesOutcome(outcome.GetError());
  }
}

AdminListDevicesOutcomeCallable CognitoIdentityProviderClient::AdminListDevicesCallable(const AdminListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminListDevicesAsync(const AdminListDevicesRequest& request, const AdminListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminListDevicesAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminListDevicesAsyncHelper(const AdminListDevicesRequest& request, const AdminListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminListDevices(request), context);
}

AdminListGroupsForUserOutcome CognitoIdentityProviderClient::AdminListGroupsForUser(const AdminListGroupsForUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminListGroupsForUserOutcome(AdminListGroupsForUserResult(outcome.GetResult()));
  }
  else
  {
    return AdminListGroupsForUserOutcome(outcome.GetError());
  }
}

AdminListGroupsForUserOutcomeCallable CognitoIdentityProviderClient::AdminListGroupsForUserCallable(const AdminListGroupsForUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminListGroupsForUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminListGroupsForUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminListGroupsForUserAsync(const AdminListGroupsForUserRequest& request, const AdminListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminListGroupsForUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminListGroupsForUserAsyncHelper(const AdminListGroupsForUserRequest& request, const AdminListGroupsForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminListGroupsForUser(request), context);
}

AdminListUserAuthEventsOutcome CognitoIdentityProviderClient::AdminListUserAuthEvents(const AdminListUserAuthEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminListUserAuthEventsOutcome(AdminListUserAuthEventsResult(outcome.GetResult()));
  }
  else
  {
    return AdminListUserAuthEventsOutcome(outcome.GetError());
  }
}

AdminListUserAuthEventsOutcomeCallable CognitoIdentityProviderClient::AdminListUserAuthEventsCallable(const AdminListUserAuthEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminListUserAuthEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminListUserAuthEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminListUserAuthEventsAsync(const AdminListUserAuthEventsRequest& request, const AdminListUserAuthEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminListUserAuthEventsAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminListUserAuthEventsAsyncHelper(const AdminListUserAuthEventsRequest& request, const AdminListUserAuthEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminListUserAuthEvents(request), context);
}

AdminRemoveUserFromGroupOutcome CognitoIdentityProviderClient::AdminRemoveUserFromGroup(const AdminRemoveUserFromGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminRemoveUserFromGroupOutcome(NoResult());
  }
  else
  {
    return AdminRemoveUserFromGroupOutcome(outcome.GetError());
  }
}

AdminRemoveUserFromGroupOutcomeCallable CognitoIdentityProviderClient::AdminRemoveUserFromGroupCallable(const AdminRemoveUserFromGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminRemoveUserFromGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminRemoveUserFromGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminRemoveUserFromGroupAsync(const AdminRemoveUserFromGroupRequest& request, const AdminRemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminRemoveUserFromGroupAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminRemoveUserFromGroupAsyncHelper(const AdminRemoveUserFromGroupRequest& request, const AdminRemoveUserFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminRemoveUserFromGroup(request), context);
}

AdminResetUserPasswordOutcome CognitoIdentityProviderClient::AdminResetUserPassword(const AdminResetUserPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminResetUserPasswordOutcome(AdminResetUserPasswordResult(outcome.GetResult()));
  }
  else
  {
    return AdminResetUserPasswordOutcome(outcome.GetError());
  }
}

AdminResetUserPasswordOutcomeCallable CognitoIdentityProviderClient::AdminResetUserPasswordCallable(const AdminResetUserPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminResetUserPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminResetUserPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminResetUserPasswordAsync(const AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminResetUserPasswordAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminResetUserPasswordAsyncHelper(const AdminResetUserPasswordRequest& request, const AdminResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminResetUserPassword(request), context);
}

AdminRespondToAuthChallengeOutcome CognitoIdentityProviderClient::AdminRespondToAuthChallenge(const AdminRespondToAuthChallengeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminRespondToAuthChallengeOutcome(AdminRespondToAuthChallengeResult(outcome.GetResult()));
  }
  else
  {
    return AdminRespondToAuthChallengeOutcome(outcome.GetError());
  }
}

AdminRespondToAuthChallengeOutcomeCallable CognitoIdentityProviderClient::AdminRespondToAuthChallengeCallable(const AdminRespondToAuthChallengeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminRespondToAuthChallengeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminRespondToAuthChallenge(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminRespondToAuthChallengeAsync(const AdminRespondToAuthChallengeRequest& request, const AdminRespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminRespondToAuthChallengeAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminRespondToAuthChallengeAsyncHelper(const AdminRespondToAuthChallengeRequest& request, const AdminRespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminRespondToAuthChallenge(request), context);
}

AdminSetUserMFAPreferenceOutcome CognitoIdentityProviderClient::AdminSetUserMFAPreference(const AdminSetUserMFAPreferenceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminSetUserMFAPreferenceOutcome(AdminSetUserMFAPreferenceResult(outcome.GetResult()));
  }
  else
  {
    return AdminSetUserMFAPreferenceOutcome(outcome.GetError());
  }
}

AdminSetUserMFAPreferenceOutcomeCallable CognitoIdentityProviderClient::AdminSetUserMFAPreferenceCallable(const AdminSetUserMFAPreferenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminSetUserMFAPreferenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminSetUserMFAPreference(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminSetUserMFAPreferenceAsync(const AdminSetUserMFAPreferenceRequest& request, const AdminSetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminSetUserMFAPreferenceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminSetUserMFAPreferenceAsyncHelper(const AdminSetUserMFAPreferenceRequest& request, const AdminSetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminSetUserMFAPreference(request), context);
}

AdminSetUserPasswordOutcome CognitoIdentityProviderClient::AdminSetUserPassword(const AdminSetUserPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminSetUserPasswordOutcome(AdminSetUserPasswordResult(outcome.GetResult()));
  }
  else
  {
    return AdminSetUserPasswordOutcome(outcome.GetError());
  }
}

AdminSetUserPasswordOutcomeCallable CognitoIdentityProviderClient::AdminSetUserPasswordCallable(const AdminSetUserPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminSetUserPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminSetUserPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminSetUserPasswordAsync(const AdminSetUserPasswordRequest& request, const AdminSetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminSetUserPasswordAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminSetUserPasswordAsyncHelper(const AdminSetUserPasswordRequest& request, const AdminSetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminSetUserPassword(request), context);
}

AdminSetUserSettingsOutcome CognitoIdentityProviderClient::AdminSetUserSettings(const AdminSetUserSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminSetUserSettingsOutcome(AdminSetUserSettingsResult(outcome.GetResult()));
  }
  else
  {
    return AdminSetUserSettingsOutcome(outcome.GetError());
  }
}

AdminSetUserSettingsOutcomeCallable CognitoIdentityProviderClient::AdminSetUserSettingsCallable(const AdminSetUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminSetUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminSetUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminSetUserSettingsAsync(const AdminSetUserSettingsRequest& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminSetUserSettingsAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminSetUserSettingsAsyncHelper(const AdminSetUserSettingsRequest& request, const AdminSetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminSetUserSettings(request), context);
}

AdminUpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::AdminUpdateAuthEventFeedback(const AdminUpdateAuthEventFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminUpdateAuthEventFeedbackOutcome(AdminUpdateAuthEventFeedbackResult(outcome.GetResult()));
  }
  else
  {
    return AdminUpdateAuthEventFeedbackOutcome(outcome.GetError());
  }
}

AdminUpdateAuthEventFeedbackOutcomeCallable CognitoIdentityProviderClient::AdminUpdateAuthEventFeedbackCallable(const AdminUpdateAuthEventFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminUpdateAuthEventFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminUpdateAuthEventFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminUpdateAuthEventFeedbackAsync(const AdminUpdateAuthEventFeedbackRequest& request, const AdminUpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminUpdateAuthEventFeedbackAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminUpdateAuthEventFeedbackAsyncHelper(const AdminUpdateAuthEventFeedbackRequest& request, const AdminUpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminUpdateAuthEventFeedback(request), context);
}

AdminUpdateDeviceStatusOutcome CognitoIdentityProviderClient::AdminUpdateDeviceStatus(const AdminUpdateDeviceStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminUpdateDeviceStatusOutcome(AdminUpdateDeviceStatusResult(outcome.GetResult()));
  }
  else
  {
    return AdminUpdateDeviceStatusOutcome(outcome.GetError());
  }
}

AdminUpdateDeviceStatusOutcomeCallable CognitoIdentityProviderClient::AdminUpdateDeviceStatusCallable(const AdminUpdateDeviceStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminUpdateDeviceStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminUpdateDeviceStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminUpdateDeviceStatusAsync(const AdminUpdateDeviceStatusRequest& request, const AdminUpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminUpdateDeviceStatusAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminUpdateDeviceStatusAsyncHelper(const AdminUpdateDeviceStatusRequest& request, const AdminUpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminUpdateDeviceStatus(request), context);
}

AdminUpdateUserAttributesOutcome CognitoIdentityProviderClient::AdminUpdateUserAttributes(const AdminUpdateUserAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminUpdateUserAttributesOutcome(AdminUpdateUserAttributesResult(outcome.GetResult()));
  }
  else
  {
    return AdminUpdateUserAttributesOutcome(outcome.GetError());
  }
}

AdminUpdateUserAttributesOutcomeCallable CognitoIdentityProviderClient::AdminUpdateUserAttributesCallable(const AdminUpdateUserAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminUpdateUserAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminUpdateUserAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminUpdateUserAttributesAsync(const AdminUpdateUserAttributesRequest& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminUpdateUserAttributesAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminUpdateUserAttributesAsyncHelper(const AdminUpdateUserAttributesRequest& request, const AdminUpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminUpdateUserAttributes(request), context);
}

AdminUserGlobalSignOutOutcome CognitoIdentityProviderClient::AdminUserGlobalSignOut(const AdminUserGlobalSignOutRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AdminUserGlobalSignOutOutcome(AdminUserGlobalSignOutResult(outcome.GetResult()));
  }
  else
  {
    return AdminUserGlobalSignOutOutcome(outcome.GetError());
  }
}

AdminUserGlobalSignOutOutcomeCallable CognitoIdentityProviderClient::AdminUserGlobalSignOutCallable(const AdminUserGlobalSignOutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AdminUserGlobalSignOutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AdminUserGlobalSignOut(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AdminUserGlobalSignOutAsync(const AdminUserGlobalSignOutRequest& request, const AdminUserGlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AdminUserGlobalSignOutAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AdminUserGlobalSignOutAsyncHelper(const AdminUserGlobalSignOutRequest& request, const AdminUserGlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AdminUserGlobalSignOut(request), context);
}

AssociateSoftwareTokenOutcome CognitoIdentityProviderClient::AssociateSoftwareToken(const AssociateSoftwareTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateSoftwareTokenOutcome(AssociateSoftwareTokenResult(outcome.GetResult()));
  }
  else
  {
    return AssociateSoftwareTokenOutcome(outcome.GetError());
  }
}

AssociateSoftwareTokenOutcomeCallable CognitoIdentityProviderClient::AssociateSoftwareTokenCallable(const AssociateSoftwareTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSoftwareTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSoftwareToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::AssociateSoftwareTokenAsync(const AssociateSoftwareTokenRequest& request, const AssociateSoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateSoftwareTokenAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::AssociateSoftwareTokenAsyncHelper(const AssociateSoftwareTokenRequest& request, const AssociateSoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateSoftwareToken(request), context);
}

ChangePasswordOutcome CognitoIdentityProviderClient::ChangePassword(const ChangePasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return ChangePasswordOutcome(ChangePasswordResult(outcome.GetResult()));
  }
  else
  {
    return ChangePasswordOutcome(outcome.GetError());
  }
}

ChangePasswordOutcomeCallable CognitoIdentityProviderClient::ChangePasswordCallable(const ChangePasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangePasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangePassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ChangePasswordAsync(const ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChangePasswordAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ChangePasswordAsyncHelper(const ChangePasswordRequest& request, const ChangePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangePassword(request), context);
}

ConfirmDeviceOutcome CognitoIdentityProviderClient::ConfirmDevice(const ConfirmDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ConfirmDeviceOutcome(ConfirmDeviceResult(outcome.GetResult()));
  }
  else
  {
    return ConfirmDeviceOutcome(outcome.GetError());
  }
}

ConfirmDeviceOutcomeCallable CognitoIdentityProviderClient::ConfirmDeviceCallable(const ConfirmDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfirmDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ConfirmDeviceAsync(const ConfirmDeviceRequest& request, const ConfirmDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfirmDeviceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ConfirmDeviceAsyncHelper(const ConfirmDeviceRequest& request, const ConfirmDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmDevice(request), context);
}

ConfirmForgotPasswordOutcome CognitoIdentityProviderClient::ConfirmForgotPassword(const ConfirmForgotPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return ConfirmForgotPasswordOutcome(ConfirmForgotPasswordResult(outcome.GetResult()));
  }
  else
  {
    return ConfirmForgotPasswordOutcome(outcome.GetError());
  }
}

ConfirmForgotPasswordOutcomeCallable CognitoIdentityProviderClient::ConfirmForgotPasswordCallable(const ConfirmForgotPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfirmForgotPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmForgotPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ConfirmForgotPasswordAsync(const ConfirmForgotPasswordRequest& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfirmForgotPasswordAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ConfirmForgotPasswordAsyncHelper(const ConfirmForgotPasswordRequest& request, const ConfirmForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmForgotPassword(request), context);
}

ConfirmSignUpOutcome CognitoIdentityProviderClient::ConfirmSignUp(const ConfirmSignUpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return ConfirmSignUpOutcome(ConfirmSignUpResult(outcome.GetResult()));
  }
  else
  {
    return ConfirmSignUpOutcome(outcome.GetError());
  }
}

ConfirmSignUpOutcomeCallable CognitoIdentityProviderClient::ConfirmSignUpCallable(const ConfirmSignUpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfirmSignUpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmSignUp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ConfirmSignUpAsync(const ConfirmSignUpRequest& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfirmSignUpAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ConfirmSignUpAsyncHelper(const ConfirmSignUpRequest& request, const ConfirmSignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmSignUp(request), context);
}

CreateGroupOutcome CognitoIdentityProviderClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGroupOutcome(CreateGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateGroupOutcome(outcome.GetError());
  }
}

CreateGroupOutcomeCallable CognitoIdentityProviderClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGroupAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::CreateGroupAsyncHelper(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGroup(request), context);
}

CreateIdentityProviderOutcome CognitoIdentityProviderClient::CreateIdentityProvider(const CreateIdentityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateIdentityProviderOutcome(CreateIdentityProviderResult(outcome.GetResult()));
  }
  else
  {
    return CreateIdentityProviderOutcome(outcome.GetError());
  }
}

CreateIdentityProviderOutcomeCallable CognitoIdentityProviderClient::CreateIdentityProviderCallable(const CreateIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::CreateIdentityProviderAsync(const CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIdentityProviderAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::CreateIdentityProviderAsyncHelper(const CreateIdentityProviderRequest& request, const CreateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIdentityProvider(request), context);
}

CreateResourceServerOutcome CognitoIdentityProviderClient::CreateResourceServer(const CreateResourceServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateResourceServerOutcome(CreateResourceServerResult(outcome.GetResult()));
  }
  else
  {
    return CreateResourceServerOutcome(outcome.GetError());
  }
}

CreateResourceServerOutcomeCallable CognitoIdentityProviderClient::CreateResourceServerCallable(const CreateResourceServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourceServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::CreateResourceServerAsync(const CreateResourceServerRequest& request, const CreateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateResourceServerAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::CreateResourceServerAsyncHelper(const CreateResourceServerRequest& request, const CreateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResourceServer(request), context);
}

CreateUserImportJobOutcome CognitoIdentityProviderClient::CreateUserImportJob(const CreateUserImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserImportJobOutcome(CreateUserImportJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserImportJobOutcome(outcome.GetError());
  }
}

CreateUserImportJobOutcomeCallable CognitoIdentityProviderClient::CreateUserImportJobCallable(const CreateUserImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::CreateUserImportJobAsync(const CreateUserImportJobRequest& request, const CreateUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserImportJobAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::CreateUserImportJobAsyncHelper(const CreateUserImportJobRequest& request, const CreateUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUserImportJob(request), context);
}

CreateUserPoolOutcome CognitoIdentityProviderClient::CreateUserPool(const CreateUserPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserPoolOutcome(CreateUserPoolResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserPoolOutcome(outcome.GetError());
  }
}

CreateUserPoolOutcomeCallable CognitoIdentityProviderClient::CreateUserPoolCallable(const CreateUserPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::CreateUserPoolAsync(const CreateUserPoolRequest& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserPoolAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::CreateUserPoolAsyncHelper(const CreateUserPoolRequest& request, const CreateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUserPool(request), context);
}

CreateUserPoolClientOutcome CognitoIdentityProviderClient::CreateUserPoolClient(const CreateUserPoolClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserPoolClientOutcome(CreateUserPoolClientResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserPoolClientOutcome(outcome.GetError());
  }
}

CreateUserPoolClientOutcomeCallable CognitoIdentityProviderClient::CreateUserPoolClientCallable(const CreateUserPoolClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserPoolClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserPoolClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::CreateUserPoolClientAsync(const CreateUserPoolClientRequest& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserPoolClientAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::CreateUserPoolClientAsyncHelper(const CreateUserPoolClientRequest& request, const CreateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUserPoolClient(request), context);
}

CreateUserPoolDomainOutcome CognitoIdentityProviderClient::CreateUserPoolDomain(const CreateUserPoolDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserPoolDomainOutcome(CreateUserPoolDomainResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserPoolDomainOutcome(outcome.GetError());
  }
}

CreateUserPoolDomainOutcomeCallable CognitoIdentityProviderClient::CreateUserPoolDomainCallable(const CreateUserPoolDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserPoolDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserPoolDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::CreateUserPoolDomainAsync(const CreateUserPoolDomainRequest& request, const CreateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserPoolDomainAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::CreateUserPoolDomainAsyncHelper(const CreateUserPoolDomainRequest& request, const CreateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUserPoolDomain(request), context);
}

DeleteGroupOutcome CognitoIdentityProviderClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGroupOutcome(NoResult());
  }
  else
  {
    return DeleteGroupOutcome(outcome.GetError());
  }
}

DeleteGroupOutcomeCallable CognitoIdentityProviderClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGroupAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DeleteGroupAsyncHelper(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGroup(request), context);
}

DeleteIdentityProviderOutcome CognitoIdentityProviderClient::DeleteIdentityProvider(const DeleteIdentityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteIdentityProviderOutcome(NoResult());
  }
  else
  {
    return DeleteIdentityProviderOutcome(outcome.GetError());
  }
}

DeleteIdentityProviderOutcomeCallable CognitoIdentityProviderClient::DeleteIdentityProviderCallable(const DeleteIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DeleteIdentityProviderAsync(const DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIdentityProviderAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DeleteIdentityProviderAsyncHelper(const DeleteIdentityProviderRequest& request, const DeleteIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIdentityProvider(request), context);
}

DeleteResourceServerOutcome CognitoIdentityProviderClient::DeleteResourceServer(const DeleteResourceServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteResourceServerOutcome(NoResult());
  }
  else
  {
    return DeleteResourceServerOutcome(outcome.GetError());
  }
}

DeleteResourceServerOutcomeCallable CognitoIdentityProviderClient::DeleteResourceServerCallable(const DeleteResourceServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourceServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DeleteResourceServerAsync(const DeleteResourceServerRequest& request, const DeleteResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourceServerAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DeleteResourceServerAsyncHelper(const DeleteResourceServerRequest& request, const DeleteResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourceServer(request), context);
}

DeleteUserOutcome CognitoIdentityProviderClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserOutcome(NoResult());
  }
  else
  {
    return DeleteUserOutcome(outcome.GetError());
  }
}

DeleteUserOutcomeCallable CognitoIdentityProviderClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DeleteUserAttributesOutcome CognitoIdentityProviderClient::DeleteUserAttributes(const DeleteUserAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserAttributesOutcome(DeleteUserAttributesResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUserAttributesOutcome(outcome.GetError());
  }
}

DeleteUserAttributesOutcomeCallable CognitoIdentityProviderClient::DeleteUserAttributesCallable(const DeleteUserAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DeleteUserAttributesAsync(const DeleteUserAttributesRequest& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAttributesAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DeleteUserAttributesAsyncHelper(const DeleteUserAttributesRequest& request, const DeleteUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserAttributes(request), context);
}

DeleteUserPoolOutcome CognitoIdentityProviderClient::DeleteUserPool(const DeleteUserPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserPoolOutcome(NoResult());
  }
  else
  {
    return DeleteUserPoolOutcome(outcome.GetError());
  }
}

DeleteUserPoolOutcomeCallable CognitoIdentityProviderClient::DeleteUserPoolCallable(const DeleteUserPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DeleteUserPoolAsync(const DeleteUserPoolRequest& request, const DeleteUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserPoolAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DeleteUserPoolAsyncHelper(const DeleteUserPoolRequest& request, const DeleteUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserPool(request), context);
}

DeleteUserPoolClientOutcome CognitoIdentityProviderClient::DeleteUserPoolClient(const DeleteUserPoolClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserPoolClientOutcome(NoResult());
  }
  else
  {
    return DeleteUserPoolClientOutcome(outcome.GetError());
  }
}

DeleteUserPoolClientOutcomeCallable CognitoIdentityProviderClient::DeleteUserPoolClientCallable(const DeleteUserPoolClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPoolClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserPoolClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DeleteUserPoolClientAsync(const DeleteUserPoolClientRequest& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserPoolClientAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DeleteUserPoolClientAsyncHelper(const DeleteUserPoolClientRequest& request, const DeleteUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserPoolClient(request), context);
}

DeleteUserPoolDomainOutcome CognitoIdentityProviderClient::DeleteUserPoolDomain(const DeleteUserPoolDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserPoolDomainOutcome(DeleteUserPoolDomainResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUserPoolDomainOutcome(outcome.GetError());
  }
}

DeleteUserPoolDomainOutcomeCallable CognitoIdentityProviderClient::DeleteUserPoolDomainCallable(const DeleteUserPoolDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserPoolDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserPoolDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DeleteUserPoolDomainAsync(const DeleteUserPoolDomainRequest& request, const DeleteUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserPoolDomainAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DeleteUserPoolDomainAsyncHelper(const DeleteUserPoolDomainRequest& request, const DeleteUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUserPoolDomain(request), context);
}

DescribeIdentityProviderOutcome CognitoIdentityProviderClient::DescribeIdentityProvider(const DescribeIdentityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeIdentityProviderOutcome(DescribeIdentityProviderResult(outcome.GetResult()));
  }
  else
  {
    return DescribeIdentityProviderOutcome(outcome.GetError());
  }
}

DescribeIdentityProviderOutcomeCallable CognitoIdentityProviderClient::DescribeIdentityProviderCallable(const DescribeIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DescribeIdentityProviderAsync(const DescribeIdentityProviderRequest& request, const DescribeIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIdentityProviderAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DescribeIdentityProviderAsyncHelper(const DescribeIdentityProviderRequest& request, const DescribeIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIdentityProvider(request), context);
}

DescribeResourceServerOutcome CognitoIdentityProviderClient::DescribeResourceServer(const DescribeResourceServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeResourceServerOutcome(DescribeResourceServerResult(outcome.GetResult()));
  }
  else
  {
    return DescribeResourceServerOutcome(outcome.GetError());
  }
}

DescribeResourceServerOutcomeCallable CognitoIdentityProviderClient::DescribeResourceServerCallable(const DescribeResourceServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourceServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DescribeResourceServerAsync(const DescribeResourceServerRequest& request, const DescribeResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeResourceServerAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DescribeResourceServerAsyncHelper(const DescribeResourceServerRequest& request, const DescribeResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeResourceServer(request), context);
}

DescribeRiskConfigurationOutcome CognitoIdentityProviderClient::DescribeRiskConfiguration(const DescribeRiskConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRiskConfigurationOutcome(DescribeRiskConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRiskConfigurationOutcome(outcome.GetError());
  }
}

DescribeRiskConfigurationOutcomeCallable CognitoIdentityProviderClient::DescribeRiskConfigurationCallable(const DescribeRiskConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRiskConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRiskConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DescribeRiskConfigurationAsync(const DescribeRiskConfigurationRequest& request, const DescribeRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRiskConfigurationAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DescribeRiskConfigurationAsyncHelper(const DescribeRiskConfigurationRequest& request, const DescribeRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRiskConfiguration(request), context);
}

DescribeUserImportJobOutcome CognitoIdentityProviderClient::DescribeUserImportJob(const DescribeUserImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUserImportJobOutcome(DescribeUserImportJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserImportJobOutcome(outcome.GetError());
  }
}

DescribeUserImportJobOutcomeCallable CognitoIdentityProviderClient::DescribeUserImportJobCallable(const DescribeUserImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DescribeUserImportJobAsync(const DescribeUserImportJobRequest& request, const DescribeUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserImportJobAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DescribeUserImportJobAsyncHelper(const DescribeUserImportJobRequest& request, const DescribeUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserImportJob(request), context);
}

DescribeUserPoolOutcome CognitoIdentityProviderClient::DescribeUserPool(const DescribeUserPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUserPoolOutcome(DescribeUserPoolResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserPoolOutcome(outcome.GetError());
  }
}

DescribeUserPoolOutcomeCallable CognitoIdentityProviderClient::DescribeUserPoolCallable(const DescribeUserPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DescribeUserPoolAsync(const DescribeUserPoolRequest& request, const DescribeUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserPoolAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DescribeUserPoolAsyncHelper(const DescribeUserPoolRequest& request, const DescribeUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserPool(request), context);
}

DescribeUserPoolClientOutcome CognitoIdentityProviderClient::DescribeUserPoolClient(const DescribeUserPoolClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUserPoolClientOutcome(DescribeUserPoolClientResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserPoolClientOutcome(outcome.GetError());
  }
}

DescribeUserPoolClientOutcomeCallable CognitoIdentityProviderClient::DescribeUserPoolClientCallable(const DescribeUserPoolClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserPoolClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserPoolClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DescribeUserPoolClientAsync(const DescribeUserPoolClientRequest& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserPoolClientAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DescribeUserPoolClientAsyncHelper(const DescribeUserPoolClientRequest& request, const DescribeUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserPoolClient(request), context);
}

DescribeUserPoolDomainOutcome CognitoIdentityProviderClient::DescribeUserPoolDomain(const DescribeUserPoolDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUserPoolDomainOutcome(DescribeUserPoolDomainResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserPoolDomainOutcome(outcome.GetError());
  }
}

DescribeUserPoolDomainOutcomeCallable CognitoIdentityProviderClient::DescribeUserPoolDomainCallable(const DescribeUserPoolDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserPoolDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserPoolDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::DescribeUserPoolDomainAsync(const DescribeUserPoolDomainRequest& request, const DescribeUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserPoolDomainAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::DescribeUserPoolDomainAsyncHelper(const DescribeUserPoolDomainRequest& request, const DescribeUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUserPoolDomain(request), context);
}

ForgetDeviceOutcome CognitoIdentityProviderClient::ForgetDevice(const ForgetDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ForgetDeviceOutcome(NoResult());
  }
  else
  {
    return ForgetDeviceOutcome(outcome.GetError());
  }
}

ForgetDeviceOutcomeCallable CognitoIdentityProviderClient::ForgetDeviceCallable(const ForgetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ForgetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ForgetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ForgetDeviceAsync(const ForgetDeviceRequest& request, const ForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ForgetDeviceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ForgetDeviceAsyncHelper(const ForgetDeviceRequest& request, const ForgetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ForgetDevice(request), context);
}

ForgotPasswordOutcome CognitoIdentityProviderClient::ForgotPassword(const ForgotPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return ForgotPasswordOutcome(ForgotPasswordResult(outcome.GetResult()));
  }
  else
  {
    return ForgotPasswordOutcome(outcome.GetError());
  }
}

ForgotPasswordOutcomeCallable CognitoIdentityProviderClient::ForgotPasswordCallable(const ForgotPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ForgotPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ForgotPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ForgotPasswordAsync(const ForgotPasswordRequest& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ForgotPasswordAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ForgotPasswordAsyncHelper(const ForgotPasswordRequest& request, const ForgotPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ForgotPassword(request), context);
}

GetCSVHeaderOutcome CognitoIdentityProviderClient::GetCSVHeader(const GetCSVHeaderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCSVHeaderOutcome(GetCSVHeaderResult(outcome.GetResult()));
  }
  else
  {
    return GetCSVHeaderOutcome(outcome.GetError());
  }
}

GetCSVHeaderOutcomeCallable CognitoIdentityProviderClient::GetCSVHeaderCallable(const GetCSVHeaderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCSVHeaderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCSVHeader(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GetCSVHeaderAsync(const GetCSVHeaderRequest& request, const GetCSVHeaderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCSVHeaderAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GetCSVHeaderAsyncHelper(const GetCSVHeaderRequest& request, const GetCSVHeaderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCSVHeader(request), context);
}

GetDeviceOutcome CognitoIdentityProviderClient::GetDevice(const GetDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeviceOutcome(GetDeviceResult(outcome.GetResult()));
  }
  else
  {
    return GetDeviceOutcome(outcome.GetError());
  }
}

GetDeviceOutcomeCallable CognitoIdentityProviderClient::GetDeviceCallable(const GetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GetDeviceAsyncHelper(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevice(request), context);
}

GetGroupOutcome CognitoIdentityProviderClient::GetGroup(const GetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGroupOutcome(GetGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetGroupOutcome(outcome.GetError());
  }
}

GetGroupOutcomeCallable CognitoIdentityProviderClient::GetGroupCallable(const GetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGroupAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GetGroupAsyncHelper(const GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGroup(request), context);
}

GetIdentityProviderByIdentifierOutcome CognitoIdentityProviderClient::GetIdentityProviderByIdentifier(const GetIdentityProviderByIdentifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetIdentityProviderByIdentifierOutcome(GetIdentityProviderByIdentifierResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityProviderByIdentifierOutcome(outcome.GetError());
  }
}

GetIdentityProviderByIdentifierOutcomeCallable CognitoIdentityProviderClient::GetIdentityProviderByIdentifierCallable(const GetIdentityProviderByIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityProviderByIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityProviderByIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GetIdentityProviderByIdentifierAsync(const GetIdentityProviderByIdentifierRequest& request, const GetIdentityProviderByIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIdentityProviderByIdentifierAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GetIdentityProviderByIdentifierAsyncHelper(const GetIdentityProviderByIdentifierRequest& request, const GetIdentityProviderByIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIdentityProviderByIdentifier(request), context);
}

GetSigningCertificateOutcome CognitoIdentityProviderClient::GetSigningCertificate(const GetSigningCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSigningCertificateOutcome(GetSigningCertificateResult(outcome.GetResult()));
  }
  else
  {
    return GetSigningCertificateOutcome(outcome.GetError());
  }
}

GetSigningCertificateOutcomeCallable CognitoIdentityProviderClient::GetSigningCertificateCallable(const GetSigningCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSigningCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSigningCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GetSigningCertificateAsync(const GetSigningCertificateRequest& request, const GetSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSigningCertificateAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GetSigningCertificateAsyncHelper(const GetSigningCertificateRequest& request, const GetSigningCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSigningCertificate(request), context);
}

GetUICustomizationOutcome CognitoIdentityProviderClient::GetUICustomization(const GetUICustomizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUICustomizationOutcome(GetUICustomizationResult(outcome.GetResult()));
  }
  else
  {
    return GetUICustomizationOutcome(outcome.GetError());
  }
}

GetUICustomizationOutcomeCallable CognitoIdentityProviderClient::GetUICustomizationCallable(const GetUICustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUICustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUICustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GetUICustomizationAsync(const GetUICustomizationRequest& request, const GetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUICustomizationAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GetUICustomizationAsyncHelper(const GetUICustomizationRequest& request, const GetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUICustomization(request), context);
}

GetUserOutcome CognitoIdentityProviderClient::GetUser(const GetUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUserOutcome(GetUserResult(outcome.GetResult()));
  }
  else
  {
    return GetUserOutcome(outcome.GetError());
  }
}

GetUserOutcomeCallable CognitoIdentityProviderClient::GetUserCallable(const GetUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GetUserAsync(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GetUserAsyncHelper(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUser(request), context);
}

GetUserAttributeVerificationCodeOutcome CognitoIdentityProviderClient::GetUserAttributeVerificationCode(const GetUserAttributeVerificationCodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUserAttributeVerificationCodeOutcome(GetUserAttributeVerificationCodeResult(outcome.GetResult()));
  }
  else
  {
    return GetUserAttributeVerificationCodeOutcome(outcome.GetError());
  }
}

GetUserAttributeVerificationCodeOutcomeCallable CognitoIdentityProviderClient::GetUserAttributeVerificationCodeCallable(const GetUserAttributeVerificationCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserAttributeVerificationCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserAttributeVerificationCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GetUserAttributeVerificationCodeAsync(const GetUserAttributeVerificationCodeRequest& request, const GetUserAttributeVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserAttributeVerificationCodeAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GetUserAttributeVerificationCodeAsyncHelper(const GetUserAttributeVerificationCodeRequest& request, const GetUserAttributeVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUserAttributeVerificationCode(request), context);
}

GetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::GetUserPoolMfaConfig(const GetUserPoolMfaConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUserPoolMfaConfigOutcome(GetUserPoolMfaConfigResult(outcome.GetResult()));
  }
  else
  {
    return GetUserPoolMfaConfigOutcome(outcome.GetError());
  }
}

GetUserPoolMfaConfigOutcomeCallable CognitoIdentityProviderClient::GetUserPoolMfaConfigCallable(const GetUserPoolMfaConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserPoolMfaConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserPoolMfaConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GetUserPoolMfaConfigAsync(const GetUserPoolMfaConfigRequest& request, const GetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserPoolMfaConfigAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GetUserPoolMfaConfigAsyncHelper(const GetUserPoolMfaConfigRequest& request, const GetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUserPoolMfaConfig(request), context);
}

GlobalSignOutOutcome CognitoIdentityProviderClient::GlobalSignOut(const GlobalSignOutRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GlobalSignOutOutcome(GlobalSignOutResult(outcome.GetResult()));
  }
  else
  {
    return GlobalSignOutOutcome(outcome.GetError());
  }
}

GlobalSignOutOutcomeCallable CognitoIdentityProviderClient::GlobalSignOutCallable(const GlobalSignOutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GlobalSignOutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GlobalSignOut(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::GlobalSignOutAsync(const GlobalSignOutRequest& request, const GlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GlobalSignOutAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::GlobalSignOutAsyncHelper(const GlobalSignOutRequest& request, const GlobalSignOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GlobalSignOut(request), context);
}

InitiateAuthOutcome CognitoIdentityProviderClient::InitiateAuth(const InitiateAuthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InitiateAuthOutcome(InitiateAuthResult(outcome.GetResult()));
  }
  else
  {
    return InitiateAuthOutcome(outcome.GetError());
  }
}

InitiateAuthOutcomeCallable CognitoIdentityProviderClient::InitiateAuthCallable(const InitiateAuthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitiateAuthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitiateAuth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::InitiateAuthAsync(const InitiateAuthRequest& request, const InitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InitiateAuthAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::InitiateAuthAsyncHelper(const InitiateAuthRequest& request, const InitiateAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InitiateAuth(request), context);
}

ListDevicesOutcome CognitoIdentityProviderClient::ListDevices(const ListDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDevicesOutcome(ListDevicesResult(outcome.GetResult()));
  }
  else
  {
    return ListDevicesOutcome(outcome.GetError());
  }
}

ListDevicesOutcomeCallable CognitoIdentityProviderClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDevicesAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListDevicesAsyncHelper(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDevices(request), context);
}

ListGroupsOutcome CognitoIdentityProviderClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGroupsOutcome(ListGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListGroupsOutcome(outcome.GetError());
  }
}

ListGroupsOutcomeCallable CognitoIdentityProviderClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupsAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListGroupsAsyncHelper(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroups(request), context);
}

ListIdentityProvidersOutcome CognitoIdentityProviderClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListIdentityProvidersOutcome(ListIdentityProvidersResult(outcome.GetResult()));
  }
  else
  {
    return ListIdentityProvidersOutcome(outcome.GetError());
  }
}

ListIdentityProvidersOutcomeCallable CognitoIdentityProviderClient::ListIdentityProvidersCallable(const ListIdentityProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListIdentityProvidersAsync(const ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIdentityProvidersAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListIdentityProvidersAsyncHelper(const ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIdentityProviders(request), context);
}

ListResourceServersOutcome CognitoIdentityProviderClient::ListResourceServers(const ListResourceServersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListResourceServersOutcome(ListResourceServersResult(outcome.GetResult()));
  }
  else
  {
    return ListResourceServersOutcome(outcome.GetError());
  }
}

ListResourceServersOutcomeCallable CognitoIdentityProviderClient::ListResourceServersCallable(const ListResourceServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListResourceServersAsync(const ListResourceServersRequest& request, const ListResourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourceServersAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListResourceServersAsyncHelper(const ListResourceServersRequest& request, const ListResourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourceServers(request), context);
}

ListTagsForResourceOutcome CognitoIdentityProviderClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable CognitoIdentityProviderClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListUserImportJobsOutcome CognitoIdentityProviderClient::ListUserImportJobs(const ListUserImportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUserImportJobsOutcome(ListUserImportJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListUserImportJobsOutcome(outcome.GetError());
  }
}

ListUserImportJobsOutcomeCallable CognitoIdentityProviderClient::ListUserImportJobsCallable(const ListUserImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListUserImportJobsAsync(const ListUserImportJobsRequest& request, const ListUserImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUserImportJobsAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListUserImportJobsAsyncHelper(const ListUserImportJobsRequest& request, const ListUserImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUserImportJobs(request), context);
}

ListUserPoolClientsOutcome CognitoIdentityProviderClient::ListUserPoolClients(const ListUserPoolClientsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUserPoolClientsOutcome(ListUserPoolClientsResult(outcome.GetResult()));
  }
  else
  {
    return ListUserPoolClientsOutcome(outcome.GetError());
  }
}

ListUserPoolClientsOutcomeCallable CognitoIdentityProviderClient::ListUserPoolClientsCallable(const ListUserPoolClientsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserPoolClientsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserPoolClients(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListUserPoolClientsAsync(const ListUserPoolClientsRequest& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUserPoolClientsAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListUserPoolClientsAsyncHelper(const ListUserPoolClientsRequest& request, const ListUserPoolClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUserPoolClients(request), context);
}

ListUserPoolsOutcome CognitoIdentityProviderClient::ListUserPools(const ListUserPoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUserPoolsOutcome(ListUserPoolsResult(outcome.GetResult()));
  }
  else
  {
    return ListUserPoolsOutcome(outcome.GetError());
  }
}

ListUserPoolsOutcomeCallable CognitoIdentityProviderClient::ListUserPoolsCallable(const ListUserPoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserPoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserPools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListUserPoolsAsync(const ListUserPoolsRequest& request, const ListUserPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUserPoolsAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListUserPoolsAsyncHelper(const ListUserPoolsRequest& request, const ListUserPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUserPools(request), context);
}

ListUsersOutcome CognitoIdentityProviderClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUsersOutcome(ListUsersResult(outcome.GetResult()));
  }
  else
  {
    return ListUsersOutcome(outcome.GetError());
  }
}

ListUsersOutcomeCallable CognitoIdentityProviderClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListUsersAsyncHelper(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsers(request), context);
}

ListUsersInGroupOutcome CognitoIdentityProviderClient::ListUsersInGroup(const ListUsersInGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUsersInGroupOutcome(ListUsersInGroupResult(outcome.GetResult()));
  }
  else
  {
    return ListUsersInGroupOutcome(outcome.GetError());
  }
}

ListUsersInGroupOutcomeCallable CognitoIdentityProviderClient::ListUsersInGroupCallable(const ListUsersInGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersInGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsersInGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ListUsersInGroupAsync(const ListUsersInGroupRequest& request, const ListUsersInGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersInGroupAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ListUsersInGroupAsyncHelper(const ListUsersInGroupRequest& request, const ListUsersInGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsersInGroup(request), context);
}

ResendConfirmationCodeOutcome CognitoIdentityProviderClient::ResendConfirmationCode(const ResendConfirmationCodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResendConfirmationCodeOutcome(ResendConfirmationCodeResult(outcome.GetResult()));
  }
  else
  {
    return ResendConfirmationCodeOutcome(outcome.GetError());
  }
}

ResendConfirmationCodeOutcomeCallable CognitoIdentityProviderClient::ResendConfirmationCodeCallable(const ResendConfirmationCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResendConfirmationCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResendConfirmationCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::ResendConfirmationCodeAsync(const ResendConfirmationCodeRequest& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResendConfirmationCodeAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::ResendConfirmationCodeAsyncHelper(const ResendConfirmationCodeRequest& request, const ResendConfirmationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResendConfirmationCode(request), context);
}

RespondToAuthChallengeOutcome CognitoIdentityProviderClient::RespondToAuthChallenge(const RespondToAuthChallengeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RespondToAuthChallengeOutcome(RespondToAuthChallengeResult(outcome.GetResult()));
  }
  else
  {
    return RespondToAuthChallengeOutcome(outcome.GetError());
  }
}

RespondToAuthChallengeOutcomeCallable CognitoIdentityProviderClient::RespondToAuthChallengeCallable(const RespondToAuthChallengeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RespondToAuthChallengeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RespondToAuthChallenge(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::RespondToAuthChallengeAsync(const RespondToAuthChallengeRequest& request, const RespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RespondToAuthChallengeAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::RespondToAuthChallengeAsyncHelper(const RespondToAuthChallengeRequest& request, const RespondToAuthChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RespondToAuthChallenge(request), context);
}

SetRiskConfigurationOutcome CognitoIdentityProviderClient::SetRiskConfiguration(const SetRiskConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetRiskConfigurationOutcome(SetRiskConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return SetRiskConfigurationOutcome(outcome.GetError());
  }
}

SetRiskConfigurationOutcomeCallable CognitoIdentityProviderClient::SetRiskConfigurationCallable(const SetRiskConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetRiskConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetRiskConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::SetRiskConfigurationAsync(const SetRiskConfigurationRequest& request, const SetRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetRiskConfigurationAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::SetRiskConfigurationAsyncHelper(const SetRiskConfigurationRequest& request, const SetRiskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetRiskConfiguration(request), context);
}

SetUICustomizationOutcome CognitoIdentityProviderClient::SetUICustomization(const SetUICustomizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetUICustomizationOutcome(SetUICustomizationResult(outcome.GetResult()));
  }
  else
  {
    return SetUICustomizationOutcome(outcome.GetError());
  }
}

SetUICustomizationOutcomeCallable CognitoIdentityProviderClient::SetUICustomizationCallable(const SetUICustomizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetUICustomizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetUICustomization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::SetUICustomizationAsync(const SetUICustomizationRequest& request, const SetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetUICustomizationAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::SetUICustomizationAsyncHelper(const SetUICustomizationRequest& request, const SetUICustomizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetUICustomization(request), context);
}

SetUserMFAPreferenceOutcome CognitoIdentityProviderClient::SetUserMFAPreference(const SetUserMFAPreferenceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetUserMFAPreferenceOutcome(SetUserMFAPreferenceResult(outcome.GetResult()));
  }
  else
  {
    return SetUserMFAPreferenceOutcome(outcome.GetError());
  }
}

SetUserMFAPreferenceOutcomeCallable CognitoIdentityProviderClient::SetUserMFAPreferenceCallable(const SetUserMFAPreferenceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetUserMFAPreferenceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetUserMFAPreference(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::SetUserMFAPreferenceAsync(const SetUserMFAPreferenceRequest& request, const SetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetUserMFAPreferenceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::SetUserMFAPreferenceAsyncHelper(const SetUserMFAPreferenceRequest& request, const SetUserMFAPreferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetUserMFAPreference(request), context);
}

SetUserPoolMfaConfigOutcome CognitoIdentityProviderClient::SetUserPoolMfaConfig(const SetUserPoolMfaConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetUserPoolMfaConfigOutcome(SetUserPoolMfaConfigResult(outcome.GetResult()));
  }
  else
  {
    return SetUserPoolMfaConfigOutcome(outcome.GetError());
  }
}

SetUserPoolMfaConfigOutcomeCallable CognitoIdentityProviderClient::SetUserPoolMfaConfigCallable(const SetUserPoolMfaConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetUserPoolMfaConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetUserPoolMfaConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::SetUserPoolMfaConfigAsync(const SetUserPoolMfaConfigRequest& request, const SetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetUserPoolMfaConfigAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::SetUserPoolMfaConfigAsyncHelper(const SetUserPoolMfaConfigRequest& request, const SetUserPoolMfaConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetUserPoolMfaConfig(request), context);
}

SetUserSettingsOutcome CognitoIdentityProviderClient::SetUserSettings(const SetUserSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetUserSettingsOutcome(SetUserSettingsResult(outcome.GetResult()));
  }
  else
  {
    return SetUserSettingsOutcome(outcome.GetError());
  }
}

SetUserSettingsOutcomeCallable CognitoIdentityProviderClient::SetUserSettingsCallable(const SetUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::SetUserSettingsAsync(const SetUserSettingsRequest& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetUserSettingsAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::SetUserSettingsAsyncHelper(const SetUserSettingsRequest& request, const SetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetUserSettings(request), context);
}

SignUpOutcome CognitoIdentityProviderClient::SignUp(const SignUpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return SignUpOutcome(SignUpResult(outcome.GetResult()));
  }
  else
  {
    return SignUpOutcome(outcome.GetError());
  }
}

SignUpOutcomeCallable CognitoIdentityProviderClient::SignUpCallable(const SignUpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SignUpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SignUp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::SignUpAsync(const SignUpRequest& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SignUpAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::SignUpAsyncHelper(const SignUpRequest& request, const SignUpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SignUp(request), context);
}

StartUserImportJobOutcome CognitoIdentityProviderClient::StartUserImportJob(const StartUserImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartUserImportJobOutcome(StartUserImportJobResult(outcome.GetResult()));
  }
  else
  {
    return StartUserImportJobOutcome(outcome.GetError());
  }
}

StartUserImportJobOutcomeCallable CognitoIdentityProviderClient::StartUserImportJobCallable(const StartUserImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartUserImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartUserImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::StartUserImportJobAsync(const StartUserImportJobRequest& request, const StartUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartUserImportJobAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::StartUserImportJobAsyncHelper(const StartUserImportJobRequest& request, const StartUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartUserImportJob(request), context);
}

StopUserImportJobOutcome CognitoIdentityProviderClient::StopUserImportJob(const StopUserImportJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopUserImportJobOutcome(StopUserImportJobResult(outcome.GetResult()));
  }
  else
  {
    return StopUserImportJobOutcome(outcome.GetError());
  }
}

StopUserImportJobOutcomeCallable CognitoIdentityProviderClient::StopUserImportJobCallable(const StopUserImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopUserImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopUserImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::StopUserImportJobAsync(const StopUserImportJobRequest& request, const StopUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopUserImportJobAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::StopUserImportJobAsyncHelper(const StopUserImportJobRequest& request, const StopUserImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopUserImportJob(request), context);
}

TagResourceOutcome CognitoIdentityProviderClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable CognitoIdentityProviderClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome CognitoIdentityProviderClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable CognitoIdentityProviderClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAuthEventFeedbackOutcome CognitoIdentityProviderClient::UpdateAuthEventFeedback(const UpdateAuthEventFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAuthEventFeedbackOutcome(UpdateAuthEventFeedbackResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAuthEventFeedbackOutcome(outcome.GetError());
  }
}

UpdateAuthEventFeedbackOutcomeCallable CognitoIdentityProviderClient::UpdateAuthEventFeedbackCallable(const UpdateAuthEventFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAuthEventFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAuthEventFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UpdateAuthEventFeedbackAsync(const UpdateAuthEventFeedbackRequest& request, const UpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAuthEventFeedbackAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UpdateAuthEventFeedbackAsyncHelper(const UpdateAuthEventFeedbackRequest& request, const UpdateAuthEventFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAuthEventFeedback(request), context);
}

UpdateDeviceStatusOutcome CognitoIdentityProviderClient::UpdateDeviceStatus(const UpdateDeviceStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDeviceStatusOutcome(UpdateDeviceStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDeviceStatusOutcome(outcome.GetError());
  }
}

UpdateDeviceStatusOutcomeCallable CognitoIdentityProviderClient::UpdateDeviceStatusCallable(const UpdateDeviceStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeviceStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UpdateDeviceStatusAsync(const UpdateDeviceStatusRequest& request, const UpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeviceStatusAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UpdateDeviceStatusAsyncHelper(const UpdateDeviceStatusRequest& request, const UpdateDeviceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeviceStatus(request), context);
}

UpdateGroupOutcome CognitoIdentityProviderClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGroupOutcome(UpdateGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGroupOutcome(outcome.GetError());
  }
}

UpdateGroupOutcomeCallable CognitoIdentityProviderClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGroupAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UpdateGroupAsyncHelper(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGroup(request), context);
}

UpdateIdentityProviderOutcome CognitoIdentityProviderClient::UpdateIdentityProvider(const UpdateIdentityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateIdentityProviderOutcome(UpdateIdentityProviderResult(outcome.GetResult()));
  }
  else
  {
    return UpdateIdentityProviderOutcome(outcome.GetError());
  }
}

UpdateIdentityProviderOutcomeCallable CognitoIdentityProviderClient::UpdateIdentityProviderCallable(const UpdateIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UpdateIdentityProviderAsync(const UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIdentityProviderAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UpdateIdentityProviderAsyncHelper(const UpdateIdentityProviderRequest& request, const UpdateIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIdentityProvider(request), context);
}

UpdateResourceServerOutcome CognitoIdentityProviderClient::UpdateResourceServer(const UpdateResourceServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateResourceServerOutcome(UpdateResourceServerResult(outcome.GetResult()));
  }
  else
  {
    return UpdateResourceServerOutcome(outcome.GetError());
  }
}

UpdateResourceServerOutcomeCallable CognitoIdentityProviderClient::UpdateResourceServerCallable(const UpdateResourceServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UpdateResourceServerAsync(const UpdateResourceServerRequest& request, const UpdateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResourceServerAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UpdateResourceServerAsyncHelper(const UpdateResourceServerRequest& request, const UpdateResourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResourceServer(request), context);
}

UpdateUserAttributesOutcome CognitoIdentityProviderClient::UpdateUserAttributes(const UpdateUserAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserAttributesOutcome(UpdateUserAttributesResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUserAttributesOutcome(outcome.GetError());
  }
}

UpdateUserAttributesOutcomeCallable CognitoIdentityProviderClient::UpdateUserAttributesCallable(const UpdateUserAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UpdateUserAttributesAsync(const UpdateUserAttributesRequest& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserAttributesAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UpdateUserAttributesAsyncHelper(const UpdateUserAttributesRequest& request, const UpdateUserAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserAttributes(request), context);
}

UpdateUserPoolOutcome CognitoIdentityProviderClient::UpdateUserPool(const UpdateUserPoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserPoolOutcome(UpdateUserPoolResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUserPoolOutcome(outcome.GetError());
  }
}

UpdateUserPoolOutcomeCallable CognitoIdentityProviderClient::UpdateUserPoolCallable(const UpdateUserPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UpdateUserPoolAsync(const UpdateUserPoolRequest& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserPoolAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UpdateUserPoolAsyncHelper(const UpdateUserPoolRequest& request, const UpdateUserPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserPool(request), context);
}

UpdateUserPoolClientOutcome CognitoIdentityProviderClient::UpdateUserPoolClient(const UpdateUserPoolClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserPoolClientOutcome(UpdateUserPoolClientResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUserPoolClientOutcome(outcome.GetError());
  }
}

UpdateUserPoolClientOutcomeCallable CognitoIdentityProviderClient::UpdateUserPoolClientCallable(const UpdateUserPoolClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserPoolClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserPoolClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UpdateUserPoolClientAsync(const UpdateUserPoolClientRequest& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserPoolClientAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UpdateUserPoolClientAsyncHelper(const UpdateUserPoolClientRequest& request, const UpdateUserPoolClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserPoolClient(request), context);
}

UpdateUserPoolDomainOutcome CognitoIdentityProviderClient::UpdateUserPoolDomain(const UpdateUserPoolDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserPoolDomainOutcome(UpdateUserPoolDomainResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUserPoolDomainOutcome(outcome.GetError());
  }
}

UpdateUserPoolDomainOutcomeCallable CognitoIdentityProviderClient::UpdateUserPoolDomainCallable(const UpdateUserPoolDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserPoolDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserPoolDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::UpdateUserPoolDomainAsync(const UpdateUserPoolDomainRequest& request, const UpdateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserPoolDomainAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::UpdateUserPoolDomainAsyncHelper(const UpdateUserPoolDomainRequest& request, const UpdateUserPoolDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserPoolDomain(request), context);
}

VerifySoftwareTokenOutcome CognitoIdentityProviderClient::VerifySoftwareToken(const VerifySoftwareTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return VerifySoftwareTokenOutcome(VerifySoftwareTokenResult(outcome.GetResult()));
  }
  else
  {
    return VerifySoftwareTokenOutcome(outcome.GetError());
  }
}

VerifySoftwareTokenOutcomeCallable CognitoIdentityProviderClient::VerifySoftwareTokenCallable(const VerifySoftwareTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifySoftwareTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifySoftwareToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::VerifySoftwareTokenAsync(const VerifySoftwareTokenRequest& request, const VerifySoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->VerifySoftwareTokenAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::VerifySoftwareTokenAsyncHelper(const VerifySoftwareTokenRequest& request, const VerifySoftwareTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, VerifySoftwareToken(request), context);
}

VerifyUserAttributeOutcome CognitoIdentityProviderClient::VerifyUserAttribute(const VerifyUserAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return VerifyUserAttributeOutcome(VerifyUserAttributeResult(outcome.GetResult()));
  }
  else
  {
    return VerifyUserAttributeOutcome(outcome.GetError());
  }
}

VerifyUserAttributeOutcomeCallable CognitoIdentityProviderClient::VerifyUserAttributeCallable(const VerifyUserAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyUserAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyUserAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityProviderClient::VerifyUserAttributeAsync(const VerifyUserAttributeRequest& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->VerifyUserAttributeAsyncHelper( request, handler, context ); } );
}

void CognitoIdentityProviderClient::VerifyUserAttributeAsyncHelper(const VerifyUserAttributeRequest& request, const VerifyUserAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, VerifyUserAttribute(request), context);
}

