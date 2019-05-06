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

#include <aws/fms/FMSClient.h>
#include <aws/fms/FMSEndpoint.h>
#include <aws/fms/FMSErrorMarshaller.h>
#include <aws/fms/model/AssociateAdminAccountRequest.h>
#include <aws/fms/model/DeleteNotificationChannelRequest.h>
#include <aws/fms/model/DeletePolicyRequest.h>
#include <aws/fms/model/DisassociateAdminAccountRequest.h>
#include <aws/fms/model/GetAdminAccountRequest.h>
#include <aws/fms/model/GetComplianceDetailRequest.h>
#include <aws/fms/model/GetNotificationChannelRequest.h>
#include <aws/fms/model/GetPolicyRequest.h>
#include <aws/fms/model/GetProtectionStatusRequest.h>
#include <aws/fms/model/ListComplianceStatusRequest.h>
#include <aws/fms/model/ListMemberAccountsRequest.h>
#include <aws/fms/model/ListPoliciesRequest.h>
#include <aws/fms/model/PutNotificationChannelRequest.h>
#include <aws/fms/model/PutPolicyRequest.h>

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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FMSClient::FMSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FMSClient::FMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<FMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FMSClient::~FMSClient()
{
}

void FMSClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateAdminAccountOutcome(NoResult());
  }
  else
  {
    return AssociateAdminAccountOutcome(outcome.GetError());
  }
}

AssociateAdminAccountOutcomeCallable FMSClient::AssociateAdminAccountCallable(const AssociateAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::AssociateAdminAccountAsync(const AssociateAdminAccountRequest& request, const AssociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateAdminAccountAsyncHelper( request, handler, context ); } );
}

void FMSClient::AssociateAdminAccountAsyncHelper(const AssociateAdminAccountRequest& request, const AssociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateAdminAccount(request), context);
}

DeleteNotificationChannelOutcome FMSClient::DeleteNotificationChannel(const DeleteNotificationChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNotificationChannelOutcome(NoResult());
  }
  else
  {
    return DeleteNotificationChannelOutcome(outcome.GetError());
  }
}

DeleteNotificationChannelOutcomeCallable FMSClient::DeleteNotificationChannelCallable(const DeleteNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::DeleteNotificationChannelAsync(const DeleteNotificationChannelRequest& request, const DeleteNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNotificationChannelAsyncHelper( request, handler, context ); } );
}

void FMSClient::DeleteNotificationChannelAsyncHelper(const DeleteNotificationChannelRequest& request, const DeleteNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNotificationChannel(request), context);
}

DeletePolicyOutcome FMSClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePolicyOutcome(NoResult());
  }
  else
  {
    return DeletePolicyOutcome(outcome.GetError());
  }
}

DeletePolicyOutcomeCallable FMSClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePolicyAsyncHelper( request, handler, context ); } );
}

void FMSClient::DeletePolicyAsyncHelper(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicy(request), context);
}

DisassociateAdminAccountOutcome FMSClient::DisassociateAdminAccount(const DisassociateAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateAdminAccountOutcome(NoResult());
  }
  else
  {
    return DisassociateAdminAccountOutcome(outcome.GetError());
  }
}

DisassociateAdminAccountOutcomeCallable FMSClient::DisassociateAdminAccountCallable(const DisassociateAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::DisassociateAdminAccountAsync(const DisassociateAdminAccountRequest& request, const DisassociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateAdminAccountAsyncHelper( request, handler, context ); } );
}

void FMSClient::DisassociateAdminAccountAsyncHelper(const DisassociateAdminAccountRequest& request, const DisassociateAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateAdminAccount(request), context);
}

GetAdminAccountOutcome FMSClient::GetAdminAccount(const GetAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAdminAccountOutcome(GetAdminAccountResult(outcome.GetResult()));
  }
  else
  {
    return GetAdminAccountOutcome(outcome.GetError());
  }
}

GetAdminAccountOutcomeCallable FMSClient::GetAdminAccountCallable(const GetAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::GetAdminAccountAsync(const GetAdminAccountRequest& request, const GetAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAdminAccountAsyncHelper( request, handler, context ); } );
}

void FMSClient::GetAdminAccountAsyncHelper(const GetAdminAccountRequest& request, const GetAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAdminAccount(request), context);
}

GetComplianceDetailOutcome FMSClient::GetComplianceDetail(const GetComplianceDetailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetComplianceDetailOutcome(GetComplianceDetailResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceDetailOutcome(outcome.GetError());
  }
}

GetComplianceDetailOutcomeCallable FMSClient::GetComplianceDetailCallable(const GetComplianceDetailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceDetailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceDetail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::GetComplianceDetailAsync(const GetComplianceDetailRequest& request, const GetComplianceDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetComplianceDetailAsyncHelper( request, handler, context ); } );
}

void FMSClient::GetComplianceDetailAsyncHelper(const GetComplianceDetailRequest& request, const GetComplianceDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComplianceDetail(request), context);
}

GetNotificationChannelOutcome FMSClient::GetNotificationChannel(const GetNotificationChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetNotificationChannelOutcome(GetNotificationChannelResult(outcome.GetResult()));
  }
  else
  {
    return GetNotificationChannelOutcome(outcome.GetError());
  }
}

GetNotificationChannelOutcomeCallable FMSClient::GetNotificationChannelCallable(const GetNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::GetNotificationChannelAsync(const GetNotificationChannelRequest& request, const GetNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNotificationChannelAsyncHelper( request, handler, context ); } );
}

void FMSClient::GetNotificationChannelAsyncHelper(const GetNotificationChannelRequest& request, const GetNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNotificationChannel(request), context);
}

GetPolicyOutcome FMSClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPolicyOutcome(GetPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetPolicyOutcome(outcome.GetError());
  }
}

GetPolicyOutcomeCallable FMSClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPolicyAsyncHelper( request, handler, context ); } );
}

void FMSClient::GetPolicyAsyncHelper(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicy(request), context);
}

GetProtectionStatusOutcome FMSClient::GetProtectionStatus(const GetProtectionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetProtectionStatusOutcome(GetProtectionStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetProtectionStatusOutcome(outcome.GetError());
  }
}

GetProtectionStatusOutcomeCallable FMSClient::GetProtectionStatusCallable(const GetProtectionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProtectionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProtectionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::GetProtectionStatusAsync(const GetProtectionStatusRequest& request, const GetProtectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProtectionStatusAsyncHelper( request, handler, context ); } );
}

void FMSClient::GetProtectionStatusAsyncHelper(const GetProtectionStatusRequest& request, const GetProtectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProtectionStatus(request), context);
}

ListComplianceStatusOutcome FMSClient::ListComplianceStatus(const ListComplianceStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListComplianceStatusOutcome(ListComplianceStatusResult(outcome.GetResult()));
  }
  else
  {
    return ListComplianceStatusOutcome(outcome.GetError());
  }
}

ListComplianceStatusOutcomeCallable FMSClient::ListComplianceStatusCallable(const ListComplianceStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComplianceStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComplianceStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::ListComplianceStatusAsync(const ListComplianceStatusRequest& request, const ListComplianceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListComplianceStatusAsyncHelper( request, handler, context ); } );
}

void FMSClient::ListComplianceStatusAsyncHelper(const ListComplianceStatusRequest& request, const ListComplianceStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListComplianceStatus(request), context);
}

ListMemberAccountsOutcome FMSClient::ListMemberAccounts(const ListMemberAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMemberAccountsOutcome(ListMemberAccountsResult(outcome.GetResult()));
  }
  else
  {
    return ListMemberAccountsOutcome(outcome.GetError());
  }
}

ListMemberAccountsOutcomeCallable FMSClient::ListMemberAccountsCallable(const ListMemberAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMemberAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMemberAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::ListMemberAccountsAsync(const ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMemberAccountsAsyncHelper( request, handler, context ); } );
}

void FMSClient::ListMemberAccountsAsyncHelper(const ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMemberAccounts(request), context);
}

ListPoliciesOutcome FMSClient::ListPolicies(const ListPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPoliciesOutcome(ListPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListPoliciesOutcome(outcome.GetError());
  }
}

ListPoliciesOutcomeCallable FMSClient::ListPoliciesCallable(const ListPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPoliciesAsyncHelper( request, handler, context ); } );
}

void FMSClient::ListPoliciesAsyncHelper(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicies(request), context);
}

PutNotificationChannelOutcome FMSClient::PutNotificationChannel(const PutNotificationChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutNotificationChannelOutcome(NoResult());
  }
  else
  {
    return PutNotificationChannelOutcome(outcome.GetError());
  }
}

PutNotificationChannelOutcomeCallable FMSClient::PutNotificationChannelCallable(const PutNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::PutNotificationChannelAsync(const PutNotificationChannelRequest& request, const PutNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutNotificationChannelAsyncHelper( request, handler, context ); } );
}

void FMSClient::PutNotificationChannelAsyncHelper(const PutNotificationChannelRequest& request, const PutNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutNotificationChannel(request), context);
}

PutPolicyOutcome FMSClient::PutPolicy(const PutPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutPolicyOutcome(PutPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutPolicyOutcome(outcome.GetError());
  }
}

PutPolicyOutcomeCallable FMSClient::PutPolicyCallable(const PutPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FMSClient::PutPolicyAsync(const PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutPolicyAsyncHelper( request, handler, context ); } );
}

void FMSClient::PutPolicyAsyncHelper(const PutPolicyRequest& request, const PutPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPolicy(request), context);
}

