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

#include <aws/wafv2/WAFV2Client.h>
#include <aws/wafv2/WAFV2Endpoint.h>
#include <aws/wafv2/WAFV2ErrorMarshaller.h>
#include <aws/wafv2/model/AssociateWebACLRequest.h>
#include <aws/wafv2/model/CheckCapacityRequest.h>
#include <aws/wafv2/model/CreateIPSetRequest.h>
#include <aws/wafv2/model/CreateRegexPatternSetRequest.h>
#include <aws/wafv2/model/CreateRuleGroupRequest.h>
#include <aws/wafv2/model/CreateWebACLRequest.h>
#include <aws/wafv2/model/DeleteFirewallManagerRuleGroupsRequest.h>
#include <aws/wafv2/model/DeleteIPSetRequest.h>
#include <aws/wafv2/model/DeleteLoggingConfigurationRequest.h>
#include <aws/wafv2/model/DeletePermissionPolicyRequest.h>
#include <aws/wafv2/model/DeleteRegexPatternSetRequest.h>
#include <aws/wafv2/model/DeleteRuleGroupRequest.h>
#include <aws/wafv2/model/DeleteWebACLRequest.h>
#include <aws/wafv2/model/DescribeManagedRuleGroupRequest.h>
#include <aws/wafv2/model/DisassociateWebACLRequest.h>
#include <aws/wafv2/model/GenerateMobileSdkReleaseUrlRequest.h>
#include <aws/wafv2/model/GetIPSetRequest.h>
#include <aws/wafv2/model/GetLoggingConfigurationRequest.h>
#include <aws/wafv2/model/GetManagedRuleSetRequest.h>
#include <aws/wafv2/model/GetMobileSdkReleaseRequest.h>
#include <aws/wafv2/model/GetPermissionPolicyRequest.h>
#include <aws/wafv2/model/GetRateBasedStatementManagedKeysRequest.h>
#include <aws/wafv2/model/GetRegexPatternSetRequest.h>
#include <aws/wafv2/model/GetRuleGroupRequest.h>
#include <aws/wafv2/model/GetSampledRequestsRequest.h>
#include <aws/wafv2/model/GetWebACLRequest.h>
#include <aws/wafv2/model/GetWebACLForResourceRequest.h>
#include <aws/wafv2/model/ListAvailableManagedRuleGroupVersionsRequest.h>
#include <aws/wafv2/model/ListAvailableManagedRuleGroupsRequest.h>
#include <aws/wafv2/model/ListIPSetsRequest.h>
#include <aws/wafv2/model/ListLoggingConfigurationsRequest.h>
#include <aws/wafv2/model/ListManagedRuleSetsRequest.h>
#include <aws/wafv2/model/ListMobileSdkReleasesRequest.h>
#include <aws/wafv2/model/ListRegexPatternSetsRequest.h>
#include <aws/wafv2/model/ListResourcesForWebACLRequest.h>
#include <aws/wafv2/model/ListRuleGroupsRequest.h>
#include <aws/wafv2/model/ListTagsForResourceRequest.h>
#include <aws/wafv2/model/ListWebACLsRequest.h>
#include <aws/wafv2/model/PutLoggingConfigurationRequest.h>
#include <aws/wafv2/model/PutManagedRuleSetVersionsRequest.h>
#include <aws/wafv2/model/PutPermissionPolicyRequest.h>
#include <aws/wafv2/model/TagResourceRequest.h>
#include <aws/wafv2/model/UntagResourceRequest.h>
#include <aws/wafv2/model/UpdateIPSetRequest.h>
#include <aws/wafv2/model/UpdateManagedRuleSetVersionExpiryDateRequest.h>
#include <aws/wafv2/model/UpdateRegexPatternSetRequest.h>
#include <aws/wafv2/model/UpdateRuleGroupRequest.h>
#include <aws/wafv2/model/UpdateWebACLRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WAFV2;
using namespace Aws::WAFV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "wafv2";
static const char* ALLOCATION_TAG = "WAFV2Client";

WAFV2Client::WAFV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFV2Client::WAFV2Client(const AWSCredentials& credentials,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFV2Client::WAFV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFV2Client::~WAFV2Client()
{
}

void WAFV2Client::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WAFV2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WAFV2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WAFV2Client::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateWebACLOutcome WAFV2Client::AssociateWebACL(const AssociateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateWebACLOutcomeCallable WAFV2Client::AssociateWebACLCallable(const AssociateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientAssociateWebACLAsyncHelper(WAFV2Client const * const clientThis, const AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateWebACL(request), context);
}

void WAFV2Client::AssociateWebACLAsync(const AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientAssociateWebACLAsyncHelper( this, request, handler, context ); } );
}

CheckCapacityOutcome WAFV2Client::CheckCapacity(const CheckCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CheckCapacityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckCapacityOutcomeCallable WAFV2Client::CheckCapacityCallable(const CheckCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientCheckCapacityAsyncHelper(WAFV2Client const * const clientThis, const CheckCapacityRequest& request, const CheckCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CheckCapacity(request), context);
}

void WAFV2Client::CheckCapacityAsync(const CheckCapacityRequest& request, const CheckCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientCheckCapacityAsyncHelper( this, request, handler, context ); } );
}

CreateIPSetOutcome WAFV2Client::CreateIPSet(const CreateIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIPSetOutcomeCallable WAFV2Client::CreateIPSetCallable(const CreateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientCreateIPSetAsyncHelper(WAFV2Client const * const clientThis, const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIPSet(request), context);
}

void WAFV2Client::CreateIPSetAsync(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientCreateIPSetAsyncHelper( this, request, handler, context ); } );
}

CreateRegexPatternSetOutcome WAFV2Client::CreateRegexPatternSet(const CreateRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRegexPatternSetOutcomeCallable WAFV2Client::CreateRegexPatternSetCallable(const CreateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientCreateRegexPatternSetAsyncHelper(WAFV2Client const * const clientThis, const CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRegexPatternSet(request), context);
}

void WAFV2Client::CreateRegexPatternSetAsync(const CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientCreateRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

CreateRuleGroupOutcome WAFV2Client::CreateRuleGroup(const CreateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleGroupOutcomeCallable WAFV2Client::CreateRuleGroupCallable(const CreateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientCreateRuleGroupAsyncHelper(WAFV2Client const * const clientThis, const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRuleGroup(request), context);
}

void WAFV2Client::CreateRuleGroupAsync(const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientCreateRuleGroupAsyncHelper( this, request, handler, context ); } );
}

CreateWebACLOutcome WAFV2Client::CreateWebACL(const CreateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebACLOutcomeCallable WAFV2Client::CreateWebACLCallable(const CreateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientCreateWebACLAsyncHelper(WAFV2Client const * const clientThis, const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWebACL(request), context);
}

void WAFV2Client::CreateWebACLAsync(const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientCreateWebACLAsyncHelper( this, request, handler, context ); } );
}

DeleteFirewallManagerRuleGroupsOutcome WAFV2Client::DeleteFirewallManagerRuleGroups(const DeleteFirewallManagerRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFirewallManagerRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFirewallManagerRuleGroupsOutcomeCallable WAFV2Client::DeleteFirewallManagerRuleGroupsCallable(const DeleteFirewallManagerRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFirewallManagerRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFirewallManagerRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientDeleteFirewallManagerRuleGroupsAsyncHelper(WAFV2Client const * const clientThis, const DeleteFirewallManagerRuleGroupsRequest& request, const DeleteFirewallManagerRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFirewallManagerRuleGroups(request), context);
}

void WAFV2Client::DeleteFirewallManagerRuleGroupsAsync(const DeleteFirewallManagerRuleGroupsRequest& request, const DeleteFirewallManagerRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientDeleteFirewallManagerRuleGroupsAsyncHelper( this, request, handler, context ); } );
}

DeleteIPSetOutcome WAFV2Client::DeleteIPSet(const DeleteIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIPSetOutcomeCallable WAFV2Client::DeleteIPSetCallable(const DeleteIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientDeleteIPSetAsyncHelper(WAFV2Client const * const clientThis, const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIPSet(request), context);
}

void WAFV2Client::DeleteIPSetAsync(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientDeleteIPSetAsyncHelper( this, request, handler, context ); } );
}

DeleteLoggingConfigurationOutcome WAFV2Client::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoggingConfigurationOutcomeCallable WAFV2Client::DeleteLoggingConfigurationCallable(const DeleteLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientDeleteLoggingConfigurationAsyncHelper(WAFV2Client const * const clientThis, const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoggingConfiguration(request), context);
}

void WAFV2Client::DeleteLoggingConfigurationAsync(const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientDeleteLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeletePermissionPolicyOutcome WAFV2Client::DeletePermissionPolicy(const DeletePermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePermissionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionPolicyOutcomeCallable WAFV2Client::DeletePermissionPolicyCallable(const DeletePermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientDeletePermissionPolicyAsyncHelper(WAFV2Client const * const clientThis, const DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePermissionPolicy(request), context);
}

void WAFV2Client::DeletePermissionPolicyAsync(const DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientDeletePermissionPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteRegexPatternSetOutcome WAFV2Client::DeleteRegexPatternSet(const DeleteRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegexPatternSetOutcomeCallable WAFV2Client::DeleteRegexPatternSetCallable(const DeleteRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientDeleteRegexPatternSetAsyncHelper(WAFV2Client const * const clientThis, const DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRegexPatternSet(request), context);
}

void WAFV2Client::DeleteRegexPatternSetAsync(const DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientDeleteRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleGroupOutcome WAFV2Client::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleGroupOutcomeCallable WAFV2Client::DeleteRuleGroupCallable(const DeleteRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientDeleteRuleGroupAsyncHelper(WAFV2Client const * const clientThis, const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRuleGroup(request), context);
}

void WAFV2Client::DeleteRuleGroupAsync(const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientDeleteRuleGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteWebACLOutcome WAFV2Client::DeleteWebACL(const DeleteWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWebACLOutcomeCallable WAFV2Client::DeleteWebACLCallable(const DeleteWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientDeleteWebACLAsyncHelper(WAFV2Client const * const clientThis, const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWebACL(request), context);
}

void WAFV2Client::DeleteWebACLAsync(const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientDeleteWebACLAsyncHelper( this, request, handler, context ); } );
}

DescribeManagedRuleGroupOutcome WAFV2Client::DescribeManagedRuleGroup(const DescribeManagedRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeManagedRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeManagedRuleGroupOutcomeCallable WAFV2Client::DescribeManagedRuleGroupCallable(const DescribeManagedRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeManagedRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeManagedRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientDescribeManagedRuleGroupAsyncHelper(WAFV2Client const * const clientThis, const DescribeManagedRuleGroupRequest& request, const DescribeManagedRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeManagedRuleGroup(request), context);
}

void WAFV2Client::DescribeManagedRuleGroupAsync(const DescribeManagedRuleGroupRequest& request, const DescribeManagedRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientDescribeManagedRuleGroupAsyncHelper( this, request, handler, context ); } );
}

DisassociateWebACLOutcome WAFV2Client::DisassociateWebACL(const DisassociateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWebACLOutcomeCallable WAFV2Client::DisassociateWebACLCallable(const DisassociateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientDisassociateWebACLAsyncHelper(WAFV2Client const * const clientThis, const DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateWebACL(request), context);
}

void WAFV2Client::DisassociateWebACLAsync(const DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientDisassociateWebACLAsyncHelper( this, request, handler, context ); } );
}

GenerateMobileSdkReleaseUrlOutcome WAFV2Client::GenerateMobileSdkReleaseUrl(const GenerateMobileSdkReleaseUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GenerateMobileSdkReleaseUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateMobileSdkReleaseUrlOutcomeCallable WAFV2Client::GenerateMobileSdkReleaseUrlCallable(const GenerateMobileSdkReleaseUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateMobileSdkReleaseUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateMobileSdkReleaseUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGenerateMobileSdkReleaseUrlAsyncHelper(WAFV2Client const * const clientThis, const GenerateMobileSdkReleaseUrlRequest& request, const GenerateMobileSdkReleaseUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateMobileSdkReleaseUrl(request), context);
}

void WAFV2Client::GenerateMobileSdkReleaseUrlAsync(const GenerateMobileSdkReleaseUrlRequest& request, const GenerateMobileSdkReleaseUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGenerateMobileSdkReleaseUrlAsyncHelper( this, request, handler, context ); } );
}

GetIPSetOutcome WAFV2Client::GetIPSet(const GetIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIPSetOutcomeCallable WAFV2Client::GetIPSetCallable(const GetIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetIPSetAsyncHelper(WAFV2Client const * const clientThis, const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIPSet(request), context);
}

void WAFV2Client::GetIPSetAsync(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetIPSetAsyncHelper( this, request, handler, context ); } );
}

GetLoggingConfigurationOutcome WAFV2Client::GetLoggingConfiguration(const GetLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoggingConfigurationOutcomeCallable WAFV2Client::GetLoggingConfigurationCallable(const GetLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetLoggingConfigurationAsyncHelper(WAFV2Client const * const clientThis, const GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLoggingConfiguration(request), context);
}

void WAFV2Client::GetLoggingConfigurationAsync(const GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetManagedRuleSetOutcome WAFV2Client::GetManagedRuleSet(const GetManagedRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetManagedRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetManagedRuleSetOutcomeCallable WAFV2Client::GetManagedRuleSetCallable(const GetManagedRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetManagedRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetManagedRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetManagedRuleSetAsyncHelper(WAFV2Client const * const clientThis, const GetManagedRuleSetRequest& request, const GetManagedRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetManagedRuleSet(request), context);
}

void WAFV2Client::GetManagedRuleSetAsync(const GetManagedRuleSetRequest& request, const GetManagedRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetManagedRuleSetAsyncHelper( this, request, handler, context ); } );
}

GetMobileSdkReleaseOutcome WAFV2Client::GetMobileSdkRelease(const GetMobileSdkReleaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMobileSdkReleaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMobileSdkReleaseOutcomeCallable WAFV2Client::GetMobileSdkReleaseCallable(const GetMobileSdkReleaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMobileSdkReleaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMobileSdkRelease(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetMobileSdkReleaseAsyncHelper(WAFV2Client const * const clientThis, const GetMobileSdkReleaseRequest& request, const GetMobileSdkReleaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMobileSdkRelease(request), context);
}

void WAFV2Client::GetMobileSdkReleaseAsync(const GetMobileSdkReleaseRequest& request, const GetMobileSdkReleaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetMobileSdkReleaseAsyncHelper( this, request, handler, context ); } );
}

GetPermissionPolicyOutcome WAFV2Client::GetPermissionPolicy(const GetPermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPermissionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPermissionPolicyOutcomeCallable WAFV2Client::GetPermissionPolicyCallable(const GetPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetPermissionPolicyAsyncHelper(WAFV2Client const * const clientThis, const GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPermissionPolicy(request), context);
}

void WAFV2Client::GetPermissionPolicyAsync(const GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetPermissionPolicyAsyncHelper( this, request, handler, context ); } );
}

GetRateBasedStatementManagedKeysOutcome WAFV2Client::GetRateBasedStatementManagedKeys(const GetRateBasedStatementManagedKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRateBasedStatementManagedKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRateBasedStatementManagedKeysOutcomeCallable WAFV2Client::GetRateBasedStatementManagedKeysCallable(const GetRateBasedStatementManagedKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRateBasedStatementManagedKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRateBasedStatementManagedKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetRateBasedStatementManagedKeysAsyncHelper(WAFV2Client const * const clientThis, const GetRateBasedStatementManagedKeysRequest& request, const GetRateBasedStatementManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRateBasedStatementManagedKeys(request), context);
}

void WAFV2Client::GetRateBasedStatementManagedKeysAsync(const GetRateBasedStatementManagedKeysRequest& request, const GetRateBasedStatementManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetRateBasedStatementManagedKeysAsyncHelper( this, request, handler, context ); } );
}

GetRegexPatternSetOutcome WAFV2Client::GetRegexPatternSet(const GetRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegexPatternSetOutcomeCallable WAFV2Client::GetRegexPatternSetCallable(const GetRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetRegexPatternSetAsyncHelper(WAFV2Client const * const clientThis, const GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRegexPatternSet(request), context);
}

void WAFV2Client::GetRegexPatternSetAsync(const GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

GetRuleGroupOutcome WAFV2Client::GetRuleGroup(const GetRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRuleGroupOutcomeCallable WAFV2Client::GetRuleGroupCallable(const GetRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetRuleGroupAsyncHelper(WAFV2Client const * const clientThis, const GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRuleGroup(request), context);
}

void WAFV2Client::GetRuleGroupAsync(const GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetRuleGroupAsyncHelper( this, request, handler, context ); } );
}

GetSampledRequestsOutcome WAFV2Client::GetSampledRequests(const GetSampledRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSampledRequestsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSampledRequestsOutcomeCallable WAFV2Client::GetSampledRequestsCallable(const GetSampledRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSampledRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSampledRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetSampledRequestsAsyncHelper(WAFV2Client const * const clientThis, const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSampledRequests(request), context);
}

void WAFV2Client::GetSampledRequestsAsync(const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetSampledRequestsAsyncHelper( this, request, handler, context ); } );
}

GetWebACLOutcome WAFV2Client::GetWebACL(const GetWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWebACLOutcomeCallable WAFV2Client::GetWebACLCallable(const GetWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetWebACLAsyncHelper(WAFV2Client const * const clientThis, const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWebACL(request), context);
}

void WAFV2Client::GetWebACLAsync(const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetWebACLAsyncHelper( this, request, handler, context ); } );
}

GetWebACLForResourceOutcome WAFV2Client::GetWebACLForResource(const GetWebACLForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWebACLForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWebACLForResourceOutcomeCallable WAFV2Client::GetWebACLForResourceCallable(const GetWebACLForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebACLForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebACLForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientGetWebACLForResourceAsyncHelper(WAFV2Client const * const clientThis, const GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWebACLForResource(request), context);
}

void WAFV2Client::GetWebACLForResourceAsync(const GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientGetWebACLForResourceAsyncHelper( this, request, handler, context ); } );
}

ListAvailableManagedRuleGroupVersionsOutcome WAFV2Client::ListAvailableManagedRuleGroupVersions(const ListAvailableManagedRuleGroupVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAvailableManagedRuleGroupVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAvailableManagedRuleGroupVersionsOutcomeCallable WAFV2Client::ListAvailableManagedRuleGroupVersionsCallable(const ListAvailableManagedRuleGroupVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableManagedRuleGroupVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableManagedRuleGroupVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListAvailableManagedRuleGroupVersionsAsyncHelper(WAFV2Client const * const clientThis, const ListAvailableManagedRuleGroupVersionsRequest& request, const ListAvailableManagedRuleGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAvailableManagedRuleGroupVersions(request), context);
}

void WAFV2Client::ListAvailableManagedRuleGroupVersionsAsync(const ListAvailableManagedRuleGroupVersionsRequest& request, const ListAvailableManagedRuleGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListAvailableManagedRuleGroupVersionsAsyncHelper( this, request, handler, context ); } );
}

ListAvailableManagedRuleGroupsOutcome WAFV2Client::ListAvailableManagedRuleGroups(const ListAvailableManagedRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAvailableManagedRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAvailableManagedRuleGroupsOutcomeCallable WAFV2Client::ListAvailableManagedRuleGroupsCallable(const ListAvailableManagedRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableManagedRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableManagedRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListAvailableManagedRuleGroupsAsyncHelper(WAFV2Client const * const clientThis, const ListAvailableManagedRuleGroupsRequest& request, const ListAvailableManagedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAvailableManagedRuleGroups(request), context);
}

void WAFV2Client::ListAvailableManagedRuleGroupsAsync(const ListAvailableManagedRuleGroupsRequest& request, const ListAvailableManagedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListAvailableManagedRuleGroupsAsyncHelper( this, request, handler, context ); } );
}

ListIPSetsOutcome WAFV2Client::ListIPSets(const ListIPSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListIPSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIPSetsOutcomeCallable WAFV2Client::ListIPSetsCallable(const ListIPSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIPSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIPSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListIPSetsAsyncHelper(WAFV2Client const * const clientThis, const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIPSets(request), context);
}

void WAFV2Client::ListIPSetsAsync(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListIPSetsAsyncHelper( this, request, handler, context ); } );
}

ListLoggingConfigurationsOutcome WAFV2Client::ListLoggingConfigurations(const ListLoggingConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLoggingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLoggingConfigurationsOutcomeCallable WAFV2Client::ListLoggingConfigurationsCallable(const ListLoggingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLoggingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLoggingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListLoggingConfigurationsAsyncHelper(WAFV2Client const * const clientThis, const ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLoggingConfigurations(request), context);
}

void WAFV2Client::ListLoggingConfigurationsAsync(const ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListLoggingConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListManagedRuleSetsOutcome WAFV2Client::ListManagedRuleSets(const ListManagedRuleSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListManagedRuleSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListManagedRuleSetsOutcomeCallable WAFV2Client::ListManagedRuleSetsCallable(const ListManagedRuleSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedRuleSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedRuleSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListManagedRuleSetsAsyncHelper(WAFV2Client const * const clientThis, const ListManagedRuleSetsRequest& request, const ListManagedRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListManagedRuleSets(request), context);
}

void WAFV2Client::ListManagedRuleSetsAsync(const ListManagedRuleSetsRequest& request, const ListManagedRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListManagedRuleSetsAsyncHelper( this, request, handler, context ); } );
}

ListMobileSdkReleasesOutcome WAFV2Client::ListMobileSdkReleases(const ListMobileSdkReleasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMobileSdkReleasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMobileSdkReleasesOutcomeCallable WAFV2Client::ListMobileSdkReleasesCallable(const ListMobileSdkReleasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMobileSdkReleasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMobileSdkReleases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListMobileSdkReleasesAsyncHelper(WAFV2Client const * const clientThis, const ListMobileSdkReleasesRequest& request, const ListMobileSdkReleasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMobileSdkReleases(request), context);
}

void WAFV2Client::ListMobileSdkReleasesAsync(const ListMobileSdkReleasesRequest& request, const ListMobileSdkReleasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListMobileSdkReleasesAsyncHelper( this, request, handler, context ); } );
}

ListRegexPatternSetsOutcome WAFV2Client::ListRegexPatternSets(const ListRegexPatternSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRegexPatternSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRegexPatternSetsOutcomeCallable WAFV2Client::ListRegexPatternSetsCallable(const ListRegexPatternSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegexPatternSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegexPatternSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListRegexPatternSetsAsyncHelper(WAFV2Client const * const clientThis, const ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRegexPatternSets(request), context);
}

void WAFV2Client::ListRegexPatternSetsAsync(const ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListRegexPatternSetsAsyncHelper( this, request, handler, context ); } );
}

ListResourcesForWebACLOutcome WAFV2Client::ListResourcesForWebACL(const ListResourcesForWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourcesForWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesForWebACLOutcomeCallable WAFV2Client::ListResourcesForWebACLCallable(const ListResourcesForWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesForWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesForWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListResourcesForWebACLAsyncHelper(WAFV2Client const * const clientThis, const ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourcesForWebACL(request), context);
}

void WAFV2Client::ListResourcesForWebACLAsync(const ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListResourcesForWebACLAsyncHelper( this, request, handler, context ); } );
}

ListRuleGroupsOutcome WAFV2Client::ListRuleGroups(const ListRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRuleGroupsOutcomeCallable WAFV2Client::ListRuleGroupsCallable(const ListRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListRuleGroupsAsyncHelper(WAFV2Client const * const clientThis, const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRuleGroups(request), context);
}

void WAFV2Client::ListRuleGroupsAsync(const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListRuleGroupsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome WAFV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WAFV2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListTagsForResourceAsyncHelper(WAFV2Client const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void WAFV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWebACLsOutcome WAFV2Client::ListWebACLs(const ListWebACLsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWebACLsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWebACLsOutcomeCallable WAFV2Client::ListWebACLsCallable(const ListWebACLsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebACLsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebACLs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientListWebACLsAsyncHelper(WAFV2Client const * const clientThis, const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWebACLs(request), context);
}

void WAFV2Client::ListWebACLsAsync(const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientListWebACLsAsyncHelper( this, request, handler, context ); } );
}

PutLoggingConfigurationOutcome WAFV2Client::PutLoggingConfiguration(const PutLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLoggingConfigurationOutcomeCallable WAFV2Client::PutLoggingConfigurationCallable(const PutLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientPutLoggingConfigurationAsyncHelper(WAFV2Client const * const clientThis, const PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutLoggingConfiguration(request), context);
}

void WAFV2Client::PutLoggingConfigurationAsync(const PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientPutLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

PutManagedRuleSetVersionsOutcome WAFV2Client::PutManagedRuleSetVersions(const PutManagedRuleSetVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutManagedRuleSetVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutManagedRuleSetVersionsOutcomeCallable WAFV2Client::PutManagedRuleSetVersionsCallable(const PutManagedRuleSetVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutManagedRuleSetVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutManagedRuleSetVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientPutManagedRuleSetVersionsAsyncHelper(WAFV2Client const * const clientThis, const PutManagedRuleSetVersionsRequest& request, const PutManagedRuleSetVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutManagedRuleSetVersions(request), context);
}

void WAFV2Client::PutManagedRuleSetVersionsAsync(const PutManagedRuleSetVersionsRequest& request, const PutManagedRuleSetVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientPutManagedRuleSetVersionsAsyncHelper( this, request, handler, context ); } );
}

PutPermissionPolicyOutcome WAFV2Client::PutPermissionPolicy(const PutPermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPermissionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionPolicyOutcomeCallable WAFV2Client::PutPermissionPolicyCallable(const PutPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientPutPermissionPolicyAsyncHelper(WAFV2Client const * const clientThis, const PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPermissionPolicy(request), context);
}

void WAFV2Client::PutPermissionPolicyAsync(const PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientPutPermissionPolicyAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome WAFV2Client::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WAFV2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientTagResourceAsyncHelper(WAFV2Client const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void WAFV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome WAFV2Client::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WAFV2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientUntagResourceAsyncHelper(WAFV2Client const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void WAFV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateIPSetOutcome WAFV2Client::UpdateIPSet(const UpdateIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIPSetOutcomeCallable WAFV2Client::UpdateIPSetCallable(const UpdateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientUpdateIPSetAsyncHelper(WAFV2Client const * const clientThis, const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIPSet(request), context);
}

void WAFV2Client::UpdateIPSetAsync(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientUpdateIPSetAsyncHelper( this, request, handler, context ); } );
}

UpdateManagedRuleSetVersionExpiryDateOutcome WAFV2Client::UpdateManagedRuleSetVersionExpiryDate(const UpdateManagedRuleSetVersionExpiryDateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateManagedRuleSetVersionExpiryDateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateManagedRuleSetVersionExpiryDateOutcomeCallable WAFV2Client::UpdateManagedRuleSetVersionExpiryDateCallable(const UpdateManagedRuleSetVersionExpiryDateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateManagedRuleSetVersionExpiryDateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateManagedRuleSetVersionExpiryDate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientUpdateManagedRuleSetVersionExpiryDateAsyncHelper(WAFV2Client const * const clientThis, const UpdateManagedRuleSetVersionExpiryDateRequest& request, const UpdateManagedRuleSetVersionExpiryDateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateManagedRuleSetVersionExpiryDate(request), context);
}

void WAFV2Client::UpdateManagedRuleSetVersionExpiryDateAsync(const UpdateManagedRuleSetVersionExpiryDateRequest& request, const UpdateManagedRuleSetVersionExpiryDateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientUpdateManagedRuleSetVersionExpiryDateAsyncHelper( this, request, handler, context ); } );
}

UpdateRegexPatternSetOutcome WAFV2Client::UpdateRegexPatternSet(const UpdateRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegexPatternSetOutcomeCallable WAFV2Client::UpdateRegexPatternSetCallable(const UpdateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientUpdateRegexPatternSetAsyncHelper(WAFV2Client const * const clientThis, const UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRegexPatternSet(request), context);
}

void WAFV2Client::UpdateRegexPatternSetAsync(const UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientUpdateRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

UpdateRuleGroupOutcome WAFV2Client::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleGroupOutcomeCallable WAFV2Client::UpdateRuleGroupCallable(const UpdateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientUpdateRuleGroupAsyncHelper(WAFV2Client const * const clientThis, const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRuleGroup(request), context);
}

void WAFV2Client::UpdateRuleGroupAsync(const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientUpdateRuleGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateWebACLOutcome WAFV2Client::UpdateWebACL(const UpdateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWebACLOutcomeCallable WAFV2Client::UpdateWebACLCallable(const UpdateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFV2ClientUpdateWebACLAsyncHelper(WAFV2Client const * const clientThis, const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWebACL(request), context);
}

void WAFV2Client::UpdateWebACLAsync(const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFV2ClientUpdateWebACLAsyncHelper( this, request, handler, context ); } );
}

