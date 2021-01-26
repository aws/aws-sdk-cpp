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

#include <aws/route53domains/Route53DomainsClient.h>
#include <aws/route53domains/Route53DomainsEndpoint.h>
#include <aws/route53domains/Route53DomainsErrorMarshaller.h>
#include <aws/route53domains/model/AcceptDomainTransferFromAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/CancelDomainTransferToAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/CheckDomainAvailabilityRequest.h>
#include <aws/route53domains/model/CheckDomainTransferabilityRequest.h>
#include <aws/route53domains/model/DeleteTagsForDomainRequest.h>
#include <aws/route53domains/model/DisableDomainAutoRenewRequest.h>
#include <aws/route53domains/model/DisableDomainTransferLockRequest.h>
#include <aws/route53domains/model/EnableDomainAutoRenewRequest.h>
#include <aws/route53domains/model/EnableDomainTransferLockRequest.h>
#include <aws/route53domains/model/GetContactReachabilityStatusRequest.h>
#include <aws/route53domains/model/GetDomainDetailRequest.h>
#include <aws/route53domains/model/GetDomainSuggestionsRequest.h>
#include <aws/route53domains/model/GetOperationDetailRequest.h>
#include <aws/route53domains/model/ListDomainsRequest.h>
#include <aws/route53domains/model/ListOperationsRequest.h>
#include <aws/route53domains/model/ListTagsForDomainRequest.h>
#include <aws/route53domains/model/RegisterDomainRequest.h>
#include <aws/route53domains/model/RejectDomainTransferFromAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/RenewDomainRequest.h>
#include <aws/route53domains/model/ResendContactReachabilityEmailRequest.h>
#include <aws/route53domains/model/RetrieveDomainAuthCodeRequest.h>
#include <aws/route53domains/model/TransferDomainRequest.h>
#include <aws/route53domains/model/TransferDomainToAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/UpdateDomainContactRequest.h>
#include <aws/route53domains/model/UpdateDomainContactPrivacyRequest.h>
#include <aws/route53domains/model/UpdateDomainNameserversRequest.h>
#include <aws/route53domains/model/UpdateTagsForDomainRequest.h>
#include <aws/route53domains/model/ViewBillingRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53Domains;
using namespace Aws::Route53Domains::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "route53domains";
static const char* ALLOCATION_TAG = "Route53DomainsClient";


Route53DomainsClient::Route53DomainsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53DomainsClient::~Route53DomainsClient()
{
}

void Route53DomainsClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Route 53 Domains");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + Route53DomainsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void Route53DomainsClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptDomainTransferFromAnotherAwsAccountOutcome Route53DomainsClient::AcceptDomainTransferFromAnotherAwsAccount(const AcceptDomainTransferFromAnotherAwsAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AcceptDomainTransferFromAnotherAwsAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptDomainTransferFromAnotherAwsAccountOutcomeCallable Route53DomainsClient::AcceptDomainTransferFromAnotherAwsAccountCallable(const AcceptDomainTransferFromAnotherAwsAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptDomainTransferFromAnotherAwsAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptDomainTransferFromAnotherAwsAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::AcceptDomainTransferFromAnotherAwsAccountAsync(const AcceptDomainTransferFromAnotherAwsAccountRequest& request, const AcceptDomainTransferFromAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptDomainTransferFromAnotherAwsAccountAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::AcceptDomainTransferFromAnotherAwsAccountAsyncHelper(const AcceptDomainTransferFromAnotherAwsAccountRequest& request, const AcceptDomainTransferFromAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptDomainTransferFromAnotherAwsAccount(request), context);
}

CancelDomainTransferToAnotherAwsAccountOutcome Route53DomainsClient::CancelDomainTransferToAnotherAwsAccount(const CancelDomainTransferToAnotherAwsAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelDomainTransferToAnotherAwsAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelDomainTransferToAnotherAwsAccountOutcomeCallable Route53DomainsClient::CancelDomainTransferToAnotherAwsAccountCallable(const CancelDomainTransferToAnotherAwsAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelDomainTransferToAnotherAwsAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelDomainTransferToAnotherAwsAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::CancelDomainTransferToAnotherAwsAccountAsync(const CancelDomainTransferToAnotherAwsAccountRequest& request, const CancelDomainTransferToAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelDomainTransferToAnotherAwsAccountAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::CancelDomainTransferToAnotherAwsAccountAsyncHelper(const CancelDomainTransferToAnotherAwsAccountRequest& request, const CancelDomainTransferToAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelDomainTransferToAnotherAwsAccount(request), context);
}

CheckDomainAvailabilityOutcome Route53DomainsClient::CheckDomainAvailability(const CheckDomainAvailabilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CheckDomainAvailabilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckDomainAvailabilityOutcomeCallable Route53DomainsClient::CheckDomainAvailabilityCallable(const CheckDomainAvailabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckDomainAvailabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckDomainAvailability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::CheckDomainAvailabilityAsync(const CheckDomainAvailabilityRequest& request, const CheckDomainAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CheckDomainAvailabilityAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::CheckDomainAvailabilityAsyncHelper(const CheckDomainAvailabilityRequest& request, const CheckDomainAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CheckDomainAvailability(request), context);
}

CheckDomainTransferabilityOutcome Route53DomainsClient::CheckDomainTransferability(const CheckDomainTransferabilityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CheckDomainTransferabilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CheckDomainTransferabilityOutcomeCallable Route53DomainsClient::CheckDomainTransferabilityCallable(const CheckDomainTransferabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckDomainTransferabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckDomainTransferability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::CheckDomainTransferabilityAsync(const CheckDomainTransferabilityRequest& request, const CheckDomainTransferabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CheckDomainTransferabilityAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::CheckDomainTransferabilityAsyncHelper(const CheckDomainTransferabilityRequest& request, const CheckDomainTransferabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CheckDomainTransferability(request), context);
}

DeleteTagsForDomainOutcome Route53DomainsClient::DeleteTagsForDomain(const DeleteTagsForDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteTagsForDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagsForDomainOutcomeCallable Route53DomainsClient::DeleteTagsForDomainCallable(const DeleteTagsForDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsForDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTagsForDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::DeleteTagsForDomainAsync(const DeleteTagsForDomainRequest& request, const DeleteTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagsForDomainAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::DeleteTagsForDomainAsyncHelper(const DeleteTagsForDomainRequest& request, const DeleteTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTagsForDomain(request), context);
}

DisableDomainAutoRenewOutcome Route53DomainsClient::DisableDomainAutoRenew(const DisableDomainAutoRenewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisableDomainAutoRenewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableDomainAutoRenewOutcomeCallable Route53DomainsClient::DisableDomainAutoRenewCallable(const DisableDomainAutoRenewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableDomainAutoRenewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableDomainAutoRenew(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::DisableDomainAutoRenewAsync(const DisableDomainAutoRenewRequest& request, const DisableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableDomainAutoRenewAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::DisableDomainAutoRenewAsyncHelper(const DisableDomainAutoRenewRequest& request, const DisableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableDomainAutoRenew(request), context);
}

DisableDomainTransferLockOutcome Route53DomainsClient::DisableDomainTransferLock(const DisableDomainTransferLockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisableDomainTransferLockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableDomainTransferLockOutcomeCallable Route53DomainsClient::DisableDomainTransferLockCallable(const DisableDomainTransferLockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableDomainTransferLockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableDomainTransferLock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::DisableDomainTransferLockAsync(const DisableDomainTransferLockRequest& request, const DisableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableDomainTransferLockAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::DisableDomainTransferLockAsyncHelper(const DisableDomainTransferLockRequest& request, const DisableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableDomainTransferLock(request), context);
}

EnableDomainAutoRenewOutcome Route53DomainsClient::EnableDomainAutoRenew(const EnableDomainAutoRenewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return EnableDomainAutoRenewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableDomainAutoRenewOutcomeCallable Route53DomainsClient::EnableDomainAutoRenewCallable(const EnableDomainAutoRenewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableDomainAutoRenewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableDomainAutoRenew(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::EnableDomainAutoRenewAsync(const EnableDomainAutoRenewRequest& request, const EnableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableDomainAutoRenewAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::EnableDomainAutoRenewAsyncHelper(const EnableDomainAutoRenewRequest& request, const EnableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableDomainAutoRenew(request), context);
}

EnableDomainTransferLockOutcome Route53DomainsClient::EnableDomainTransferLock(const EnableDomainTransferLockRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return EnableDomainTransferLockOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableDomainTransferLockOutcomeCallable Route53DomainsClient::EnableDomainTransferLockCallable(const EnableDomainTransferLockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableDomainTransferLockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableDomainTransferLock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::EnableDomainTransferLockAsync(const EnableDomainTransferLockRequest& request, const EnableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableDomainTransferLockAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::EnableDomainTransferLockAsyncHelper(const EnableDomainTransferLockRequest& request, const EnableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableDomainTransferLock(request), context);
}

GetContactReachabilityStatusOutcome Route53DomainsClient::GetContactReachabilityStatus(const GetContactReachabilityStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetContactReachabilityStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactReachabilityStatusOutcomeCallable Route53DomainsClient::GetContactReachabilityStatusCallable(const GetContactReachabilityStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactReachabilityStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContactReachabilityStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::GetContactReachabilityStatusAsync(const GetContactReachabilityStatusRequest& request, const GetContactReachabilityStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContactReachabilityStatusAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::GetContactReachabilityStatusAsyncHelper(const GetContactReachabilityStatusRequest& request, const GetContactReachabilityStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContactReachabilityStatus(request), context);
}

GetDomainDetailOutcome Route53DomainsClient::GetDomainDetail(const GetDomainDetailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDomainDetailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDomainDetailOutcomeCallable Route53DomainsClient::GetDomainDetailCallable(const GetDomainDetailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainDetailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainDetail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::GetDomainDetailAsync(const GetDomainDetailRequest& request, const GetDomainDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainDetailAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::GetDomainDetailAsyncHelper(const GetDomainDetailRequest& request, const GetDomainDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainDetail(request), context);
}

GetDomainSuggestionsOutcome Route53DomainsClient::GetDomainSuggestions(const GetDomainSuggestionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDomainSuggestionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDomainSuggestionsOutcomeCallable Route53DomainsClient::GetDomainSuggestionsCallable(const GetDomainSuggestionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainSuggestionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainSuggestions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::GetDomainSuggestionsAsync(const GetDomainSuggestionsRequest& request, const GetDomainSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainSuggestionsAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::GetDomainSuggestionsAsyncHelper(const GetDomainSuggestionsRequest& request, const GetDomainSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainSuggestions(request), context);
}

GetOperationDetailOutcome Route53DomainsClient::GetOperationDetail(const GetOperationDetailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetOperationDetailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOperationDetailOutcomeCallable Route53DomainsClient::GetOperationDetailCallable(const GetOperationDetailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOperationDetailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOperationDetail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::GetOperationDetailAsync(const GetOperationDetailRequest& request, const GetOperationDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOperationDetailAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::GetOperationDetailAsyncHelper(const GetOperationDetailRequest& request, const GetOperationDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOperationDetail(request), context);
}

ListDomainsOutcome Route53DomainsClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcomeCallable Route53DomainsClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainsAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

ListOperationsOutcome Route53DomainsClient::ListOperations(const ListOperationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListOperationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOperationsOutcomeCallable Route53DomainsClient::ListOperationsCallable(const ListOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::ListOperationsAsync(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOperationsAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::ListOperationsAsyncHelper(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOperations(request), context);
}

ListTagsForDomainOutcome Route53DomainsClient::ListTagsForDomain(const ListTagsForDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForDomainOutcomeCallable Route53DomainsClient::ListTagsForDomainCallable(const ListTagsForDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::ListTagsForDomainAsync(const ListTagsForDomainRequest& request, const ListTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForDomainAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::ListTagsForDomainAsyncHelper(const ListTagsForDomainRequest& request, const ListTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForDomain(request), context);
}

RegisterDomainOutcome Route53DomainsClient::RegisterDomain(const RegisterDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RegisterDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterDomainOutcomeCallable Route53DomainsClient::RegisterDomainCallable(const RegisterDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::RegisterDomainAsync(const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterDomainAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::RegisterDomainAsyncHelper(const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterDomain(request), context);
}

RejectDomainTransferFromAnotherAwsAccountOutcome Route53DomainsClient::RejectDomainTransferFromAnotherAwsAccount(const RejectDomainTransferFromAnotherAwsAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RejectDomainTransferFromAnotherAwsAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectDomainTransferFromAnotherAwsAccountOutcomeCallable Route53DomainsClient::RejectDomainTransferFromAnotherAwsAccountCallable(const RejectDomainTransferFromAnotherAwsAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectDomainTransferFromAnotherAwsAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectDomainTransferFromAnotherAwsAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::RejectDomainTransferFromAnotherAwsAccountAsync(const RejectDomainTransferFromAnotherAwsAccountRequest& request, const RejectDomainTransferFromAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectDomainTransferFromAnotherAwsAccountAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::RejectDomainTransferFromAnotherAwsAccountAsyncHelper(const RejectDomainTransferFromAnotherAwsAccountRequest& request, const RejectDomainTransferFromAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectDomainTransferFromAnotherAwsAccount(request), context);
}

RenewDomainOutcome Route53DomainsClient::RenewDomain(const RenewDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RenewDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RenewDomainOutcomeCallable Route53DomainsClient::RenewDomainCallable(const RenewDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RenewDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RenewDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::RenewDomainAsync(const RenewDomainRequest& request, const RenewDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RenewDomainAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::RenewDomainAsyncHelper(const RenewDomainRequest& request, const RenewDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RenewDomain(request), context);
}

ResendContactReachabilityEmailOutcome Route53DomainsClient::ResendContactReachabilityEmail(const ResendContactReachabilityEmailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ResendContactReachabilityEmailOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResendContactReachabilityEmailOutcomeCallable Route53DomainsClient::ResendContactReachabilityEmailCallable(const ResendContactReachabilityEmailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResendContactReachabilityEmailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResendContactReachabilityEmail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::ResendContactReachabilityEmailAsync(const ResendContactReachabilityEmailRequest& request, const ResendContactReachabilityEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResendContactReachabilityEmailAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::ResendContactReachabilityEmailAsyncHelper(const ResendContactReachabilityEmailRequest& request, const ResendContactReachabilityEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResendContactReachabilityEmail(request), context);
}

RetrieveDomainAuthCodeOutcome Route53DomainsClient::RetrieveDomainAuthCode(const RetrieveDomainAuthCodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RetrieveDomainAuthCodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetrieveDomainAuthCodeOutcomeCallable Route53DomainsClient::RetrieveDomainAuthCodeCallable(const RetrieveDomainAuthCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetrieveDomainAuthCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetrieveDomainAuthCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::RetrieveDomainAuthCodeAsync(const RetrieveDomainAuthCodeRequest& request, const RetrieveDomainAuthCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RetrieveDomainAuthCodeAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::RetrieveDomainAuthCodeAsyncHelper(const RetrieveDomainAuthCodeRequest& request, const RetrieveDomainAuthCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetrieveDomainAuthCode(request), context);
}

TransferDomainOutcome Route53DomainsClient::TransferDomain(const TransferDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TransferDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransferDomainOutcomeCallable Route53DomainsClient::TransferDomainCallable(const TransferDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransferDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransferDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::TransferDomainAsync(const TransferDomainRequest& request, const TransferDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TransferDomainAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::TransferDomainAsyncHelper(const TransferDomainRequest& request, const TransferDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TransferDomain(request), context);
}

TransferDomainToAnotherAwsAccountOutcome Route53DomainsClient::TransferDomainToAnotherAwsAccount(const TransferDomainToAnotherAwsAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TransferDomainToAnotherAwsAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransferDomainToAnotherAwsAccountOutcomeCallable Route53DomainsClient::TransferDomainToAnotherAwsAccountCallable(const TransferDomainToAnotherAwsAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransferDomainToAnotherAwsAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransferDomainToAnotherAwsAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::TransferDomainToAnotherAwsAccountAsync(const TransferDomainToAnotherAwsAccountRequest& request, const TransferDomainToAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TransferDomainToAnotherAwsAccountAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::TransferDomainToAnotherAwsAccountAsyncHelper(const TransferDomainToAnotherAwsAccountRequest& request, const TransferDomainToAnotherAwsAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TransferDomainToAnotherAwsAccount(request), context);
}

UpdateDomainContactOutcome Route53DomainsClient::UpdateDomainContact(const UpdateDomainContactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDomainContactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainContactOutcomeCallable Route53DomainsClient::UpdateDomainContactCallable(const UpdateDomainContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::UpdateDomainContactAsync(const UpdateDomainContactRequest& request, const UpdateDomainContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainContactAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::UpdateDomainContactAsyncHelper(const UpdateDomainContactRequest& request, const UpdateDomainContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainContact(request), context);
}

UpdateDomainContactPrivacyOutcome Route53DomainsClient::UpdateDomainContactPrivacy(const UpdateDomainContactPrivacyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDomainContactPrivacyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainContactPrivacyOutcomeCallable Route53DomainsClient::UpdateDomainContactPrivacyCallable(const UpdateDomainContactPrivacyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainContactPrivacyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainContactPrivacy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::UpdateDomainContactPrivacyAsync(const UpdateDomainContactPrivacyRequest& request, const UpdateDomainContactPrivacyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainContactPrivacyAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::UpdateDomainContactPrivacyAsyncHelper(const UpdateDomainContactPrivacyRequest& request, const UpdateDomainContactPrivacyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainContactPrivacy(request), context);
}

UpdateDomainNameserversOutcome Route53DomainsClient::UpdateDomainNameservers(const UpdateDomainNameserversRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDomainNameserversOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainNameserversOutcomeCallable Route53DomainsClient::UpdateDomainNameserversCallable(const UpdateDomainNameserversRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainNameserversOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainNameservers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::UpdateDomainNameserversAsync(const UpdateDomainNameserversRequest& request, const UpdateDomainNameserversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainNameserversAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::UpdateDomainNameserversAsyncHelper(const UpdateDomainNameserversRequest& request, const UpdateDomainNameserversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainNameservers(request), context);
}

UpdateTagsForDomainOutcome Route53DomainsClient::UpdateTagsForDomain(const UpdateTagsForDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateTagsForDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTagsForDomainOutcomeCallable Route53DomainsClient::UpdateTagsForDomainCallable(const UpdateTagsForDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTagsForDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTagsForDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::UpdateTagsForDomainAsync(const UpdateTagsForDomainRequest& request, const UpdateTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTagsForDomainAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::UpdateTagsForDomainAsyncHelper(const UpdateTagsForDomainRequest& request, const UpdateTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTagsForDomain(request), context);
}

ViewBillingOutcome Route53DomainsClient::ViewBilling(const ViewBillingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ViewBillingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ViewBillingOutcomeCallable Route53DomainsClient::ViewBillingCallable(const ViewBillingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ViewBillingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ViewBilling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53DomainsClient::ViewBillingAsync(const ViewBillingRequest& request, const ViewBillingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ViewBillingAsyncHelper( request, handler, context ); } );
}

void Route53DomainsClient::ViewBillingAsyncHelper(const ViewBillingRequest& request, const ViewBillingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ViewBilling(request), context);
}

