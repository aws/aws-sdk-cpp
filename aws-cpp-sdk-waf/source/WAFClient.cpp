/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/WAFClient.h>
#include <aws/waf/WAFEndpoint.h>
#include <aws/waf/WAFErrorMarshaller.h>
#include <aws/waf/model/CreateByteMatchSetRequest.h>
#include <aws/waf/model/CreateIPSetRequest.h>
#include <aws/waf/model/CreateRuleRequest.h>
#include <aws/waf/model/CreateSizeConstraintSetRequest.h>
#include <aws/waf/model/CreateSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/CreateWebACLRequest.h>
#include <aws/waf/model/CreateXssMatchSetRequest.h>
#include <aws/waf/model/DeleteByteMatchSetRequest.h>
#include <aws/waf/model/DeleteIPSetRequest.h>
#include <aws/waf/model/DeleteRuleRequest.h>
#include <aws/waf/model/DeleteSizeConstraintSetRequest.h>
#include <aws/waf/model/DeleteSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/DeleteWebACLRequest.h>
#include <aws/waf/model/DeleteXssMatchSetRequest.h>
#include <aws/waf/model/GetByteMatchSetRequest.h>
#include <aws/waf/model/GetChangeTokenRequest.h>
#include <aws/waf/model/GetChangeTokenStatusRequest.h>
#include <aws/waf/model/GetIPSetRequest.h>
#include <aws/waf/model/GetRuleRequest.h>
#include <aws/waf/model/GetSampledRequestsRequest.h>
#include <aws/waf/model/GetSizeConstraintSetRequest.h>
#include <aws/waf/model/GetSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/GetWebACLRequest.h>
#include <aws/waf/model/GetXssMatchSetRequest.h>
#include <aws/waf/model/ListByteMatchSetsRequest.h>
#include <aws/waf/model/ListIPSetsRequest.h>
#include <aws/waf/model/ListRulesRequest.h>
#include <aws/waf/model/ListSizeConstraintSetsRequest.h>
#include <aws/waf/model/ListSqlInjectionMatchSetsRequest.h>
#include <aws/waf/model/ListWebACLsRequest.h>
#include <aws/waf/model/ListXssMatchSetsRequest.h>
#include <aws/waf/model/UpdateByteMatchSetRequest.h>
#include <aws/waf/model/UpdateIPSetRequest.h>
#include <aws/waf/model/UpdateRuleRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFClient::WAFClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFClient::WAFClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WAFErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WAFClient::~WAFClient()
{
}

void WAFClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << WAFEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateByteMatchSetOutcome WAFClient::CreateByteMatchSet(const CreateByteMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateByteMatchSetOutcome(CreateByteMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateByteMatchSetOutcome(outcome.GetError());
  }
}

CreateByteMatchSetOutcomeCallable WAFClient::CreateByteMatchSetCallable(const CreateByteMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateByteMatchSet(request); } );
}

void WAFClient::CreateByteMatchSetAsync(const CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateByteMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::CreateByteMatchSetAsyncHelper(const CreateByteMatchSetRequest& request, const CreateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateByteMatchSet(request), context);
}

CreateIPSetOutcome WAFClient::CreateIPSet(const CreateIPSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateIPSetOutcome(CreateIPSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateIPSetOutcome(outcome.GetError());
  }
}

CreateIPSetOutcomeCallable WAFClient::CreateIPSetCallable(const CreateIPSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateIPSet(request); } );
}

void WAFClient::CreateIPSetAsync(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIPSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::CreateIPSetAsyncHelper(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIPSet(request), context);
}

CreateRuleOutcome WAFClient::CreateRule(const CreateRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateRuleOutcome(CreateRuleResult(outcome.GetResult()));
  }
  else
  {
    return CreateRuleOutcome(outcome.GetError());
  }
}

CreateRuleOutcomeCallable WAFClient::CreateRuleCallable(const CreateRuleRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateRule(request); } );
}

void WAFClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRuleAsyncHelper( request, handler, context ); } );
}

void WAFClient::CreateRuleAsyncHelper(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRule(request), context);
}

CreateSizeConstraintSetOutcome WAFClient::CreateSizeConstraintSet(const CreateSizeConstraintSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSizeConstraintSetOutcome(CreateSizeConstraintSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateSizeConstraintSetOutcome(outcome.GetError());
  }
}

CreateSizeConstraintSetOutcomeCallable WAFClient::CreateSizeConstraintSetCallable(const CreateSizeConstraintSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateSizeConstraintSet(request); } );
}

void WAFClient::CreateSizeConstraintSetAsync(const CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSizeConstraintSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::CreateSizeConstraintSetAsyncHelper(const CreateSizeConstraintSetRequest& request, const CreateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSizeConstraintSet(request), context);
}

CreateSqlInjectionMatchSetOutcome WAFClient::CreateSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateSqlInjectionMatchSetOutcome(CreateSqlInjectionMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateSqlInjectionMatchSetOutcome(outcome.GetError());
  }
}

CreateSqlInjectionMatchSetOutcomeCallable WAFClient::CreateSqlInjectionMatchSetCallable(const CreateSqlInjectionMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateSqlInjectionMatchSet(request); } );
}

void WAFClient::CreateSqlInjectionMatchSetAsync(const CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSqlInjectionMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::CreateSqlInjectionMatchSetAsyncHelper(const CreateSqlInjectionMatchSetRequest& request, const CreateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSqlInjectionMatchSet(request), context);
}

CreateWebACLOutcome WAFClient::CreateWebACL(const CreateWebACLRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateWebACLOutcome(CreateWebACLResult(outcome.GetResult()));
  }
  else
  {
    return CreateWebACLOutcome(outcome.GetError());
  }
}

CreateWebACLOutcomeCallable WAFClient::CreateWebACLCallable(const CreateWebACLRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateWebACL(request); } );
}

void WAFClient::CreateWebACLAsync(const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWebACLAsyncHelper( request, handler, context ); } );
}

void WAFClient::CreateWebACLAsyncHelper(const CreateWebACLRequest& request, const CreateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWebACL(request), context);
}

CreateXssMatchSetOutcome WAFClient::CreateXssMatchSet(const CreateXssMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateXssMatchSetOutcome(CreateXssMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateXssMatchSetOutcome(outcome.GetError());
  }
}

CreateXssMatchSetOutcomeCallable WAFClient::CreateXssMatchSetCallable(const CreateXssMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->CreateXssMatchSet(request); } );
}

void WAFClient::CreateXssMatchSetAsync(const CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateXssMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::CreateXssMatchSetAsyncHelper(const CreateXssMatchSetRequest& request, const CreateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateXssMatchSet(request), context);
}

DeleteByteMatchSetOutcome WAFClient::DeleteByteMatchSet(const DeleteByteMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteByteMatchSetOutcome(DeleteByteMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteByteMatchSetOutcome(outcome.GetError());
  }
}

DeleteByteMatchSetOutcomeCallable WAFClient::DeleteByteMatchSetCallable(const DeleteByteMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteByteMatchSet(request); } );
}

void WAFClient::DeleteByteMatchSetAsync(const DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteByteMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::DeleteByteMatchSetAsyncHelper(const DeleteByteMatchSetRequest& request, const DeleteByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteByteMatchSet(request), context);
}

DeleteIPSetOutcome WAFClient::DeleteIPSet(const DeleteIPSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteIPSetOutcome(DeleteIPSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteIPSetOutcome(outcome.GetError());
  }
}

DeleteIPSetOutcomeCallable WAFClient::DeleteIPSetCallable(const DeleteIPSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteIPSet(request); } );
}

void WAFClient::DeleteIPSetAsync(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIPSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::DeleteIPSetAsyncHelper(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIPSet(request), context);
}

DeleteRuleOutcome WAFClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRuleOutcome(DeleteRuleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRuleOutcome(outcome.GetError());
  }
}

DeleteRuleOutcomeCallable WAFClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteRule(request); } );
}

void WAFClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRuleAsyncHelper( request, handler, context ); } );
}

void WAFClient::DeleteRuleAsyncHelper(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRule(request), context);
}

DeleteSizeConstraintSetOutcome WAFClient::DeleteSizeConstraintSet(const DeleteSizeConstraintSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSizeConstraintSetOutcome(DeleteSizeConstraintSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSizeConstraintSetOutcome(outcome.GetError());
  }
}

DeleteSizeConstraintSetOutcomeCallable WAFClient::DeleteSizeConstraintSetCallable(const DeleteSizeConstraintSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteSizeConstraintSet(request); } );
}

void WAFClient::DeleteSizeConstraintSetAsync(const DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSizeConstraintSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::DeleteSizeConstraintSetAsyncHelper(const DeleteSizeConstraintSetRequest& request, const DeleteSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSizeConstraintSet(request), context);
}

DeleteSqlInjectionMatchSetOutcome WAFClient::DeleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSqlInjectionMatchSetOutcome(DeleteSqlInjectionMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSqlInjectionMatchSetOutcome(outcome.GetError());
  }
}

DeleteSqlInjectionMatchSetOutcomeCallable WAFClient::DeleteSqlInjectionMatchSetCallable(const DeleteSqlInjectionMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteSqlInjectionMatchSet(request); } );
}

void WAFClient::DeleteSqlInjectionMatchSetAsync(const DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSqlInjectionMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::DeleteSqlInjectionMatchSetAsyncHelper(const DeleteSqlInjectionMatchSetRequest& request, const DeleteSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSqlInjectionMatchSet(request), context);
}

DeleteWebACLOutcome WAFClient::DeleteWebACL(const DeleteWebACLRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteWebACLOutcome(DeleteWebACLResult(outcome.GetResult()));
  }
  else
  {
    return DeleteWebACLOutcome(outcome.GetError());
  }
}

DeleteWebACLOutcomeCallable WAFClient::DeleteWebACLCallable(const DeleteWebACLRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteWebACL(request); } );
}

void WAFClient::DeleteWebACLAsync(const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWebACLAsyncHelper( request, handler, context ); } );
}

void WAFClient::DeleteWebACLAsyncHelper(const DeleteWebACLRequest& request, const DeleteWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWebACL(request), context);
}

DeleteXssMatchSetOutcome WAFClient::DeleteXssMatchSet(const DeleteXssMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteXssMatchSetOutcome(DeleteXssMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteXssMatchSetOutcome(outcome.GetError());
  }
}

DeleteXssMatchSetOutcomeCallable WAFClient::DeleteXssMatchSetCallable(const DeleteXssMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DeleteXssMatchSet(request); } );
}

void WAFClient::DeleteXssMatchSetAsync(const DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteXssMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::DeleteXssMatchSetAsyncHelper(const DeleteXssMatchSetRequest& request, const DeleteXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteXssMatchSet(request), context);
}

GetByteMatchSetOutcome WAFClient::GetByteMatchSet(const GetByteMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetByteMatchSetOutcome(GetByteMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return GetByteMatchSetOutcome(outcome.GetError());
  }
}

GetByteMatchSetOutcomeCallable WAFClient::GetByteMatchSetCallable(const GetByteMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetByteMatchSet(request); } );
}

void WAFClient::GetByteMatchSetAsync(const GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetByteMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetByteMatchSetAsyncHelper(const GetByteMatchSetRequest& request, const GetByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetByteMatchSet(request), context);
}

GetChangeTokenOutcome WAFClient::GetChangeToken(const GetChangeTokenRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetChangeTokenOutcome(GetChangeTokenResult(outcome.GetResult()));
  }
  else
  {
    return GetChangeTokenOutcome(outcome.GetError());
  }
}

GetChangeTokenOutcomeCallable WAFClient::GetChangeTokenCallable(const GetChangeTokenRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetChangeToken(request); } );
}

void WAFClient::GetChangeTokenAsync(const GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChangeTokenAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetChangeTokenAsyncHelper(const GetChangeTokenRequest& request, const GetChangeTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChangeToken(request), context);
}

GetChangeTokenStatusOutcome WAFClient::GetChangeTokenStatus(const GetChangeTokenStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetChangeTokenStatusOutcome(GetChangeTokenStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetChangeTokenStatusOutcome(outcome.GetError());
  }
}

GetChangeTokenStatusOutcomeCallable WAFClient::GetChangeTokenStatusCallable(const GetChangeTokenStatusRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetChangeTokenStatus(request); } );
}

void WAFClient::GetChangeTokenStatusAsync(const GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChangeTokenStatusAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetChangeTokenStatusAsyncHelper(const GetChangeTokenStatusRequest& request, const GetChangeTokenStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChangeTokenStatus(request), context);
}

GetIPSetOutcome WAFClient::GetIPSet(const GetIPSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIPSetOutcome(GetIPSetResult(outcome.GetResult()));
  }
  else
  {
    return GetIPSetOutcome(outcome.GetError());
  }
}

GetIPSetOutcomeCallable WAFClient::GetIPSetCallable(const GetIPSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetIPSet(request); } );
}

void WAFClient::GetIPSetAsync(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIPSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetIPSetAsyncHelper(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIPSet(request), context);
}

GetRuleOutcome WAFClient::GetRule(const GetRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetRuleOutcome(GetRuleResult(outcome.GetResult()));
  }
  else
  {
    return GetRuleOutcome(outcome.GetError());
  }
}

GetRuleOutcomeCallable WAFClient::GetRuleCallable(const GetRuleRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetRule(request); } );
}

void WAFClient::GetRuleAsync(const GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRuleAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetRuleAsyncHelper(const GetRuleRequest& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRule(request), context);
}

GetSampledRequestsOutcome WAFClient::GetSampledRequests(const GetSampledRequestsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSampledRequestsOutcome(GetSampledRequestsResult(outcome.GetResult()));
  }
  else
  {
    return GetSampledRequestsOutcome(outcome.GetError());
  }
}

GetSampledRequestsOutcomeCallable WAFClient::GetSampledRequestsCallable(const GetSampledRequestsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetSampledRequests(request); } );
}

void WAFClient::GetSampledRequestsAsync(const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSampledRequestsAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetSampledRequestsAsyncHelper(const GetSampledRequestsRequest& request, const GetSampledRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSampledRequests(request), context);
}

GetSizeConstraintSetOutcome WAFClient::GetSizeConstraintSet(const GetSizeConstraintSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSizeConstraintSetOutcome(GetSizeConstraintSetResult(outcome.GetResult()));
  }
  else
  {
    return GetSizeConstraintSetOutcome(outcome.GetError());
  }
}

GetSizeConstraintSetOutcomeCallable WAFClient::GetSizeConstraintSetCallable(const GetSizeConstraintSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetSizeConstraintSet(request); } );
}

void WAFClient::GetSizeConstraintSetAsync(const GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSizeConstraintSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetSizeConstraintSetAsyncHelper(const GetSizeConstraintSetRequest& request, const GetSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSizeConstraintSet(request), context);
}

GetSqlInjectionMatchSetOutcome WAFClient::GetSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSqlInjectionMatchSetOutcome(GetSqlInjectionMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return GetSqlInjectionMatchSetOutcome(outcome.GetError());
  }
}

GetSqlInjectionMatchSetOutcomeCallable WAFClient::GetSqlInjectionMatchSetCallable(const GetSqlInjectionMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetSqlInjectionMatchSet(request); } );
}

void WAFClient::GetSqlInjectionMatchSetAsync(const GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSqlInjectionMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetSqlInjectionMatchSetAsyncHelper(const GetSqlInjectionMatchSetRequest& request, const GetSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSqlInjectionMatchSet(request), context);
}

GetWebACLOutcome WAFClient::GetWebACL(const GetWebACLRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetWebACLOutcome(GetWebACLResult(outcome.GetResult()));
  }
  else
  {
    return GetWebACLOutcome(outcome.GetError());
  }
}

GetWebACLOutcomeCallable WAFClient::GetWebACLCallable(const GetWebACLRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetWebACL(request); } );
}

void WAFClient::GetWebACLAsync(const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWebACLAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetWebACLAsyncHelper(const GetWebACLRequest& request, const GetWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWebACL(request), context);
}

GetXssMatchSetOutcome WAFClient::GetXssMatchSet(const GetXssMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetXssMatchSetOutcome(GetXssMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return GetXssMatchSetOutcome(outcome.GetError());
  }
}

GetXssMatchSetOutcomeCallable WAFClient::GetXssMatchSetCallable(const GetXssMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->GetXssMatchSet(request); } );
}

void WAFClient::GetXssMatchSetAsync(const GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetXssMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::GetXssMatchSetAsyncHelper(const GetXssMatchSetRequest& request, const GetXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetXssMatchSet(request), context);
}

ListByteMatchSetsOutcome WAFClient::ListByteMatchSets(const ListByteMatchSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListByteMatchSetsOutcome(ListByteMatchSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListByteMatchSetsOutcome(outcome.GetError());
  }
}

ListByteMatchSetsOutcomeCallable WAFClient::ListByteMatchSetsCallable(const ListByteMatchSetsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListByteMatchSets(request); } );
}

void WAFClient::ListByteMatchSetsAsync(const ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListByteMatchSetsAsyncHelper( request, handler, context ); } );
}

void WAFClient::ListByteMatchSetsAsyncHelper(const ListByteMatchSetsRequest& request, const ListByteMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListByteMatchSets(request), context);
}

ListIPSetsOutcome WAFClient::ListIPSets(const ListIPSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListIPSetsOutcome(ListIPSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListIPSetsOutcome(outcome.GetError());
  }
}

ListIPSetsOutcomeCallable WAFClient::ListIPSetsCallable(const ListIPSetsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListIPSets(request); } );
}

void WAFClient::ListIPSetsAsync(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIPSetsAsyncHelper( request, handler, context ); } );
}

void WAFClient::ListIPSetsAsyncHelper(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIPSets(request), context);
}

ListRulesOutcome WAFClient::ListRules(const ListRulesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRulesOutcome(ListRulesResult(outcome.GetResult()));
  }
  else
  {
    return ListRulesOutcome(outcome.GetError());
  }
}

ListRulesOutcomeCallable WAFClient::ListRulesCallable(const ListRulesRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListRules(request); } );
}

void WAFClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRulesAsyncHelper( request, handler, context ); } );
}

void WAFClient::ListRulesAsyncHelper(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRules(request), context);
}

ListSizeConstraintSetsOutcome WAFClient::ListSizeConstraintSets(const ListSizeConstraintSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListSizeConstraintSetsOutcome(ListSizeConstraintSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListSizeConstraintSetsOutcome(outcome.GetError());
  }
}

ListSizeConstraintSetsOutcomeCallable WAFClient::ListSizeConstraintSetsCallable(const ListSizeConstraintSetsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListSizeConstraintSets(request); } );
}

void WAFClient::ListSizeConstraintSetsAsync(const ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSizeConstraintSetsAsyncHelper( request, handler, context ); } );
}

void WAFClient::ListSizeConstraintSetsAsyncHelper(const ListSizeConstraintSetsRequest& request, const ListSizeConstraintSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSizeConstraintSets(request), context);
}

ListSqlInjectionMatchSetsOutcome WAFClient::ListSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListSqlInjectionMatchSetsOutcome(ListSqlInjectionMatchSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListSqlInjectionMatchSetsOutcome(outcome.GetError());
  }
}

ListSqlInjectionMatchSetsOutcomeCallable WAFClient::ListSqlInjectionMatchSetsCallable(const ListSqlInjectionMatchSetsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListSqlInjectionMatchSets(request); } );
}

void WAFClient::ListSqlInjectionMatchSetsAsync(const ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSqlInjectionMatchSetsAsyncHelper( request, handler, context ); } );
}

void WAFClient::ListSqlInjectionMatchSetsAsyncHelper(const ListSqlInjectionMatchSetsRequest& request, const ListSqlInjectionMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSqlInjectionMatchSets(request), context);
}

ListWebACLsOutcome WAFClient::ListWebACLs(const ListWebACLsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListWebACLsOutcome(ListWebACLsResult(outcome.GetResult()));
  }
  else
  {
    return ListWebACLsOutcome(outcome.GetError());
  }
}

ListWebACLsOutcomeCallable WAFClient::ListWebACLsCallable(const ListWebACLsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListWebACLs(request); } );
}

void WAFClient::ListWebACLsAsync(const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWebACLsAsyncHelper( request, handler, context ); } );
}

void WAFClient::ListWebACLsAsyncHelper(const ListWebACLsRequest& request, const ListWebACLsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWebACLs(request), context);
}

ListXssMatchSetsOutcome WAFClient::ListXssMatchSets(const ListXssMatchSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListXssMatchSetsOutcome(ListXssMatchSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListXssMatchSetsOutcome(outcome.GetError());
  }
}

ListXssMatchSetsOutcomeCallable WAFClient::ListXssMatchSetsCallable(const ListXssMatchSetsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListXssMatchSets(request); } );
}

void WAFClient::ListXssMatchSetsAsync(const ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListXssMatchSetsAsyncHelper( request, handler, context ); } );
}

void WAFClient::ListXssMatchSetsAsyncHelper(const ListXssMatchSetsRequest& request, const ListXssMatchSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListXssMatchSets(request), context);
}

UpdateByteMatchSetOutcome WAFClient::UpdateByteMatchSet(const UpdateByteMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateByteMatchSetOutcome(UpdateByteMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateByteMatchSetOutcome(outcome.GetError());
  }
}

UpdateByteMatchSetOutcomeCallable WAFClient::UpdateByteMatchSetCallable(const UpdateByteMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateByteMatchSet(request); } );
}

void WAFClient::UpdateByteMatchSetAsync(const UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateByteMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::UpdateByteMatchSetAsyncHelper(const UpdateByteMatchSetRequest& request, const UpdateByteMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateByteMatchSet(request), context);
}

UpdateIPSetOutcome WAFClient::UpdateIPSet(const UpdateIPSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateIPSetOutcome(UpdateIPSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateIPSetOutcome(outcome.GetError());
  }
}

UpdateIPSetOutcomeCallable WAFClient::UpdateIPSetCallable(const UpdateIPSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateIPSet(request); } );
}

void WAFClient::UpdateIPSetAsync(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIPSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::UpdateIPSetAsyncHelper(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIPSet(request), context);
}

UpdateRuleOutcome WAFClient::UpdateRule(const UpdateRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateRuleOutcome(UpdateRuleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRuleOutcome(outcome.GetError());
  }
}

UpdateRuleOutcomeCallable WAFClient::UpdateRuleCallable(const UpdateRuleRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateRule(request); } );
}

void WAFClient::UpdateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRuleAsyncHelper( request, handler, context ); } );
}

void WAFClient::UpdateRuleAsyncHelper(const UpdateRuleRequest& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRule(request), context);
}

UpdateSizeConstraintSetOutcome WAFClient::UpdateSizeConstraintSet(const UpdateSizeConstraintSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateSizeConstraintSetOutcome(UpdateSizeConstraintSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSizeConstraintSetOutcome(outcome.GetError());
  }
}

UpdateSizeConstraintSetOutcomeCallable WAFClient::UpdateSizeConstraintSetCallable(const UpdateSizeConstraintSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateSizeConstraintSet(request); } );
}

void WAFClient::UpdateSizeConstraintSetAsync(const UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSizeConstraintSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::UpdateSizeConstraintSetAsyncHelper(const UpdateSizeConstraintSetRequest& request, const UpdateSizeConstraintSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSizeConstraintSet(request), context);
}

UpdateSqlInjectionMatchSetOutcome WAFClient::UpdateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateSqlInjectionMatchSetOutcome(UpdateSqlInjectionMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSqlInjectionMatchSetOutcome(outcome.GetError());
  }
}

UpdateSqlInjectionMatchSetOutcomeCallable WAFClient::UpdateSqlInjectionMatchSetCallable(const UpdateSqlInjectionMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateSqlInjectionMatchSet(request); } );
}

void WAFClient::UpdateSqlInjectionMatchSetAsync(const UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSqlInjectionMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::UpdateSqlInjectionMatchSetAsyncHelper(const UpdateSqlInjectionMatchSetRequest& request, const UpdateSqlInjectionMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSqlInjectionMatchSet(request), context);
}

UpdateWebACLOutcome WAFClient::UpdateWebACL(const UpdateWebACLRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateWebACLOutcome(UpdateWebACLResult(outcome.GetResult()));
  }
  else
  {
    return UpdateWebACLOutcome(outcome.GetError());
  }
}

UpdateWebACLOutcomeCallable WAFClient::UpdateWebACLCallable(const UpdateWebACLRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateWebACL(request); } );
}

void WAFClient::UpdateWebACLAsync(const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateWebACLAsyncHelper( request, handler, context ); } );
}

void WAFClient::UpdateWebACLAsyncHelper(const UpdateWebACLRequest& request, const UpdateWebACLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateWebACL(request), context);
}

UpdateXssMatchSetOutcome WAFClient::UpdateXssMatchSet(const UpdateXssMatchSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateXssMatchSetOutcome(UpdateXssMatchSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateXssMatchSetOutcome(outcome.GetError());
  }
}

UpdateXssMatchSetOutcomeCallable WAFClient::UpdateXssMatchSetCallable(const UpdateXssMatchSetRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateXssMatchSet(request); } );
}

void WAFClient::UpdateXssMatchSetAsync(const UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateXssMatchSetAsyncHelper( request, handler, context ); } );
}

void WAFClient::UpdateXssMatchSetAsyncHelper(const UpdateXssMatchSetRequest& request, const UpdateXssMatchSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateXssMatchSet(request), context);
}

