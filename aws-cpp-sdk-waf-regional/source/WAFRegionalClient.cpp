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

#include <aws/waf-regional/WAFRegionalClient.h>
#include <aws/waf-regional/WAFRegionalEndpoint.h>
#include <aws/waf-regional/WAFRegionalErrorMarshaller.h>
#include <aws/waf-regional/model/AssociateWebACLRequest.h>
#include <aws/waf-regional/model/CreateByteMatchSetRequest.h>
#include <aws/waf-regional/model/CreateGeoMatchSetRequest.h>
#include <aws/waf-regional/model/CreateIPSetRequest.h>
#include <aws/waf-regional/model/CreateRateBasedRuleRequest.h>
#include <aws/waf-regional/model/CreateRegexMatchSetRequest.h>
#include <aws/waf-regional/model/CreateRegexPatternSetRequest.h>
#include <aws/waf-regional/model/CreateRuleRequest.h>
#include <aws/waf-regional/model/CreateRuleGroupRequest.h>
#include <aws/waf-regional/model/CreateSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/CreateSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/CreateWebACLRequest.h>
#include <aws/waf-regional/model/CreateWebACLMigrationStackRequest.h>
#include <aws/waf-regional/model/CreateXssMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteByteMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteGeoMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteIPSetRequest.h>
#include <aws/waf-regional/model/DeleteLoggingConfigurationRequest.h>
#include <aws/waf-regional/model/DeletePermissionPolicyRequest.h>
#include <aws/waf-regional/model/DeleteRateBasedRuleRequest.h>
#include <aws/waf-regional/model/DeleteRegexMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteRegexPatternSetRequest.h>
#include <aws/waf-regional/model/DeleteRuleRequest.h>
#include <aws/waf-regional/model/DeleteRuleGroupRequest.h>
#include <aws/waf-regional/model/DeleteSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/DeleteSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/DeleteWebACLRequest.h>
#include <aws/waf-regional/model/DeleteXssMatchSetRequest.h>
#include <aws/waf-regional/model/DisassociateWebACLRequest.h>
#include <aws/waf-regional/model/GetByteMatchSetRequest.h>
#include <aws/waf-regional/model/GetChangeTokenRequest.h>
#include <aws/waf-regional/model/GetChangeTokenStatusRequest.h>
#include <aws/waf-regional/model/GetGeoMatchSetRequest.h>
#include <aws/waf-regional/model/GetIPSetRequest.h>
#include <aws/waf-regional/model/GetLoggingConfigurationRequest.h>
#include <aws/waf-regional/model/GetPermissionPolicyRequest.h>
#include <aws/waf-regional/model/GetRateBasedRuleRequest.h>
#include <aws/waf-regional/model/GetRateBasedRuleManagedKeysRequest.h>
#include <aws/waf-regional/model/GetRegexMatchSetRequest.h>
#include <aws/waf-regional/model/GetRegexPatternSetRequest.h>
#include <aws/waf-regional/model/GetRuleRequest.h>
#include <aws/waf-regional/model/GetRuleGroupRequest.h>
#include <aws/waf-regional/model/GetSampledRequestsRequest.h>
#include <aws/waf-regional/model/GetSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/GetSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/GetWebACLRequest.h>
#include <aws/waf-regional/model/GetWebACLForResourceRequest.h>
#include <aws/waf-regional/model/GetXssMatchSetRequest.h>
#include <aws/waf-regional/model/ListActivatedRulesInRuleGroupRequest.h>
#include <aws/waf-regional/model/ListByteMatchSetsRequest.h>
#include <aws/waf-regional/model/ListGeoMatchSetsRequest.h>
#include <aws/waf-regional/model/ListIPSetsRequest.h>
#include <aws/waf-regional/model/ListLoggingConfigurationsRequest.h>
#include <aws/waf-regional/model/ListRateBasedRulesRequest.h>
#include <aws/waf-regional/model/ListRegexMatchSetsRequest.h>
#include <aws/waf-regional/model/ListRegexPatternSetsRequest.h>
#include <aws/waf-regional/model/ListResourcesForWebACLRequest.h>
#include <aws/waf-regional/model/ListRuleGroupsRequest.h>
#include <aws/waf-regional/model/ListRulesRequest.h>
#include <aws/waf-regional/model/ListSizeConstraintSetsRequest.h>
#include <aws/waf-regional/model/ListSqlInjectionMatchSetsRequest.h>
#include <aws/waf-regional/model/ListSubscribedRuleGroupsRequest.h>
#include <aws/waf-regional/model/ListTagsForResourceRequest.h>
#include <aws/waf-regional/model/ListWebACLsRequest.h>
#include <aws/waf-regional/model/ListXssMatchSetsRequest.h>
#include <aws/waf-regional/model/PutLoggingConfigurationRequest.h>
#include <aws/waf-regional/model/PutPermissionPolicyRequest.h>
#include <aws/waf-regional/model/TagResourceRequest.h>
#include <aws/waf-regional/model/UntagResourceRequest.h>
#include <aws/waf-regional/model/UpdateByteMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateGeoMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateIPSetRequest.h>
#include <aws/waf-regional/model/UpdateRateBasedRuleRequest.h>
#include <aws/waf-regional/model/UpdateRegexMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateRegexPatternSetRequest.h>
#include <aws/waf-regional/model/UpdateRuleRequest.h>
#include <aws/waf-regional/model/UpdateRuleGroupRequest.h>
#include <aws/waf-regional/model/UpdateSizeConstraintSetRequest.h>
#include <aws/waf-regional/model/UpdateSqlInjectionMatchSetRequest.h>
#include <aws/waf-regional/model/UpdateWebACLRequest.h>
#include <aws/waf-regional/model/UpdateXssMatchSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WAFRegional;
using namespace Aws::WAFRegional::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "waf-regional";
static const char* ALLOCATION_TAG = "WAFRegionalClient";

WAFRegionalClient::WAFRegionalClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFRegionalClient::~WAFRegionalClient()
{
}

void WAFRegionalClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WAF Regional");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WAFRegionalEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WAFRegionalClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateWebACLOutcome WAFRegionalClient::AssociateWebACL(const AssociateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateWebACLOutcomeCallable WAFRegionalClient::AssociateWebACLCallable(const AssociateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientAssociateWebACLAsyncHelper(WAFRegionalClient const * const clientThis, const AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateWebACL(request), context);
}

void WAFRegionalClient::AssociateWebACLAsync(const AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientAssociateWebACLAsyncHelper( this, request, handler, context ); } );
}

CreateByteMatchSetOutcome WAFRegionalClient::CreateByteMatchSet(const CreateByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateByteMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateByteMatchSetOutcomeCallable WAFRegionalClient::CreateByteMatchSetCallable(const CreateByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateByteMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateByteMatchSet(request), context);
}

void WAFRegionalClient::CreateByteMatchSetAsync(const CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateByteMatchSetAsyncHelper( this, request, handler, context ); } );
}

CreateGeoMatchSetOutcome WAFRegionalClient::CreateGeoMatchSet(const CreateGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGeoMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGeoMatchSetOutcomeCallable WAFRegionalClient::CreateGeoMatchSetCallable(const CreateGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateGeoMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGeoMatchSet(request), context);
}

void WAFRegionalClient::CreateGeoMatchSetAsync(const CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateGeoMatchSetAsyncHelper( this, request, handler, context ); } );
}

CreateIPSetOutcome WAFRegionalClient::CreateIPSet(const CreateIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIPSetOutcomeCallable WAFRegionalClient::CreateIPSetCallable(const CreateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateIPSetAsyncHelper(WAFRegionalClient const * const clientThis, const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIPSet(request), context);
}

void WAFRegionalClient::CreateIPSetAsync(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateIPSetAsyncHelper( this, request, handler, context ); } );
}

CreateRateBasedRuleOutcome WAFRegionalClient::CreateRateBasedRule(const CreateRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRateBasedRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRateBasedRuleOutcomeCallable WAFRegionalClient::CreateRateBasedRuleCallable(const CreateRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateRateBasedRuleAsyncHelper(WAFRegionalClient const * const clientThis, const CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRateBasedRule(request), context);
}

void WAFRegionalClient::CreateRateBasedRuleAsync(const CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateRateBasedRuleAsyncHelper( this, request, handler, context ); } );
}

CreateRegexMatchSetOutcome WAFRegionalClient::CreateRegexMatchSet(const CreateRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRegexMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRegexMatchSetOutcomeCallable WAFRegionalClient::CreateRegexMatchSetCallable(const CreateRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateRegexMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRegexMatchSet(request), context);
}

void WAFRegionalClient::CreateRegexMatchSetAsync(const CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateRegexMatchSetAsyncHelper( this, request, handler, context ); } );
}

CreateRegexPatternSetOutcome WAFRegionalClient::CreateRegexPatternSet(const CreateRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRegexPatternSetOutcomeCallable WAFRegionalClient::CreateRegexPatternSetCallable(const CreateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateRegexPatternSetAsyncHelper(WAFRegionalClient const * const clientThis, const CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRegexPatternSet(request), context);
}

void WAFRegionalClient::CreateRegexPatternSetAsync(const CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

CreateRuleOutcome WAFRegionalClient::CreateRule(const CreateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleOutcomeCallable WAFRegionalClient::CreateRuleCallable(const CreateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateRuleAsyncHelper(WAFRegionalClient const * const clientThis, const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRule(request), context);
}

void WAFRegionalClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateRuleAsyncHelper( this, request, handler, context ); } );
}

CreateRuleGroupOutcome WAFRegionalClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleGroupOutcomeCallable WAFRegionalClient::CreateRuleGroupCallable(const CreateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateRuleGroupAsyncHelper(WAFRegionalClient const * const clientThis, const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRuleGroup(request), context);
}

void WAFRegionalClient::CreateRuleGroupAsync(const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateRuleGroupAsyncHelper( this, request, handler, context ); } );
}

CreateSizeConstraintSetOutcome WAFRegionalClient::CreateSizeConstraintSet(const CreateSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSizeConstraintSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSizeConstraintSetOutcomeCallable WAFRegionalClient::CreateSizeConstraintSetCallable(const CreateSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateSizeConstraintSetAsyncHelper(WAFRegionalClient const * const clientThis, const CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSizeConstraintSet(request), context);
}

void WAFRegionalClient::CreateSizeConstraintSetAsync(const CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateSizeConstraintSetAsyncHelper( this, request, handler, context ); } );
}

CreateSqlInjectionMatchSetOutcome WAFRegionalClient::CreateSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSqlInjectionMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::CreateSqlInjectionMatchSetCallable(const CreateSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateSqlInjectionMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSqlInjectionMatchSet(request), context);
}

void WAFRegionalClient::CreateSqlInjectionMatchSetAsync(const CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateSqlInjectionMatchSetAsyncHelper( this, request, handler, context ); } );
}

CreateWebACLOutcome WAFRegionalClient::CreateWebACL(const CreateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebACLOutcomeCallable WAFRegionalClient::CreateWebACLCallable(const CreateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateWebACLAsyncHelper(WAFRegionalClient const * const clientThis, const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWebACL(request), context);
}

void WAFRegionalClient::CreateWebACLAsync(const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateWebACLAsyncHelper( this, request, handler, context ); } );
}

CreateWebACLMigrationStackOutcome WAFRegionalClient::CreateWebACLMigrationStack(const CreateWebACLMigrationStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWebACLMigrationStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebACLMigrationStackOutcomeCallable WAFRegionalClient::CreateWebACLMigrationStackCallable(const CreateWebACLMigrationStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebACLMigrationStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebACLMigrationStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateWebACLMigrationStackAsyncHelper(WAFRegionalClient const * const clientThis, const CreateWebACLMigrationStackRequest& request, const CreateWebACLMigrationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWebACLMigrationStack(request), context);
}

void WAFRegionalClient::CreateWebACLMigrationStackAsync(const CreateWebACLMigrationStackRequest& request, const CreateWebACLMigrationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateWebACLMigrationStackAsyncHelper( this, request, handler, context ); } );
}

CreateXssMatchSetOutcome WAFRegionalClient::CreateXssMatchSet(const CreateXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateXssMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateXssMatchSetOutcomeCallable WAFRegionalClient::CreateXssMatchSetCallable(const CreateXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientCreateXssMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateXssMatchSet(request), context);
}

void WAFRegionalClient::CreateXssMatchSetAsync(const CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientCreateXssMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteByteMatchSetOutcome WAFRegionalClient::DeleteByteMatchSet(const DeleteByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteByteMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteByteMatchSetOutcomeCallable WAFRegionalClient::DeleteByteMatchSetCallable(const DeleteByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteByteMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteByteMatchSet(request), context);
}

void WAFRegionalClient::DeleteByteMatchSetAsync(const DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteByteMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteGeoMatchSetOutcome WAFRegionalClient::DeleteGeoMatchSet(const DeleteGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGeoMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGeoMatchSetOutcomeCallable WAFRegionalClient::DeleteGeoMatchSetCallable(const DeleteGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteGeoMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGeoMatchSet(request), context);
}

void WAFRegionalClient::DeleteGeoMatchSetAsync(const DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteGeoMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteIPSetOutcome WAFRegionalClient::DeleteIPSet(const DeleteIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIPSetOutcomeCallable WAFRegionalClient::DeleteIPSetCallable(const DeleteIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteIPSetAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIPSet(request), context);
}

void WAFRegionalClient::DeleteIPSetAsync(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteIPSetAsyncHelper( this, request, handler, context ); } );
}

DeleteLoggingConfigurationOutcome WAFRegionalClient::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoggingConfigurationOutcomeCallable WAFRegionalClient::DeleteLoggingConfigurationCallable(const DeleteLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteLoggingConfigurationAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoggingConfiguration(request), context);
}

void WAFRegionalClient::DeleteLoggingConfigurationAsync(const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeletePermissionPolicyOutcome WAFRegionalClient::DeletePermissionPolicy(const DeletePermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePermissionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionPolicyOutcomeCallable WAFRegionalClient::DeletePermissionPolicyCallable(const DeletePermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeletePermissionPolicyAsyncHelper(WAFRegionalClient const * const clientThis, const DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePermissionPolicy(request), context);
}

void WAFRegionalClient::DeletePermissionPolicyAsync(const DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeletePermissionPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteRateBasedRuleOutcome WAFRegionalClient::DeleteRateBasedRule(const DeleteRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRateBasedRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRateBasedRuleOutcomeCallable WAFRegionalClient::DeleteRateBasedRuleCallable(const DeleteRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteRateBasedRuleAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRateBasedRule(request), context);
}

void WAFRegionalClient::DeleteRateBasedRuleAsync(const DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteRateBasedRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteRegexMatchSetOutcome WAFRegionalClient::DeleteRegexMatchSet(const DeleteRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRegexMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegexMatchSetOutcomeCallable WAFRegionalClient::DeleteRegexMatchSetCallable(const DeleteRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteRegexMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRegexMatchSet(request), context);
}

void WAFRegionalClient::DeleteRegexMatchSetAsync(const DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteRegexMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteRegexPatternSetOutcome WAFRegionalClient::DeleteRegexPatternSet(const DeleteRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegexPatternSetOutcomeCallable WAFRegionalClient::DeleteRegexPatternSetCallable(const DeleteRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteRegexPatternSetAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRegexPatternSet(request), context);
}

void WAFRegionalClient::DeleteRegexPatternSetAsync(const DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleOutcome WAFRegionalClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcomeCallable WAFRegionalClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteRuleAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRule(request), context);
}

void WAFRegionalClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleGroupOutcome WAFRegionalClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleGroupOutcomeCallable WAFRegionalClient::DeleteRuleGroupCallable(const DeleteRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteRuleGroupAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRuleGroup(request), context);
}

void WAFRegionalClient::DeleteRuleGroupAsync(const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteRuleGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteSizeConstraintSetOutcome WAFRegionalClient::DeleteSizeConstraintSet(const DeleteSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSizeConstraintSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSizeConstraintSetOutcomeCallable WAFRegionalClient::DeleteSizeConstraintSetCallable(const DeleteSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteSizeConstraintSetAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSizeConstraintSet(request), context);
}

void WAFRegionalClient::DeleteSizeConstraintSetAsync(const DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteSizeConstraintSetAsyncHelper( this, request, handler, context ); } );
}

DeleteSqlInjectionMatchSetOutcome WAFRegionalClient::DeleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSqlInjectionMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::DeleteSqlInjectionMatchSetCallable(const DeleteSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteSqlInjectionMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSqlInjectionMatchSet(request), context);
}

void WAFRegionalClient::DeleteSqlInjectionMatchSetAsync(const DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteSqlInjectionMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteWebACLOutcome WAFRegionalClient::DeleteWebACL(const DeleteWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWebACLOutcomeCallable WAFRegionalClient::DeleteWebACLCallable(const DeleteWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteWebACLAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWebACL(request), context);
}

void WAFRegionalClient::DeleteWebACLAsync(const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteWebACLAsyncHelper( this, request, handler, context ); } );
}

DeleteXssMatchSetOutcome WAFRegionalClient::DeleteXssMatchSet(const DeleteXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteXssMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteXssMatchSetOutcomeCallable WAFRegionalClient::DeleteXssMatchSetCallable(const DeleteXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDeleteXssMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteXssMatchSet(request), context);
}

void WAFRegionalClient::DeleteXssMatchSetAsync(const DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDeleteXssMatchSetAsyncHelper( this, request, handler, context ); } );
}

DisassociateWebACLOutcome WAFRegionalClient::DisassociateWebACL(const DisassociateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateWebACLOutcomeCallable WAFRegionalClient::DisassociateWebACLCallable(const DisassociateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientDisassociateWebACLAsyncHelper(WAFRegionalClient const * const clientThis, const DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateWebACL(request), context);
}

void WAFRegionalClient::DisassociateWebACLAsync(const DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientDisassociateWebACLAsyncHelper( this, request, handler, context ); } );
}

GetByteMatchSetOutcome WAFRegionalClient::GetByteMatchSet(const GetByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetByteMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetByteMatchSetOutcomeCallable WAFRegionalClient::GetByteMatchSetCallable(const GetByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetByteMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetByteMatchSet(request), context);
}

void WAFRegionalClient::GetByteMatchSetAsync(const GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetByteMatchSetAsyncHelper( this, request, handler, context ); } );
}

GetChangeTokenOutcome WAFRegionalClient::GetChangeToken(const GetChangeTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetChangeTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetChangeTokenOutcomeCallable WAFRegionalClient::GetChangeTokenCallable(const GetChangeTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetChangeTokenAsyncHelper(WAFRegionalClient const * const clientThis, const GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChangeToken(request), context);
}

void WAFRegionalClient::GetChangeTokenAsync(const GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetChangeTokenAsyncHelper( this, request, handler, context ); } );
}

GetChangeTokenStatusOutcome WAFRegionalClient::GetChangeTokenStatus(const GetChangeTokenStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetChangeTokenStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetChangeTokenStatusOutcomeCallable WAFRegionalClient::GetChangeTokenStatusCallable(const GetChangeTokenStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeTokenStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeTokenStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetChangeTokenStatusAsyncHelper(WAFRegionalClient const * const clientThis, const GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChangeTokenStatus(request), context);
}

void WAFRegionalClient::GetChangeTokenStatusAsync(const GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetChangeTokenStatusAsyncHelper( this, request, handler, context ); } );
}

GetGeoMatchSetOutcome WAFRegionalClient::GetGeoMatchSet(const GetGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGeoMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGeoMatchSetOutcomeCallable WAFRegionalClient::GetGeoMatchSetCallable(const GetGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetGeoMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGeoMatchSet(request), context);
}

void WAFRegionalClient::GetGeoMatchSetAsync(const GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetGeoMatchSetAsyncHelper( this, request, handler, context ); } );
}

GetIPSetOutcome WAFRegionalClient::GetIPSet(const GetIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIPSetOutcomeCallable WAFRegionalClient::GetIPSetCallable(const GetIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetIPSetAsyncHelper(WAFRegionalClient const * const clientThis, const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIPSet(request), context);
}

void WAFRegionalClient::GetIPSetAsync(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetIPSetAsyncHelper( this, request, handler, context ); } );
}

GetLoggingConfigurationOutcome WAFRegionalClient::GetLoggingConfiguration(const GetLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoggingConfigurationOutcomeCallable WAFRegionalClient::GetLoggingConfigurationCallable(const GetLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetLoggingConfigurationAsyncHelper(WAFRegionalClient const * const clientThis, const GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLoggingConfiguration(request), context);
}

void WAFRegionalClient::GetLoggingConfigurationAsync(const GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetPermissionPolicyOutcome WAFRegionalClient::GetPermissionPolicy(const GetPermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPermissionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPermissionPolicyOutcomeCallable WAFRegionalClient::GetPermissionPolicyCallable(const GetPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetPermissionPolicyAsyncHelper(WAFRegionalClient const * const clientThis, const GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPermissionPolicy(request), context);
}

void WAFRegionalClient::GetPermissionPolicyAsync(const GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetPermissionPolicyAsyncHelper( this, request, handler, context ); } );
}

GetRateBasedRuleOutcome WAFRegionalClient::GetRateBasedRule(const GetRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRateBasedRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRateBasedRuleOutcomeCallable WAFRegionalClient::GetRateBasedRuleCallable(const GetRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetRateBasedRuleAsyncHelper(WAFRegionalClient const * const clientThis, const GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRateBasedRule(request), context);
}

void WAFRegionalClient::GetRateBasedRuleAsync(const GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetRateBasedRuleAsyncHelper( this, request, handler, context ); } );
}

GetRateBasedRuleManagedKeysOutcome WAFRegionalClient::GetRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRateBasedRuleManagedKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRateBasedRuleManagedKeysOutcomeCallable WAFRegionalClient::GetRateBasedRuleManagedKeysCallable(const GetRateBasedRuleManagedKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRateBasedRuleManagedKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRateBasedRuleManagedKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetRateBasedRuleManagedKeysAsyncHelper(WAFRegionalClient const * const clientThis, const GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRateBasedRuleManagedKeys(request), context);
}

void WAFRegionalClient::GetRateBasedRuleManagedKeysAsync(const GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetRateBasedRuleManagedKeysAsyncHelper( this, request, handler, context ); } );
}

GetRegexMatchSetOutcome WAFRegionalClient::GetRegexMatchSet(const GetRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRegexMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegexMatchSetOutcomeCallable WAFRegionalClient::GetRegexMatchSetCallable(const GetRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetRegexMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRegexMatchSet(request), context);
}

void WAFRegionalClient::GetRegexMatchSetAsync(const GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetRegexMatchSetAsyncHelper( this, request, handler, context ); } );
}

GetRegexPatternSetOutcome WAFRegionalClient::GetRegexPatternSet(const GetRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegexPatternSetOutcomeCallable WAFRegionalClient::GetRegexPatternSetCallable(const GetRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetRegexPatternSetAsyncHelper(WAFRegionalClient const * const clientThis, const GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRegexPatternSet(request), context);
}

void WAFRegionalClient::GetRegexPatternSetAsync(const GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

GetRuleOutcome WAFRegionalClient::GetRule(const GetRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRuleOutcomeCallable WAFRegionalClient::GetRuleCallable(const GetRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetRuleAsyncHelper(WAFRegionalClient const * const clientThis, const GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRule(request), context);
}

void WAFRegionalClient::GetRuleAsync(const GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetRuleAsyncHelper( this, request, handler, context ); } );
}

GetRuleGroupOutcome WAFRegionalClient::GetRuleGroup(const GetRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRuleGroupOutcomeCallable WAFRegionalClient::GetRuleGroupCallable(const GetRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetRuleGroupAsyncHelper(WAFRegionalClient const * const clientThis, const GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRuleGroup(request), context);
}

void WAFRegionalClient::GetRuleGroupAsync(const GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetRuleGroupAsyncHelper( this, request, handler, context ); } );
}

GetSampledRequestsOutcome WAFRegionalClient::GetSampledRequests(const GetSampledRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSampledRequestsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSampledRequestsOutcomeCallable WAFRegionalClient::GetSampledRequestsCallable(const GetSampledRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSampledRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSampledRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetSampledRequestsAsyncHelper(WAFRegionalClient const * const clientThis, const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSampledRequests(request), context);
}

void WAFRegionalClient::GetSampledRequestsAsync(const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetSampledRequestsAsyncHelper( this, request, handler, context ); } );
}

GetSizeConstraintSetOutcome WAFRegionalClient::GetSizeConstraintSet(const GetSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSizeConstraintSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSizeConstraintSetOutcomeCallable WAFRegionalClient::GetSizeConstraintSetCallable(const GetSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetSizeConstraintSetAsyncHelper(WAFRegionalClient const * const clientThis, const GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSizeConstraintSet(request), context);
}

void WAFRegionalClient::GetSizeConstraintSetAsync(const GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetSizeConstraintSetAsyncHelper( this, request, handler, context ); } );
}

GetSqlInjectionMatchSetOutcome WAFRegionalClient::GetSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSqlInjectionMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::GetSqlInjectionMatchSetCallable(const GetSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetSqlInjectionMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSqlInjectionMatchSet(request), context);
}

void WAFRegionalClient::GetSqlInjectionMatchSetAsync(const GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetSqlInjectionMatchSetAsyncHelper( this, request, handler, context ); } );
}

GetWebACLOutcome WAFRegionalClient::GetWebACL(const GetWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWebACLOutcomeCallable WAFRegionalClient::GetWebACLCallable(const GetWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetWebACLAsyncHelper(WAFRegionalClient const * const clientThis, const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWebACL(request), context);
}

void WAFRegionalClient::GetWebACLAsync(const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetWebACLAsyncHelper( this, request, handler, context ); } );
}

GetWebACLForResourceOutcome WAFRegionalClient::GetWebACLForResource(const GetWebACLForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWebACLForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWebACLForResourceOutcomeCallable WAFRegionalClient::GetWebACLForResourceCallable(const GetWebACLForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebACLForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebACLForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetWebACLForResourceAsyncHelper(WAFRegionalClient const * const clientThis, const GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWebACLForResource(request), context);
}

void WAFRegionalClient::GetWebACLForResourceAsync(const GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetWebACLForResourceAsyncHelper( this, request, handler, context ); } );
}

GetXssMatchSetOutcome WAFRegionalClient::GetXssMatchSet(const GetXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetXssMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetXssMatchSetOutcomeCallable WAFRegionalClient::GetXssMatchSetCallable(const GetXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientGetXssMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetXssMatchSet(request), context);
}

void WAFRegionalClient::GetXssMatchSetAsync(const GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientGetXssMatchSetAsyncHelper( this, request, handler, context ); } );
}

ListActivatedRulesInRuleGroupOutcome WAFRegionalClient::ListActivatedRulesInRuleGroup(const ListActivatedRulesInRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListActivatedRulesInRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListActivatedRulesInRuleGroupOutcomeCallable WAFRegionalClient::ListActivatedRulesInRuleGroupCallable(const ListActivatedRulesInRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActivatedRulesInRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActivatedRulesInRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListActivatedRulesInRuleGroupAsyncHelper(WAFRegionalClient const * const clientThis, const ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListActivatedRulesInRuleGroup(request), context);
}

void WAFRegionalClient::ListActivatedRulesInRuleGroupAsync(const ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListActivatedRulesInRuleGroupAsyncHelper( this, request, handler, context ); } );
}

ListByteMatchSetsOutcome WAFRegionalClient::ListByteMatchSets(const ListByteMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListByteMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListByteMatchSetsOutcomeCallable WAFRegionalClient::ListByteMatchSetsCallable(const ListByteMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListByteMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListByteMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListByteMatchSetsAsyncHelper(WAFRegionalClient const * const clientThis, const ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListByteMatchSets(request), context);
}

void WAFRegionalClient::ListByteMatchSetsAsync(const ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListByteMatchSetsAsyncHelper( this, request, handler, context ); } );
}

ListGeoMatchSetsOutcome WAFRegionalClient::ListGeoMatchSets(const ListGeoMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGeoMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGeoMatchSetsOutcomeCallable WAFRegionalClient::ListGeoMatchSetsCallable(const ListGeoMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGeoMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGeoMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListGeoMatchSetsAsyncHelper(WAFRegionalClient const * const clientThis, const ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGeoMatchSets(request), context);
}

void WAFRegionalClient::ListGeoMatchSetsAsync(const ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListGeoMatchSetsAsyncHelper( this, request, handler, context ); } );
}

ListIPSetsOutcome WAFRegionalClient::ListIPSets(const ListIPSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListIPSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIPSetsOutcomeCallable WAFRegionalClient::ListIPSetsCallable(const ListIPSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIPSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIPSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListIPSetsAsyncHelper(WAFRegionalClient const * const clientThis, const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIPSets(request), context);
}

void WAFRegionalClient::ListIPSetsAsync(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListIPSetsAsyncHelper( this, request, handler, context ); } );
}

ListLoggingConfigurationsOutcome WAFRegionalClient::ListLoggingConfigurations(const ListLoggingConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLoggingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLoggingConfigurationsOutcomeCallable WAFRegionalClient::ListLoggingConfigurationsCallable(const ListLoggingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLoggingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLoggingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListLoggingConfigurationsAsyncHelper(WAFRegionalClient const * const clientThis, const ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLoggingConfigurations(request), context);
}

void WAFRegionalClient::ListLoggingConfigurationsAsync(const ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListLoggingConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListRateBasedRulesOutcome WAFRegionalClient::ListRateBasedRules(const ListRateBasedRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRateBasedRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRateBasedRulesOutcomeCallable WAFRegionalClient::ListRateBasedRulesCallable(const ListRateBasedRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRateBasedRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRateBasedRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListRateBasedRulesAsyncHelper(WAFRegionalClient const * const clientThis, const ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRateBasedRules(request), context);
}

void WAFRegionalClient::ListRateBasedRulesAsync(const ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListRateBasedRulesAsyncHelper( this, request, handler, context ); } );
}

ListRegexMatchSetsOutcome WAFRegionalClient::ListRegexMatchSets(const ListRegexMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRegexMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRegexMatchSetsOutcomeCallable WAFRegionalClient::ListRegexMatchSetsCallable(const ListRegexMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegexMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegexMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListRegexMatchSetsAsyncHelper(WAFRegionalClient const * const clientThis, const ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRegexMatchSets(request), context);
}

void WAFRegionalClient::ListRegexMatchSetsAsync(const ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListRegexMatchSetsAsyncHelper( this, request, handler, context ); } );
}

ListRegexPatternSetsOutcome WAFRegionalClient::ListRegexPatternSets(const ListRegexPatternSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRegexPatternSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRegexPatternSetsOutcomeCallable WAFRegionalClient::ListRegexPatternSetsCallable(const ListRegexPatternSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegexPatternSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegexPatternSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListRegexPatternSetsAsyncHelper(WAFRegionalClient const * const clientThis, const ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRegexPatternSets(request), context);
}

void WAFRegionalClient::ListRegexPatternSetsAsync(const ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListRegexPatternSetsAsyncHelper( this, request, handler, context ); } );
}

ListResourcesForWebACLOutcome WAFRegionalClient::ListResourcesForWebACL(const ListResourcesForWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourcesForWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesForWebACLOutcomeCallable WAFRegionalClient::ListResourcesForWebACLCallable(const ListResourcesForWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesForWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesForWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListResourcesForWebACLAsyncHelper(WAFRegionalClient const * const clientThis, const ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourcesForWebACL(request), context);
}

void WAFRegionalClient::ListResourcesForWebACLAsync(const ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListResourcesForWebACLAsyncHelper( this, request, handler, context ); } );
}

ListRuleGroupsOutcome WAFRegionalClient::ListRuleGroups(const ListRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRuleGroupsOutcomeCallable WAFRegionalClient::ListRuleGroupsCallable(const ListRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListRuleGroupsAsyncHelper(WAFRegionalClient const * const clientThis, const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRuleGroups(request), context);
}

void WAFRegionalClient::ListRuleGroupsAsync(const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListRuleGroupsAsyncHelper( this, request, handler, context ); } );
}

ListRulesOutcome WAFRegionalClient::ListRules(const ListRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcomeCallable WAFRegionalClient::ListRulesCallable(const ListRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListRulesAsyncHelper(WAFRegionalClient const * const clientThis, const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRules(request), context);
}

void WAFRegionalClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListRulesAsyncHelper( this, request, handler, context ); } );
}

ListSizeConstraintSetsOutcome WAFRegionalClient::ListSizeConstraintSets(const ListSizeConstraintSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSizeConstraintSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSizeConstraintSetsOutcomeCallable WAFRegionalClient::ListSizeConstraintSetsCallable(const ListSizeConstraintSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSizeConstraintSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSizeConstraintSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListSizeConstraintSetsAsyncHelper(WAFRegionalClient const * const clientThis, const ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSizeConstraintSets(request), context);
}

void WAFRegionalClient::ListSizeConstraintSetsAsync(const ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListSizeConstraintSetsAsyncHelper( this, request, handler, context ); } );
}

ListSqlInjectionMatchSetsOutcome WAFRegionalClient::ListSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSqlInjectionMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSqlInjectionMatchSetsOutcomeCallable WAFRegionalClient::ListSqlInjectionMatchSetsCallable(const ListSqlInjectionMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSqlInjectionMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSqlInjectionMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListSqlInjectionMatchSetsAsyncHelper(WAFRegionalClient const * const clientThis, const ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSqlInjectionMatchSets(request), context);
}

void WAFRegionalClient::ListSqlInjectionMatchSetsAsync(const ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListSqlInjectionMatchSetsAsyncHelper( this, request, handler, context ); } );
}

ListSubscribedRuleGroupsOutcome WAFRegionalClient::ListSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSubscribedRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSubscribedRuleGroupsOutcomeCallable WAFRegionalClient::ListSubscribedRuleGroupsCallable(const ListSubscribedRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscribedRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscribedRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListSubscribedRuleGroupsAsyncHelper(WAFRegionalClient const * const clientThis, const ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSubscribedRuleGroups(request), context);
}

void WAFRegionalClient::ListSubscribedRuleGroupsAsync(const ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListSubscribedRuleGroupsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome WAFRegionalClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WAFRegionalClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListTagsForResourceAsyncHelper(WAFRegionalClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void WAFRegionalClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWebACLsOutcome WAFRegionalClient::ListWebACLs(const ListWebACLsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWebACLsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWebACLsOutcomeCallable WAFRegionalClient::ListWebACLsCallable(const ListWebACLsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebACLsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebACLs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListWebACLsAsyncHelper(WAFRegionalClient const * const clientThis, const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWebACLs(request), context);
}

void WAFRegionalClient::ListWebACLsAsync(const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListWebACLsAsyncHelper( this, request, handler, context ); } );
}

ListXssMatchSetsOutcome WAFRegionalClient::ListXssMatchSets(const ListXssMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListXssMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListXssMatchSetsOutcomeCallable WAFRegionalClient::ListXssMatchSetsCallable(const ListXssMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListXssMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListXssMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientListXssMatchSetsAsyncHelper(WAFRegionalClient const * const clientThis, const ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListXssMatchSets(request), context);
}

void WAFRegionalClient::ListXssMatchSetsAsync(const ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientListXssMatchSetsAsyncHelper( this, request, handler, context ); } );
}

PutLoggingConfigurationOutcome WAFRegionalClient::PutLoggingConfiguration(const PutLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLoggingConfigurationOutcomeCallable WAFRegionalClient::PutLoggingConfigurationCallable(const PutLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientPutLoggingConfigurationAsyncHelper(WAFRegionalClient const * const clientThis, const PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutLoggingConfiguration(request), context);
}

void WAFRegionalClient::PutLoggingConfigurationAsync(const PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientPutLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

PutPermissionPolicyOutcome WAFRegionalClient::PutPermissionPolicy(const PutPermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPermissionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionPolicyOutcomeCallable WAFRegionalClient::PutPermissionPolicyCallable(const PutPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientPutPermissionPolicyAsyncHelper(WAFRegionalClient const * const clientThis, const PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPermissionPolicy(request), context);
}

void WAFRegionalClient::PutPermissionPolicyAsync(const PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientPutPermissionPolicyAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome WAFRegionalClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WAFRegionalClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientTagResourceAsyncHelper(WAFRegionalClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void WAFRegionalClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome WAFRegionalClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WAFRegionalClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUntagResourceAsyncHelper(WAFRegionalClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void WAFRegionalClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateByteMatchSetOutcome WAFRegionalClient::UpdateByteMatchSet(const UpdateByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateByteMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateByteMatchSetOutcomeCallable WAFRegionalClient::UpdateByteMatchSetCallable(const UpdateByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateByteMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateByteMatchSet(request), context);
}

void WAFRegionalClient::UpdateByteMatchSetAsync(const UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateByteMatchSetAsyncHelper( this, request, handler, context ); } );
}

UpdateGeoMatchSetOutcome WAFRegionalClient::UpdateGeoMatchSet(const UpdateGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGeoMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGeoMatchSetOutcomeCallable WAFRegionalClient::UpdateGeoMatchSetCallable(const UpdateGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateGeoMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGeoMatchSet(request), context);
}

void WAFRegionalClient::UpdateGeoMatchSetAsync(const UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateGeoMatchSetAsyncHelper( this, request, handler, context ); } );
}

UpdateIPSetOutcome WAFRegionalClient::UpdateIPSet(const UpdateIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIPSetOutcomeCallable WAFRegionalClient::UpdateIPSetCallable(const UpdateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateIPSetAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIPSet(request), context);
}

void WAFRegionalClient::UpdateIPSetAsync(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateIPSetAsyncHelper( this, request, handler, context ); } );
}

UpdateRateBasedRuleOutcome WAFRegionalClient::UpdateRateBasedRule(const UpdateRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRateBasedRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRateBasedRuleOutcomeCallable WAFRegionalClient::UpdateRateBasedRuleCallable(const UpdateRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateRateBasedRuleAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRateBasedRule(request), context);
}

void WAFRegionalClient::UpdateRateBasedRuleAsync(const UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateRateBasedRuleAsyncHelper( this, request, handler, context ); } );
}

UpdateRegexMatchSetOutcome WAFRegionalClient::UpdateRegexMatchSet(const UpdateRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRegexMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegexMatchSetOutcomeCallable WAFRegionalClient::UpdateRegexMatchSetCallable(const UpdateRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateRegexMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRegexMatchSet(request), context);
}

void WAFRegionalClient::UpdateRegexMatchSetAsync(const UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateRegexMatchSetAsyncHelper( this, request, handler, context ); } );
}

UpdateRegexPatternSetOutcome WAFRegionalClient::UpdateRegexPatternSet(const UpdateRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegexPatternSetOutcomeCallable WAFRegionalClient::UpdateRegexPatternSetCallable(const UpdateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateRegexPatternSetAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRegexPatternSet(request), context);
}

void WAFRegionalClient::UpdateRegexPatternSetAsync(const UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

UpdateRuleOutcome WAFRegionalClient::UpdateRule(const UpdateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleOutcomeCallable WAFRegionalClient::UpdateRuleCallable(const UpdateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateRuleAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRule(request), context);
}

void WAFRegionalClient::UpdateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateRuleAsyncHelper( this, request, handler, context ); } );
}

UpdateRuleGroupOutcome WAFRegionalClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleGroupOutcomeCallable WAFRegionalClient::UpdateRuleGroupCallable(const UpdateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateRuleGroupAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRuleGroup(request), context);
}

void WAFRegionalClient::UpdateRuleGroupAsync(const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateRuleGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateSizeConstraintSetOutcome WAFRegionalClient::UpdateSizeConstraintSet(const UpdateSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSizeConstraintSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSizeConstraintSetOutcomeCallable WAFRegionalClient::UpdateSizeConstraintSetCallable(const UpdateSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateSizeConstraintSetAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSizeConstraintSet(request), context);
}

void WAFRegionalClient::UpdateSizeConstraintSetAsync(const UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateSizeConstraintSetAsyncHelper( this, request, handler, context ); } );
}

UpdateSqlInjectionMatchSetOutcome WAFRegionalClient::UpdateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSqlInjectionMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::UpdateSqlInjectionMatchSetCallable(const UpdateSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateSqlInjectionMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSqlInjectionMatchSet(request), context);
}

void WAFRegionalClient::UpdateSqlInjectionMatchSetAsync(const UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateSqlInjectionMatchSetAsyncHelper( this, request, handler, context ); } );
}

UpdateWebACLOutcome WAFRegionalClient::UpdateWebACL(const UpdateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWebACLOutcomeCallable WAFRegionalClient::UpdateWebACLCallable(const UpdateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateWebACLAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWebACL(request), context);
}

void WAFRegionalClient::UpdateWebACLAsync(const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateWebACLAsyncHelper( this, request, handler, context ); } );
}

UpdateXssMatchSetOutcome WAFRegionalClient::UpdateXssMatchSet(const UpdateXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateXssMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateXssMatchSetOutcomeCallable WAFRegionalClient::UpdateXssMatchSetCallable(const UpdateXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClientUpdateXssMatchSetAsyncHelper(WAFRegionalClient const * const clientThis, const UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateXssMatchSet(request), context);
}

void WAFRegionalClient::UpdateXssMatchSetAsync(const UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFRegionalClientUpdateXssMatchSetAsyncHelper( this, request, handler, context ); } );
}

