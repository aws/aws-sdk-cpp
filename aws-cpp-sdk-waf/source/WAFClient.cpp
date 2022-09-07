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

#include <aws/waf/WAFClient.h>
#include <aws/waf/WAFEndpoint.h>
#include <aws/waf/WAFErrorMarshaller.h>
#include <aws/waf/model/CreateByteMatchSetRequest.h>
#include <aws/waf/model/CreateGeoMatchSetRequest.h>
#include <aws/waf/model/CreateIPSetRequest.h>
#include <aws/waf/model/CreateRateBasedRuleRequest.h>
#include <aws/waf/model/CreateRegexMatchSetRequest.h>
#include <aws/waf/model/CreateRegexPatternSetRequest.h>
#include <aws/waf/model/CreateRuleRequest.h>
#include <aws/waf/model/CreateRuleGroupRequest.h>
#include <aws/waf/model/CreateSizeConstraintSetRequest.h>
#include <aws/waf/model/CreateSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/CreateWebACLRequest.h>
#include <aws/waf/model/CreateWebACLMigrationStackRequest.h>
#include <aws/waf/model/CreateXssMatchSetRequest.h>
#include <aws/waf/model/DeleteByteMatchSetRequest.h>
#include <aws/waf/model/DeleteGeoMatchSetRequest.h>
#include <aws/waf/model/DeleteIPSetRequest.h>
#include <aws/waf/model/DeleteLoggingConfigurationRequest.h>
#include <aws/waf/model/DeletePermissionPolicyRequest.h>
#include <aws/waf/model/DeleteRateBasedRuleRequest.h>
#include <aws/waf/model/DeleteRegexMatchSetRequest.h>
#include <aws/waf/model/DeleteRegexPatternSetRequest.h>
#include <aws/waf/model/DeleteRuleRequest.h>
#include <aws/waf/model/DeleteRuleGroupRequest.h>
#include <aws/waf/model/DeleteSizeConstraintSetRequest.h>
#include <aws/waf/model/DeleteSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/DeleteWebACLRequest.h>
#include <aws/waf/model/DeleteXssMatchSetRequest.h>
#include <aws/waf/model/GetByteMatchSetRequest.h>
#include <aws/waf/model/GetChangeTokenRequest.h>
#include <aws/waf/model/GetChangeTokenStatusRequest.h>
#include <aws/waf/model/GetGeoMatchSetRequest.h>
#include <aws/waf/model/GetIPSetRequest.h>
#include <aws/waf/model/GetLoggingConfigurationRequest.h>
#include <aws/waf/model/GetPermissionPolicyRequest.h>
#include <aws/waf/model/GetRateBasedRuleRequest.h>
#include <aws/waf/model/GetRateBasedRuleManagedKeysRequest.h>
#include <aws/waf/model/GetRegexMatchSetRequest.h>
#include <aws/waf/model/GetRegexPatternSetRequest.h>
#include <aws/waf/model/GetRuleRequest.h>
#include <aws/waf/model/GetRuleGroupRequest.h>
#include <aws/waf/model/GetSampledRequestsRequest.h>
#include <aws/waf/model/GetSizeConstraintSetRequest.h>
#include <aws/waf/model/GetSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/GetWebACLRequest.h>
#include <aws/waf/model/GetXssMatchSetRequest.h>
#include <aws/waf/model/ListActivatedRulesInRuleGroupRequest.h>
#include <aws/waf/model/ListByteMatchSetsRequest.h>
#include <aws/waf/model/ListGeoMatchSetsRequest.h>
#include <aws/waf/model/ListIPSetsRequest.h>
#include <aws/waf/model/ListLoggingConfigurationsRequest.h>
#include <aws/waf/model/ListRateBasedRulesRequest.h>
#include <aws/waf/model/ListRegexMatchSetsRequest.h>
#include <aws/waf/model/ListRegexPatternSetsRequest.h>
#include <aws/waf/model/ListRuleGroupsRequest.h>
#include <aws/waf/model/ListRulesRequest.h>
#include <aws/waf/model/ListSizeConstraintSetsRequest.h>
#include <aws/waf/model/ListSqlInjectionMatchSetsRequest.h>
#include <aws/waf/model/ListSubscribedRuleGroupsRequest.h>
#include <aws/waf/model/ListTagsForResourceRequest.h>
#include <aws/waf/model/ListWebACLsRequest.h>
#include <aws/waf/model/ListXssMatchSetsRequest.h>
#include <aws/waf/model/PutLoggingConfigurationRequest.h>
#include <aws/waf/model/PutPermissionPolicyRequest.h>
#include <aws/waf/model/TagResourceRequest.h>
#include <aws/waf/model/UntagResourceRequest.h>
#include <aws/waf/model/UpdateByteMatchSetRequest.h>
#include <aws/waf/model/UpdateGeoMatchSetRequest.h>
#include <aws/waf/model/UpdateIPSetRequest.h>
#include <aws/waf/model/UpdateRateBasedRuleRequest.h>
#include <aws/waf/model/UpdateRegexMatchSetRequest.h>
#include <aws/waf/model/UpdateRegexPatternSetRequest.h>
#include <aws/waf/model/UpdateRuleRequest.h>
#include <aws/waf/model/UpdateRuleGroupRequest.h>
#include <aws/waf/model/UpdateSizeConstraintSetRequest.h>
#include <aws/waf/model/UpdateSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/UpdateWebACLRequest.h>
#include <aws/waf/model/UpdateXssMatchSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WAF;
using namespace Aws::WAF::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "waf";
static const char* ALLOCATION_TAG = "WAFClient";

WAFClient::WAFClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFClient::WAFClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFClient::WAFClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFClient::~WAFClient()
{
}

void WAFClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WAF");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WAFEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WAFClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateByteMatchSetOutcome WAFClient::CreateByteMatchSet(const CreateByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateByteMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateByteMatchSetOutcomeCallable WAFClient::CreateByteMatchSetCallable(const CreateByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateByteMatchSetAsyncHelper(WAFClient const * const clientThis, const CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateByteMatchSet(request), context);
}

void WAFClient::CreateByteMatchSetAsync(const CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateByteMatchSetAsyncHelper( this, request, handler, context ); } );
}

CreateGeoMatchSetOutcome WAFClient::CreateGeoMatchSet(const CreateGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGeoMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGeoMatchSetOutcomeCallable WAFClient::CreateGeoMatchSetCallable(const CreateGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateGeoMatchSetAsyncHelper(WAFClient const * const clientThis, const CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGeoMatchSet(request), context);
}

void WAFClient::CreateGeoMatchSetAsync(const CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateGeoMatchSetAsyncHelper( this, request, handler, context ); } );
}

CreateIPSetOutcome WAFClient::CreateIPSet(const CreateIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIPSetOutcomeCallable WAFClient::CreateIPSetCallable(const CreateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateIPSetAsyncHelper(WAFClient const * const clientThis, const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIPSet(request), context);
}

void WAFClient::CreateIPSetAsync(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateIPSetAsyncHelper( this, request, handler, context ); } );
}

CreateRateBasedRuleOutcome WAFClient::CreateRateBasedRule(const CreateRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRateBasedRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRateBasedRuleOutcomeCallable WAFClient::CreateRateBasedRuleCallable(const CreateRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateRateBasedRuleAsyncHelper(WAFClient const * const clientThis, const CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRateBasedRule(request), context);
}

void WAFClient::CreateRateBasedRuleAsync(const CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateRateBasedRuleAsyncHelper( this, request, handler, context ); } );
}

CreateRegexMatchSetOutcome WAFClient::CreateRegexMatchSet(const CreateRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRegexMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRegexMatchSetOutcomeCallable WAFClient::CreateRegexMatchSetCallable(const CreateRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateRegexMatchSetAsyncHelper(WAFClient const * const clientThis, const CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRegexMatchSet(request), context);
}

void WAFClient::CreateRegexMatchSetAsync(const CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateRegexMatchSetAsyncHelper( this, request, handler, context ); } );
}

CreateRegexPatternSetOutcome WAFClient::CreateRegexPatternSet(const CreateRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRegexPatternSetOutcomeCallable WAFClient::CreateRegexPatternSetCallable(const CreateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateRegexPatternSetAsyncHelper(WAFClient const * const clientThis, const CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRegexPatternSet(request), context);
}

void WAFClient::CreateRegexPatternSetAsync(const CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

CreateRuleOutcome WAFClient::CreateRule(const CreateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleOutcomeCallable WAFClient::CreateRuleCallable(const CreateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateRuleAsyncHelper(WAFClient const * const clientThis, const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRule(request), context);
}

void WAFClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateRuleAsyncHelper( this, request, handler, context ); } );
}

CreateRuleGroupOutcome WAFClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleGroupOutcomeCallable WAFClient::CreateRuleGroupCallable(const CreateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateRuleGroupAsyncHelper(WAFClient const * const clientThis, const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRuleGroup(request), context);
}

void WAFClient::CreateRuleGroupAsync(const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateRuleGroupAsyncHelper( this, request, handler, context ); } );
}

CreateSizeConstraintSetOutcome WAFClient::CreateSizeConstraintSet(const CreateSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSizeConstraintSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSizeConstraintSetOutcomeCallable WAFClient::CreateSizeConstraintSetCallable(const CreateSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateSizeConstraintSetAsyncHelper(WAFClient const * const clientThis, const CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSizeConstraintSet(request), context);
}

void WAFClient::CreateSizeConstraintSetAsync(const CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateSizeConstraintSetAsyncHelper( this, request, handler, context ); } );
}

CreateSqlInjectionMatchSetOutcome WAFClient::CreateSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSqlInjectionMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSqlInjectionMatchSetOutcomeCallable WAFClient::CreateSqlInjectionMatchSetCallable(const CreateSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateSqlInjectionMatchSetAsyncHelper(WAFClient const * const clientThis, const CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSqlInjectionMatchSet(request), context);
}

void WAFClient::CreateSqlInjectionMatchSetAsync(const CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateSqlInjectionMatchSetAsyncHelper( this, request, handler, context ); } );
}

CreateWebACLOutcome WAFClient::CreateWebACL(const CreateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebACLOutcomeCallable WAFClient::CreateWebACLCallable(const CreateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateWebACLAsyncHelper(WAFClient const * const clientThis, const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWebACL(request), context);
}

void WAFClient::CreateWebACLAsync(const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateWebACLAsyncHelper( this, request, handler, context ); } );
}

CreateWebACLMigrationStackOutcome WAFClient::CreateWebACLMigrationStack(const CreateWebACLMigrationStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWebACLMigrationStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebACLMigrationStackOutcomeCallable WAFClient::CreateWebACLMigrationStackCallable(const CreateWebACLMigrationStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebACLMigrationStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebACLMigrationStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateWebACLMigrationStackAsyncHelper(WAFClient const * const clientThis, const CreateWebACLMigrationStackRequest& request, const CreateWebACLMigrationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWebACLMigrationStack(request), context);
}

void WAFClient::CreateWebACLMigrationStackAsync(const CreateWebACLMigrationStackRequest& request, const CreateWebACLMigrationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateWebACLMigrationStackAsyncHelper( this, request, handler, context ); } );
}

CreateXssMatchSetOutcome WAFClient::CreateXssMatchSet(const CreateXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateXssMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateXssMatchSetOutcomeCallable WAFClient::CreateXssMatchSetCallable(const CreateXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientCreateXssMatchSetAsyncHelper(WAFClient const * const clientThis, const CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateXssMatchSet(request), context);
}

void WAFClient::CreateXssMatchSetAsync(const CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientCreateXssMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteByteMatchSetOutcome WAFClient::DeleteByteMatchSet(const DeleteByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteByteMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteByteMatchSetOutcomeCallable WAFClient::DeleteByteMatchSetCallable(const DeleteByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteByteMatchSetAsyncHelper(WAFClient const * const clientThis, const DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteByteMatchSet(request), context);
}

void WAFClient::DeleteByteMatchSetAsync(const DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteByteMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteGeoMatchSetOutcome WAFClient::DeleteGeoMatchSet(const DeleteGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGeoMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGeoMatchSetOutcomeCallable WAFClient::DeleteGeoMatchSetCallable(const DeleteGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteGeoMatchSetAsyncHelper(WAFClient const * const clientThis, const DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGeoMatchSet(request), context);
}

void WAFClient::DeleteGeoMatchSetAsync(const DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteGeoMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteIPSetOutcome WAFClient::DeleteIPSet(const DeleteIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIPSetOutcomeCallable WAFClient::DeleteIPSetCallable(const DeleteIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteIPSetAsyncHelper(WAFClient const * const clientThis, const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIPSet(request), context);
}

void WAFClient::DeleteIPSetAsync(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteIPSetAsyncHelper( this, request, handler, context ); } );
}

DeleteLoggingConfigurationOutcome WAFClient::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoggingConfigurationOutcomeCallable WAFClient::DeleteLoggingConfigurationCallable(const DeleteLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteLoggingConfigurationAsyncHelper(WAFClient const * const clientThis, const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoggingConfiguration(request), context);
}

void WAFClient::DeleteLoggingConfigurationAsync(const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeletePermissionPolicyOutcome WAFClient::DeletePermissionPolicy(const DeletePermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePermissionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionPolicyOutcomeCallable WAFClient::DeletePermissionPolicyCallable(const DeletePermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeletePermissionPolicyAsyncHelper(WAFClient const * const clientThis, const DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePermissionPolicy(request), context);
}

void WAFClient::DeletePermissionPolicyAsync(const DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeletePermissionPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteRateBasedRuleOutcome WAFClient::DeleteRateBasedRule(const DeleteRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRateBasedRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRateBasedRuleOutcomeCallable WAFClient::DeleteRateBasedRuleCallable(const DeleteRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteRateBasedRuleAsyncHelper(WAFClient const * const clientThis, const DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRateBasedRule(request), context);
}

void WAFClient::DeleteRateBasedRuleAsync(const DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteRateBasedRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteRegexMatchSetOutcome WAFClient::DeleteRegexMatchSet(const DeleteRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRegexMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegexMatchSetOutcomeCallable WAFClient::DeleteRegexMatchSetCallable(const DeleteRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteRegexMatchSetAsyncHelper(WAFClient const * const clientThis, const DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRegexMatchSet(request), context);
}

void WAFClient::DeleteRegexMatchSetAsync(const DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteRegexMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteRegexPatternSetOutcome WAFClient::DeleteRegexPatternSet(const DeleteRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegexPatternSetOutcomeCallable WAFClient::DeleteRegexPatternSetCallable(const DeleteRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteRegexPatternSetAsyncHelper(WAFClient const * const clientThis, const DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRegexPatternSet(request), context);
}

void WAFClient::DeleteRegexPatternSetAsync(const DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleOutcome WAFClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcomeCallable WAFClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteRuleAsyncHelper(WAFClient const * const clientThis, const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRule(request), context);
}

void WAFClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleGroupOutcome WAFClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleGroupOutcomeCallable WAFClient::DeleteRuleGroupCallable(const DeleteRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteRuleGroupAsyncHelper(WAFClient const * const clientThis, const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRuleGroup(request), context);
}

void WAFClient::DeleteRuleGroupAsync(const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteRuleGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteSizeConstraintSetOutcome WAFClient::DeleteSizeConstraintSet(const DeleteSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSizeConstraintSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSizeConstraintSetOutcomeCallable WAFClient::DeleteSizeConstraintSetCallable(const DeleteSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteSizeConstraintSetAsyncHelper(WAFClient const * const clientThis, const DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSizeConstraintSet(request), context);
}

void WAFClient::DeleteSizeConstraintSetAsync(const DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteSizeConstraintSetAsyncHelper( this, request, handler, context ); } );
}

DeleteSqlInjectionMatchSetOutcome WAFClient::DeleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSqlInjectionMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSqlInjectionMatchSetOutcomeCallable WAFClient::DeleteSqlInjectionMatchSetCallable(const DeleteSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteSqlInjectionMatchSetAsyncHelper(WAFClient const * const clientThis, const DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSqlInjectionMatchSet(request), context);
}

void WAFClient::DeleteSqlInjectionMatchSetAsync(const DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteSqlInjectionMatchSetAsyncHelper( this, request, handler, context ); } );
}

DeleteWebACLOutcome WAFClient::DeleteWebACL(const DeleteWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWebACLOutcomeCallable WAFClient::DeleteWebACLCallable(const DeleteWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteWebACLAsyncHelper(WAFClient const * const clientThis, const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWebACL(request), context);
}

void WAFClient::DeleteWebACLAsync(const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteWebACLAsyncHelper( this, request, handler, context ); } );
}

DeleteXssMatchSetOutcome WAFClient::DeleteXssMatchSet(const DeleteXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteXssMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteXssMatchSetOutcomeCallable WAFClient::DeleteXssMatchSetCallable(const DeleteXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientDeleteXssMatchSetAsyncHelper(WAFClient const * const clientThis, const DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteXssMatchSet(request), context);
}

void WAFClient::DeleteXssMatchSetAsync(const DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientDeleteXssMatchSetAsyncHelper( this, request, handler, context ); } );
}

GetByteMatchSetOutcome WAFClient::GetByteMatchSet(const GetByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetByteMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetByteMatchSetOutcomeCallable WAFClient::GetByteMatchSetCallable(const GetByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetByteMatchSetAsyncHelper(WAFClient const * const clientThis, const GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetByteMatchSet(request), context);
}

void WAFClient::GetByteMatchSetAsync(const GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetByteMatchSetAsyncHelper( this, request, handler, context ); } );
}

GetChangeTokenOutcome WAFClient::GetChangeToken(const GetChangeTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetChangeTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetChangeTokenOutcomeCallable WAFClient::GetChangeTokenCallable(const GetChangeTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetChangeTokenAsyncHelper(WAFClient const * const clientThis, const GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChangeToken(request), context);
}

void WAFClient::GetChangeTokenAsync(const GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetChangeTokenAsyncHelper( this, request, handler, context ); } );
}

GetChangeTokenStatusOutcome WAFClient::GetChangeTokenStatus(const GetChangeTokenStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetChangeTokenStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetChangeTokenStatusOutcomeCallable WAFClient::GetChangeTokenStatusCallable(const GetChangeTokenStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeTokenStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeTokenStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetChangeTokenStatusAsyncHelper(WAFClient const * const clientThis, const GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetChangeTokenStatus(request), context);
}

void WAFClient::GetChangeTokenStatusAsync(const GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetChangeTokenStatusAsyncHelper( this, request, handler, context ); } );
}

GetGeoMatchSetOutcome WAFClient::GetGeoMatchSet(const GetGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGeoMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGeoMatchSetOutcomeCallable WAFClient::GetGeoMatchSetCallable(const GetGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetGeoMatchSetAsyncHelper(WAFClient const * const clientThis, const GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGeoMatchSet(request), context);
}

void WAFClient::GetGeoMatchSetAsync(const GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetGeoMatchSetAsyncHelper( this, request, handler, context ); } );
}

GetIPSetOutcome WAFClient::GetIPSet(const GetIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIPSetOutcomeCallable WAFClient::GetIPSetCallable(const GetIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetIPSetAsyncHelper(WAFClient const * const clientThis, const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIPSet(request), context);
}

void WAFClient::GetIPSetAsync(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetIPSetAsyncHelper( this, request, handler, context ); } );
}

GetLoggingConfigurationOutcome WAFClient::GetLoggingConfiguration(const GetLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoggingConfigurationOutcomeCallable WAFClient::GetLoggingConfigurationCallable(const GetLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetLoggingConfigurationAsyncHelper(WAFClient const * const clientThis, const GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLoggingConfiguration(request), context);
}

void WAFClient::GetLoggingConfigurationAsync(const GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetPermissionPolicyOutcome WAFClient::GetPermissionPolicy(const GetPermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPermissionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPermissionPolicyOutcomeCallable WAFClient::GetPermissionPolicyCallable(const GetPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetPermissionPolicyAsyncHelper(WAFClient const * const clientThis, const GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPermissionPolicy(request), context);
}

void WAFClient::GetPermissionPolicyAsync(const GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetPermissionPolicyAsyncHelper( this, request, handler, context ); } );
}

GetRateBasedRuleOutcome WAFClient::GetRateBasedRule(const GetRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRateBasedRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRateBasedRuleOutcomeCallable WAFClient::GetRateBasedRuleCallable(const GetRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetRateBasedRuleAsyncHelper(WAFClient const * const clientThis, const GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRateBasedRule(request), context);
}

void WAFClient::GetRateBasedRuleAsync(const GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetRateBasedRuleAsyncHelper( this, request, handler, context ); } );
}

GetRateBasedRuleManagedKeysOutcome WAFClient::GetRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRateBasedRuleManagedKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRateBasedRuleManagedKeysOutcomeCallable WAFClient::GetRateBasedRuleManagedKeysCallable(const GetRateBasedRuleManagedKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRateBasedRuleManagedKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRateBasedRuleManagedKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetRateBasedRuleManagedKeysAsyncHelper(WAFClient const * const clientThis, const GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRateBasedRuleManagedKeys(request), context);
}

void WAFClient::GetRateBasedRuleManagedKeysAsync(const GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetRateBasedRuleManagedKeysAsyncHelper( this, request, handler, context ); } );
}

GetRegexMatchSetOutcome WAFClient::GetRegexMatchSet(const GetRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRegexMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegexMatchSetOutcomeCallable WAFClient::GetRegexMatchSetCallable(const GetRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetRegexMatchSetAsyncHelper(WAFClient const * const clientThis, const GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRegexMatchSet(request), context);
}

void WAFClient::GetRegexMatchSetAsync(const GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetRegexMatchSetAsyncHelper( this, request, handler, context ); } );
}

GetRegexPatternSetOutcome WAFClient::GetRegexPatternSet(const GetRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegexPatternSetOutcomeCallable WAFClient::GetRegexPatternSetCallable(const GetRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetRegexPatternSetAsyncHelper(WAFClient const * const clientThis, const GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRegexPatternSet(request), context);
}

void WAFClient::GetRegexPatternSetAsync(const GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

GetRuleOutcome WAFClient::GetRule(const GetRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRuleOutcomeCallable WAFClient::GetRuleCallable(const GetRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetRuleAsyncHelper(WAFClient const * const clientThis, const GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRule(request), context);
}

void WAFClient::GetRuleAsync(const GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetRuleAsyncHelper( this, request, handler, context ); } );
}

GetRuleGroupOutcome WAFClient::GetRuleGroup(const GetRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRuleGroupOutcomeCallable WAFClient::GetRuleGroupCallable(const GetRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetRuleGroupAsyncHelper(WAFClient const * const clientThis, const GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRuleGroup(request), context);
}

void WAFClient::GetRuleGroupAsync(const GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetRuleGroupAsyncHelper( this, request, handler, context ); } );
}

GetSampledRequestsOutcome WAFClient::GetSampledRequests(const GetSampledRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSampledRequestsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSampledRequestsOutcomeCallable WAFClient::GetSampledRequestsCallable(const GetSampledRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSampledRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSampledRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetSampledRequestsAsyncHelper(WAFClient const * const clientThis, const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSampledRequests(request), context);
}

void WAFClient::GetSampledRequestsAsync(const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetSampledRequestsAsyncHelper( this, request, handler, context ); } );
}

GetSizeConstraintSetOutcome WAFClient::GetSizeConstraintSet(const GetSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSizeConstraintSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSizeConstraintSetOutcomeCallable WAFClient::GetSizeConstraintSetCallable(const GetSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetSizeConstraintSetAsyncHelper(WAFClient const * const clientThis, const GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSizeConstraintSet(request), context);
}

void WAFClient::GetSizeConstraintSetAsync(const GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetSizeConstraintSetAsyncHelper( this, request, handler, context ); } );
}

GetSqlInjectionMatchSetOutcome WAFClient::GetSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSqlInjectionMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSqlInjectionMatchSetOutcomeCallable WAFClient::GetSqlInjectionMatchSetCallable(const GetSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetSqlInjectionMatchSetAsyncHelper(WAFClient const * const clientThis, const GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSqlInjectionMatchSet(request), context);
}

void WAFClient::GetSqlInjectionMatchSetAsync(const GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetSqlInjectionMatchSetAsyncHelper( this, request, handler, context ); } );
}

GetWebACLOutcome WAFClient::GetWebACL(const GetWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWebACLOutcomeCallable WAFClient::GetWebACLCallable(const GetWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetWebACLAsyncHelper(WAFClient const * const clientThis, const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWebACL(request), context);
}

void WAFClient::GetWebACLAsync(const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetWebACLAsyncHelper( this, request, handler, context ); } );
}

GetXssMatchSetOutcome WAFClient::GetXssMatchSet(const GetXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetXssMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetXssMatchSetOutcomeCallable WAFClient::GetXssMatchSetCallable(const GetXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientGetXssMatchSetAsyncHelper(WAFClient const * const clientThis, const GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetXssMatchSet(request), context);
}

void WAFClient::GetXssMatchSetAsync(const GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientGetXssMatchSetAsyncHelper( this, request, handler, context ); } );
}

ListActivatedRulesInRuleGroupOutcome WAFClient::ListActivatedRulesInRuleGroup(const ListActivatedRulesInRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListActivatedRulesInRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListActivatedRulesInRuleGroupOutcomeCallable WAFClient::ListActivatedRulesInRuleGroupCallable(const ListActivatedRulesInRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActivatedRulesInRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActivatedRulesInRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListActivatedRulesInRuleGroupAsyncHelper(WAFClient const * const clientThis, const ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListActivatedRulesInRuleGroup(request), context);
}

void WAFClient::ListActivatedRulesInRuleGroupAsync(const ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListActivatedRulesInRuleGroupAsyncHelper( this, request, handler, context ); } );
}

ListByteMatchSetsOutcome WAFClient::ListByteMatchSets(const ListByteMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListByteMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListByteMatchSetsOutcomeCallable WAFClient::ListByteMatchSetsCallable(const ListByteMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListByteMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListByteMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListByteMatchSetsAsyncHelper(WAFClient const * const clientThis, const ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListByteMatchSets(request), context);
}

void WAFClient::ListByteMatchSetsAsync(const ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListByteMatchSetsAsyncHelper( this, request, handler, context ); } );
}

ListGeoMatchSetsOutcome WAFClient::ListGeoMatchSets(const ListGeoMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGeoMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGeoMatchSetsOutcomeCallable WAFClient::ListGeoMatchSetsCallable(const ListGeoMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGeoMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGeoMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListGeoMatchSetsAsyncHelper(WAFClient const * const clientThis, const ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGeoMatchSets(request), context);
}

void WAFClient::ListGeoMatchSetsAsync(const ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListGeoMatchSetsAsyncHelper( this, request, handler, context ); } );
}

ListIPSetsOutcome WAFClient::ListIPSets(const ListIPSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListIPSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIPSetsOutcomeCallable WAFClient::ListIPSetsCallable(const ListIPSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIPSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIPSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListIPSetsAsyncHelper(WAFClient const * const clientThis, const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIPSets(request), context);
}

void WAFClient::ListIPSetsAsync(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListIPSetsAsyncHelper( this, request, handler, context ); } );
}

ListLoggingConfigurationsOutcome WAFClient::ListLoggingConfigurations(const ListLoggingConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLoggingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLoggingConfigurationsOutcomeCallable WAFClient::ListLoggingConfigurationsCallable(const ListLoggingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLoggingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLoggingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListLoggingConfigurationsAsyncHelper(WAFClient const * const clientThis, const ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLoggingConfigurations(request), context);
}

void WAFClient::ListLoggingConfigurationsAsync(const ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListLoggingConfigurationsAsyncHelper( this, request, handler, context ); } );
}

ListRateBasedRulesOutcome WAFClient::ListRateBasedRules(const ListRateBasedRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRateBasedRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRateBasedRulesOutcomeCallable WAFClient::ListRateBasedRulesCallable(const ListRateBasedRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRateBasedRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRateBasedRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListRateBasedRulesAsyncHelper(WAFClient const * const clientThis, const ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRateBasedRules(request), context);
}

void WAFClient::ListRateBasedRulesAsync(const ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListRateBasedRulesAsyncHelper( this, request, handler, context ); } );
}

ListRegexMatchSetsOutcome WAFClient::ListRegexMatchSets(const ListRegexMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRegexMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRegexMatchSetsOutcomeCallable WAFClient::ListRegexMatchSetsCallable(const ListRegexMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegexMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegexMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListRegexMatchSetsAsyncHelper(WAFClient const * const clientThis, const ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRegexMatchSets(request), context);
}

void WAFClient::ListRegexMatchSetsAsync(const ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListRegexMatchSetsAsyncHelper( this, request, handler, context ); } );
}

ListRegexPatternSetsOutcome WAFClient::ListRegexPatternSets(const ListRegexPatternSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRegexPatternSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRegexPatternSetsOutcomeCallable WAFClient::ListRegexPatternSetsCallable(const ListRegexPatternSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegexPatternSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegexPatternSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListRegexPatternSetsAsyncHelper(WAFClient const * const clientThis, const ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRegexPatternSets(request), context);
}

void WAFClient::ListRegexPatternSetsAsync(const ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListRegexPatternSetsAsyncHelper( this, request, handler, context ); } );
}

ListRuleGroupsOutcome WAFClient::ListRuleGroups(const ListRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRuleGroupsOutcomeCallable WAFClient::ListRuleGroupsCallable(const ListRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListRuleGroupsAsyncHelper(WAFClient const * const clientThis, const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRuleGroups(request), context);
}

void WAFClient::ListRuleGroupsAsync(const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListRuleGroupsAsyncHelper( this, request, handler, context ); } );
}

ListRulesOutcome WAFClient::ListRules(const ListRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcomeCallable WAFClient::ListRulesCallable(const ListRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListRulesAsyncHelper(WAFClient const * const clientThis, const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRules(request), context);
}

void WAFClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListRulesAsyncHelper( this, request, handler, context ); } );
}

ListSizeConstraintSetsOutcome WAFClient::ListSizeConstraintSets(const ListSizeConstraintSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSizeConstraintSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSizeConstraintSetsOutcomeCallable WAFClient::ListSizeConstraintSetsCallable(const ListSizeConstraintSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSizeConstraintSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSizeConstraintSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListSizeConstraintSetsAsyncHelper(WAFClient const * const clientThis, const ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSizeConstraintSets(request), context);
}

void WAFClient::ListSizeConstraintSetsAsync(const ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListSizeConstraintSetsAsyncHelper( this, request, handler, context ); } );
}

ListSqlInjectionMatchSetsOutcome WAFClient::ListSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSqlInjectionMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSqlInjectionMatchSetsOutcomeCallable WAFClient::ListSqlInjectionMatchSetsCallable(const ListSqlInjectionMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSqlInjectionMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSqlInjectionMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListSqlInjectionMatchSetsAsyncHelper(WAFClient const * const clientThis, const ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSqlInjectionMatchSets(request), context);
}

void WAFClient::ListSqlInjectionMatchSetsAsync(const ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListSqlInjectionMatchSetsAsyncHelper( this, request, handler, context ); } );
}

ListSubscribedRuleGroupsOutcome WAFClient::ListSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSubscribedRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSubscribedRuleGroupsOutcomeCallable WAFClient::ListSubscribedRuleGroupsCallable(const ListSubscribedRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscribedRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscribedRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListSubscribedRuleGroupsAsyncHelper(WAFClient const * const clientThis, const ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSubscribedRuleGroups(request), context);
}

void WAFClient::ListSubscribedRuleGroupsAsync(const ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListSubscribedRuleGroupsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome WAFClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable WAFClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListTagsForResourceAsyncHelper(WAFClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void WAFClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListWebACLsOutcome WAFClient::ListWebACLs(const ListWebACLsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWebACLsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWebACLsOutcomeCallable WAFClient::ListWebACLsCallable(const ListWebACLsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebACLsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebACLs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListWebACLsAsyncHelper(WAFClient const * const clientThis, const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWebACLs(request), context);
}

void WAFClient::ListWebACLsAsync(const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListWebACLsAsyncHelper( this, request, handler, context ); } );
}

ListXssMatchSetsOutcome WAFClient::ListXssMatchSets(const ListXssMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListXssMatchSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListXssMatchSetsOutcomeCallable WAFClient::ListXssMatchSetsCallable(const ListXssMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListXssMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListXssMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientListXssMatchSetsAsyncHelper(WAFClient const * const clientThis, const ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListXssMatchSets(request), context);
}

void WAFClient::ListXssMatchSetsAsync(const ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientListXssMatchSetsAsyncHelper( this, request, handler, context ); } );
}

PutLoggingConfigurationOutcome WAFClient::PutLoggingConfiguration(const PutLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLoggingConfigurationOutcomeCallable WAFClient::PutLoggingConfigurationCallable(const PutLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientPutLoggingConfigurationAsyncHelper(WAFClient const * const clientThis, const PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutLoggingConfiguration(request), context);
}

void WAFClient::PutLoggingConfigurationAsync(const PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientPutLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

PutPermissionPolicyOutcome WAFClient::PutPermissionPolicy(const PutPermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPermissionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionPolicyOutcomeCallable WAFClient::PutPermissionPolicyCallable(const PutPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientPutPermissionPolicyAsyncHelper(WAFClient const * const clientThis, const PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPermissionPolicy(request), context);
}

void WAFClient::PutPermissionPolicyAsync(const PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientPutPermissionPolicyAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome WAFClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable WAFClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientTagResourceAsyncHelper(WAFClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void WAFClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome WAFClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable WAFClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUntagResourceAsyncHelper(WAFClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void WAFClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateByteMatchSetOutcome WAFClient::UpdateByteMatchSet(const UpdateByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateByteMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateByteMatchSetOutcomeCallable WAFClient::UpdateByteMatchSetCallable(const UpdateByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateByteMatchSetAsyncHelper(WAFClient const * const clientThis, const UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateByteMatchSet(request), context);
}

void WAFClient::UpdateByteMatchSetAsync(const UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateByteMatchSetAsyncHelper( this, request, handler, context ); } );
}

UpdateGeoMatchSetOutcome WAFClient::UpdateGeoMatchSet(const UpdateGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGeoMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGeoMatchSetOutcomeCallable WAFClient::UpdateGeoMatchSetCallable(const UpdateGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateGeoMatchSetAsyncHelper(WAFClient const * const clientThis, const UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGeoMatchSet(request), context);
}

void WAFClient::UpdateGeoMatchSetAsync(const UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateGeoMatchSetAsyncHelper( this, request, handler, context ); } );
}

UpdateIPSetOutcome WAFClient::UpdateIPSet(const UpdateIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIPSetOutcomeCallable WAFClient::UpdateIPSetCallable(const UpdateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateIPSetAsyncHelper(WAFClient const * const clientThis, const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIPSet(request), context);
}

void WAFClient::UpdateIPSetAsync(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateIPSetAsyncHelper( this, request, handler, context ); } );
}

UpdateRateBasedRuleOutcome WAFClient::UpdateRateBasedRule(const UpdateRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRateBasedRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRateBasedRuleOutcomeCallable WAFClient::UpdateRateBasedRuleCallable(const UpdateRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateRateBasedRuleAsyncHelper(WAFClient const * const clientThis, const UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRateBasedRule(request), context);
}

void WAFClient::UpdateRateBasedRuleAsync(const UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateRateBasedRuleAsyncHelper( this, request, handler, context ); } );
}

UpdateRegexMatchSetOutcome WAFClient::UpdateRegexMatchSet(const UpdateRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRegexMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegexMatchSetOutcomeCallable WAFClient::UpdateRegexMatchSetCallable(const UpdateRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateRegexMatchSetAsyncHelper(WAFClient const * const clientThis, const UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRegexMatchSet(request), context);
}

void WAFClient::UpdateRegexMatchSetAsync(const UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateRegexMatchSetAsyncHelper( this, request, handler, context ); } );
}

UpdateRegexPatternSetOutcome WAFClient::UpdateRegexPatternSet(const UpdateRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRegexPatternSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegexPatternSetOutcomeCallable WAFClient::UpdateRegexPatternSetCallable(const UpdateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateRegexPatternSetAsyncHelper(WAFClient const * const clientThis, const UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRegexPatternSet(request), context);
}

void WAFClient::UpdateRegexPatternSetAsync(const UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateRegexPatternSetAsyncHelper( this, request, handler, context ); } );
}

UpdateRuleOutcome WAFClient::UpdateRule(const UpdateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleOutcomeCallable WAFClient::UpdateRuleCallable(const UpdateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateRuleAsyncHelper(WAFClient const * const clientThis, const UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRule(request), context);
}

void WAFClient::UpdateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateRuleAsyncHelper( this, request, handler, context ); } );
}

UpdateRuleGroupOutcome WAFClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleGroupOutcomeCallable WAFClient::UpdateRuleGroupCallable(const UpdateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateRuleGroupAsyncHelper(WAFClient const * const clientThis, const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRuleGroup(request), context);
}

void WAFClient::UpdateRuleGroupAsync(const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateRuleGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateSizeConstraintSetOutcome WAFClient::UpdateSizeConstraintSet(const UpdateSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSizeConstraintSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSizeConstraintSetOutcomeCallable WAFClient::UpdateSizeConstraintSetCallable(const UpdateSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateSizeConstraintSetAsyncHelper(WAFClient const * const clientThis, const UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSizeConstraintSet(request), context);
}

void WAFClient::UpdateSizeConstraintSetAsync(const UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateSizeConstraintSetAsyncHelper( this, request, handler, context ); } );
}

UpdateSqlInjectionMatchSetOutcome WAFClient::UpdateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSqlInjectionMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSqlInjectionMatchSetOutcomeCallable WAFClient::UpdateSqlInjectionMatchSetCallable(const UpdateSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateSqlInjectionMatchSetAsyncHelper(WAFClient const * const clientThis, const UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSqlInjectionMatchSet(request), context);
}

void WAFClient::UpdateSqlInjectionMatchSetAsync(const UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateSqlInjectionMatchSetAsyncHelper( this, request, handler, context ); } );
}

UpdateWebACLOutcome WAFClient::UpdateWebACL(const UpdateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWebACLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWebACLOutcomeCallable WAFClient::UpdateWebACLCallable(const UpdateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateWebACLAsyncHelper(WAFClient const * const clientThis, const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWebACL(request), context);
}

void WAFClient::UpdateWebACLAsync(const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateWebACLAsyncHelper( this, request, handler, context ); } );
}

UpdateXssMatchSetOutcome WAFClient::UpdateXssMatchSet(const UpdateXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateXssMatchSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateXssMatchSetOutcomeCallable WAFClient::UpdateXssMatchSetCallable(const UpdateXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFClientUpdateXssMatchSetAsyncHelper(WAFClient const * const clientThis, const UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateXssMatchSet(request), context);
}

void WAFClient::UpdateXssMatchSetAsync(const UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WAFClientUpdateXssMatchSetAsyncHelper( this, request, handler, context ); } );
}

