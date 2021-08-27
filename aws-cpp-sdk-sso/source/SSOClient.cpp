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

#include <aws/sso/SSOClient.h>
#include <aws/sso/SSOEndpoint.h>
#include <aws/sso/SSOErrorMarshaller.h>
#include <aws/sso/model/GetRoleCredentialsRequest.h>
#include <aws/sso/model/ListAccountRolesRequest.h>
#include <aws/sso/model/ListAccountsRequest.h>
#include <aws/sso/model/LogoutRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSO;
using namespace Aws::SSO::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "awsssoportal";
static const char* ALLOCATION_TAG = "SSOClient";


SSOClient::SSOClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SSOErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOClient::SSOClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SSOErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOClient::SSOClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SSOErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOClient::~SSOClient()
{
}

void SSOClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("SSO");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SSOEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SSOClient::OverrideEndpoint(const Aws::String& endpoint)
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

GetRoleCredentialsOutcome SSOClient::GetRoleCredentials(const GetRoleCredentialsRequest& request) const
{
  if (!request.RoleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoleCredentials", "Required field: RoleName, is not set");
    return GetRoleCredentialsOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleName]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoleCredentials", "Required field: AccountId, is not set");
    return GetRoleCredentialsOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.AccessTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoleCredentials", "Required field: AccessToken, is not set");
    return GetRoleCredentialsOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/federation/credentials";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRoleCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::NULL_SIGNER));
}

GetRoleCredentialsOutcomeCallable SSOClient::GetRoleCredentialsCallable(const GetRoleCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoleCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoleCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOClient::GetRoleCredentialsAsync(const GetRoleCredentialsRequest& request, const GetRoleCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRoleCredentialsAsyncHelper( request, handler, context ); } );
}

void SSOClient::GetRoleCredentialsAsyncHelper(const GetRoleCredentialsRequest& request, const GetRoleCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoleCredentials(request), context);
}

ListAccountRolesOutcome SSOClient::ListAccountRoles(const ListAccountRolesRequest& request) const
{
  if (!request.AccessTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccountRoles", "Required field: AccessToken, is not set");
    return ListAccountRolesOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessToken]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccountRoles", "Required field: AccountId, is not set");
    return ListAccountRolesOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assignment/roles";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccountRolesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::NULL_SIGNER));
}

ListAccountRolesOutcomeCallable SSOClient::ListAccountRolesCallable(const ListAccountRolesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountRolesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccountRoles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOClient::ListAccountRolesAsync(const ListAccountRolesRequest& request, const ListAccountRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountRolesAsyncHelper( request, handler, context ); } );
}

void SSOClient::ListAccountRolesAsyncHelper(const ListAccountRolesRequest& request, const ListAccountRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccountRoles(request), context);
}

ListAccountsOutcome SSOClient::ListAccounts(const ListAccountsRequest& request) const
{
  if (!request.AccessTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccounts", "Required field: AccessToken, is not set");
    return ListAccountsOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/assignment/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::NULL_SIGNER));
}

ListAccountsOutcomeCallable SSOClient::ListAccountsCallable(const ListAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOClient::ListAccountsAsync(const ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountsAsyncHelper( request, handler, context ); } );
}

void SSOClient::ListAccountsAsyncHelper(const ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccounts(request), context);
}

LogoutOutcome SSOClient::Logout(const LogoutRequest& request) const
{
  if (!request.AccessTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Logout", "Required field: AccessToken, is not set");
    return LogoutOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/logout";
  uri.SetPath(uri.GetPath() + ss.str());
  return LogoutOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

LogoutOutcomeCallable SSOClient::LogoutCallable(const LogoutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LogoutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Logout(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOClient::LogoutAsync(const LogoutRequest& request, const LogoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->LogoutAsyncHelper( request, handler, context ); } );
}

void SSOClient::LogoutAsyncHelper(const LogoutRequest& request, const LogoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Logout(request), context);
}

