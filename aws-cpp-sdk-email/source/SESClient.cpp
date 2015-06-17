/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/email/SESClient.h>
#include <aws/email/SESEndpoint.h>
#include <aws/email/SESErrorMarshaller.h>
#include <aws/email/model/DeleteIdentityRequest.h>
#include <aws/email/model/DeleteIdentityPolicyRequest.h>
#include <aws/email/model/DeleteVerifiedEmailAddressRequest.h>
#include <aws/email/model/GetIdentityDkimAttributesRequest.h>
#include <aws/email/model/GetIdentityNotificationAttributesRequest.h>
#include <aws/email/model/GetIdentityPoliciesRequest.h>
#include <aws/email/model/GetIdentityVerificationAttributesRequest.h>
#include <aws/email/model/GetSendQuotaRequest.h>
#include <aws/email/model/GetSendStatisticsRequest.h>
#include <aws/email/model/ListIdentitiesRequest.h>
#include <aws/email/model/ListIdentityPoliciesRequest.h>
#include <aws/email/model/ListVerifiedEmailAddressesRequest.h>
#include <aws/email/model/PutIdentityPolicyRequest.h>
#include <aws/email/model/SendEmailRequest.h>
#include <aws/email/model/SendRawEmailRequest.h>
#include <aws/email/model/SetIdentityDkimEnabledRequest.h>
#include <aws/email/model/SetIdentityFeedbackForwardingEnabledRequest.h>
#include <aws/email/model/SetIdentityNotificationTopicRequest.h>
#include <aws/email/model/VerifyDomainDkimRequest.h>
#include <aws/email/model/VerifyDomainIdentityRequest.h>
#include <aws/email/model/VerifyEmailAddressRequest.h>
#include <aws/email/model/VerifyEmailIdentityRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SES;
using namespace Aws::SES::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "email";
static const char* ALLOCATION_TAG = "SESClient";

SESClient::SESClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESClient::SESClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESClient::SESClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SESErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SESClient::~SESClient()
{
}

void SESClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << SESEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

DeleteIdentityOutcome SESClient::DeleteIdentity(const DeleteIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteIdentityOutcome(DeleteIdentityResult(outcome.GetResult()));
  }
  else
  {
    return DeleteIdentityOutcome(outcome.GetError());
  }
}

DeleteIdentityOutcomeCallable SESClient::DeleteIdentityCallable(const DeleteIdentityRequest& request) const
{
  return std::async(std::launch::async, &SESClient::DeleteIdentity, this, request);
}

void SESClient::DeleteIdentityAsync(const DeleteIdentityRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::DeleteIdentityAsyncHelper, this, request, context);
}

void SESClient::DeleteIdentityAsyncHelper(const DeleteIdentityRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteIdentityOutcomeReceived(this, request, DeleteIdentity(request), context);
}

DeleteIdentityPolicyOutcome SESClient::DeleteIdentityPolicy(const DeleteIdentityPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteIdentityPolicyOutcome(DeleteIdentityPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteIdentityPolicyOutcome(outcome.GetError());
  }
}

DeleteIdentityPolicyOutcomeCallable SESClient::DeleteIdentityPolicyCallable(const DeleteIdentityPolicyRequest& request) const
{
  return std::async(std::launch::async, &SESClient::DeleteIdentityPolicy, this, request);
}

void SESClient::DeleteIdentityPolicyAsync(const DeleteIdentityPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::DeleteIdentityPolicyAsyncHelper, this, request, context);
}

void SESClient::DeleteIdentityPolicyAsyncHelper(const DeleteIdentityPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteIdentityPolicyOutcomeReceived(this, request, DeleteIdentityPolicy(request), context);
}

DeleteVerifiedEmailAddressOutcome SESClient::DeleteVerifiedEmailAddress(const DeleteVerifiedEmailAddressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVerifiedEmailAddressOutcome(NoResult());
  }
  else
  {
    return DeleteVerifiedEmailAddressOutcome(outcome.GetError());
  }
}

DeleteVerifiedEmailAddressOutcomeCallable SESClient::DeleteVerifiedEmailAddressCallable(const DeleteVerifiedEmailAddressRequest& request) const
{
  return std::async(std::launch::async, &SESClient::DeleteVerifiedEmailAddress, this, request);
}

void SESClient::DeleteVerifiedEmailAddressAsync(const DeleteVerifiedEmailAddressRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::DeleteVerifiedEmailAddressAsyncHelper, this, request, context);
}

void SESClient::DeleteVerifiedEmailAddressAsyncHelper(const DeleteVerifiedEmailAddressRequest& request, const AsyncCallerContext* context) const
{
  m_onDeleteVerifiedEmailAddressOutcomeReceived(this, request, DeleteVerifiedEmailAddress(request), context);
}

GetIdentityDkimAttributesOutcome SESClient::GetIdentityDkimAttributes(const GetIdentityDkimAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityDkimAttributesOutcome(GetIdentityDkimAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityDkimAttributesOutcome(outcome.GetError());
  }
}

GetIdentityDkimAttributesOutcomeCallable SESClient::GetIdentityDkimAttributesCallable(const GetIdentityDkimAttributesRequest& request) const
{
  return std::async(std::launch::async, &SESClient::GetIdentityDkimAttributes, this, request);
}

void SESClient::GetIdentityDkimAttributesAsync(const GetIdentityDkimAttributesRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::GetIdentityDkimAttributesAsyncHelper, this, request, context);
}

void SESClient::GetIdentityDkimAttributesAsyncHelper(const GetIdentityDkimAttributesRequest& request, const AsyncCallerContext* context) const
{
  m_onGetIdentityDkimAttributesOutcomeReceived(this, request, GetIdentityDkimAttributes(request), context);
}

GetIdentityNotificationAttributesOutcome SESClient::GetIdentityNotificationAttributes(const GetIdentityNotificationAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityNotificationAttributesOutcome(GetIdentityNotificationAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityNotificationAttributesOutcome(outcome.GetError());
  }
}

GetIdentityNotificationAttributesOutcomeCallable SESClient::GetIdentityNotificationAttributesCallable(const GetIdentityNotificationAttributesRequest& request) const
{
  return std::async(std::launch::async, &SESClient::GetIdentityNotificationAttributes, this, request);
}

void SESClient::GetIdentityNotificationAttributesAsync(const GetIdentityNotificationAttributesRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::GetIdentityNotificationAttributesAsyncHelper, this, request, context);
}

void SESClient::GetIdentityNotificationAttributesAsyncHelper(const GetIdentityNotificationAttributesRequest& request, const AsyncCallerContext* context) const
{
  m_onGetIdentityNotificationAttributesOutcomeReceived(this, request, GetIdentityNotificationAttributes(request), context);
}

GetIdentityPoliciesOutcome SESClient::GetIdentityPolicies(const GetIdentityPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityPoliciesOutcome(GetIdentityPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityPoliciesOutcome(outcome.GetError());
  }
}

GetIdentityPoliciesOutcomeCallable SESClient::GetIdentityPoliciesCallable(const GetIdentityPoliciesRequest& request) const
{
  return std::async(std::launch::async, &SESClient::GetIdentityPolicies, this, request);
}

void SESClient::GetIdentityPoliciesAsync(const GetIdentityPoliciesRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::GetIdentityPoliciesAsyncHelper, this, request, context);
}

void SESClient::GetIdentityPoliciesAsyncHelper(const GetIdentityPoliciesRequest& request, const AsyncCallerContext* context) const
{
  m_onGetIdentityPoliciesOutcomeReceived(this, request, GetIdentityPolicies(request), context);
}

GetIdentityVerificationAttributesOutcome SESClient::GetIdentityVerificationAttributes(const GetIdentityVerificationAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetIdentityVerificationAttributesOutcome(GetIdentityVerificationAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetIdentityVerificationAttributesOutcome(outcome.GetError());
  }
}

GetIdentityVerificationAttributesOutcomeCallable SESClient::GetIdentityVerificationAttributesCallable(const GetIdentityVerificationAttributesRequest& request) const
{
  return std::async(std::launch::async, &SESClient::GetIdentityVerificationAttributes, this, request);
}

void SESClient::GetIdentityVerificationAttributesAsync(const GetIdentityVerificationAttributesRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::GetIdentityVerificationAttributesAsyncHelper, this, request, context);
}

void SESClient::GetIdentityVerificationAttributesAsyncHelper(const GetIdentityVerificationAttributesRequest& request, const AsyncCallerContext* context) const
{
  m_onGetIdentityVerificationAttributesOutcomeReceived(this, request, GetIdentityVerificationAttributes(request), context);
}

GetSendQuotaOutcome SESClient::GetSendQuota(const GetSendQuotaRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSendQuotaOutcome(GetSendQuotaResult(outcome.GetResult()));
  }
  else
  {
    return GetSendQuotaOutcome(outcome.GetError());
  }
}

GetSendQuotaOutcomeCallable SESClient::GetSendQuotaCallable(const GetSendQuotaRequest& request) const
{
  return std::async(std::launch::async, &SESClient::GetSendQuota, this, request);
}

void SESClient::GetSendQuotaAsync(const GetSendQuotaRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::GetSendQuotaAsyncHelper, this, request, context);
}

void SESClient::GetSendQuotaAsyncHelper(const GetSendQuotaRequest& request, const AsyncCallerContext* context) const
{
  m_onGetSendQuotaOutcomeReceived(this, request, GetSendQuota(request), context);
}

GetSendStatisticsOutcome SESClient::GetSendStatistics(const GetSendStatisticsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSendStatisticsOutcome(GetSendStatisticsResult(outcome.GetResult()));
  }
  else
  {
    return GetSendStatisticsOutcome(outcome.GetError());
  }
}

GetSendStatisticsOutcomeCallable SESClient::GetSendStatisticsCallable(const GetSendStatisticsRequest& request) const
{
  return std::async(std::launch::async, &SESClient::GetSendStatistics, this, request);
}

void SESClient::GetSendStatisticsAsync(const GetSendStatisticsRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::GetSendStatisticsAsyncHelper, this, request, context);
}

void SESClient::GetSendStatisticsAsyncHelper(const GetSendStatisticsRequest& request, const AsyncCallerContext* context) const
{
  m_onGetSendStatisticsOutcomeReceived(this, request, GetSendStatistics(request), context);
}

ListIdentitiesOutcome SESClient::ListIdentities(const ListIdentitiesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListIdentitiesOutcome(ListIdentitiesResult(outcome.GetResult()));
  }
  else
  {
    return ListIdentitiesOutcome(outcome.GetError());
  }
}

ListIdentitiesOutcomeCallable SESClient::ListIdentitiesCallable(const ListIdentitiesRequest& request) const
{
  return std::async(std::launch::async, &SESClient::ListIdentities, this, request);
}

void SESClient::ListIdentitiesAsync(const ListIdentitiesRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::ListIdentitiesAsyncHelper, this, request, context);
}

void SESClient::ListIdentitiesAsyncHelper(const ListIdentitiesRequest& request, const AsyncCallerContext* context) const
{
  m_onListIdentitiesOutcomeReceived(this, request, ListIdentities(request), context);
}

ListIdentityPoliciesOutcome SESClient::ListIdentityPolicies(const ListIdentityPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListIdentityPoliciesOutcome(ListIdentityPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListIdentityPoliciesOutcome(outcome.GetError());
  }
}

ListIdentityPoliciesOutcomeCallable SESClient::ListIdentityPoliciesCallable(const ListIdentityPoliciesRequest& request) const
{
  return std::async(std::launch::async, &SESClient::ListIdentityPolicies, this, request);
}

void SESClient::ListIdentityPoliciesAsync(const ListIdentityPoliciesRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::ListIdentityPoliciesAsyncHelper, this, request, context);
}

void SESClient::ListIdentityPoliciesAsyncHelper(const ListIdentityPoliciesRequest& request, const AsyncCallerContext* context) const
{
  m_onListIdentityPoliciesOutcomeReceived(this, request, ListIdentityPolicies(request), context);
}

ListVerifiedEmailAddressesOutcome SESClient::ListVerifiedEmailAddresses(const ListVerifiedEmailAddressesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListVerifiedEmailAddressesOutcome(ListVerifiedEmailAddressesResult(outcome.GetResult()));
  }
  else
  {
    return ListVerifiedEmailAddressesOutcome(outcome.GetError());
  }
}

ListVerifiedEmailAddressesOutcomeCallable SESClient::ListVerifiedEmailAddressesCallable(const ListVerifiedEmailAddressesRequest& request) const
{
  return std::async(std::launch::async, &SESClient::ListVerifiedEmailAddresses, this, request);
}

void SESClient::ListVerifiedEmailAddressesAsync(const ListVerifiedEmailAddressesRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::ListVerifiedEmailAddressesAsyncHelper, this, request, context);
}

void SESClient::ListVerifiedEmailAddressesAsyncHelper(const ListVerifiedEmailAddressesRequest& request, const AsyncCallerContext* context) const
{
  m_onListVerifiedEmailAddressesOutcomeReceived(this, request, ListVerifiedEmailAddresses(request), context);
}

PutIdentityPolicyOutcome SESClient::PutIdentityPolicy(const PutIdentityPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutIdentityPolicyOutcome(PutIdentityPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutIdentityPolicyOutcome(outcome.GetError());
  }
}

PutIdentityPolicyOutcomeCallable SESClient::PutIdentityPolicyCallable(const PutIdentityPolicyRequest& request) const
{
  return std::async(std::launch::async, &SESClient::PutIdentityPolicy, this, request);
}

void SESClient::PutIdentityPolicyAsync(const PutIdentityPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::PutIdentityPolicyAsyncHelper, this, request, context);
}

void SESClient::PutIdentityPolicyAsyncHelper(const PutIdentityPolicyRequest& request, const AsyncCallerContext* context) const
{
  m_onPutIdentityPolicyOutcomeReceived(this, request, PutIdentityPolicy(request), context);
}

SendEmailOutcome SESClient::SendEmail(const SendEmailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SendEmailOutcome(SendEmailResult(outcome.GetResult()));
  }
  else
  {
    return SendEmailOutcome(outcome.GetError());
  }
}

SendEmailOutcomeCallable SESClient::SendEmailCallable(const SendEmailRequest& request) const
{
  return std::async(std::launch::async, &SESClient::SendEmail, this, request);
}

void SESClient::SendEmailAsync(const SendEmailRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::SendEmailAsyncHelper, this, request, context);
}

void SESClient::SendEmailAsyncHelper(const SendEmailRequest& request, const AsyncCallerContext* context) const
{
  m_onSendEmailOutcomeReceived(this, request, SendEmail(request), context);
}

SendRawEmailOutcome SESClient::SendRawEmail(const SendRawEmailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SendRawEmailOutcome(SendRawEmailResult(outcome.GetResult()));
  }
  else
  {
    return SendRawEmailOutcome(outcome.GetError());
  }
}

SendRawEmailOutcomeCallable SESClient::SendRawEmailCallable(const SendRawEmailRequest& request) const
{
  return std::async(std::launch::async, &SESClient::SendRawEmail, this, request);
}

void SESClient::SendRawEmailAsync(const SendRawEmailRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::SendRawEmailAsyncHelper, this, request, context);
}

void SESClient::SendRawEmailAsyncHelper(const SendRawEmailRequest& request, const AsyncCallerContext* context) const
{
  m_onSendRawEmailOutcomeReceived(this, request, SendRawEmail(request), context);
}

SetIdentityDkimEnabledOutcome SESClient::SetIdentityDkimEnabled(const SetIdentityDkimEnabledRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIdentityDkimEnabledOutcome(SetIdentityDkimEnabledResult(outcome.GetResult()));
  }
  else
  {
    return SetIdentityDkimEnabledOutcome(outcome.GetError());
  }
}

SetIdentityDkimEnabledOutcomeCallable SESClient::SetIdentityDkimEnabledCallable(const SetIdentityDkimEnabledRequest& request) const
{
  return std::async(std::launch::async, &SESClient::SetIdentityDkimEnabled, this, request);
}

void SESClient::SetIdentityDkimEnabledAsync(const SetIdentityDkimEnabledRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::SetIdentityDkimEnabledAsyncHelper, this, request, context);
}

void SESClient::SetIdentityDkimEnabledAsyncHelper(const SetIdentityDkimEnabledRequest& request, const AsyncCallerContext* context) const
{
  m_onSetIdentityDkimEnabledOutcomeReceived(this, request, SetIdentityDkimEnabled(request), context);
}

SetIdentityFeedbackForwardingEnabledOutcome SESClient::SetIdentityFeedbackForwardingEnabled(const SetIdentityFeedbackForwardingEnabledRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIdentityFeedbackForwardingEnabledOutcome(SetIdentityFeedbackForwardingEnabledResult(outcome.GetResult()));
  }
  else
  {
    return SetIdentityFeedbackForwardingEnabledOutcome(outcome.GetError());
  }
}

SetIdentityFeedbackForwardingEnabledOutcomeCallable SESClient::SetIdentityFeedbackForwardingEnabledCallable(const SetIdentityFeedbackForwardingEnabledRequest& request) const
{
  return std::async(std::launch::async, &SESClient::SetIdentityFeedbackForwardingEnabled, this, request);
}

void SESClient::SetIdentityFeedbackForwardingEnabledAsync(const SetIdentityFeedbackForwardingEnabledRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::SetIdentityFeedbackForwardingEnabledAsyncHelper, this, request, context);
}

void SESClient::SetIdentityFeedbackForwardingEnabledAsyncHelper(const SetIdentityFeedbackForwardingEnabledRequest& request, const AsyncCallerContext* context) const
{
  m_onSetIdentityFeedbackForwardingEnabledOutcomeReceived(this, request, SetIdentityFeedbackForwardingEnabled(request), context);
}

SetIdentityNotificationTopicOutcome SESClient::SetIdentityNotificationTopic(const SetIdentityNotificationTopicRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIdentityNotificationTopicOutcome(SetIdentityNotificationTopicResult(outcome.GetResult()));
  }
  else
  {
    return SetIdentityNotificationTopicOutcome(outcome.GetError());
  }
}

SetIdentityNotificationTopicOutcomeCallable SESClient::SetIdentityNotificationTopicCallable(const SetIdentityNotificationTopicRequest& request) const
{
  return std::async(std::launch::async, &SESClient::SetIdentityNotificationTopic, this, request);
}

void SESClient::SetIdentityNotificationTopicAsync(const SetIdentityNotificationTopicRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::SetIdentityNotificationTopicAsyncHelper, this, request, context);
}

void SESClient::SetIdentityNotificationTopicAsyncHelper(const SetIdentityNotificationTopicRequest& request, const AsyncCallerContext* context) const
{
  m_onSetIdentityNotificationTopicOutcomeReceived(this, request, SetIdentityNotificationTopic(request), context);
}

VerifyDomainDkimOutcome SESClient::VerifyDomainDkim(const VerifyDomainDkimRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return VerifyDomainDkimOutcome(VerifyDomainDkimResult(outcome.GetResult()));
  }
  else
  {
    return VerifyDomainDkimOutcome(outcome.GetError());
  }
}

VerifyDomainDkimOutcomeCallable SESClient::VerifyDomainDkimCallable(const VerifyDomainDkimRequest& request) const
{
  return std::async(std::launch::async, &SESClient::VerifyDomainDkim, this, request);
}

void SESClient::VerifyDomainDkimAsync(const VerifyDomainDkimRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::VerifyDomainDkimAsyncHelper, this, request, context);
}

void SESClient::VerifyDomainDkimAsyncHelper(const VerifyDomainDkimRequest& request, const AsyncCallerContext* context) const
{
  m_onVerifyDomainDkimOutcomeReceived(this, request, VerifyDomainDkim(request), context);
}

VerifyDomainIdentityOutcome SESClient::VerifyDomainIdentity(const VerifyDomainIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return VerifyDomainIdentityOutcome(VerifyDomainIdentityResult(outcome.GetResult()));
  }
  else
  {
    return VerifyDomainIdentityOutcome(outcome.GetError());
  }
}

VerifyDomainIdentityOutcomeCallable SESClient::VerifyDomainIdentityCallable(const VerifyDomainIdentityRequest& request) const
{
  return std::async(std::launch::async, &SESClient::VerifyDomainIdentity, this, request);
}

void SESClient::VerifyDomainIdentityAsync(const VerifyDomainIdentityRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::VerifyDomainIdentityAsyncHelper, this, request, context);
}

void SESClient::VerifyDomainIdentityAsyncHelper(const VerifyDomainIdentityRequest& request, const AsyncCallerContext* context) const
{
  m_onVerifyDomainIdentityOutcomeReceived(this, request, VerifyDomainIdentity(request), context);
}

VerifyEmailAddressOutcome SESClient::VerifyEmailAddress(const VerifyEmailAddressRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return VerifyEmailAddressOutcome(NoResult());
  }
  else
  {
    return VerifyEmailAddressOutcome(outcome.GetError());
  }
}

VerifyEmailAddressOutcomeCallable SESClient::VerifyEmailAddressCallable(const VerifyEmailAddressRequest& request) const
{
  return std::async(std::launch::async, &SESClient::VerifyEmailAddress, this, request);
}

void SESClient::VerifyEmailAddressAsync(const VerifyEmailAddressRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::VerifyEmailAddressAsyncHelper, this, request, context);
}

void SESClient::VerifyEmailAddressAsyncHelper(const VerifyEmailAddressRequest& request, const AsyncCallerContext* context) const
{
  m_onVerifyEmailAddressOutcomeReceived(this, request, VerifyEmailAddress(request), context);
}

VerifyEmailIdentityOutcome SESClient::VerifyEmailIdentity(const VerifyEmailIdentityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return VerifyEmailIdentityOutcome(VerifyEmailIdentityResult(outcome.GetResult()));
  }
  else
  {
    return VerifyEmailIdentityOutcome(outcome.GetError());
  }
}

VerifyEmailIdentityOutcomeCallable SESClient::VerifyEmailIdentityCallable(const VerifyEmailIdentityRequest& request) const
{
  return std::async(std::launch::async, &SESClient::VerifyEmailIdentity, this, request);
}

void SESClient::VerifyEmailIdentityAsync(const VerifyEmailIdentityRequest& request, const AsyncCallerContext* context) const
{
  m_executor->Submit(&SESClient::VerifyEmailIdentityAsyncHelper, this, request, context);
}

void SESClient::VerifyEmailIdentityAsyncHelper(const VerifyEmailIdentityRequest& request, const AsyncCallerContext* context) const
{
  m_onVerifyEmailIdentityOutcomeReceived(this, request, VerifyEmailIdentity(request), context);
}

