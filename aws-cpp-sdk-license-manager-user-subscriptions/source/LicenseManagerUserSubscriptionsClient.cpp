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

#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsClient.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsEndpoint.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsErrorMarshaller.h>
#include <aws/license-manager-user-subscriptions/model/AssociateUserRequest.h>
#include <aws/license-manager-user-subscriptions/model/DeregisterIdentityProviderRequest.h>
#include <aws/license-manager-user-subscriptions/model/DisassociateUserRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsRequest.h>
#include <aws/license-manager-user-subscriptions/model/RegisterIdentityProviderRequest.h>
#include <aws/license-manager-user-subscriptions/model/StartProductSubscriptionRequest.h>
#include <aws/license-manager-user-subscriptions/model/StopProductSubscriptionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LicenseManagerUserSubscriptions;
using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "license-manager-user-subscriptions";
static const char* ALLOCATION_TAG = "LicenseManagerUserSubscriptionsClient";

LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerUserSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(const AWSCredentials& credentials,
                                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerUserSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LicenseManagerUserSubscriptionsClient::LicenseManagerUserSubscriptionsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerUserSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LicenseManagerUserSubscriptionsClient::~LicenseManagerUserSubscriptionsClient()
{
}

void LicenseManagerUserSubscriptionsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("License Manager User Subscriptions");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LicenseManagerUserSubscriptionsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LicenseManagerUserSubscriptionsClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateUserOutcome LicenseManagerUserSubscriptionsClient::AssociateUser(const AssociateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/AssociateUser");
  return AssociateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateUserOutcomeCallable LicenseManagerUserSubscriptionsClient::AssociateUserCallable(const AssociateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::AssociateUserAsync(const AssociateUserRequest& request, const AssociateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateUserAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::AssociateUserAsyncHelper(const AssociateUserRequest& request, const AssociateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateUser(request), context);
}

DeregisterIdentityProviderOutcome LicenseManagerUserSubscriptionsClient::DeregisterIdentityProvider(const DeregisterIdentityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/identity-provider/DeregisterIdentityProvider");
  return DeregisterIdentityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterIdentityProviderOutcomeCallable LicenseManagerUserSubscriptionsClient::DeregisterIdentityProviderCallable(const DeregisterIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::DeregisterIdentityProviderAsync(const DeregisterIdentityProviderRequest& request, const DeregisterIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterIdentityProviderAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::DeregisterIdentityProviderAsyncHelper(const DeregisterIdentityProviderRequest& request, const DeregisterIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterIdentityProvider(request), context);
}

DisassociateUserOutcome LicenseManagerUserSubscriptionsClient::DisassociateUser(const DisassociateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/DisassociateUser");
  return DisassociateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateUserOutcomeCallable LicenseManagerUserSubscriptionsClient::DisassociateUserCallable(const DisassociateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::DisassociateUserAsync(const DisassociateUserRequest& request, const DisassociateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateUserAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::DisassociateUserAsyncHelper(const DisassociateUserRequest& request, const DisassociateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateUser(request), context);
}

ListIdentityProvidersOutcome LicenseManagerUserSubscriptionsClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/identity-provider/ListIdentityProviders");
  return ListIdentityProvidersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityProvidersOutcomeCallable LicenseManagerUserSubscriptionsClient::ListIdentityProvidersCallable(const ListIdentityProvidersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityProvidersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityProviders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::ListIdentityProvidersAsync(const ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIdentityProvidersAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::ListIdentityProvidersAsyncHelper(const ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIdentityProviders(request), context);
}

ListInstancesOutcome LicenseManagerUserSubscriptionsClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/instance/ListInstances");
  return ListInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcomeCallable LicenseManagerUserSubscriptionsClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstancesAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::ListInstancesAsyncHelper(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstances(request), context);
}

ListProductSubscriptionsOutcome LicenseManagerUserSubscriptionsClient::ListProductSubscriptions(const ListProductSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/ListProductSubscriptions");
  return ListProductSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProductSubscriptionsOutcomeCallable LicenseManagerUserSubscriptionsClient::ListProductSubscriptionsCallable(const ListProductSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProductSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProductSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::ListProductSubscriptionsAsync(const ListProductSubscriptionsRequest& request, const ListProductSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProductSubscriptionsAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::ListProductSubscriptionsAsyncHelper(const ListProductSubscriptionsRequest& request, const ListProductSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProductSubscriptions(request), context);
}

ListUserAssociationsOutcome LicenseManagerUserSubscriptionsClient::ListUserAssociations(const ListUserAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/ListUserAssociations");
  return ListUserAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserAssociationsOutcomeCallable LicenseManagerUserSubscriptionsClient::ListUserAssociationsCallable(const ListUserAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::ListUserAssociationsAsync(const ListUserAssociationsRequest& request, const ListUserAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUserAssociationsAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::ListUserAssociationsAsyncHelper(const ListUserAssociationsRequest& request, const ListUserAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUserAssociations(request), context);
}

RegisterIdentityProviderOutcome LicenseManagerUserSubscriptionsClient::RegisterIdentityProvider(const RegisterIdentityProviderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/identity-provider/RegisterIdentityProvider");
  return RegisterIdentityProviderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterIdentityProviderOutcomeCallable LicenseManagerUserSubscriptionsClient::RegisterIdentityProviderCallable(const RegisterIdentityProviderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterIdentityProviderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterIdentityProvider(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::RegisterIdentityProviderAsync(const RegisterIdentityProviderRequest& request, const RegisterIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterIdentityProviderAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::RegisterIdentityProviderAsyncHelper(const RegisterIdentityProviderRequest& request, const RegisterIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterIdentityProvider(request), context);
}

StartProductSubscriptionOutcome LicenseManagerUserSubscriptionsClient::StartProductSubscription(const StartProductSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/StartProductSubscription");
  return StartProductSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartProductSubscriptionOutcomeCallable LicenseManagerUserSubscriptionsClient::StartProductSubscriptionCallable(const StartProductSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartProductSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartProductSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::StartProductSubscriptionAsync(const StartProductSubscriptionRequest& request, const StartProductSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartProductSubscriptionAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::StartProductSubscriptionAsyncHelper(const StartProductSubscriptionRequest& request, const StartProductSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartProductSubscription(request), context);
}

StopProductSubscriptionOutcome LicenseManagerUserSubscriptionsClient::StopProductSubscription(const StopProductSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/StopProductSubscription");
  return StopProductSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopProductSubscriptionOutcomeCallable LicenseManagerUserSubscriptionsClient::StopProductSubscriptionCallable(const StopProductSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopProductSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopProductSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerUserSubscriptionsClient::StopProductSubscriptionAsync(const StopProductSubscriptionRequest& request, const StopProductSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopProductSubscriptionAsyncHelper( request, handler, context ); } );
}

void LicenseManagerUserSubscriptionsClient::StopProductSubscriptionAsyncHelper(const StopProductSubscriptionRequest& request, const StopProductSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopProductSubscription(request), context);
}

