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

#include <aws/sso/SSOClient.h>
#include <aws/sso/SSOErrorMarshaller.h>
#include <aws/sso/SSOEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SSOClient::SERVICE_NAME = "awsssoportal";
const char* SSOClient::ALLOCATION_TAG = "SSOClient";

SSOClient::SSOClient(const SSO::SSOClientConfiguration& clientConfiguration,
                     std::shared_ptr<SSOEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SSOClient::SSOClient(const AWSCredentials& credentials,
                     std::shared_ptr<SSOEndpointProviderBase> endpointProvider,
                     const SSO::SSOClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SSOClient::SSOClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SSOEndpointProviderBase> endpointProvider,
                     const SSO::SSOClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SSOClient::SSOClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SSOEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SSOClient::SSOClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SSOEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SSOClient::SSOClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SSOEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SSOClient::~SSOClient()
{
}

std::shared_ptr<SSOEndpointProviderBase>& SSOClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SSOClient::init(const SSO::SSOClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SSO");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SSOClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetRoleCredentialsOutcome SSOClient::GetRoleCredentials(const GetRoleCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRoleCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetRoleCredentials", "Required field: AccountId has invalid value");
    return GetRoleCredentialsOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRoleCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/federation/credentials");
  return GetRoleCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::NULL_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRoleCredentials(request), context);
    } );
}

ListAccountRolesOutcome SSOClient::ListAccountRoles(const ListAccountRolesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccountRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListAccountRoles", "Required field: AccountId has invalid value");
    return ListAccountRolesOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccountRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assignment/roles");
  return ListAccountRolesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::NULL_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccountRoles(request), context);
    } );
}

ListAccountsOutcome SSOClient::ListAccounts(const ListAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccounts", "Required field: AccessToken, is not set");
    return ListAccountsOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assignment/accounts");
  return ListAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::NULL_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccounts(request), context);
    } );
}

LogoutOutcome SSOClient::Logout(const LogoutRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Logout, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Logout", "Required field: AccessToken, is not set");
    return LogoutOutcome(Aws::Client::AWSError<SSOErrors>(SSOErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Logout, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logout");
  return LogoutOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Logout(request), context);
    } );
}

