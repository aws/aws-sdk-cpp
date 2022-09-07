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


static const char* SERVICE_NAME = "sns";
static const char* ALLOCATION_TAG = "SNSClient";

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

void SNSClientAddPermissionAsyncHelper(SNSClient const * const clientThis, const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddPermission(request), context);
}

void SNSClient::AddPermissionAsync(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientAddPermissionAsyncHelper( this, request, handler, context ); } );
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

void SNSClientCheckIfPhoneNumberIsOptedOutAsyncHelper(SNSClient const * const clientThis, const CheckIfPhoneNumberIsOptedOutRequest& request, const CheckIfPhoneNumberIsOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CheckIfPhoneNumberIsOptedOut(request), context);
}

void SNSClient::CheckIfPhoneNumberIsOptedOutAsync(const CheckIfPhoneNumberIsOptedOutRequest& request, const CheckIfPhoneNumberIsOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientCheckIfPhoneNumberIsOptedOutAsyncHelper( this, request, handler, context ); } );
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

void SNSClientConfirmSubscriptionAsyncHelper(SNSClient const * const clientThis, const ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ConfirmSubscription(request), context);
}

void SNSClient::ConfirmSubscriptionAsync(const ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientConfirmSubscriptionAsyncHelper( this, request, handler, context ); } );
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

void SNSClientCreatePlatformApplicationAsyncHelper(SNSClient const * const clientThis, const CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePlatformApplication(request), context);
}

void SNSClient::CreatePlatformApplicationAsync(const CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientCreatePlatformApplicationAsyncHelper( this, request, handler, context ); } );
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

void SNSClientCreatePlatformEndpointAsyncHelper(SNSClient const * const clientThis, const CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePlatformEndpoint(request), context);
}

void SNSClient::CreatePlatformEndpointAsync(const CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientCreatePlatformEndpointAsyncHelper( this, request, handler, context ); } );
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

void SNSClientCreateSMSSandboxPhoneNumberAsyncHelper(SNSClient const * const clientThis, const CreateSMSSandboxPhoneNumberRequest& request, const CreateSMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSMSSandboxPhoneNumber(request), context);
}

void SNSClient::CreateSMSSandboxPhoneNumberAsync(const CreateSMSSandboxPhoneNumberRequest& request, const CreateSMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientCreateSMSSandboxPhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void SNSClientCreateTopicAsyncHelper(SNSClient const * const clientThis, const CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTopic(request), context);
}

void SNSClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientCreateTopicAsyncHelper( this, request, handler, context ); } );
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

void SNSClientDeleteEndpointAsyncHelper(SNSClient const * const clientThis, const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEndpoint(request), context);
}

void SNSClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientDeleteEndpointAsyncHelper( this, request, handler, context ); } );
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

void SNSClientDeletePlatformApplicationAsyncHelper(SNSClient const * const clientThis, const DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePlatformApplication(request), context);
}

void SNSClient::DeletePlatformApplicationAsync(const DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientDeletePlatformApplicationAsyncHelper( this, request, handler, context ); } );
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

void SNSClientDeleteSMSSandboxPhoneNumberAsyncHelper(SNSClient const * const clientThis, const DeleteSMSSandboxPhoneNumberRequest& request, const DeleteSMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSMSSandboxPhoneNumber(request), context);
}

void SNSClient::DeleteSMSSandboxPhoneNumberAsync(const DeleteSMSSandboxPhoneNumberRequest& request, const DeleteSMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientDeleteSMSSandboxPhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void SNSClientDeleteTopicAsyncHelper(SNSClient const * const clientThis, const DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTopic(request), context);
}

void SNSClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientDeleteTopicAsyncHelper( this, request, handler, context ); } );
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

void SNSClientGetEndpointAttributesAsyncHelper(SNSClient const * const clientThis, const GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEndpointAttributes(request), context);
}

void SNSClient::GetEndpointAttributesAsync(const GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientGetEndpointAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientGetPlatformApplicationAttributesAsyncHelper(SNSClient const * const clientThis, const GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPlatformApplicationAttributes(request), context);
}

void SNSClient::GetPlatformApplicationAttributesAsync(const GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientGetPlatformApplicationAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientGetSMSAttributesAsyncHelper(SNSClient const * const clientThis, const GetSMSAttributesRequest& request, const GetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSMSAttributes(request), context);
}

void SNSClient::GetSMSAttributesAsync(const GetSMSAttributesRequest& request, const GetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientGetSMSAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientGetSMSSandboxAccountStatusAsyncHelper(SNSClient const * const clientThis, const GetSMSSandboxAccountStatusRequest& request, const GetSMSSandboxAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSMSSandboxAccountStatus(request), context);
}

void SNSClient::GetSMSSandboxAccountStatusAsync(const GetSMSSandboxAccountStatusRequest& request, const GetSMSSandboxAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientGetSMSSandboxAccountStatusAsyncHelper( this, request, handler, context ); } );
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

void SNSClientGetSubscriptionAttributesAsyncHelper(SNSClient const * const clientThis, const GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSubscriptionAttributes(request), context);
}

void SNSClient::GetSubscriptionAttributesAsync(const GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientGetSubscriptionAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientGetTopicAttributesAsyncHelper(SNSClient const * const clientThis, const GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTopicAttributes(request), context);
}

void SNSClient::GetTopicAttributesAsync(const GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientGetTopicAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientListEndpointsByPlatformApplicationAsyncHelper(SNSClient const * const clientThis, const ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEndpointsByPlatformApplication(request), context);
}

void SNSClient::ListEndpointsByPlatformApplicationAsync(const ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientListEndpointsByPlatformApplicationAsyncHelper( this, request, handler, context ); } );
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

void SNSClientListOriginationNumbersAsyncHelper(SNSClient const * const clientThis, const ListOriginationNumbersRequest& request, const ListOriginationNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOriginationNumbers(request), context);
}

void SNSClient::ListOriginationNumbersAsync(const ListOriginationNumbersRequest& request, const ListOriginationNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientListOriginationNumbersAsyncHelper( this, request, handler, context ); } );
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

void SNSClientListPhoneNumbersOptedOutAsyncHelper(SNSClient const * const clientThis, const ListPhoneNumbersOptedOutRequest& request, const ListPhoneNumbersOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPhoneNumbersOptedOut(request), context);
}

void SNSClient::ListPhoneNumbersOptedOutAsync(const ListPhoneNumbersOptedOutRequest& request, const ListPhoneNumbersOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientListPhoneNumbersOptedOutAsyncHelper( this, request, handler, context ); } );
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

void SNSClientListPlatformApplicationsAsyncHelper(SNSClient const * const clientThis, const ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPlatformApplications(request), context);
}

void SNSClient::ListPlatformApplicationsAsync(const ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientListPlatformApplicationsAsyncHelper( this, request, handler, context ); } );
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

void SNSClientListSMSSandboxPhoneNumbersAsyncHelper(SNSClient const * const clientThis, const ListSMSSandboxPhoneNumbersRequest& request, const ListSMSSandboxPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSMSSandboxPhoneNumbers(request), context);
}

void SNSClient::ListSMSSandboxPhoneNumbersAsync(const ListSMSSandboxPhoneNumbersRequest& request, const ListSMSSandboxPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientListSMSSandboxPhoneNumbersAsyncHelper( this, request, handler, context ); } );
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

void SNSClientListSubscriptionsAsyncHelper(SNSClient const * const clientThis, const ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSubscriptions(request), context);
}

void SNSClient::ListSubscriptionsAsync(const ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientListSubscriptionsAsyncHelper( this, request, handler, context ); } );
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

void SNSClientListSubscriptionsByTopicAsyncHelper(SNSClient const * const clientThis, const ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSubscriptionsByTopic(request), context);
}

void SNSClient::ListSubscriptionsByTopicAsync(const ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientListSubscriptionsByTopicAsyncHelper( this, request, handler, context ); } );
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

void SNSClientListTagsForResourceAsyncHelper(SNSClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void SNSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void SNSClientListTopicsAsyncHelper(SNSClient const * const clientThis, const ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTopics(request), context);
}

void SNSClient::ListTopicsAsync(const ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientListTopicsAsyncHelper( this, request, handler, context ); } );
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

void SNSClientOptInPhoneNumberAsyncHelper(SNSClient const * const clientThis, const OptInPhoneNumberRequest& request, const OptInPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->OptInPhoneNumber(request), context);
}

void SNSClient::OptInPhoneNumberAsync(const OptInPhoneNumberRequest& request, const OptInPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientOptInPhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void SNSClientPublishAsyncHelper(SNSClient const * const clientThis, const PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Publish(request), context);
}

void SNSClient::PublishAsync(const PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientPublishAsyncHelper( this, request, handler, context ); } );
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

void SNSClientPublishBatchAsyncHelper(SNSClient const * const clientThis, const PublishBatchRequest& request, const PublishBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PublishBatch(request), context);
}

void SNSClient::PublishBatchAsync(const PublishBatchRequest& request, const PublishBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientPublishBatchAsyncHelper( this, request, handler, context ); } );
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

void SNSClientRemovePermissionAsyncHelper(SNSClient const * const clientThis, const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemovePermission(request), context);
}

void SNSClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientRemovePermissionAsyncHelper( this, request, handler, context ); } );
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

void SNSClientSetEndpointAttributesAsyncHelper(SNSClient const * const clientThis, const SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetEndpointAttributes(request), context);
}

void SNSClient::SetEndpointAttributesAsync(const SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientSetEndpointAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientSetPlatformApplicationAttributesAsyncHelper(SNSClient const * const clientThis, const SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetPlatformApplicationAttributes(request), context);
}

void SNSClient::SetPlatformApplicationAttributesAsync(const SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientSetPlatformApplicationAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientSetSMSAttributesAsyncHelper(SNSClient const * const clientThis, const SetSMSAttributesRequest& request, const SetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetSMSAttributes(request), context);
}

void SNSClient::SetSMSAttributesAsync(const SetSMSAttributesRequest& request, const SetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientSetSMSAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientSetSubscriptionAttributesAsyncHelper(SNSClient const * const clientThis, const SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetSubscriptionAttributes(request), context);
}

void SNSClient::SetSubscriptionAttributesAsync(const SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientSetSubscriptionAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientSetTopicAttributesAsyncHelper(SNSClient const * const clientThis, const SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetTopicAttributes(request), context);
}

void SNSClient::SetTopicAttributesAsync(const SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientSetTopicAttributesAsyncHelper( this, request, handler, context ); } );
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

void SNSClientSubscribeAsyncHelper(SNSClient const * const clientThis, const SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Subscribe(request), context);
}

void SNSClient::SubscribeAsync(const SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientSubscribeAsyncHelper( this, request, handler, context ); } );
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

void SNSClientTagResourceAsyncHelper(SNSClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void SNSClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void SNSClientUnsubscribeAsyncHelper(SNSClient const * const clientThis, const UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Unsubscribe(request), context);
}

void SNSClient::UnsubscribeAsync(const UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientUnsubscribeAsyncHelper( this, request, handler, context ); } );
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

void SNSClientUntagResourceAsyncHelper(SNSClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void SNSClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void SNSClientVerifySMSSandboxPhoneNumberAsyncHelper(SNSClient const * const clientThis, const VerifySMSSandboxPhoneNumberRequest& request, const VerifySMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->VerifySMSSandboxPhoneNumber(request), context);
}

void SNSClient::VerifySMSSandboxPhoneNumberAsync(const VerifySMSSandboxPhoneNumberRequest& request, const VerifySMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SNSClientVerifySMSSandboxPhoneNumberAsyncHelper( this, request, handler, context ); } );
}

