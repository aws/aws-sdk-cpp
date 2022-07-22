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

#include <aws/account/AccountClient.h>
#include <aws/account/AccountEndpoint.h>
#include <aws/account/AccountErrorMarshaller.h>
#include <aws/account/model/DeleteAlternateContactRequest.h>
#include <aws/account/model/GetAlternateContactRequest.h>
#include <aws/account/model/GetContactInformationRequest.h>
#include <aws/account/model/PutAlternateContactRequest.h>
#include <aws/account/model/PutContactInformationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Account;
using namespace Aws::Account::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "account";
static const char* ALLOCATION_TAG = "AccountClient";


AccountClient::AccountClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AccountErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AccountClient::AccountClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AccountErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AccountClient::AccountClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AccountErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AccountClient::~AccountClient()
{
}

void AccountClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Account");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AccountEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AccountClient::OverrideEndpoint(const Aws::String& endpoint)
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

DeleteAlternateContactOutcome AccountClient::DeleteAlternateContact(const DeleteAlternateContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deleteAlternateContact");
  return DeleteAlternateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlternateContactOutcomeCallable AccountClient::DeleteAlternateContactCallable(const DeleteAlternateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlternateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlternateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccountClient::DeleteAlternateContactAsync(const DeleteAlternateContactRequest& request, const DeleteAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAlternateContactAsyncHelper( request, handler, context ); } );
}

void AccountClient::DeleteAlternateContactAsyncHelper(const DeleteAlternateContactRequest& request, const DeleteAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlternateContact(request), context);
}

GetAlternateContactOutcome AccountClient::GetAlternateContact(const GetAlternateContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getAlternateContact");
  return GetAlternateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAlternateContactOutcomeCallable AccountClient::GetAlternateContactCallable(const GetAlternateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAlternateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAlternateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccountClient::GetAlternateContactAsync(const GetAlternateContactRequest& request, const GetAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAlternateContactAsyncHelper( request, handler, context ); } );
}

void AccountClient::GetAlternateContactAsyncHelper(const GetAlternateContactRequest& request, const GetAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAlternateContact(request), context);
}

GetContactInformationOutcome AccountClient::GetContactInformation(const GetContactInformationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getContactInformation");
  return GetContactInformationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactInformationOutcomeCallable AccountClient::GetContactInformationCallable(const GetContactInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContactInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccountClient::GetContactInformationAsync(const GetContactInformationRequest& request, const GetContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContactInformationAsyncHelper( request, handler, context ); } );
}

void AccountClient::GetContactInformationAsyncHelper(const GetContactInformationRequest& request, const GetContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContactInformation(request), context);
}

PutAlternateContactOutcome AccountClient::PutAlternateContact(const PutAlternateContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/putAlternateContact");
  return PutAlternateContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAlternateContactOutcomeCallable AccountClient::PutAlternateContactCallable(const PutAlternateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAlternateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAlternateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccountClient::PutAlternateContactAsync(const PutAlternateContactRequest& request, const PutAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAlternateContactAsyncHelper( request, handler, context ); } );
}

void AccountClient::PutAlternateContactAsyncHelper(const PutAlternateContactRequest& request, const PutAlternateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAlternateContact(request), context);
}

PutContactInformationOutcome AccountClient::PutContactInformation(const PutContactInformationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/putContactInformation");
  return PutContactInformationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutContactInformationOutcomeCallable AccountClient::PutContactInformationCallable(const PutContactInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutContactInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutContactInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccountClient::PutContactInformationAsync(const PutContactInformationRequest& request, const PutContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutContactInformationAsyncHelper( request, handler, context ); } );
}

void AccountClient::PutContactInformationAsyncHelper(const PutContactInformationRequest& request, const PutContactInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutContactInformation(request), context);
}

