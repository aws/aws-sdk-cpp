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
#include <aws/route53domains/Route53DomainsClient.h>
#include <aws/route53domains/Route53DomainsEndpoint.h>
#include <aws/route53domains/Route53DomainsErrorMarshaller.h>
#include <aws/route53domains/model/CheckDomainAvailabilityRequest.h>
#include <aws/route53domains/model/DeleteTagsForDomainRequest.h>
#include <aws/route53domains/model/DisableDomainAutoRenewRequest.h>
#include <aws/route53domains/model/DisableDomainTransferLockRequest.h>
#include <aws/route53domains/model/EnableDomainAutoRenewRequest.h>
#include <aws/route53domains/model/EnableDomainTransferLockRequest.h>
#include <aws/route53domains/model/GetDomainDetailRequest.h>
#include <aws/route53domains/model/GetOperationDetailRequest.h>
#include <aws/route53domains/model/ListDomainsRequest.h>
#include <aws/route53domains/model/ListOperationsRequest.h>
#include <aws/route53domains/model/ListTagsForDomainRequest.h>
#include <aws/route53domains/model/RegisterDomainRequest.h>
#include <aws/route53domains/model/RetrieveDomainAuthCodeRequest.h>
#include <aws/route53domains/model/TransferDomainRequest.h>
#include <aws/route53domains/model/UpdateDomainContactRequest.h>
#include <aws/route53domains/model/UpdateDomainContactPrivacyRequest.h>
#include <aws/route53domains/model/UpdateDomainNameserversRequest.h>
#include <aws/route53domains/model/UpdateTagsForDomainRequest.h>

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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<Route53DomainsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53DomainsClient::Route53DomainsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << Route53DomainsEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
CheckDomainAvailabilityOutcome Route53DomainsClient::CheckDomainAvailability(const CheckDomainAvailabilityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CheckDomainAvailabilityOutcome(CheckDomainAvailabilityResult(outcome.GetResult()));
  }
  else
  {
    return CheckDomainAvailabilityOutcome(outcome.GetError());
  }
}

CheckDomainAvailabilityOutcomeCallable Route53DomainsClient::CheckDomainAvailabilityCallable(const CheckDomainAvailabilityRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::CheckDomainAvailability, this, request);
}

void Route53DomainsClient::CheckDomainAvailabilityAsync(const CheckDomainAvailabilityRequest& request, const CheckDomainAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::CheckDomainAvailabilityAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::CheckDomainAvailabilityAsyncHelper(const CheckDomainAvailabilityRequest& request, const CheckDomainAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CheckDomainAvailability(request), context);
}

DeleteTagsForDomainOutcome Route53DomainsClient::DeleteTagsForDomain(const DeleteTagsForDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTagsForDomainOutcome(DeleteTagsForDomainResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTagsForDomainOutcome(outcome.GetError());
  }
}

DeleteTagsForDomainOutcomeCallable Route53DomainsClient::DeleteTagsForDomainCallable(const DeleteTagsForDomainRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::DeleteTagsForDomain, this, request);
}

void Route53DomainsClient::DeleteTagsForDomainAsync(const DeleteTagsForDomainRequest& request, const DeleteTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::DeleteTagsForDomainAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::DeleteTagsForDomainAsyncHelper(const DeleteTagsForDomainRequest& request, const DeleteTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTagsForDomain(request), context);
}

DisableDomainAutoRenewOutcome Route53DomainsClient::DisableDomainAutoRenew(const DisableDomainAutoRenewRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableDomainAutoRenewOutcome(DisableDomainAutoRenewResult(outcome.GetResult()));
  }
  else
  {
    return DisableDomainAutoRenewOutcome(outcome.GetError());
  }
}

DisableDomainAutoRenewOutcomeCallable Route53DomainsClient::DisableDomainAutoRenewCallable(const DisableDomainAutoRenewRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::DisableDomainAutoRenew, this, request);
}

void Route53DomainsClient::DisableDomainAutoRenewAsync(const DisableDomainAutoRenewRequest& request, const DisableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::DisableDomainAutoRenewAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::DisableDomainAutoRenewAsyncHelper(const DisableDomainAutoRenewRequest& request, const DisableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableDomainAutoRenew(request), context);
}

DisableDomainTransferLockOutcome Route53DomainsClient::DisableDomainTransferLock(const DisableDomainTransferLockRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableDomainTransferLockOutcome(DisableDomainTransferLockResult(outcome.GetResult()));
  }
  else
  {
    return DisableDomainTransferLockOutcome(outcome.GetError());
  }
}

DisableDomainTransferLockOutcomeCallable Route53DomainsClient::DisableDomainTransferLockCallable(const DisableDomainTransferLockRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::DisableDomainTransferLock, this, request);
}

void Route53DomainsClient::DisableDomainTransferLockAsync(const DisableDomainTransferLockRequest& request, const DisableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::DisableDomainTransferLockAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::DisableDomainTransferLockAsyncHelper(const DisableDomainTransferLockRequest& request, const DisableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableDomainTransferLock(request), context);
}

EnableDomainAutoRenewOutcome Route53DomainsClient::EnableDomainAutoRenew(const EnableDomainAutoRenewRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableDomainAutoRenewOutcome(EnableDomainAutoRenewResult(outcome.GetResult()));
  }
  else
  {
    return EnableDomainAutoRenewOutcome(outcome.GetError());
  }
}

EnableDomainAutoRenewOutcomeCallable Route53DomainsClient::EnableDomainAutoRenewCallable(const EnableDomainAutoRenewRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::EnableDomainAutoRenew, this, request);
}

void Route53DomainsClient::EnableDomainAutoRenewAsync(const EnableDomainAutoRenewRequest& request, const EnableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::EnableDomainAutoRenewAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::EnableDomainAutoRenewAsyncHelper(const EnableDomainAutoRenewRequest& request, const EnableDomainAutoRenewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableDomainAutoRenew(request), context);
}

EnableDomainTransferLockOutcome Route53DomainsClient::EnableDomainTransferLock(const EnableDomainTransferLockRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableDomainTransferLockOutcome(EnableDomainTransferLockResult(outcome.GetResult()));
  }
  else
  {
    return EnableDomainTransferLockOutcome(outcome.GetError());
  }
}

EnableDomainTransferLockOutcomeCallable Route53DomainsClient::EnableDomainTransferLockCallable(const EnableDomainTransferLockRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::EnableDomainTransferLock, this, request);
}

void Route53DomainsClient::EnableDomainTransferLockAsync(const EnableDomainTransferLockRequest& request, const EnableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::EnableDomainTransferLockAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::EnableDomainTransferLockAsyncHelper(const EnableDomainTransferLockRequest& request, const EnableDomainTransferLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableDomainTransferLock(request), context);
}

GetDomainDetailOutcome Route53DomainsClient::GetDomainDetail(const GetDomainDetailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDomainDetailOutcome(GetDomainDetailResult(outcome.GetResult()));
  }
  else
  {
    return GetDomainDetailOutcome(outcome.GetError());
  }
}

GetDomainDetailOutcomeCallable Route53DomainsClient::GetDomainDetailCallable(const GetDomainDetailRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::GetDomainDetail, this, request);
}

void Route53DomainsClient::GetDomainDetailAsync(const GetDomainDetailRequest& request, const GetDomainDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::GetDomainDetailAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::GetDomainDetailAsyncHelper(const GetDomainDetailRequest& request, const GetDomainDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainDetail(request), context);
}

GetOperationDetailOutcome Route53DomainsClient::GetOperationDetail(const GetOperationDetailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetOperationDetailOutcome(GetOperationDetailResult(outcome.GetResult()));
  }
  else
  {
    return GetOperationDetailOutcome(outcome.GetError());
  }
}

GetOperationDetailOutcomeCallable Route53DomainsClient::GetOperationDetailCallable(const GetOperationDetailRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::GetOperationDetail, this, request);
}

void Route53DomainsClient::GetOperationDetailAsync(const GetOperationDetailRequest& request, const GetOperationDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::GetOperationDetailAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::GetOperationDetailAsyncHelper(const GetOperationDetailRequest& request, const GetOperationDetailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOperationDetail(request), context);
}

ListDomainsOutcome Route53DomainsClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDomainsOutcome(ListDomainsResult(outcome.GetResult()));
  }
  else
  {
    return ListDomainsOutcome(outcome.GetError());
  }
}

ListDomainsOutcomeCallable Route53DomainsClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::ListDomains, this, request);
}

void Route53DomainsClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::ListDomainsAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

ListOperationsOutcome Route53DomainsClient::ListOperations(const ListOperationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListOperationsOutcome(ListOperationsResult(outcome.GetResult()));
  }
  else
  {
    return ListOperationsOutcome(outcome.GetError());
  }
}

ListOperationsOutcomeCallable Route53DomainsClient::ListOperationsCallable(const ListOperationsRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::ListOperations, this, request);
}

void Route53DomainsClient::ListOperationsAsync(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::ListOperationsAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::ListOperationsAsyncHelper(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOperations(request), context);
}

ListTagsForDomainOutcome Route53DomainsClient::ListTagsForDomain(const ListTagsForDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForDomainOutcome(ListTagsForDomainResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForDomainOutcome(outcome.GetError());
  }
}

ListTagsForDomainOutcomeCallable Route53DomainsClient::ListTagsForDomainCallable(const ListTagsForDomainRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::ListTagsForDomain, this, request);
}

void Route53DomainsClient::ListTagsForDomainAsync(const ListTagsForDomainRequest& request, const ListTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::ListTagsForDomainAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::ListTagsForDomainAsyncHelper(const ListTagsForDomainRequest& request, const ListTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForDomain(request), context);
}

RegisterDomainOutcome Route53DomainsClient::RegisterDomain(const RegisterDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterDomainOutcome(RegisterDomainResult(outcome.GetResult()));
  }
  else
  {
    return RegisterDomainOutcome(outcome.GetError());
  }
}

RegisterDomainOutcomeCallable Route53DomainsClient::RegisterDomainCallable(const RegisterDomainRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::RegisterDomain, this, request);
}

void Route53DomainsClient::RegisterDomainAsync(const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::RegisterDomainAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::RegisterDomainAsyncHelper(const RegisterDomainRequest& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterDomain(request), context);
}

RetrieveDomainAuthCodeOutcome Route53DomainsClient::RetrieveDomainAuthCode(const RetrieveDomainAuthCodeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RetrieveDomainAuthCodeOutcome(RetrieveDomainAuthCodeResult(outcome.GetResult()));
  }
  else
  {
    return RetrieveDomainAuthCodeOutcome(outcome.GetError());
  }
}

RetrieveDomainAuthCodeOutcomeCallable Route53DomainsClient::RetrieveDomainAuthCodeCallable(const RetrieveDomainAuthCodeRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::RetrieveDomainAuthCode, this, request);
}

void Route53DomainsClient::RetrieveDomainAuthCodeAsync(const RetrieveDomainAuthCodeRequest& request, const RetrieveDomainAuthCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::RetrieveDomainAuthCodeAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::RetrieveDomainAuthCodeAsyncHelper(const RetrieveDomainAuthCodeRequest& request, const RetrieveDomainAuthCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetrieveDomainAuthCode(request), context);
}

TransferDomainOutcome Route53DomainsClient::TransferDomain(const TransferDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TransferDomainOutcome(TransferDomainResult(outcome.GetResult()));
  }
  else
  {
    return TransferDomainOutcome(outcome.GetError());
  }
}

TransferDomainOutcomeCallable Route53DomainsClient::TransferDomainCallable(const TransferDomainRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::TransferDomain, this, request);
}

void Route53DomainsClient::TransferDomainAsync(const TransferDomainRequest& request, const TransferDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::TransferDomainAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::TransferDomainAsyncHelper(const TransferDomainRequest& request, const TransferDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TransferDomain(request), context);
}

UpdateDomainContactOutcome Route53DomainsClient::UpdateDomainContact(const UpdateDomainContactRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateDomainContactOutcome(UpdateDomainContactResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDomainContactOutcome(outcome.GetError());
  }
}

UpdateDomainContactOutcomeCallable Route53DomainsClient::UpdateDomainContactCallable(const UpdateDomainContactRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::UpdateDomainContact, this, request);
}

void Route53DomainsClient::UpdateDomainContactAsync(const UpdateDomainContactRequest& request, const UpdateDomainContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::UpdateDomainContactAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::UpdateDomainContactAsyncHelper(const UpdateDomainContactRequest& request, const UpdateDomainContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainContact(request), context);
}

UpdateDomainContactPrivacyOutcome Route53DomainsClient::UpdateDomainContactPrivacy(const UpdateDomainContactPrivacyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateDomainContactPrivacyOutcome(UpdateDomainContactPrivacyResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDomainContactPrivacyOutcome(outcome.GetError());
  }
}

UpdateDomainContactPrivacyOutcomeCallable Route53DomainsClient::UpdateDomainContactPrivacyCallable(const UpdateDomainContactPrivacyRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::UpdateDomainContactPrivacy, this, request);
}

void Route53DomainsClient::UpdateDomainContactPrivacyAsync(const UpdateDomainContactPrivacyRequest& request, const UpdateDomainContactPrivacyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::UpdateDomainContactPrivacyAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::UpdateDomainContactPrivacyAsyncHelper(const UpdateDomainContactPrivacyRequest& request, const UpdateDomainContactPrivacyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainContactPrivacy(request), context);
}

UpdateDomainNameserversOutcome Route53DomainsClient::UpdateDomainNameservers(const UpdateDomainNameserversRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateDomainNameserversOutcome(UpdateDomainNameserversResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDomainNameserversOutcome(outcome.GetError());
  }
}

UpdateDomainNameserversOutcomeCallable Route53DomainsClient::UpdateDomainNameserversCallable(const UpdateDomainNameserversRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::UpdateDomainNameservers, this, request);
}

void Route53DomainsClient::UpdateDomainNameserversAsync(const UpdateDomainNameserversRequest& request, const UpdateDomainNameserversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::UpdateDomainNameserversAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::UpdateDomainNameserversAsyncHelper(const UpdateDomainNameserversRequest& request, const UpdateDomainNameserversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainNameservers(request), context);
}

UpdateTagsForDomainOutcome Route53DomainsClient::UpdateTagsForDomain(const UpdateTagsForDomainRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateTagsForDomainOutcome(UpdateTagsForDomainResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTagsForDomainOutcome(outcome.GetError());
  }
}

UpdateTagsForDomainOutcomeCallable Route53DomainsClient::UpdateTagsForDomainCallable(const UpdateTagsForDomainRequest& request) const
{
  return std::async(std::launch::async, &Route53DomainsClient::UpdateTagsForDomain, this, request);
}

void Route53DomainsClient::UpdateTagsForDomainAsync(const UpdateTagsForDomainRequest& request, const UpdateTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&Route53DomainsClient::UpdateTagsForDomainAsyncHelper, this, request, handler, context);
}

void Route53DomainsClient::UpdateTagsForDomainAsyncHelper(const UpdateTagsForDomainRequest& request, const UpdateTagsForDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTagsForDomain(request), context);
}

