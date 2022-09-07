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

#include <aws/fms/FMSClient.h>
#include <aws/fms/FMSEndpoint.h>
#include <aws/fms/FMSErrorMarshaller.h>
#include <aws/fms/model/AssociateAdminAccountRequest.h>
#include <aws/fms/model/AssociateThirdPartyFirewallRequest.h>
#include <aws/fms/model/DeleteAppsListRequest.h>
#include <aws/fms/model/DeleteNotificationChannelRequest.h>
#include <aws/fms/model/DeletePolicyRequest.h>
#include <aws/fms/model/DeleteProtocolsListRequest.h>
#include <aws/fms/model/DisassociateAdminAccountRequest.h>
#include <aws/fms/model/DisassociateThirdPartyFirewallRequest.h>
#include <aws/fms/model/GetAdminAccountRequest.h>
#include <aws/fms/model/GetAppsListRequest.h>
#include <aws/fms/model/GetComplianceDetailRequest.h>
#include <aws/fms/model/GetNotificationChannelRequest.h>
#include <aws/fms/model/GetPolicyRequest.h>
#include <aws/fms/model/GetProtectionStatusRequest.h>
#include <aws/fms/model/GetProtocolsListRequest.h>
#include <aws/fms/model/GetThirdPartyFirewallAssociationStatusRequest.h>
#include <aws/fms/model/GetViolationDetailsRequest.h>
#include <aws/fms/model/ListAppsListsRequest.h>
#include <aws/fms/model/ListComplianceStatusRequest.h>
#include <aws/fms/model/ListMemberAccountsRequest.h>
#include <aws/fms/model/ListPoliciesRequest.h>
#include <aws/fms/model/ListProtocolsListsRequest.h>
#include <aws/fms/model/ListTagsForResourceRequest.h>
#include <aws/fms/model/ListThirdPartyFirewallFirewallPoliciesRequest.h>
#include <aws/fms/model/PutAppsListRequest.h>
#include <aws/fms/model/PutNotificationChannelRequest.h>
#include <aws/fms/model/PutPolicyRequest.h>
#include <aws/fms/model/PutProtocolsListRequest.h>
#include <aws/fms/model/TagResourceRequest.h>
#include <aws/fms/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FMS;
using namespace Aws::FMS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "fms";
static const char* ALLOCATION_TAG = "FMSClient";

FMSClient::FMSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FMSClient::FMSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FMSClient::FMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FMSClient::~FMSClient()
{
}

void FMSClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("FMS");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + FMSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void FMSClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateAdminAccountOutcome FMSClient::AssociateAdminAccount(const AssociateAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateAdminAccountOutcomeCallable FMSClient::AssociateAdminAccountCallable(const AssociateAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientAssociateAdminAccountAsyncHelper(FMSClient const * const clientThis, const AssociateAdminAccountRequest& request, const AssociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateAdminAccount(request), context);
}

void FMSClient::AssociateAdminAccountAsync(const AssociateAdminAccountRequest& request, const AssociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientAssociateAdminAccountAsyncHelper( this, request, handler, context ); } );
}

AssociateThirdPartyFirewallOutcome FMSClient::AssociateThirdPartyFirewall(const AssociateThirdPartyFirewallRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateThirdPartyFirewallOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateThirdPartyFirewallOutcomeCallable FMSClient::AssociateThirdPartyFirewallCallable(const AssociateThirdPartyFirewallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateThirdPartyFirewallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateThirdPartyFirewall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientAssociateThirdPartyFirewallAsyncHelper(FMSClient const * const clientThis, const AssociateThirdPartyFirewallRequest& request, const AssociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateThirdPartyFirewall(request), context);
}

void FMSClient::AssociateThirdPartyFirewallAsync(const AssociateThirdPartyFirewallRequest& request, const AssociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientAssociateThirdPartyFirewallAsyncHelper( this, request, handler, context ); } );
}

DeleteAppsListOutcome FMSClient::DeleteAppsList(const DeleteAppsListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAppsListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppsListOutcomeCallable FMSClient::DeleteAppsListCallable(const DeleteAppsListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppsListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppsList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientDeleteAppsListAsyncHelper(FMSClient const * const clientThis, const DeleteAppsListRequest& request, const DeleteAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAppsList(request), context);
}

void FMSClient::DeleteAppsListAsync(const DeleteAppsListRequest& request, const DeleteAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientDeleteAppsListAsyncHelper( this, request, handler, context ); } );
}

DeleteNotificationChannelOutcome FMSClient::DeleteNotificationChannel(const DeleteNotificationChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteNotificationChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNotificationChannelOutcomeCallable FMSClient::DeleteNotificationChannelCallable(const DeleteNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientDeleteNotificationChannelAsyncHelper(FMSClient const * const clientThis, const DeleteNotificationChannelRequest& request, const DeleteNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNotificationChannel(request), context);
}

void FMSClient::DeleteNotificationChannelAsync(const DeleteNotificationChannelRequest& request, const DeleteNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientDeleteNotificationChannelAsyncHelper( this, request, handler, context ); } );
}

DeletePolicyOutcome FMSClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePolicyOutcomeCallable FMSClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientDeletePolicyAsyncHelper(FMSClient const * const clientThis, const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePolicy(request), context);
}

void FMSClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientDeletePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteProtocolsListOutcome FMSClient::DeleteProtocolsList(const DeleteProtocolsListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProtocolsListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProtocolsListOutcomeCallable FMSClient::DeleteProtocolsListCallable(const DeleteProtocolsListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProtocolsListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProtocolsList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientDeleteProtocolsListAsyncHelper(FMSClient const * const clientThis, const DeleteProtocolsListRequest& request, const DeleteProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProtocolsList(request), context);
}

void FMSClient::DeleteProtocolsListAsync(const DeleteProtocolsListRequest& request, const DeleteProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientDeleteProtocolsListAsyncHelper( this, request, handler, context ); } );
}

DisassociateAdminAccountOutcome FMSClient::DisassociateAdminAccount(const DisassociateAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAdminAccountOutcomeCallable FMSClient::DisassociateAdminAccountCallable(const DisassociateAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientDisassociateAdminAccountAsyncHelper(FMSClient const * const clientThis, const DisassociateAdminAccountRequest& request, const DisassociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateAdminAccount(request), context);
}

void FMSClient::DisassociateAdminAccountAsync(const DisassociateAdminAccountRequest& request, const DisassociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientDisassociateAdminAccountAsyncHelper( this, request, handler, context ); } );
}

DisassociateThirdPartyFirewallOutcome FMSClient::DisassociateThirdPartyFirewall(const DisassociateThirdPartyFirewallRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateThirdPartyFirewallOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateThirdPartyFirewallOutcomeCallable FMSClient::DisassociateThirdPartyFirewallCallable(const DisassociateThirdPartyFirewallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateThirdPartyFirewallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateThirdPartyFirewall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientDisassociateThirdPartyFirewallAsyncHelper(FMSClient const * const clientThis, const DisassociateThirdPartyFirewallRequest& request, const DisassociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateThirdPartyFirewall(request), context);
}

void FMSClient::DisassociateThirdPartyFirewallAsync(const DisassociateThirdPartyFirewallRequest& request, const DisassociateThirdPartyFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientDisassociateThirdPartyFirewallAsyncHelper( this, request, handler, context ); } );
}

GetAdminAccountOutcome FMSClient::GetAdminAccount(const GetAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAdminAccountOutcomeCallable FMSClient::GetAdminAccountCallable(const GetAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientGetAdminAccountAsyncHelper(FMSClient const * const clientThis, const GetAdminAccountRequest& request, const GetAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAdminAccount(request), context);
}

void FMSClient::GetAdminAccountAsync(const GetAdminAccountRequest& request, const GetAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientGetAdminAccountAsyncHelper( this, request, handler, context ); } );
}

GetAppsListOutcome FMSClient::GetAppsList(const GetAppsListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAppsListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAppsListOutcomeCallable FMSClient::GetAppsListCallable(const GetAppsListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppsListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppsList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientGetAppsListAsyncHelper(FMSClient const * const clientThis, const GetAppsListRequest& request, const GetAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAppsList(request), context);
}

void FMSClient::GetAppsListAsync(const GetAppsListRequest& request, const GetAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientGetAppsListAsyncHelper( this, request, handler, context ); } );
}

GetComplianceDetailOutcome FMSClient::GetComplianceDetail(const GetComplianceDetailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetComplianceDetailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetComplianceDetailOutcomeCallable FMSClient::GetComplianceDetailCallable(const GetComplianceDetailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceDetailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceDetail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientGetComplianceDetailAsyncHelper(FMSClient const * const clientThis, const GetComplianceDetailRequest& request, const GetComplianceDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComplianceDetail(request), context);
}

void FMSClient::GetComplianceDetailAsync(const GetComplianceDetailRequest& request, const GetComplianceDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientGetComplianceDetailAsyncHelper( this, request, handler, context ); } );
}

GetNotificationChannelOutcome FMSClient::GetNotificationChannel(const GetNotificationChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetNotificationChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetNotificationChannelOutcomeCallable FMSClient::GetNotificationChannelCallable(const GetNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientGetNotificationChannelAsyncHelper(FMSClient const * const clientThis, const GetNotificationChannelRequest& request, const GetNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNotificationChannel(request), context);
}

void FMSClient::GetNotificationChannelAsync(const GetNotificationChannelRequest& request, const GetNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientGetNotificationChannelAsyncHelper( this, request, handler, context ); } );
}

GetPolicyOutcome FMSClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPolicyOutcomeCallable FMSClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientGetPolicyAsyncHelper(FMSClient const * const clientThis, const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPolicy(request), context);
}

void FMSClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientGetPolicyAsyncHelper( this, request, handler, context ); } );
}

GetProtectionStatusOutcome FMSClient::GetProtectionStatus(const GetProtectionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetProtectionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetProtectionStatusOutcomeCallable FMSClient::GetProtectionStatusCallable(const GetProtectionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProtectionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProtectionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientGetProtectionStatusAsyncHelper(FMSClient const * const clientThis, const GetProtectionStatusRequest& request, const GetProtectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetProtectionStatus(request), context);
}

void FMSClient::GetProtectionStatusAsync(const GetProtectionStatusRequest& request, const GetProtectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientGetProtectionStatusAsyncHelper( this, request, handler, context ); } );
}

GetProtocolsListOutcome FMSClient::GetProtocolsList(const GetProtocolsListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetProtocolsListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetProtocolsListOutcomeCallable FMSClient::GetProtocolsListCallable(const GetProtocolsListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProtocolsListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProtocolsList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientGetProtocolsListAsyncHelper(FMSClient const * const clientThis, const GetProtocolsListRequest& request, const GetProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetProtocolsList(request), context);
}

void FMSClient::GetProtocolsListAsync(const GetProtocolsListRequest& request, const GetProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientGetProtocolsListAsyncHelper( this, request, handler, context ); } );
}

GetThirdPartyFirewallAssociationStatusOutcome FMSClient::GetThirdPartyFirewallAssociationStatus(const GetThirdPartyFirewallAssociationStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetThirdPartyFirewallAssociationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetThirdPartyFirewallAssociationStatusOutcomeCallable FMSClient::GetThirdPartyFirewallAssociationStatusCallable(const GetThirdPartyFirewallAssociationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetThirdPartyFirewallAssociationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetThirdPartyFirewallAssociationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientGetThirdPartyFirewallAssociationStatusAsyncHelper(FMSClient const * const clientThis, const GetThirdPartyFirewallAssociationStatusRequest& request, const GetThirdPartyFirewallAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetThirdPartyFirewallAssociationStatus(request), context);
}

void FMSClient::GetThirdPartyFirewallAssociationStatusAsync(const GetThirdPartyFirewallAssociationStatusRequest& request, const GetThirdPartyFirewallAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientGetThirdPartyFirewallAssociationStatusAsyncHelper( this, request, handler, context ); } );
}

GetViolationDetailsOutcome FMSClient::GetViolationDetails(const GetViolationDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetViolationDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetViolationDetailsOutcomeCallable FMSClient::GetViolationDetailsCallable(const GetViolationDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetViolationDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetViolationDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientGetViolationDetailsAsyncHelper(FMSClient const * const clientThis, const GetViolationDetailsRequest& request, const GetViolationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetViolationDetails(request), context);
}

void FMSClient::GetViolationDetailsAsync(const GetViolationDetailsRequest& request, const GetViolationDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientGetViolationDetailsAsyncHelper( this, request, handler, context ); } );
}

ListAppsListsOutcome FMSClient::ListAppsLists(const ListAppsListsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAppsListsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppsListsOutcomeCallable FMSClient::ListAppsListsCallable(const ListAppsListsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsListsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppsLists(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientListAppsListsAsyncHelper(FMSClient const * const clientThis, const ListAppsListsRequest& request, const ListAppsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAppsLists(request), context);
}

void FMSClient::ListAppsListsAsync(const ListAppsListsRequest& request, const ListAppsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientListAppsListsAsyncHelper( this, request, handler, context ); } );
}

ListComplianceStatusOutcome FMSClient::ListComplianceStatus(const ListComplianceStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListComplianceStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComplianceStatusOutcomeCallable FMSClient::ListComplianceStatusCallable(const ListComplianceStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComplianceStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComplianceStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientListComplianceStatusAsyncHelper(FMSClient const * const clientThis, const ListComplianceStatusRequest& request, const ListComplianceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListComplianceStatus(request), context);
}

void FMSClient::ListComplianceStatusAsync(const ListComplianceStatusRequest& request, const ListComplianceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientListComplianceStatusAsyncHelper( this, request, handler, context ); } );
}

ListMemberAccountsOutcome FMSClient::ListMemberAccounts(const ListMemberAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMemberAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMemberAccountsOutcomeCallable FMSClient::ListMemberAccountsCallable(const ListMemberAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMemberAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMemberAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientListMemberAccountsAsyncHelper(FMSClient const * const clientThis, const ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMemberAccounts(request), context);
}

void FMSClient::ListMemberAccountsAsync(const ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientListMemberAccountsAsyncHelper( this, request, handler, context ); } );
}

ListPoliciesOutcome FMSClient::ListPolicies(const ListPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPoliciesOutcomeCallable FMSClient::ListPoliciesCallable(const ListPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientListPoliciesAsyncHelper(FMSClient const * const clientThis, const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPolicies(request), context);
}

void FMSClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientListPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListProtocolsListsOutcome FMSClient::ListProtocolsLists(const ListProtocolsListsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProtocolsListsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProtocolsListsOutcomeCallable FMSClient::ListProtocolsListsCallable(const ListProtocolsListsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProtocolsListsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProtocolsLists(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientListProtocolsListsAsyncHelper(FMSClient const * const clientThis, const ListProtocolsListsRequest& request, const ListProtocolsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProtocolsLists(request), context);
}

void FMSClient::ListProtocolsListsAsync(const ListProtocolsListsRequest& request, const ListProtocolsListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientListProtocolsListsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome FMSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable FMSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientListTagsForResourceAsyncHelper(FMSClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void FMSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListThirdPartyFirewallFirewallPoliciesOutcome FMSClient::ListThirdPartyFirewallFirewallPolicies(const ListThirdPartyFirewallFirewallPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListThirdPartyFirewallFirewallPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListThirdPartyFirewallFirewallPoliciesOutcomeCallable FMSClient::ListThirdPartyFirewallFirewallPoliciesCallable(const ListThirdPartyFirewallFirewallPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThirdPartyFirewallFirewallPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThirdPartyFirewallFirewallPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientListThirdPartyFirewallFirewallPoliciesAsyncHelper(FMSClient const * const clientThis, const ListThirdPartyFirewallFirewallPoliciesRequest& request, const ListThirdPartyFirewallFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListThirdPartyFirewallFirewallPolicies(request), context);
}

void FMSClient::ListThirdPartyFirewallFirewallPoliciesAsync(const ListThirdPartyFirewallFirewallPoliciesRequest& request, const ListThirdPartyFirewallFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientListThirdPartyFirewallFirewallPoliciesAsyncHelper( this, request, handler, context ); } );
}

PutAppsListOutcome FMSClient::PutAppsList(const PutAppsListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAppsListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAppsListOutcomeCallable FMSClient::PutAppsListCallable(const PutAppsListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAppsListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAppsList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientPutAppsListAsyncHelper(FMSClient const * const clientThis, const PutAppsListRequest& request, const PutAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAppsList(request), context);
}

void FMSClient::PutAppsListAsync(const PutAppsListRequest& request, const PutAppsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientPutAppsListAsyncHelper( this, request, handler, context ); } );
}

PutNotificationChannelOutcome FMSClient::PutNotificationChannel(const PutNotificationChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutNotificationChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutNotificationChannelOutcomeCallable FMSClient::PutNotificationChannelCallable(const PutNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientPutNotificationChannelAsyncHelper(FMSClient const * const clientThis, const PutNotificationChannelRequest& request, const PutNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutNotificationChannel(request), context);
}

void FMSClient::PutNotificationChannelAsync(const PutNotificationChannelRequest& request, const PutNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientPutNotificationChannelAsyncHelper( this, request, handler, context ); } );
}

PutPolicyOutcome FMSClient::PutPolicy(const PutPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPolicyOutcomeCallable FMSClient::PutPolicyCallable(const PutPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientPutPolicyAsyncHelper(FMSClient const * const clientThis, const PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPolicy(request), context);
}

void FMSClient::PutPolicyAsync(const PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientPutPolicyAsyncHelper( this, request, handler, context ); } );
}

PutProtocolsListOutcome FMSClient::PutProtocolsList(const PutProtocolsListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutProtocolsListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutProtocolsListOutcomeCallable FMSClient::PutProtocolsListCallable(const PutProtocolsListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProtocolsListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProtocolsList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientPutProtocolsListAsyncHelper(FMSClient const * const clientThis, const PutProtocolsListRequest& request, const PutProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutProtocolsList(request), context);
}

void FMSClient::PutProtocolsListAsync(const PutProtocolsListRequest& request, const PutProtocolsListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientPutProtocolsListAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome FMSClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable FMSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientTagResourceAsyncHelper(FMSClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void FMSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome FMSClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable FMSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClientUntagResourceAsyncHelper(FMSClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void FMSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FMSClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

