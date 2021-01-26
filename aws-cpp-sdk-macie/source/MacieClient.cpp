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

#include <aws/macie/MacieClient.h>
#include <aws/macie/MacieEndpoint.h>
#include <aws/macie/MacieErrorMarshaller.h>
#include <aws/macie/model/AssociateMemberAccountRequest.h>
#include <aws/macie/model/AssociateS3ResourcesRequest.h>
#include <aws/macie/model/DisassociateMemberAccountRequest.h>
#include <aws/macie/model/DisassociateS3ResourcesRequest.h>
#include <aws/macie/model/ListMemberAccountsRequest.h>
#include <aws/macie/model/ListS3ResourcesRequest.h>
#include <aws/macie/model/UpdateS3ResourcesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Macie;
using namespace Aws::Macie::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "macie";
static const char* ALLOCATION_TAG = "MacieClient";


MacieClient::MacieClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MacieErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MacieClient::MacieClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MacieErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MacieClient::MacieClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MacieErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MacieClient::~MacieClient()
{
}

void MacieClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Macie");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MacieEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MacieClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateMemberAccountOutcome MacieClient::AssociateMemberAccount(const AssociateMemberAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateMemberAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateMemberAccountOutcomeCallable MacieClient::AssociateMemberAccountCallable(const AssociateMemberAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateMemberAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateMemberAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MacieClient::AssociateMemberAccountAsync(const AssociateMemberAccountRequest& request, const AssociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateMemberAccountAsyncHelper( request, handler, context ); } );
}

void MacieClient::AssociateMemberAccountAsyncHelper(const AssociateMemberAccountRequest& request, const AssociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateMemberAccount(request), context);
}

AssociateS3ResourcesOutcome MacieClient::AssociateS3Resources(const AssociateS3ResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateS3ResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateS3ResourcesOutcomeCallable MacieClient::AssociateS3ResourcesCallable(const AssociateS3ResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateS3ResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateS3Resources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MacieClient::AssociateS3ResourcesAsync(const AssociateS3ResourcesRequest& request, const AssociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateS3ResourcesAsyncHelper( request, handler, context ); } );
}

void MacieClient::AssociateS3ResourcesAsyncHelper(const AssociateS3ResourcesRequest& request, const AssociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateS3Resources(request), context);
}

DisassociateMemberAccountOutcome MacieClient::DisassociateMemberAccount(const DisassociateMemberAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateMemberAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMemberAccountOutcomeCallable MacieClient::DisassociateMemberAccountCallable(const DisassociateMemberAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMemberAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMemberAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MacieClient::DisassociateMemberAccountAsync(const DisassociateMemberAccountRequest& request, const DisassociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateMemberAccountAsyncHelper( request, handler, context ); } );
}

void MacieClient::DisassociateMemberAccountAsyncHelper(const DisassociateMemberAccountRequest& request, const DisassociateMemberAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateMemberAccount(request), context);
}

DisassociateS3ResourcesOutcome MacieClient::DisassociateS3Resources(const DisassociateS3ResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateS3ResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateS3ResourcesOutcomeCallable MacieClient::DisassociateS3ResourcesCallable(const DisassociateS3ResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateS3ResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateS3Resources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MacieClient::DisassociateS3ResourcesAsync(const DisassociateS3ResourcesRequest& request, const DisassociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateS3ResourcesAsyncHelper( request, handler, context ); } );
}

void MacieClient::DisassociateS3ResourcesAsyncHelper(const DisassociateS3ResourcesRequest& request, const DisassociateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateS3Resources(request), context);
}

ListMemberAccountsOutcome MacieClient::ListMemberAccounts(const ListMemberAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListMemberAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMemberAccountsOutcomeCallable MacieClient::ListMemberAccountsCallable(const ListMemberAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMemberAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMemberAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MacieClient::ListMemberAccountsAsync(const ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMemberAccountsAsyncHelper( request, handler, context ); } );
}

void MacieClient::ListMemberAccountsAsyncHelper(const ListMemberAccountsRequest& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMemberAccounts(request), context);
}

ListS3ResourcesOutcome MacieClient::ListS3Resources(const ListS3ResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListS3ResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListS3ResourcesOutcomeCallable MacieClient::ListS3ResourcesCallable(const ListS3ResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListS3ResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListS3Resources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MacieClient::ListS3ResourcesAsync(const ListS3ResourcesRequest& request, const ListS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListS3ResourcesAsyncHelper( request, handler, context ); } );
}

void MacieClient::ListS3ResourcesAsyncHelper(const ListS3ResourcesRequest& request, const ListS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListS3Resources(request), context);
}

UpdateS3ResourcesOutcome MacieClient::UpdateS3Resources(const UpdateS3ResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateS3ResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateS3ResourcesOutcomeCallable MacieClient::UpdateS3ResourcesCallable(const UpdateS3ResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateS3ResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateS3Resources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MacieClient::UpdateS3ResourcesAsync(const UpdateS3ResourcesRequest& request, const UpdateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateS3ResourcesAsyncHelper( request, handler, context ); } );
}

void MacieClient::UpdateS3ResourcesAsyncHelper(const UpdateS3ResourcesRequest& request, const UpdateS3ResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateS3Resources(request), context);
}

