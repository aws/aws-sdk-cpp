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

#include <aws/codestar-notifications/CodeStarNotificationsClient.h>
#include <aws/codestar-notifications/CodeStarNotificationsEndpoint.h>
#include <aws/codestar-notifications/CodeStarNotificationsErrorMarshaller.h>
#include <aws/codestar-notifications/model/CreateNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/DeleteNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/DeleteTargetRequest.h>
#include <aws/codestar-notifications/model/DescribeNotificationRuleRequest.h>
#include <aws/codestar-notifications/model/ListEventTypesRequest.h>
#include <aws/codestar-notifications/model/ListNotificationRulesRequest.h>
#include <aws/codestar-notifications/model/ListTagsForResourceRequest.h>
#include <aws/codestar-notifications/model/ListTargetsRequest.h>
#include <aws/codestar-notifications/model/SubscribeRequest.h>
#include <aws/codestar-notifications/model/TagResourceRequest.h>
#include <aws/codestar-notifications/model/UnsubscribeRequest.h>
#include <aws/codestar-notifications/model/UntagResourceRequest.h>
#include <aws/codestar-notifications/model/UpdateNotificationRuleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeStarNotifications;
using namespace Aws::CodeStarNotifications::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codestar-notifications";
static const char* ALLOCATION_TAG = "CodeStarNotificationsClient";


CodeStarNotificationsClient::CodeStarNotificationsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CodeStarNotificationsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeStarNotificationsClient::CodeStarNotificationsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CodeStarNotificationsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeStarNotificationsClient::CodeStarNotificationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CodeStarNotificationsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeStarNotificationsClient::~CodeStarNotificationsClient()
{
}

void CodeStarNotificationsClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("codestar notifications");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeStarNotificationsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeStarNotificationsClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateNotificationRuleOutcome CodeStarNotificationsClient::CreateNotificationRule(const CreateNotificationRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createNotificationRule";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateNotificationRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNotificationRuleOutcomeCallable CodeStarNotificationsClient::CreateNotificationRuleCallable(const CreateNotificationRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotificationRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotificationRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::CreateNotificationRuleAsync(const CreateNotificationRuleRequest& request, const CreateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNotificationRuleAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::CreateNotificationRuleAsyncHelper(const CreateNotificationRuleRequest& request, const CreateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNotificationRule(request), context);
}

DeleteNotificationRuleOutcome CodeStarNotificationsClient::DeleteNotificationRule(const DeleteNotificationRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteNotificationRule";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteNotificationRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNotificationRuleOutcomeCallable CodeStarNotificationsClient::DeleteNotificationRuleCallable(const DeleteNotificationRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotificationRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotificationRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::DeleteNotificationRuleAsync(const DeleteNotificationRuleRequest& request, const DeleteNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNotificationRuleAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::DeleteNotificationRuleAsyncHelper(const DeleteNotificationRuleRequest& request, const DeleteNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNotificationRule(request), context);
}

DeleteTargetOutcome CodeStarNotificationsClient::DeleteTarget(const DeleteTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteTarget";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTargetOutcomeCallable CodeStarNotificationsClient::DeleteTargetCallable(const DeleteTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::DeleteTargetAsync(const DeleteTargetRequest& request, const DeleteTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTargetAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::DeleteTargetAsyncHelper(const DeleteTargetRequest& request, const DeleteTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTarget(request), context);
}

DescribeNotificationRuleOutcome CodeStarNotificationsClient::DescribeNotificationRule(const DescribeNotificationRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeNotificationRule";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeNotificationRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotificationRuleOutcomeCallable CodeStarNotificationsClient::DescribeNotificationRuleCallable(const DescribeNotificationRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotificationRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotificationRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::DescribeNotificationRuleAsync(const DescribeNotificationRuleRequest& request, const DescribeNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNotificationRuleAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::DescribeNotificationRuleAsyncHelper(const DescribeNotificationRuleRequest& request, const DescribeNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNotificationRule(request), context);
}

ListEventTypesOutcome CodeStarNotificationsClient::ListEventTypes(const ListEventTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listEventTypes";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListEventTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventTypesOutcomeCallable CodeStarNotificationsClient::ListEventTypesCallable(const ListEventTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::ListEventTypesAsync(const ListEventTypesRequest& request, const ListEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEventTypesAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::ListEventTypesAsyncHelper(const ListEventTypesRequest& request, const ListEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEventTypes(request), context);
}

ListNotificationRulesOutcome CodeStarNotificationsClient::ListNotificationRules(const ListNotificationRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listNotificationRules";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListNotificationRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotificationRulesOutcomeCallable CodeStarNotificationsClient::ListNotificationRulesCallable(const ListNotificationRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotificationRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotificationRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::ListNotificationRulesAsync(const ListNotificationRulesRequest& request, const ListNotificationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNotificationRulesAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::ListNotificationRulesAsyncHelper(const ListNotificationRulesRequest& request, const ListNotificationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNotificationRules(request), context);
}

ListTagsForResourceOutcome CodeStarNotificationsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listTagsForResource";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CodeStarNotificationsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTargetsOutcome CodeStarNotificationsClient::ListTargets(const ListTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listTargets";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTargetsOutcomeCallable CodeStarNotificationsClient::ListTargetsCallable(const ListTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::ListTargetsAsync(const ListTargetsRequest& request, const ListTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTargetsAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::ListTargetsAsyncHelper(const ListTargetsRequest& request, const ListTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTargets(request), context);
}

SubscribeOutcome CodeStarNotificationsClient::Subscribe(const SubscribeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/subscribe";
  uri.SetPath(uri.GetPath() + ss.str());
  return SubscribeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubscribeOutcomeCallable CodeStarNotificationsClient::SubscribeCallable(const SubscribeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubscribeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Subscribe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::SubscribeAsync(const SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SubscribeAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::SubscribeAsyncHelper(const SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Subscribe(request), context);
}

TagResourceOutcome CodeStarNotificationsClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tagResource";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CodeStarNotificationsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UnsubscribeOutcome CodeStarNotificationsClient::Unsubscribe(const UnsubscribeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/unsubscribe";
  uri.SetPath(uri.GetPath() + ss.str());
  return UnsubscribeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnsubscribeOutcomeCallable CodeStarNotificationsClient::UnsubscribeCallable(const UnsubscribeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnsubscribeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Unsubscribe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::UnsubscribeAsync(const UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnsubscribeAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::UnsubscribeAsyncHelper(const UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Unsubscribe(request), context);
}

UntagResourceOutcome CodeStarNotificationsClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/untagResource";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CodeStarNotificationsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateNotificationRuleOutcome CodeStarNotificationsClient::UpdateNotificationRule(const UpdateNotificationRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateNotificationRule";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateNotificationRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNotificationRuleOutcomeCallable CodeStarNotificationsClient::UpdateNotificationRuleCallable(const UpdateNotificationRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotificationRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotificationRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarNotificationsClient::UpdateNotificationRuleAsync(const UpdateNotificationRuleRequest& request, const UpdateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateNotificationRuleAsyncHelper( request, handler, context ); } );
}

void CodeStarNotificationsClient::UpdateNotificationRuleAsyncHelper(const UpdateNotificationRuleRequest& request, const UpdateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateNotificationRule(request), context);
}

