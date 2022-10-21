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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/sns/SNSClient.h>
#include <aws/sns/SNSEndpoint.h>
#include <aws/sns/SNSErrorMarshaller.h>
#include <aws/sns/model/AddPermissionRequest.h>
#include <aws/sns/model/CheckIfPhoneNumberIsOptedOutRequest.h>
#include <aws/sns/model/ConfirmSubscriptionRequest.h>
#include <aws/sns/model/CreatePlatformApplicationRequest.h>
#include <aws/sns/model/CreatePlatformEndpointRequest.h>
#include <aws/sns/model/CreateSMSSandboxPhoneNumberRequest.h>
#include <aws/sns/model/CreateTopicRequest.h>
#include <aws/sns/model/DeleteEndpointRequest.h>
#include <aws/sns/model/DeletePlatformApplicationRequest.h>
#include <aws/sns/model/DeleteSMSSandboxPhoneNumberRequest.h>
#include <aws/sns/model/DeleteTopicRequest.h>
#include <aws/sns/model/GetDataProtectionPolicyRequest.h>
#include <aws/sns/model/GetEndpointAttributesRequest.h>
#include <aws/sns/model/GetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/GetSMSAttributesRequest.h>
#include <aws/sns/model/GetSMSSandboxAccountStatusRequest.h>
#include <aws/sns/model/GetSubscriptionAttributesRequest.h>
#include <aws/sns/model/GetTopicAttributesRequest.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationRequest.h>
#include <aws/sns/model/ListOriginationNumbersRequest.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutRequest.h>
#include <aws/sns/model/ListPlatformApplicationsRequest.h>
#include <aws/sns/model/ListSMSSandboxPhoneNumbersRequest.h>
#include <aws/sns/model/ListSubscriptionsRequest.h>
#include <aws/sns/model/ListSubscriptionsByTopicRequest.h>
#include <aws/sns/model/ListTagsForResourceRequest.h>
#include <aws/sns/model/ListTopicsRequest.h>
#include <aws/sns/model/OptInPhoneNumberRequest.h>
#include <aws/sns/model/PublishRequest.h>
#include <aws/sns/model/PublishBatchRequest.h>
#include <aws/sns/model/PutDataProtectionPolicyRequest.h>
#include <aws/sns/model/RemovePermissionRequest.h>
#include <aws/sns/model/SetEndpointAttributesRequest.h>
#include <aws/sns/model/SetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/SetSMSAttributesRequest.h>
#include <aws/sns/model/SetSubscriptionAttributesRequest.h>
#include <aws/sns/model/SetTopicAttributesRequest.h>
#include <aws/sns/model/SubscribeRequest.h>
#include <aws/sns/model/TagResourceRequest.h>
#include <aws/sns/model/UnsubscribeRequest.h>
#include <aws/sns/model/UntagResourceRequest.h>
#include <aws/sns/model/VerifySMSSandboxPhoneNumberRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SNS;
using namespace Aws::SNS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


const char* SNSClient::SERVICE_NAME = "sns";
const char* SNSClient::ALLOCATION_TAG = "SNSClient";

SNSClient::SNSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SNSClient::SNSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SNSClient::SNSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SNSClient::~SNSClient()
{
}

void SNSClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SNS");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SNSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SNSClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String SNSClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << SNSEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddPermissionOutcome SNSClient::AddPermission(const AddPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddPermissionOutcomeCallable SNSClient::AddPermissionCallable(const AddPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::AddPermissionAsync(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddPermission(request), context);
    } );
}

CheckIfPhoneNumberIsOptedOutOutcome SNSClient::CheckIfPhoneNumberIsOptedOut(const CheckIfPhoneNumberIsOptedOutRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CheckIfPhoneNumberIsOptedOutOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CheckIfPhoneNumberIsOptedOutOutcomeCallable SNSClient::CheckIfPhoneNumberIsOptedOutCallable(const CheckIfPhoneNumberIsOptedOutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CheckIfPhoneNumberIsOptedOutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CheckIfPhoneNumberIsOptedOut(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::CheckIfPhoneNumberIsOptedOutAsync(const CheckIfPhoneNumberIsOptedOutRequest& request, const CheckIfPhoneNumberIsOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CheckIfPhoneNumberIsOptedOut(request), context);
    } );
}

ConfirmSubscriptionOutcome SNSClient::ConfirmSubscription(const ConfirmSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ConfirmSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ConfirmSubscriptionOutcomeCallable SNSClient::ConfirmSubscriptionCallable(const ConfirmSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfirmSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ConfirmSubscriptionAsync(const ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ConfirmSubscription(request), context);
    } );
}

CreatePlatformApplicationOutcome SNSClient::CreatePlatformApplication(const CreatePlatformApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePlatformApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreatePlatformApplicationOutcomeCallable SNSClient::CreatePlatformApplicationCallable(const CreatePlatformApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlatformApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlatformApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::CreatePlatformApplicationAsync(const CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePlatformApplication(request), context);
    } );
}

CreatePlatformEndpointOutcome SNSClient::CreatePlatformEndpoint(const CreatePlatformEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePlatformEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreatePlatformEndpointOutcomeCallable SNSClient::CreatePlatformEndpointCallable(const CreatePlatformEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlatformEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlatformEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::CreatePlatformEndpointAsync(const CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePlatformEndpoint(request), context);
    } );
}

CreateSMSSandboxPhoneNumberOutcome SNSClient::CreateSMSSandboxPhoneNumber(const CreateSMSSandboxPhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSMSSandboxPhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateSMSSandboxPhoneNumberOutcomeCallable SNSClient::CreateSMSSandboxPhoneNumberCallable(const CreateSMSSandboxPhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSMSSandboxPhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSMSSandboxPhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::CreateSMSSandboxPhoneNumberAsync(const CreateSMSSandboxPhoneNumberRequest& request, const CreateSMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSMSSandboxPhoneNumber(request), context);
    } );
}

CreateTopicOutcome SNSClient::CreateTopic(const CreateTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTopicOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateTopicOutcomeCallable SNSClient::CreateTopicCallable(const CreateTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTopic(request), context);
    } );
}

DeleteEndpointOutcome SNSClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEndpointOutcomeCallable SNSClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEndpoint(request), context);
    } );
}

DeletePlatformApplicationOutcome SNSClient::DeletePlatformApplication(const DeletePlatformApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePlatformApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeletePlatformApplicationOutcomeCallable SNSClient::DeletePlatformApplicationCallable(const DeletePlatformApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlatformApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlatformApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::DeletePlatformApplicationAsync(const DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePlatformApplication(request), context);
    } );
}

DeleteSMSSandboxPhoneNumberOutcome SNSClient::DeleteSMSSandboxPhoneNumber(const DeleteSMSSandboxPhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSMSSandboxPhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSMSSandboxPhoneNumberOutcomeCallable SNSClient::DeleteSMSSandboxPhoneNumberCallable(const DeleteSMSSandboxPhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSMSSandboxPhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSMSSandboxPhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::DeleteSMSSandboxPhoneNumberAsync(const DeleteSMSSandboxPhoneNumberRequest& request, const DeleteSMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSMSSandboxPhoneNumber(request), context);
    } );
}

DeleteTopicOutcome SNSClient::DeleteTopic(const DeleteTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTopicOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTopicOutcomeCallable SNSClient::DeleteTopicCallable(const DeleteTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTopic(request), context);
    } );
}

GetDataProtectionPolicyOutcome SNSClient::GetDataProtectionPolicy(const GetDataProtectionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDataProtectionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetDataProtectionPolicyOutcomeCallable SNSClient::GetDataProtectionPolicyCallable(const GetDataProtectionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataProtectionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataProtectionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetDataProtectionPolicyAsync(const GetDataProtectionPolicyRequest& request, const GetDataProtectionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDataProtectionPolicy(request), context);
    } );
}

GetEndpointAttributesOutcome SNSClient::GetEndpointAttributes(const GetEndpointAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEndpointAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetEndpointAttributesOutcomeCallable SNSClient::GetEndpointAttributesCallable(const GetEndpointAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEndpointAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEndpointAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetEndpointAttributesAsync(const GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEndpointAttributes(request), context);
    } );
}

GetPlatformApplicationAttributesOutcome SNSClient::GetPlatformApplicationAttributes(const GetPlatformApplicationAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetPlatformApplicationAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetPlatformApplicationAttributesOutcomeCallable SNSClient::GetPlatformApplicationAttributesCallable(const GetPlatformApplicationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPlatformApplicationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPlatformApplicationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetPlatformApplicationAttributesAsync(const GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPlatformApplicationAttributes(request), context);
    } );
}

GetSMSAttributesOutcome SNSClient::GetSMSAttributes(const GetSMSAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSMSAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetSMSAttributesOutcomeCallable SNSClient::GetSMSAttributesCallable(const GetSMSAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSMSAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSMSAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetSMSAttributesAsync(const GetSMSAttributesRequest& request, const GetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSMSAttributes(request), context);
    } );
}

GetSMSSandboxAccountStatusOutcome SNSClient::GetSMSSandboxAccountStatus(const GetSMSSandboxAccountStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSMSSandboxAccountStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetSMSSandboxAccountStatusOutcomeCallable SNSClient::GetSMSSandboxAccountStatusCallable(const GetSMSSandboxAccountStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSMSSandboxAccountStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSMSSandboxAccountStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetSMSSandboxAccountStatusAsync(const GetSMSSandboxAccountStatusRequest& request, const GetSMSSandboxAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSMSSandboxAccountStatus(request), context);
    } );
}

GetSubscriptionAttributesOutcome SNSClient::GetSubscriptionAttributes(const GetSubscriptionAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSubscriptionAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetSubscriptionAttributesOutcomeCallable SNSClient::GetSubscriptionAttributesCallable(const GetSubscriptionAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSubscriptionAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSubscriptionAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetSubscriptionAttributesAsync(const GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSubscriptionAttributes(request), context);
    } );
}

GetTopicAttributesOutcome SNSClient::GetTopicAttributes(const GetTopicAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTopicAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetTopicAttributesOutcomeCallable SNSClient::GetTopicAttributesCallable(const GetTopicAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTopicAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTopicAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::GetTopicAttributesAsync(const GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTopicAttributes(request), context);
    } );
}

ListEndpointsByPlatformApplicationOutcome SNSClient::ListEndpointsByPlatformApplication(const ListEndpointsByPlatformApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEndpointsByPlatformApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListEndpointsByPlatformApplicationOutcomeCallable SNSClient::ListEndpointsByPlatformApplicationCallable(const ListEndpointsByPlatformApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointsByPlatformApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpointsByPlatformApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListEndpointsByPlatformApplicationAsync(const ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEndpointsByPlatformApplication(request), context);
    } );
}

ListOriginationNumbersOutcome SNSClient::ListOriginationNumbers(const ListOriginationNumbersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListOriginationNumbersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListOriginationNumbersOutcomeCallable SNSClient::ListOriginationNumbersCallable(const ListOriginationNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOriginationNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOriginationNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListOriginationNumbersAsync(const ListOriginationNumbersRequest& request, const ListOriginationNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOriginationNumbers(request), context);
    } );
}

ListPhoneNumbersOptedOutOutcome SNSClient::ListPhoneNumbersOptedOut(const ListPhoneNumbersOptedOutRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPhoneNumbersOptedOutOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListPhoneNumbersOptedOutOutcomeCallable SNSClient::ListPhoneNumbersOptedOutCallable(const ListPhoneNumbersOptedOutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPhoneNumbersOptedOutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPhoneNumbersOptedOut(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListPhoneNumbersOptedOutAsync(const ListPhoneNumbersOptedOutRequest& request, const ListPhoneNumbersOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPhoneNumbersOptedOut(request), context);
    } );
}

ListPlatformApplicationsOutcome SNSClient::ListPlatformApplications(const ListPlatformApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPlatformApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListPlatformApplicationsOutcomeCallable SNSClient::ListPlatformApplicationsCallable(const ListPlatformApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlatformApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlatformApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListPlatformApplicationsAsync(const ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPlatformApplications(request), context);
    } );
}

ListSMSSandboxPhoneNumbersOutcome SNSClient::ListSMSSandboxPhoneNumbers(const ListSMSSandboxPhoneNumbersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSMSSandboxPhoneNumbersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListSMSSandboxPhoneNumbersOutcomeCallable SNSClient::ListSMSSandboxPhoneNumbersCallable(const ListSMSSandboxPhoneNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSMSSandboxPhoneNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSMSSandboxPhoneNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListSMSSandboxPhoneNumbersAsync(const ListSMSSandboxPhoneNumbersRequest& request, const ListSMSSandboxPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSMSSandboxPhoneNumbers(request), context);
    } );
}

ListSubscriptionsOutcome SNSClient::ListSubscriptions(const ListSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListSubscriptionsOutcomeCallable SNSClient::ListSubscriptionsCallable(const ListSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListSubscriptionsAsync(const ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSubscriptions(request), context);
    } );
}

ListSubscriptionsByTopicOutcome SNSClient::ListSubscriptionsByTopic(const ListSubscriptionsByTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSubscriptionsByTopicOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListSubscriptionsByTopicOutcomeCallable SNSClient::ListSubscriptionsByTopicCallable(const ListSubscriptionsByTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscriptionsByTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscriptionsByTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListSubscriptionsByTopicAsync(const ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSubscriptionsByTopic(request), context);
    } );
}

ListTagsForResourceOutcome SNSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable SNSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTopicsOutcome SNSClient::ListTopics(const ListTopicsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTopicsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTopicsOutcomeCallable SNSClient::ListTopicsCallable(const ListTopicsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTopicsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTopics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::ListTopicsAsync(const ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTopics(request), context);
    } );
}

OptInPhoneNumberOutcome SNSClient::OptInPhoneNumber(const OptInPhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return OptInPhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

OptInPhoneNumberOutcomeCallable SNSClient::OptInPhoneNumberCallable(const OptInPhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< OptInPhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->OptInPhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::OptInPhoneNumberAsync(const OptInPhoneNumberRequest& request, const OptInPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, OptInPhoneNumber(request), context);
    } );
}

PublishOutcome SNSClient::Publish(const PublishRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PublishOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PublishOutcomeCallable SNSClient::PublishCallable(const PublishRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Publish(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::PublishAsync(const PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Publish(request), context);
    } );
}

PublishBatchOutcome SNSClient::PublishBatch(const PublishBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PublishBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PublishBatchOutcomeCallable SNSClient::PublishBatchCallable(const PublishBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::PublishBatchAsync(const PublishBatchRequest& request, const PublishBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PublishBatch(request), context);
    } );
}

PutDataProtectionPolicyOutcome SNSClient::PutDataProtectionPolicy(const PutDataProtectionPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutDataProtectionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutDataProtectionPolicyOutcomeCallable SNSClient::PutDataProtectionPolicyCallable(const PutDataProtectionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDataProtectionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDataProtectionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::PutDataProtectionPolicyAsync(const PutDataProtectionPolicyRequest& request, const PutDataProtectionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDataProtectionPolicy(request), context);
    } );
}

RemovePermissionOutcome SNSClient::RemovePermission(const RemovePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemovePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemovePermissionOutcomeCallable SNSClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemovePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemovePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemovePermission(request), context);
    } );
}

SetEndpointAttributesOutcome SNSClient::SetEndpointAttributes(const SetEndpointAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetEndpointAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetEndpointAttributesOutcomeCallable SNSClient::SetEndpointAttributesCallable(const SetEndpointAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetEndpointAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetEndpointAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetEndpointAttributesAsync(const SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetEndpointAttributes(request), context);
    } );
}

SetPlatformApplicationAttributesOutcome SNSClient::SetPlatformApplicationAttributes(const SetPlatformApplicationAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetPlatformApplicationAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetPlatformApplicationAttributesOutcomeCallable SNSClient::SetPlatformApplicationAttributesCallable(const SetPlatformApplicationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetPlatformApplicationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetPlatformApplicationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetPlatformApplicationAttributesAsync(const SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetPlatformApplicationAttributes(request), context);
    } );
}

SetSMSAttributesOutcome SNSClient::SetSMSAttributes(const SetSMSAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetSMSAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetSMSAttributesOutcomeCallable SNSClient::SetSMSAttributesCallable(const SetSMSAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSMSAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSMSAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetSMSAttributesAsync(const SetSMSAttributesRequest& request, const SetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetSMSAttributes(request), context);
    } );
}

SetSubscriptionAttributesOutcome SNSClient::SetSubscriptionAttributes(const SetSubscriptionAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetSubscriptionAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetSubscriptionAttributesOutcomeCallable SNSClient::SetSubscriptionAttributesCallable(const SetSubscriptionAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSubscriptionAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSubscriptionAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetSubscriptionAttributesAsync(const SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetSubscriptionAttributes(request), context);
    } );
}

SetTopicAttributesOutcome SNSClient::SetTopicAttributes(const SetTopicAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetTopicAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetTopicAttributesOutcomeCallable SNSClient::SetTopicAttributesCallable(const SetTopicAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTopicAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTopicAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SetTopicAttributesAsync(const SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetTopicAttributes(request), context);
    } );
}

SubscribeOutcome SNSClient::Subscribe(const SubscribeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SubscribeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SubscribeOutcomeCallable SNSClient::SubscribeCallable(const SubscribeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubscribeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Subscribe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::SubscribeAsync(const SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Subscribe(request), context);
    } );
}

TagResourceOutcome SNSClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagResourceOutcomeCallable SNSClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UnsubscribeOutcome SNSClient::Unsubscribe(const UnsubscribeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UnsubscribeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UnsubscribeOutcomeCallable SNSClient::UnsubscribeCallable(const UnsubscribeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnsubscribeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Unsubscribe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::UnsubscribeAsync(const UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Unsubscribe(request), context);
    } );
}

UntagResourceOutcome SNSClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagResourceOutcomeCallable SNSClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

VerifySMSSandboxPhoneNumberOutcome SNSClient::VerifySMSSandboxPhoneNumber(const VerifySMSSandboxPhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return VerifySMSSandboxPhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

VerifySMSSandboxPhoneNumberOutcomeCallable SNSClient::VerifySMSSandboxPhoneNumberCallable(const VerifySMSSandboxPhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifySMSSandboxPhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifySMSSandboxPhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SNSClient::VerifySMSSandboxPhoneNumberAsync(const VerifySMSSandboxPhoneNumberRequest& request, const VerifySMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, VerifySMSSandboxPhoneNumber(request), context);
    } );
}

