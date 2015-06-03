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
#include <aws/email/model/DeleteVerifiedEmailAddressRequest.h>
#include <aws/email/model/GetIdentityDkimAttributesRequest.h>
#include <aws/email/model/GetIdentityNotificationAttributesRequest.h>
#include <aws/email/model/GetIdentityVerificationAttributesRequest.h>
#include <aws/email/model/GetSendQuotaRequest.h>
#include <aws/email/model/GetSendStatisticsRequest.h>
#include <aws/email/model/ListIdentitiesRequest.h>
#include <aws/email/model/ListVerifiedEmailAddressesRequest.h>
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

void SESClient::DeleteIdentityAsync(const DeleteIdentityRequest& request) const
{
  m_executor->Submit(&SESClient::DeleteIdentityAsyncHelper, this, request);
}

void SESClient::DeleteIdentityAsyncHelper(const DeleteIdentityRequest& request) const
{
  m_onDeleteIdentityOutcomeReceived(this, request, DeleteIdentity(request));
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

void SESClient::DeleteVerifiedEmailAddressAsync(const DeleteVerifiedEmailAddressRequest& request) const
{
  m_executor->Submit(&SESClient::DeleteVerifiedEmailAddressAsyncHelper, this, request);
}

void SESClient::DeleteVerifiedEmailAddressAsyncHelper(const DeleteVerifiedEmailAddressRequest& request) const
{
  m_onDeleteVerifiedEmailAddressOutcomeReceived(this, request, DeleteVerifiedEmailAddress(request));
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

void SESClient::GetIdentityDkimAttributesAsync(const GetIdentityDkimAttributesRequest& request) const
{
  m_executor->Submit(&SESClient::GetIdentityDkimAttributesAsyncHelper, this, request);
}

void SESClient::GetIdentityDkimAttributesAsyncHelper(const GetIdentityDkimAttributesRequest& request) const
{
  m_onGetIdentityDkimAttributesOutcomeReceived(this, request, GetIdentityDkimAttributes(request));
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

void SESClient::GetIdentityNotificationAttributesAsync(const GetIdentityNotificationAttributesRequest& request) const
{
  m_executor->Submit(&SESClient::GetIdentityNotificationAttributesAsyncHelper, this, request);
}

void SESClient::GetIdentityNotificationAttributesAsyncHelper(const GetIdentityNotificationAttributesRequest& request) const
{
  m_onGetIdentityNotificationAttributesOutcomeReceived(this, request, GetIdentityNotificationAttributes(request));
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

void SESClient::GetIdentityVerificationAttributesAsync(const GetIdentityVerificationAttributesRequest& request) const
{
  m_executor->Submit(&SESClient::GetIdentityVerificationAttributesAsyncHelper, this, request);
}

void SESClient::GetIdentityVerificationAttributesAsyncHelper(const GetIdentityVerificationAttributesRequest& request) const
{
  m_onGetIdentityVerificationAttributesOutcomeReceived(this, request, GetIdentityVerificationAttributes(request));
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

void SESClient::GetSendQuotaAsync(const GetSendQuotaRequest& request) const
{
  m_executor->Submit(&SESClient::GetSendQuotaAsyncHelper, this, request);
}

void SESClient::GetSendQuotaAsyncHelper(const GetSendQuotaRequest& request) const
{
  m_onGetSendQuotaOutcomeReceived(this, request, GetSendQuota(request));
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

void SESClient::GetSendStatisticsAsync(const GetSendStatisticsRequest& request) const
{
  m_executor->Submit(&SESClient::GetSendStatisticsAsyncHelper, this, request);
}

void SESClient::GetSendStatisticsAsyncHelper(const GetSendStatisticsRequest& request) const
{
  m_onGetSendStatisticsOutcomeReceived(this, request, GetSendStatistics(request));
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

void SESClient::ListIdentitiesAsync(const ListIdentitiesRequest& request) const
{
  m_executor->Submit(&SESClient::ListIdentitiesAsyncHelper, this, request);
}

void SESClient::ListIdentitiesAsyncHelper(const ListIdentitiesRequest& request) const
{
  m_onListIdentitiesOutcomeReceived(this, request, ListIdentities(request));
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

void SESClient::ListVerifiedEmailAddressesAsync(const ListVerifiedEmailAddressesRequest& request) const
{
  m_executor->Submit(&SESClient::ListVerifiedEmailAddressesAsyncHelper, this, request);
}

void SESClient::ListVerifiedEmailAddressesAsyncHelper(const ListVerifiedEmailAddressesRequest& request) const
{
  m_onListVerifiedEmailAddressesOutcomeReceived(this, request, ListVerifiedEmailAddresses(request));
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

void SESClient::SendEmailAsync(const SendEmailRequest& request) const
{
  m_executor->Submit(&SESClient::SendEmailAsyncHelper, this, request);
}

void SESClient::SendEmailAsyncHelper(const SendEmailRequest& request) const
{
  m_onSendEmailOutcomeReceived(this, request, SendEmail(request));
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

void SESClient::SendRawEmailAsync(const SendRawEmailRequest& request) const
{
  m_executor->Submit(&SESClient::SendRawEmailAsyncHelper, this, request);
}

void SESClient::SendRawEmailAsyncHelper(const SendRawEmailRequest& request) const
{
  m_onSendRawEmailOutcomeReceived(this, request, SendRawEmail(request));
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

void SESClient::SetIdentityDkimEnabledAsync(const SetIdentityDkimEnabledRequest& request) const
{
  m_executor->Submit(&SESClient::SetIdentityDkimEnabledAsyncHelper, this, request);
}

void SESClient::SetIdentityDkimEnabledAsyncHelper(const SetIdentityDkimEnabledRequest& request) const
{
  m_onSetIdentityDkimEnabledOutcomeReceived(this, request, SetIdentityDkimEnabled(request));
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

void SESClient::SetIdentityFeedbackForwardingEnabledAsync(const SetIdentityFeedbackForwardingEnabledRequest& request) const
{
  m_executor->Submit(&SESClient::SetIdentityFeedbackForwardingEnabledAsyncHelper, this, request);
}

void SESClient::SetIdentityFeedbackForwardingEnabledAsyncHelper(const SetIdentityFeedbackForwardingEnabledRequest& request) const
{
  m_onSetIdentityFeedbackForwardingEnabledOutcomeReceived(this, request, SetIdentityFeedbackForwardingEnabled(request));
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

void SESClient::SetIdentityNotificationTopicAsync(const SetIdentityNotificationTopicRequest& request) const
{
  m_executor->Submit(&SESClient::SetIdentityNotificationTopicAsyncHelper, this, request);
}

void SESClient::SetIdentityNotificationTopicAsyncHelper(const SetIdentityNotificationTopicRequest& request) const
{
  m_onSetIdentityNotificationTopicOutcomeReceived(this, request, SetIdentityNotificationTopic(request));
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

void SESClient::VerifyDomainDkimAsync(const VerifyDomainDkimRequest& request) const
{
  m_executor->Submit(&SESClient::VerifyDomainDkimAsyncHelper, this, request);
}

void SESClient::VerifyDomainDkimAsyncHelper(const VerifyDomainDkimRequest& request) const
{
  m_onVerifyDomainDkimOutcomeReceived(this, request, VerifyDomainDkim(request));
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

void SESClient::VerifyDomainIdentityAsync(const VerifyDomainIdentityRequest& request) const
{
  m_executor->Submit(&SESClient::VerifyDomainIdentityAsyncHelper, this, request);
}

void SESClient::VerifyDomainIdentityAsyncHelper(const VerifyDomainIdentityRequest& request) const
{
  m_onVerifyDomainIdentityOutcomeReceived(this, request, VerifyDomainIdentity(request));
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

void SESClient::VerifyEmailAddressAsync(const VerifyEmailAddressRequest& request) const
{
  m_executor->Submit(&SESClient::VerifyEmailAddressAsyncHelper, this, request);
}

void SESClient::VerifyEmailAddressAsyncHelper(const VerifyEmailAddressRequest& request) const
{
  m_onVerifyEmailAddressOutcomeReceived(this, request, VerifyEmailAddress(request));
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

void SESClient::VerifyEmailIdentityAsync(const VerifyEmailIdentityRequest& request) const
{
  m_executor->Submit(&SESClient::VerifyEmailIdentityAsyncHelper, this, request);
}

void SESClient::VerifyEmailIdentityAsyncHelper(const VerifyEmailIdentityRequest& request) const
{
  m_onVerifyEmailIdentityOutcomeReceived(this, request, VerifyEmailIdentity(request));
}

