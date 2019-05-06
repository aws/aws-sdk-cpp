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

#include <aws/shield/ShieldClient.h>
#include <aws/shield/ShieldEndpoint.h>
#include <aws/shield/ShieldErrorMarshaller.h>
#include <aws/shield/model/AssociateDRTLogBucketRequest.h>
#include <aws/shield/model/AssociateDRTRoleRequest.h>
#include <aws/shield/model/CreateProtectionRequest.h>
#include <aws/shield/model/CreateSubscriptionRequest.h>
#include <aws/shield/model/DeleteProtectionRequest.h>
#include <aws/shield/model/DescribeAttackRequest.h>
#include <aws/shield/model/DescribeDRTAccessRequest.h>
#include <aws/shield/model/DescribeEmergencyContactSettingsRequest.h>
#include <aws/shield/model/DescribeProtectionRequest.h>
#include <aws/shield/model/DescribeSubscriptionRequest.h>
#include <aws/shield/model/DisassociateDRTLogBucketRequest.h>
#include <aws/shield/model/DisassociateDRTRoleRequest.h>
#include <aws/shield/model/GetSubscriptionStateRequest.h>
#include <aws/shield/model/ListAttacksRequest.h>
#include <aws/shield/model/ListProtectionsRequest.h>
#include <aws/shield/model/UpdateEmergencyContactSettingsRequest.h>
#include <aws/shield/model/UpdateSubscriptionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Shield;
using namespace Aws::Shield::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "shield";
static const char* ALLOCATION_TAG = "ShieldClient";


ShieldClient::ShieldClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ShieldClient::ShieldClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ShieldClient::ShieldClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ShieldErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ShieldClient::~ShieldClient()
{
}

void ShieldClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ShieldEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ShieldClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateDRTLogBucketOutcome ShieldClient::AssociateDRTLogBucket(const AssociateDRTLogBucketRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateDRTLogBucketOutcome(AssociateDRTLogBucketResult(outcome.GetResult()));
  }
  else
  {
    return AssociateDRTLogBucketOutcome(outcome.GetError());
  }
}

AssociateDRTLogBucketOutcomeCallable ShieldClient::AssociateDRTLogBucketCallable(const AssociateDRTLogBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDRTLogBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDRTLogBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::AssociateDRTLogBucketAsync(const AssociateDRTLogBucketRequest& request, const AssociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDRTLogBucketAsyncHelper( request, handler, context ); } );
}

void ShieldClient::AssociateDRTLogBucketAsyncHelper(const AssociateDRTLogBucketRequest& request, const AssociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDRTLogBucket(request), context);
}

AssociateDRTRoleOutcome ShieldClient::AssociateDRTRole(const AssociateDRTRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateDRTRoleOutcome(AssociateDRTRoleResult(outcome.GetResult()));
  }
  else
  {
    return AssociateDRTRoleOutcome(outcome.GetError());
  }
}

AssociateDRTRoleOutcomeCallable ShieldClient::AssociateDRTRoleCallable(const AssociateDRTRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDRTRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDRTRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::AssociateDRTRoleAsync(const AssociateDRTRoleRequest& request, const AssociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDRTRoleAsyncHelper( request, handler, context ); } );
}

void ShieldClient::AssociateDRTRoleAsyncHelper(const AssociateDRTRoleRequest& request, const AssociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDRTRole(request), context);
}

CreateProtectionOutcome ShieldClient::CreateProtection(const CreateProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProtectionOutcome(CreateProtectionResult(outcome.GetResult()));
  }
  else
  {
    return CreateProtectionOutcome(outcome.GetError());
  }
}

CreateProtectionOutcomeCallable ShieldClient::CreateProtectionCallable(const CreateProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::CreateProtectionAsync(const CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProtectionAsyncHelper( request, handler, context ); } );
}

void ShieldClient::CreateProtectionAsyncHelper(const CreateProtectionRequest& request, const CreateProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProtection(request), context);
}

CreateSubscriptionOutcome ShieldClient::CreateSubscription(const CreateSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSubscriptionOutcome(CreateSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return CreateSubscriptionOutcome(outcome.GetError());
  }
}

CreateSubscriptionOutcomeCallable ShieldClient::CreateSubscriptionCallable(const CreateSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::CreateSubscriptionAsync(const CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSubscriptionAsyncHelper( request, handler, context ); } );
}

void ShieldClient::CreateSubscriptionAsyncHelper(const CreateSubscriptionRequest& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSubscription(request), context);
}

DeleteProtectionOutcome ShieldClient::DeleteProtection(const DeleteProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProtectionOutcome(DeleteProtectionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProtectionOutcome(outcome.GetError());
  }
}

DeleteProtectionOutcomeCallable ShieldClient::DeleteProtectionCallable(const DeleteProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::DeleteProtectionAsync(const DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProtectionAsyncHelper( request, handler, context ); } );
}

void ShieldClient::DeleteProtectionAsyncHelper(const DeleteProtectionRequest& request, const DeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProtection(request), context);
}

DescribeAttackOutcome ShieldClient::DescribeAttack(const DescribeAttackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAttackOutcome(DescribeAttackResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAttackOutcome(outcome.GetError());
  }
}

DescribeAttackOutcomeCallable ShieldClient::DescribeAttackCallable(const DescribeAttackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAttackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAttack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::DescribeAttackAsync(const DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAttackAsyncHelper( request, handler, context ); } );
}

void ShieldClient::DescribeAttackAsyncHelper(const DescribeAttackRequest& request, const DescribeAttackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAttack(request), context);
}

DescribeDRTAccessOutcome ShieldClient::DescribeDRTAccess(const DescribeDRTAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDRTAccessOutcome(DescribeDRTAccessResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDRTAccessOutcome(outcome.GetError());
  }
}

DescribeDRTAccessOutcomeCallable ShieldClient::DescribeDRTAccessCallable(const DescribeDRTAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDRTAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDRTAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::DescribeDRTAccessAsync(const DescribeDRTAccessRequest& request, const DescribeDRTAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDRTAccessAsyncHelper( request, handler, context ); } );
}

void ShieldClient::DescribeDRTAccessAsyncHelper(const DescribeDRTAccessRequest& request, const DescribeDRTAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDRTAccess(request), context);
}

DescribeEmergencyContactSettingsOutcome ShieldClient::DescribeEmergencyContactSettings(const DescribeEmergencyContactSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEmergencyContactSettingsOutcome(DescribeEmergencyContactSettingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEmergencyContactSettingsOutcome(outcome.GetError());
  }
}

DescribeEmergencyContactSettingsOutcomeCallable ShieldClient::DescribeEmergencyContactSettingsCallable(const DescribeEmergencyContactSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEmergencyContactSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEmergencyContactSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::DescribeEmergencyContactSettingsAsync(const DescribeEmergencyContactSettingsRequest& request, const DescribeEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEmergencyContactSettingsAsyncHelper( request, handler, context ); } );
}

void ShieldClient::DescribeEmergencyContactSettingsAsyncHelper(const DescribeEmergencyContactSettingsRequest& request, const DescribeEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEmergencyContactSettings(request), context);
}

DescribeProtectionOutcome ShieldClient::DescribeProtection(const DescribeProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProtectionOutcome(DescribeProtectionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProtectionOutcome(outcome.GetError());
  }
}

DescribeProtectionOutcomeCallable ShieldClient::DescribeProtectionCallable(const DescribeProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::DescribeProtectionAsync(const DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProtectionAsyncHelper( request, handler, context ); } );
}

void ShieldClient::DescribeProtectionAsyncHelper(const DescribeProtectionRequest& request, const DescribeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProtection(request), context);
}

DescribeSubscriptionOutcome ShieldClient::DescribeSubscription(const DescribeSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSubscriptionOutcome(DescribeSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSubscriptionOutcome(outcome.GetError());
  }
}

DescribeSubscriptionOutcomeCallable ShieldClient::DescribeSubscriptionCallable(const DescribeSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::DescribeSubscriptionAsync(const DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSubscriptionAsyncHelper( request, handler, context ); } );
}

void ShieldClient::DescribeSubscriptionAsyncHelper(const DescribeSubscriptionRequest& request, const DescribeSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSubscription(request), context);
}

DisassociateDRTLogBucketOutcome ShieldClient::DisassociateDRTLogBucket(const DisassociateDRTLogBucketRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateDRTLogBucketOutcome(DisassociateDRTLogBucketResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateDRTLogBucketOutcome(outcome.GetError());
  }
}

DisassociateDRTLogBucketOutcomeCallable ShieldClient::DisassociateDRTLogBucketCallable(const DisassociateDRTLogBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDRTLogBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDRTLogBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::DisassociateDRTLogBucketAsync(const DisassociateDRTLogBucketRequest& request, const DisassociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateDRTLogBucketAsyncHelper( request, handler, context ); } );
}

void ShieldClient::DisassociateDRTLogBucketAsyncHelper(const DisassociateDRTLogBucketRequest& request, const DisassociateDRTLogBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateDRTLogBucket(request), context);
}

DisassociateDRTRoleOutcome ShieldClient::DisassociateDRTRole(const DisassociateDRTRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateDRTRoleOutcome(DisassociateDRTRoleResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateDRTRoleOutcome(outcome.GetError());
  }
}

DisassociateDRTRoleOutcomeCallable ShieldClient::DisassociateDRTRoleCallable(const DisassociateDRTRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDRTRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDRTRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::DisassociateDRTRoleAsync(const DisassociateDRTRoleRequest& request, const DisassociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateDRTRoleAsyncHelper( request, handler, context ); } );
}

void ShieldClient::DisassociateDRTRoleAsyncHelper(const DisassociateDRTRoleRequest& request, const DisassociateDRTRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateDRTRole(request), context);
}

GetSubscriptionStateOutcome ShieldClient::GetSubscriptionState(const GetSubscriptionStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSubscriptionStateOutcome(GetSubscriptionStateResult(outcome.GetResult()));
  }
  else
  {
    return GetSubscriptionStateOutcome(outcome.GetError());
  }
}

GetSubscriptionStateOutcomeCallable ShieldClient::GetSubscriptionStateCallable(const GetSubscriptionStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubscriptionStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubscriptionState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::GetSubscriptionStateAsync(const GetSubscriptionStateRequest& request, const GetSubscriptionStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSubscriptionStateAsyncHelper( request, handler, context ); } );
}

void ShieldClient::GetSubscriptionStateAsyncHelper(const GetSubscriptionStateRequest& request, const GetSubscriptionStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSubscriptionState(request), context);
}

ListAttacksOutcome ShieldClient::ListAttacks(const ListAttacksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAttacksOutcome(ListAttacksResult(outcome.GetResult()));
  }
  else
  {
    return ListAttacksOutcome(outcome.GetError());
  }
}

ListAttacksOutcomeCallable ShieldClient::ListAttacksCallable(const ListAttacksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttacksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttacks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::ListAttacksAsync(const ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttacksAsyncHelper( request, handler, context ); } );
}

void ShieldClient::ListAttacksAsyncHelper(const ListAttacksRequest& request, const ListAttacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttacks(request), context);
}

ListProtectionsOutcome ShieldClient::ListProtections(const ListProtectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProtectionsOutcome(ListProtectionsResult(outcome.GetResult()));
  }
  else
  {
    return ListProtectionsOutcome(outcome.GetError());
  }
}

ListProtectionsOutcomeCallable ShieldClient::ListProtectionsCallable(const ListProtectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProtectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProtections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::ListProtectionsAsync(const ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProtectionsAsyncHelper( request, handler, context ); } );
}

void ShieldClient::ListProtectionsAsyncHelper(const ListProtectionsRequest& request, const ListProtectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProtections(request), context);
}

UpdateEmergencyContactSettingsOutcome ShieldClient::UpdateEmergencyContactSettings(const UpdateEmergencyContactSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEmergencyContactSettingsOutcome(UpdateEmergencyContactSettingsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEmergencyContactSettingsOutcome(outcome.GetError());
  }
}

UpdateEmergencyContactSettingsOutcomeCallable ShieldClient::UpdateEmergencyContactSettingsCallable(const UpdateEmergencyContactSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEmergencyContactSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEmergencyContactSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::UpdateEmergencyContactSettingsAsync(const UpdateEmergencyContactSettingsRequest& request, const UpdateEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEmergencyContactSettingsAsyncHelper( request, handler, context ); } );
}

void ShieldClient::UpdateEmergencyContactSettingsAsyncHelper(const UpdateEmergencyContactSettingsRequest& request, const UpdateEmergencyContactSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEmergencyContactSettings(request), context);
}

UpdateSubscriptionOutcome ShieldClient::UpdateSubscription(const UpdateSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSubscriptionOutcome(UpdateSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSubscriptionOutcome(outcome.GetError());
  }
}

UpdateSubscriptionOutcomeCallable ShieldClient::UpdateSubscriptionCallable(const UpdateSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ShieldClient::UpdateSubscriptionAsync(const UpdateSubscriptionRequest& request, const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSubscriptionAsyncHelper( request, handler, context ); } );
}

void ShieldClient::UpdateSubscriptionAsyncHelper(const UpdateSubscriptionRequest& request, const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSubscription(request), context);
}

