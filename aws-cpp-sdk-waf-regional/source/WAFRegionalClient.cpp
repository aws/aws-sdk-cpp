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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFRegionalClient::WAFRegionalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WAFRegionalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFRegionalClient::~WAFRegionalClient()
{
}

void WAFRegionalClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateWebACLOutcome(AssociateWebACLResult(outcome.GetResult()));
  }
  else
  {
    return AssociateWebACLOutcome(outcome.GetError());
  }
}

AssociateWebACLOutcomeCallable WAFRegionalClient::AssociateWebACLCallable(const AssociateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::AssociateWebACLAsync(const AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateWebACLAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::AssociateWebACLAsyncHelper(const AssociateWebACLRequest& request, const AssociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateWebACL(request), context);
}

CreateByteMatchSetOutcome WAFRegionalClient::CreateByteMatchSet(const CreateByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateByteMatchSetOutcome(CreateByteMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateByteMatchSetOutcome(outcome.GetError());
  }
}

CreateByteMatchSetOutcomeCallable WAFRegionalClient::CreateByteMatchSetCallable(const CreateByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateByteMatchSetAsync(const CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateByteMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateByteMatchSetAsyncHelper(const CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateByteMatchSet(request), context);
}

CreateGeoMatchSetOutcome WAFRegionalClient::CreateGeoMatchSet(const CreateGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGeoMatchSetOutcome(CreateGeoMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateGeoMatchSetOutcome(outcome.GetError());
  }
}

CreateGeoMatchSetOutcomeCallable WAFRegionalClient::CreateGeoMatchSetCallable(const CreateGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateGeoMatchSetAsync(const CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGeoMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateGeoMatchSetAsyncHelper(const CreateGeoMatchSetRequest& request, const CreateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGeoMatchSet(request), context);
}

CreateIPSetOutcome WAFRegionalClient::CreateIPSet(const CreateIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateIPSetOutcome(CreateIPSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateIPSetOutcome(outcome.GetError());
  }
}

CreateIPSetOutcomeCallable WAFRegionalClient::CreateIPSetCallable(const CreateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateIPSetAsync(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIPSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateIPSetAsyncHelper(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIPSet(request), context);
}

CreateRateBasedRuleOutcome WAFRegionalClient::CreateRateBasedRule(const CreateRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRateBasedRuleOutcome(CreateRateBasedRuleResult(outcome.GetResult()));
  }
  else
  {
    return CreateRateBasedRuleOutcome(outcome.GetError());
  }
}

CreateRateBasedRuleOutcomeCallable WAFRegionalClient::CreateRateBasedRuleCallable(const CreateRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRateBasedRuleAsync(const CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRateBasedRuleAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateRateBasedRuleAsyncHelper(const CreateRateBasedRuleRequest& request, const CreateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRateBasedRule(request), context);
}

CreateRegexMatchSetOutcome WAFRegionalClient::CreateRegexMatchSet(const CreateRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRegexMatchSetOutcome(CreateRegexMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateRegexMatchSetOutcome(outcome.GetError());
  }
}

CreateRegexMatchSetOutcomeCallable WAFRegionalClient::CreateRegexMatchSetCallable(const CreateRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRegexMatchSetAsync(const CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRegexMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateRegexMatchSetAsyncHelper(const CreateRegexMatchSetRequest& request, const CreateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRegexMatchSet(request), context);
}

CreateRegexPatternSetOutcome WAFRegionalClient::CreateRegexPatternSet(const CreateRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRegexPatternSetOutcome(CreateRegexPatternSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateRegexPatternSetOutcome(outcome.GetError());
  }
}

CreateRegexPatternSetOutcomeCallable WAFRegionalClient::CreateRegexPatternSetCallable(const CreateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRegexPatternSetAsync(const CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRegexPatternSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateRegexPatternSetAsyncHelper(const CreateRegexPatternSetRequest& request, const CreateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRegexPatternSet(request), context);
}

CreateRuleOutcome WAFRegionalClient::CreateRule(const CreateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRuleOutcome(CreateRuleResult(outcome.GetResult()));
  }
  else
  {
    return CreateRuleOutcome(outcome.GetError());
  }
}

CreateRuleOutcomeCallable WAFRegionalClient::CreateRuleCallable(const CreateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRuleAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateRuleAsyncHelper(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRule(request), context);
}

CreateRuleGroupOutcome WAFRegionalClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRuleGroupOutcome(CreateRuleGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateRuleGroupOutcome(outcome.GetError());
  }
}

CreateRuleGroupOutcomeCallable WAFRegionalClient::CreateRuleGroupCallable(const CreateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateRuleGroupAsync(const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRuleGroupAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateRuleGroupAsyncHelper(const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRuleGroup(request), context);
}

CreateSizeConstraintSetOutcome WAFRegionalClient::CreateSizeConstraintSet(const CreateSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSizeConstraintSetOutcome(CreateSizeConstraintSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateSizeConstraintSetOutcome(outcome.GetError());
  }
}

CreateSizeConstraintSetOutcomeCallable WAFRegionalClient::CreateSizeConstraintSetCallable(const CreateSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateSizeConstraintSetAsync(const CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSizeConstraintSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateSizeConstraintSetAsyncHelper(const CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSizeConstraintSet(request), context);
}

CreateSqlInjectionMatchSetOutcome WAFRegionalClient::CreateSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSqlInjectionMatchSetOutcome(CreateSqlInjectionMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateSqlInjectionMatchSetOutcome(outcome.GetError());
  }
}

CreateSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::CreateSqlInjectionMatchSetCallable(const CreateSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateSqlInjectionMatchSetAsync(const CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSqlInjectionMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateSqlInjectionMatchSetAsyncHelper(const CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSqlInjectionMatchSet(request), context);
}

CreateWebACLOutcome WAFRegionalClient::CreateWebACL(const CreateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateWebACLOutcome(CreateWebACLResult(outcome.GetResult()));
  }
  else
  {
    return CreateWebACLOutcome(outcome.GetError());
  }
}

CreateWebACLOutcomeCallable WAFRegionalClient::CreateWebACLCallable(const CreateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateWebACLAsync(const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWebACLAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateWebACLAsyncHelper(const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWebACL(request), context);
}

CreateXssMatchSetOutcome WAFRegionalClient::CreateXssMatchSet(const CreateXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateXssMatchSetOutcome(CreateXssMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateXssMatchSetOutcome(outcome.GetError());
  }
}

CreateXssMatchSetOutcomeCallable WAFRegionalClient::CreateXssMatchSetCallable(const CreateXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::CreateXssMatchSetAsync(const CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateXssMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::CreateXssMatchSetAsyncHelper(const CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateXssMatchSet(request), context);
}

DeleteByteMatchSetOutcome WAFRegionalClient::DeleteByteMatchSet(const DeleteByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteByteMatchSetOutcome(DeleteByteMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteByteMatchSetOutcome(outcome.GetError());
  }
}

DeleteByteMatchSetOutcomeCallable WAFRegionalClient::DeleteByteMatchSetCallable(const DeleteByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteByteMatchSetAsync(const DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteByteMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteByteMatchSetAsyncHelper(const DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteByteMatchSet(request), context);
}

DeleteGeoMatchSetOutcome WAFRegionalClient::DeleteGeoMatchSet(const DeleteGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGeoMatchSetOutcome(DeleteGeoMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGeoMatchSetOutcome(outcome.GetError());
  }
}

DeleteGeoMatchSetOutcomeCallable WAFRegionalClient::DeleteGeoMatchSetCallable(const DeleteGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteGeoMatchSetAsync(const DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGeoMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteGeoMatchSetAsyncHelper(const DeleteGeoMatchSetRequest& request, const DeleteGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGeoMatchSet(request), context);
}

DeleteIPSetOutcome WAFRegionalClient::DeleteIPSet(const DeleteIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteIPSetOutcome(DeleteIPSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteIPSetOutcome(outcome.GetError());
  }
}

DeleteIPSetOutcomeCallable WAFRegionalClient::DeleteIPSetCallable(const DeleteIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteIPSetAsync(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIPSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteIPSetAsyncHelper(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIPSet(request), context);
}

DeleteLoggingConfigurationOutcome WAFRegionalClient::DeleteLoggingConfiguration(const DeleteLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLoggingConfigurationOutcome(DeleteLoggingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoggingConfigurationOutcome(outcome.GetError());
  }
}

DeleteLoggingConfigurationOutcomeCallable WAFRegionalClient::DeleteLoggingConfigurationCallable(const DeleteLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteLoggingConfigurationAsync(const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLoggingConfigurationAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteLoggingConfigurationAsyncHelper(const DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoggingConfiguration(request), context);
}

DeletePermissionPolicyOutcome WAFRegionalClient::DeletePermissionPolicy(const DeletePermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePermissionPolicyOutcome(DeletePermissionPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeletePermissionPolicyOutcome(outcome.GetError());
  }
}

DeletePermissionPolicyOutcomeCallable WAFRegionalClient::DeletePermissionPolicyCallable(const DeletePermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeletePermissionPolicyAsync(const DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePermissionPolicyAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeletePermissionPolicyAsyncHelper(const DeletePermissionPolicyRequest& request, const DeletePermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePermissionPolicy(request), context);
}

DeleteRateBasedRuleOutcome WAFRegionalClient::DeleteRateBasedRule(const DeleteRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRateBasedRuleOutcome(DeleteRateBasedRuleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRateBasedRuleOutcome(outcome.GetError());
  }
}

DeleteRateBasedRuleOutcomeCallable WAFRegionalClient::DeleteRateBasedRuleCallable(const DeleteRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRateBasedRuleAsync(const DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRateBasedRuleAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteRateBasedRuleAsyncHelper(const DeleteRateBasedRuleRequest& request, const DeleteRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRateBasedRule(request), context);
}

DeleteRegexMatchSetOutcome WAFRegionalClient::DeleteRegexMatchSet(const DeleteRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRegexMatchSetOutcome(DeleteRegexMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRegexMatchSetOutcome(outcome.GetError());
  }
}

DeleteRegexMatchSetOutcomeCallable WAFRegionalClient::DeleteRegexMatchSetCallable(const DeleteRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRegexMatchSetAsync(const DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRegexMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteRegexMatchSetAsyncHelper(const DeleteRegexMatchSetRequest& request, const DeleteRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRegexMatchSet(request), context);
}

DeleteRegexPatternSetOutcome WAFRegionalClient::DeleteRegexPatternSet(const DeleteRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRegexPatternSetOutcome(DeleteRegexPatternSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRegexPatternSetOutcome(outcome.GetError());
  }
}

DeleteRegexPatternSetOutcomeCallable WAFRegionalClient::DeleteRegexPatternSetCallable(const DeleteRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRegexPatternSetAsync(const DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRegexPatternSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteRegexPatternSetAsyncHelper(const DeleteRegexPatternSetRequest& request, const DeleteRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRegexPatternSet(request), context);
}

DeleteRuleOutcome WAFRegionalClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRuleOutcome(DeleteRuleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRuleOutcome(outcome.GetError());
  }
}

DeleteRuleOutcomeCallable WAFRegionalClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRuleAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteRuleAsyncHelper(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRule(request), context);
}

DeleteRuleGroupOutcome WAFRegionalClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRuleGroupOutcome(DeleteRuleGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRuleGroupOutcome(outcome.GetError());
  }
}

DeleteRuleGroupOutcomeCallable WAFRegionalClient::DeleteRuleGroupCallable(const DeleteRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteRuleGroupAsync(const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRuleGroupAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteRuleGroupAsyncHelper(const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRuleGroup(request), context);
}

DeleteSizeConstraintSetOutcome WAFRegionalClient::DeleteSizeConstraintSet(const DeleteSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSizeConstraintSetOutcome(DeleteSizeConstraintSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSizeConstraintSetOutcome(outcome.GetError());
  }
}

DeleteSizeConstraintSetOutcomeCallable WAFRegionalClient::DeleteSizeConstraintSetCallable(const DeleteSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteSizeConstraintSetAsync(const DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSizeConstraintSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteSizeConstraintSetAsyncHelper(const DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSizeConstraintSet(request), context);
}

DeleteSqlInjectionMatchSetOutcome WAFRegionalClient::DeleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSqlInjectionMatchSetOutcome(DeleteSqlInjectionMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSqlInjectionMatchSetOutcome(outcome.GetError());
  }
}

DeleteSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::DeleteSqlInjectionMatchSetCallable(const DeleteSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteSqlInjectionMatchSetAsync(const DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSqlInjectionMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteSqlInjectionMatchSetAsyncHelper(const DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSqlInjectionMatchSet(request), context);
}

DeleteWebACLOutcome WAFRegionalClient::DeleteWebACL(const DeleteWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteWebACLOutcome(DeleteWebACLResult(outcome.GetResult()));
  }
  else
  {
    return DeleteWebACLOutcome(outcome.GetError());
  }
}

DeleteWebACLOutcomeCallable WAFRegionalClient::DeleteWebACLCallable(const DeleteWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteWebACLAsync(const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWebACLAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteWebACLAsyncHelper(const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWebACL(request), context);
}

DeleteXssMatchSetOutcome WAFRegionalClient::DeleteXssMatchSet(const DeleteXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteXssMatchSetOutcome(DeleteXssMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteXssMatchSetOutcome(outcome.GetError());
  }
}

DeleteXssMatchSetOutcomeCallable WAFRegionalClient::DeleteXssMatchSetCallable(const DeleteXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DeleteXssMatchSetAsync(const DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteXssMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DeleteXssMatchSetAsyncHelper(const DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteXssMatchSet(request), context);
}

DisassociateWebACLOutcome WAFRegionalClient::DisassociateWebACL(const DisassociateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateWebACLOutcome(DisassociateWebACLResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateWebACLOutcome(outcome.GetError());
  }
}

DisassociateWebACLOutcomeCallable WAFRegionalClient::DisassociateWebACLCallable(const DisassociateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::DisassociateWebACLAsync(const DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateWebACLAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::DisassociateWebACLAsyncHelper(const DisassociateWebACLRequest& request, const DisassociateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateWebACL(request), context);
}

GetByteMatchSetOutcome WAFRegionalClient::GetByteMatchSet(const GetByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetByteMatchSetOutcome(GetByteMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return GetByteMatchSetOutcome(outcome.GetError());
  }
}

GetByteMatchSetOutcomeCallable WAFRegionalClient::GetByteMatchSetCallable(const GetByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetByteMatchSetAsync(const GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetByteMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetByteMatchSetAsyncHelper(const GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetByteMatchSet(request), context);
}

GetChangeTokenOutcome WAFRegionalClient::GetChangeToken(const GetChangeTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetChangeTokenOutcome(GetChangeTokenResult(outcome.GetResult()));
  }
  else
  {
    return GetChangeTokenOutcome(outcome.GetError());
  }
}

GetChangeTokenOutcomeCallable WAFRegionalClient::GetChangeTokenCallable(const GetChangeTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetChangeTokenAsync(const GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChangeTokenAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetChangeTokenAsyncHelper(const GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChangeToken(request), context);
}

GetChangeTokenStatusOutcome WAFRegionalClient::GetChangeTokenStatus(const GetChangeTokenStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetChangeTokenStatusOutcome(GetChangeTokenStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetChangeTokenStatusOutcome(outcome.GetError());
  }
}

GetChangeTokenStatusOutcomeCallable WAFRegionalClient::GetChangeTokenStatusCallable(const GetChangeTokenStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeTokenStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeTokenStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetChangeTokenStatusAsync(const GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChangeTokenStatusAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetChangeTokenStatusAsyncHelper(const GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChangeTokenStatus(request), context);
}

GetGeoMatchSetOutcome WAFRegionalClient::GetGeoMatchSet(const GetGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGeoMatchSetOutcome(GetGeoMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return GetGeoMatchSetOutcome(outcome.GetError());
  }
}

GetGeoMatchSetOutcomeCallable WAFRegionalClient::GetGeoMatchSetCallable(const GetGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetGeoMatchSetAsync(const GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGeoMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetGeoMatchSetAsyncHelper(const GetGeoMatchSetRequest& request, const GetGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGeoMatchSet(request), context);
}

GetIPSetOutcome WAFRegionalClient::GetIPSet(const GetIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetIPSetOutcome(GetIPSetResult(outcome.GetResult()));
  }
  else
  {
    return GetIPSetOutcome(outcome.GetError());
  }
}

GetIPSetOutcomeCallable WAFRegionalClient::GetIPSetCallable(const GetIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetIPSetAsync(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIPSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetIPSetAsyncHelper(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIPSet(request), context);
}

GetLoggingConfigurationOutcome WAFRegionalClient::GetLoggingConfiguration(const GetLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLoggingConfigurationOutcome(GetLoggingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetLoggingConfigurationOutcome(outcome.GetError());
  }
}

GetLoggingConfigurationOutcomeCallable WAFRegionalClient::GetLoggingConfigurationCallable(const GetLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetLoggingConfigurationAsync(const GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLoggingConfigurationAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetLoggingConfigurationAsyncHelper(const GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoggingConfiguration(request), context);
}

GetPermissionPolicyOutcome WAFRegionalClient::GetPermissionPolicy(const GetPermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPermissionPolicyOutcome(GetPermissionPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetPermissionPolicyOutcome(outcome.GetError());
  }
}

GetPermissionPolicyOutcomeCallable WAFRegionalClient::GetPermissionPolicyCallable(const GetPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetPermissionPolicyAsync(const GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPermissionPolicyAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetPermissionPolicyAsyncHelper(const GetPermissionPolicyRequest& request, const GetPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPermissionPolicy(request), context);
}

GetRateBasedRuleOutcome WAFRegionalClient::GetRateBasedRule(const GetRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRateBasedRuleOutcome(GetRateBasedRuleResult(outcome.GetResult()));
  }
  else
  {
    return GetRateBasedRuleOutcome(outcome.GetError());
  }
}

GetRateBasedRuleOutcomeCallable WAFRegionalClient::GetRateBasedRuleCallable(const GetRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRateBasedRuleAsync(const GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRateBasedRuleAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetRateBasedRuleAsyncHelper(const GetRateBasedRuleRequest& request, const GetRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRateBasedRule(request), context);
}

GetRateBasedRuleManagedKeysOutcome WAFRegionalClient::GetRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRateBasedRuleManagedKeysOutcome(GetRateBasedRuleManagedKeysResult(outcome.GetResult()));
  }
  else
  {
    return GetRateBasedRuleManagedKeysOutcome(outcome.GetError());
  }
}

GetRateBasedRuleManagedKeysOutcomeCallable WAFRegionalClient::GetRateBasedRuleManagedKeysCallable(const GetRateBasedRuleManagedKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRateBasedRuleManagedKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRateBasedRuleManagedKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRateBasedRuleManagedKeysAsync(const GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRateBasedRuleManagedKeysAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetRateBasedRuleManagedKeysAsyncHelper(const GetRateBasedRuleManagedKeysRequest& request, const GetRateBasedRuleManagedKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRateBasedRuleManagedKeys(request), context);
}

GetRegexMatchSetOutcome WAFRegionalClient::GetRegexMatchSet(const GetRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRegexMatchSetOutcome(GetRegexMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return GetRegexMatchSetOutcome(outcome.GetError());
  }
}

GetRegexMatchSetOutcomeCallable WAFRegionalClient::GetRegexMatchSetCallable(const GetRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRegexMatchSetAsync(const GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRegexMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetRegexMatchSetAsyncHelper(const GetRegexMatchSetRequest& request, const GetRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRegexMatchSet(request), context);
}

GetRegexPatternSetOutcome WAFRegionalClient::GetRegexPatternSet(const GetRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRegexPatternSetOutcome(GetRegexPatternSetResult(outcome.GetResult()));
  }
  else
  {
    return GetRegexPatternSetOutcome(outcome.GetError());
  }
}

GetRegexPatternSetOutcomeCallable WAFRegionalClient::GetRegexPatternSetCallable(const GetRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRegexPatternSetAsync(const GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRegexPatternSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetRegexPatternSetAsyncHelper(const GetRegexPatternSetRequest& request, const GetRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRegexPatternSet(request), context);
}

GetRuleOutcome WAFRegionalClient::GetRule(const GetRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRuleOutcome(GetRuleResult(outcome.GetResult()));
  }
  else
  {
    return GetRuleOutcome(outcome.GetError());
  }
}

GetRuleOutcomeCallable WAFRegionalClient::GetRuleCallable(const GetRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRuleAsync(const GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRuleAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetRuleAsyncHelper(const GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRule(request), context);
}

GetRuleGroupOutcome WAFRegionalClient::GetRuleGroup(const GetRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRuleGroupOutcome(GetRuleGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetRuleGroupOutcome(outcome.GetError());
  }
}

GetRuleGroupOutcomeCallable WAFRegionalClient::GetRuleGroupCallable(const GetRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetRuleGroupAsync(const GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRuleGroupAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetRuleGroupAsyncHelper(const GetRuleGroupRequest& request, const GetRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRuleGroup(request), context);
}

GetSampledRequestsOutcome WAFRegionalClient::GetSampledRequests(const GetSampledRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSampledRequestsOutcome(GetSampledRequestsResult(outcome.GetResult()));
  }
  else
  {
    return GetSampledRequestsOutcome(outcome.GetError());
  }
}

GetSampledRequestsOutcomeCallable WAFRegionalClient::GetSampledRequestsCallable(const GetSampledRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSampledRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSampledRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetSampledRequestsAsync(const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSampledRequestsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetSampledRequestsAsyncHelper(const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSampledRequests(request), context);
}

GetSizeConstraintSetOutcome WAFRegionalClient::GetSizeConstraintSet(const GetSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSizeConstraintSetOutcome(GetSizeConstraintSetResult(outcome.GetResult()));
  }
  else
  {
    return GetSizeConstraintSetOutcome(outcome.GetError());
  }
}

GetSizeConstraintSetOutcomeCallable WAFRegionalClient::GetSizeConstraintSetCallable(const GetSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetSizeConstraintSetAsync(const GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSizeConstraintSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetSizeConstraintSetAsyncHelper(const GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSizeConstraintSet(request), context);
}

GetSqlInjectionMatchSetOutcome WAFRegionalClient::GetSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSqlInjectionMatchSetOutcome(GetSqlInjectionMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return GetSqlInjectionMatchSetOutcome(outcome.GetError());
  }
}

GetSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::GetSqlInjectionMatchSetCallable(const GetSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetSqlInjectionMatchSetAsync(const GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSqlInjectionMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetSqlInjectionMatchSetAsyncHelper(const GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSqlInjectionMatchSet(request), context);
}

GetWebACLOutcome WAFRegionalClient::GetWebACL(const GetWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetWebACLOutcome(GetWebACLResult(outcome.GetResult()));
  }
  else
  {
    return GetWebACLOutcome(outcome.GetError());
  }
}

GetWebACLOutcomeCallable WAFRegionalClient::GetWebACLCallable(const GetWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetWebACLAsync(const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWebACLAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetWebACLAsyncHelper(const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWebACL(request), context);
}

GetWebACLForResourceOutcome WAFRegionalClient::GetWebACLForResource(const GetWebACLForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetWebACLForResourceOutcome(GetWebACLForResourceResult(outcome.GetResult()));
  }
  else
  {
    return GetWebACLForResourceOutcome(outcome.GetError());
  }
}

GetWebACLForResourceOutcomeCallable WAFRegionalClient::GetWebACLForResourceCallable(const GetWebACLForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebACLForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebACLForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetWebACLForResourceAsync(const GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWebACLForResourceAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetWebACLForResourceAsyncHelper(const GetWebACLForResourceRequest& request, const GetWebACLForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWebACLForResource(request), context);
}

GetXssMatchSetOutcome WAFRegionalClient::GetXssMatchSet(const GetXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetXssMatchSetOutcome(GetXssMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return GetXssMatchSetOutcome(outcome.GetError());
  }
}

GetXssMatchSetOutcomeCallable WAFRegionalClient::GetXssMatchSetCallable(const GetXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::GetXssMatchSetAsync(const GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetXssMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::GetXssMatchSetAsyncHelper(const GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetXssMatchSet(request), context);
}

ListActivatedRulesInRuleGroupOutcome WAFRegionalClient::ListActivatedRulesInRuleGroup(const ListActivatedRulesInRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListActivatedRulesInRuleGroupOutcome(ListActivatedRulesInRuleGroupResult(outcome.GetResult()));
  }
  else
  {
    return ListActivatedRulesInRuleGroupOutcome(outcome.GetError());
  }
}

ListActivatedRulesInRuleGroupOutcomeCallable WAFRegionalClient::ListActivatedRulesInRuleGroupCallable(const ListActivatedRulesInRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActivatedRulesInRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActivatedRulesInRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListActivatedRulesInRuleGroupAsync(const ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListActivatedRulesInRuleGroupAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListActivatedRulesInRuleGroupAsyncHelper(const ListActivatedRulesInRuleGroupRequest& request, const ListActivatedRulesInRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListActivatedRulesInRuleGroup(request), context);
}

ListByteMatchSetsOutcome WAFRegionalClient::ListByteMatchSets(const ListByteMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListByteMatchSetsOutcome(ListByteMatchSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListByteMatchSetsOutcome(outcome.GetError());
  }
}

ListByteMatchSetsOutcomeCallable WAFRegionalClient::ListByteMatchSetsCallable(const ListByteMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListByteMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListByteMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListByteMatchSetsAsync(const ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListByteMatchSetsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListByteMatchSetsAsyncHelper(const ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListByteMatchSets(request), context);
}

ListGeoMatchSetsOutcome WAFRegionalClient::ListGeoMatchSets(const ListGeoMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGeoMatchSetsOutcome(ListGeoMatchSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListGeoMatchSetsOutcome(outcome.GetError());
  }
}

ListGeoMatchSetsOutcomeCallable WAFRegionalClient::ListGeoMatchSetsCallable(const ListGeoMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGeoMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGeoMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListGeoMatchSetsAsync(const ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGeoMatchSetsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListGeoMatchSetsAsyncHelper(const ListGeoMatchSetsRequest& request, const ListGeoMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGeoMatchSets(request), context);
}

ListIPSetsOutcome WAFRegionalClient::ListIPSets(const ListIPSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListIPSetsOutcome(ListIPSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListIPSetsOutcome(outcome.GetError());
  }
}

ListIPSetsOutcomeCallable WAFRegionalClient::ListIPSetsCallable(const ListIPSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIPSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIPSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListIPSetsAsync(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIPSetsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListIPSetsAsyncHelper(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIPSets(request), context);
}

ListLoggingConfigurationsOutcome WAFRegionalClient::ListLoggingConfigurations(const ListLoggingConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLoggingConfigurationsOutcome(ListLoggingConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return ListLoggingConfigurationsOutcome(outcome.GetError());
  }
}

ListLoggingConfigurationsOutcomeCallable WAFRegionalClient::ListLoggingConfigurationsCallable(const ListLoggingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLoggingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLoggingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListLoggingConfigurationsAsync(const ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLoggingConfigurationsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListLoggingConfigurationsAsyncHelper(const ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLoggingConfigurations(request), context);
}

ListRateBasedRulesOutcome WAFRegionalClient::ListRateBasedRules(const ListRateBasedRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRateBasedRulesOutcome(ListRateBasedRulesResult(outcome.GetResult()));
  }
  else
  {
    return ListRateBasedRulesOutcome(outcome.GetError());
  }
}

ListRateBasedRulesOutcomeCallable WAFRegionalClient::ListRateBasedRulesCallable(const ListRateBasedRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRateBasedRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRateBasedRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRateBasedRulesAsync(const ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRateBasedRulesAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListRateBasedRulesAsyncHelper(const ListRateBasedRulesRequest& request, const ListRateBasedRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRateBasedRules(request), context);
}

ListRegexMatchSetsOutcome WAFRegionalClient::ListRegexMatchSets(const ListRegexMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRegexMatchSetsOutcome(ListRegexMatchSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListRegexMatchSetsOutcome(outcome.GetError());
  }
}

ListRegexMatchSetsOutcomeCallable WAFRegionalClient::ListRegexMatchSetsCallable(const ListRegexMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegexMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegexMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRegexMatchSetsAsync(const ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRegexMatchSetsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListRegexMatchSetsAsyncHelper(const ListRegexMatchSetsRequest& request, const ListRegexMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRegexMatchSets(request), context);
}

ListRegexPatternSetsOutcome WAFRegionalClient::ListRegexPatternSets(const ListRegexPatternSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRegexPatternSetsOutcome(ListRegexPatternSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListRegexPatternSetsOutcome(outcome.GetError());
  }
}

ListRegexPatternSetsOutcomeCallable WAFRegionalClient::ListRegexPatternSetsCallable(const ListRegexPatternSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegexPatternSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegexPatternSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRegexPatternSetsAsync(const ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRegexPatternSetsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListRegexPatternSetsAsyncHelper(const ListRegexPatternSetsRequest& request, const ListRegexPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRegexPatternSets(request), context);
}

ListResourcesForWebACLOutcome WAFRegionalClient::ListResourcesForWebACL(const ListResourcesForWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListResourcesForWebACLOutcome(ListResourcesForWebACLResult(outcome.GetResult()));
  }
  else
  {
    return ListResourcesForWebACLOutcome(outcome.GetError());
  }
}

ListResourcesForWebACLOutcomeCallable WAFRegionalClient::ListResourcesForWebACLCallable(const ListResourcesForWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesForWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourcesForWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListResourcesForWebACLAsync(const ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourcesForWebACLAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListResourcesForWebACLAsyncHelper(const ListResourcesForWebACLRequest& request, const ListResourcesForWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourcesForWebACL(request), context);
}

ListRuleGroupsOutcome WAFRegionalClient::ListRuleGroups(const ListRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRuleGroupsOutcome(ListRuleGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListRuleGroupsOutcome(outcome.GetError());
  }
}

ListRuleGroupsOutcomeCallable WAFRegionalClient::ListRuleGroupsCallable(const ListRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRuleGroupsAsync(const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRuleGroupsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListRuleGroupsAsyncHelper(const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRuleGroups(request), context);
}

ListRulesOutcome WAFRegionalClient::ListRules(const ListRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRulesOutcome(ListRulesResult(outcome.GetResult()));
  }
  else
  {
    return ListRulesOutcome(outcome.GetError());
  }
}

ListRulesOutcomeCallable WAFRegionalClient::ListRulesCallable(const ListRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRulesAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListRulesAsyncHelper(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRules(request), context);
}

ListSizeConstraintSetsOutcome WAFRegionalClient::ListSizeConstraintSets(const ListSizeConstraintSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSizeConstraintSetsOutcome(ListSizeConstraintSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListSizeConstraintSetsOutcome(outcome.GetError());
  }
}

ListSizeConstraintSetsOutcomeCallable WAFRegionalClient::ListSizeConstraintSetsCallable(const ListSizeConstraintSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSizeConstraintSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSizeConstraintSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListSizeConstraintSetsAsync(const ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSizeConstraintSetsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListSizeConstraintSetsAsyncHelper(const ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSizeConstraintSets(request), context);
}

ListSqlInjectionMatchSetsOutcome WAFRegionalClient::ListSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSqlInjectionMatchSetsOutcome(ListSqlInjectionMatchSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListSqlInjectionMatchSetsOutcome(outcome.GetError());
  }
}

ListSqlInjectionMatchSetsOutcomeCallable WAFRegionalClient::ListSqlInjectionMatchSetsCallable(const ListSqlInjectionMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSqlInjectionMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSqlInjectionMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListSqlInjectionMatchSetsAsync(const ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSqlInjectionMatchSetsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListSqlInjectionMatchSetsAsyncHelper(const ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSqlInjectionMatchSets(request), context);
}

ListSubscribedRuleGroupsOutcome WAFRegionalClient::ListSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSubscribedRuleGroupsOutcome(ListSubscribedRuleGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListSubscribedRuleGroupsOutcome(outcome.GetError());
  }
}

ListSubscribedRuleGroupsOutcomeCallable WAFRegionalClient::ListSubscribedRuleGroupsCallable(const ListSubscribedRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscribedRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscribedRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListSubscribedRuleGroupsAsync(const ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSubscribedRuleGroupsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListSubscribedRuleGroupsAsyncHelper(const ListSubscribedRuleGroupsRequest& request, const ListSubscribedRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSubscribedRuleGroups(request), context);
}

ListTagsForResourceOutcome WAFRegionalClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
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

ListTagsForResourceOutcomeCallable WAFRegionalClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListWebACLsOutcome WAFRegionalClient::ListWebACLs(const ListWebACLsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListWebACLsOutcome(ListWebACLsResult(outcome.GetResult()));
  }
  else
  {
    return ListWebACLsOutcome(outcome.GetError());
  }
}

ListWebACLsOutcomeCallable WAFRegionalClient::ListWebACLsCallable(const ListWebACLsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebACLsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebACLs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListWebACLsAsync(const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWebACLsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListWebACLsAsyncHelper(const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWebACLs(request), context);
}

ListXssMatchSetsOutcome WAFRegionalClient::ListXssMatchSets(const ListXssMatchSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListXssMatchSetsOutcome(ListXssMatchSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListXssMatchSetsOutcome(outcome.GetError());
  }
}

ListXssMatchSetsOutcomeCallable WAFRegionalClient::ListXssMatchSetsCallable(const ListXssMatchSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListXssMatchSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListXssMatchSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::ListXssMatchSetsAsync(const ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListXssMatchSetsAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::ListXssMatchSetsAsyncHelper(const ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListXssMatchSets(request), context);
}

PutLoggingConfigurationOutcome WAFRegionalClient::PutLoggingConfiguration(const PutLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutLoggingConfigurationOutcome(PutLoggingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutLoggingConfigurationOutcome(outcome.GetError());
  }
}

PutLoggingConfigurationOutcomeCallable WAFRegionalClient::PutLoggingConfigurationCallable(const PutLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::PutLoggingConfigurationAsync(const PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutLoggingConfigurationAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::PutLoggingConfigurationAsyncHelper(const PutLoggingConfigurationRequest& request, const PutLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutLoggingConfiguration(request), context);
}

PutPermissionPolicyOutcome WAFRegionalClient::PutPermissionPolicy(const PutPermissionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutPermissionPolicyOutcome(PutPermissionPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutPermissionPolicyOutcome(outcome.GetError());
  }
}

PutPermissionPolicyOutcomeCallable WAFRegionalClient::PutPermissionPolicyCallable(const PutPermissionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermissionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::PutPermissionPolicyAsync(const PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutPermissionPolicyAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::PutPermissionPolicyAsyncHelper(const PutPermissionPolicyRequest& request, const PutPermissionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPermissionPolicy(request), context);
}

TagResourceOutcome WAFRegionalClient::TagResource(const TagResourceRequest& request) const
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

TagResourceOutcomeCallable WAFRegionalClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome WAFRegionalClient::UntagResource(const UntagResourceRequest& request) const
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

UntagResourceOutcomeCallable WAFRegionalClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateByteMatchSetOutcome WAFRegionalClient::UpdateByteMatchSet(const UpdateByteMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateByteMatchSetOutcome(UpdateByteMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateByteMatchSetOutcome(outcome.GetError());
  }
}

UpdateByteMatchSetOutcomeCallable WAFRegionalClient::UpdateByteMatchSetCallable(const UpdateByteMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateByteMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateByteMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateByteMatchSetAsync(const UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateByteMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateByteMatchSetAsyncHelper(const UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateByteMatchSet(request), context);
}

UpdateGeoMatchSetOutcome WAFRegionalClient::UpdateGeoMatchSet(const UpdateGeoMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGeoMatchSetOutcome(UpdateGeoMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGeoMatchSetOutcome(outcome.GetError());
  }
}

UpdateGeoMatchSetOutcomeCallable WAFRegionalClient::UpdateGeoMatchSetCallable(const UpdateGeoMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGeoMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGeoMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateGeoMatchSetAsync(const UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGeoMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateGeoMatchSetAsyncHelper(const UpdateGeoMatchSetRequest& request, const UpdateGeoMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGeoMatchSet(request), context);
}

UpdateIPSetOutcome WAFRegionalClient::UpdateIPSet(const UpdateIPSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateIPSetOutcome(UpdateIPSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateIPSetOutcome(outcome.GetError());
  }
}

UpdateIPSetOutcomeCallable WAFRegionalClient::UpdateIPSetCallable(const UpdateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateIPSetAsync(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIPSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateIPSetAsyncHelper(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIPSet(request), context);
}

UpdateRateBasedRuleOutcome WAFRegionalClient::UpdateRateBasedRule(const UpdateRateBasedRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRateBasedRuleOutcome(UpdateRateBasedRuleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRateBasedRuleOutcome(outcome.GetError());
  }
}

UpdateRateBasedRuleOutcomeCallable WAFRegionalClient::UpdateRateBasedRuleCallable(const UpdateRateBasedRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRateBasedRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRateBasedRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRateBasedRuleAsync(const UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRateBasedRuleAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateRateBasedRuleAsyncHelper(const UpdateRateBasedRuleRequest& request, const UpdateRateBasedRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRateBasedRule(request), context);
}

UpdateRegexMatchSetOutcome WAFRegionalClient::UpdateRegexMatchSet(const UpdateRegexMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRegexMatchSetOutcome(UpdateRegexMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRegexMatchSetOutcome(outcome.GetError());
  }
}

UpdateRegexMatchSetOutcomeCallable WAFRegionalClient::UpdateRegexMatchSetCallable(const UpdateRegexMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegexMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegexMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRegexMatchSetAsync(const UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRegexMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateRegexMatchSetAsyncHelper(const UpdateRegexMatchSetRequest& request, const UpdateRegexMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRegexMatchSet(request), context);
}

UpdateRegexPatternSetOutcome WAFRegionalClient::UpdateRegexPatternSet(const UpdateRegexPatternSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRegexPatternSetOutcome(UpdateRegexPatternSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRegexPatternSetOutcome(outcome.GetError());
  }
}

UpdateRegexPatternSetOutcomeCallable WAFRegionalClient::UpdateRegexPatternSetCallable(const UpdateRegexPatternSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegexPatternSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegexPatternSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRegexPatternSetAsync(const UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRegexPatternSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateRegexPatternSetAsyncHelper(const UpdateRegexPatternSetRequest& request, const UpdateRegexPatternSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRegexPatternSet(request), context);
}

UpdateRuleOutcome WAFRegionalClient::UpdateRule(const UpdateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRuleOutcome(UpdateRuleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRuleOutcome(outcome.GetError());
  }
}

UpdateRuleOutcomeCallable WAFRegionalClient::UpdateRuleCallable(const UpdateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRuleAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateRuleAsyncHelper(const UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRule(request), context);
}

UpdateRuleGroupOutcome WAFRegionalClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRuleGroupOutcome(UpdateRuleGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRuleGroupOutcome(outcome.GetError());
  }
}

UpdateRuleGroupOutcomeCallable WAFRegionalClient::UpdateRuleGroupCallable(const UpdateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateRuleGroupAsync(const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRuleGroupAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateRuleGroupAsyncHelper(const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRuleGroup(request), context);
}

UpdateSizeConstraintSetOutcome WAFRegionalClient::UpdateSizeConstraintSet(const UpdateSizeConstraintSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSizeConstraintSetOutcome(UpdateSizeConstraintSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSizeConstraintSetOutcome(outcome.GetError());
  }
}

UpdateSizeConstraintSetOutcomeCallable WAFRegionalClient::UpdateSizeConstraintSetCallable(const UpdateSizeConstraintSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSizeConstraintSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSizeConstraintSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateSizeConstraintSetAsync(const UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSizeConstraintSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateSizeConstraintSetAsyncHelper(const UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSizeConstraintSet(request), context);
}

UpdateSqlInjectionMatchSetOutcome WAFRegionalClient::UpdateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSqlInjectionMatchSetOutcome(UpdateSqlInjectionMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSqlInjectionMatchSetOutcome(outcome.GetError());
  }
}

UpdateSqlInjectionMatchSetOutcomeCallable WAFRegionalClient::UpdateSqlInjectionMatchSetCallable(const UpdateSqlInjectionMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSqlInjectionMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSqlInjectionMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateSqlInjectionMatchSetAsync(const UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSqlInjectionMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateSqlInjectionMatchSetAsyncHelper(const UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSqlInjectionMatchSet(request), context);
}

UpdateWebACLOutcome WAFRegionalClient::UpdateWebACL(const UpdateWebACLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateWebACLOutcome(UpdateWebACLResult(outcome.GetResult()));
  }
  else
  {
    return UpdateWebACLOutcome(outcome.GetError());
  }
}

UpdateWebACLOutcomeCallable WAFRegionalClient::UpdateWebACLCallable(const UpdateWebACLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebACLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebACL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateWebACLAsync(const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateWebACLAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateWebACLAsyncHelper(const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateWebACL(request), context);
}

UpdateXssMatchSetOutcome WAFRegionalClient::UpdateXssMatchSet(const UpdateXssMatchSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateXssMatchSetOutcome(UpdateXssMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateXssMatchSetOutcome(outcome.GetError());
  }
}

UpdateXssMatchSetOutcomeCallable WAFRegionalClient::UpdateXssMatchSetCallable(const UpdateXssMatchSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateXssMatchSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateXssMatchSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WAFRegionalClient::UpdateXssMatchSetAsync(const UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateXssMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFRegionalClient::UpdateXssMatchSetAsyncHelper(const UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateXssMatchSet(request), context);
}

