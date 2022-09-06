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

#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Client.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Endpoint.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2ErrorMarshaller.h>
#include <aws/pinpoint-sms-voice-v2/model/AssociateOriginationIdentityRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateConfigurationSetRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateEventDestinationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateOptOutListRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreatePoolRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteConfigurationSetRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteDefaultMessageTypeRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteDefaultSenderIdRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteEventDestinationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteKeywordRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteOptOutListRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteOptedOutNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeletePoolRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteTextMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteVoiceMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountAttributesRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountLimitsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeConfigurationSetsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeKeywordsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptOutListsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptedOutNumbersRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePhoneNumbersRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePoolsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSenderIdsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSpendLimitsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DisassociateOriginationIdentityRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/ListPoolOriginationIdentitiesRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/ListTagsForResourceRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/PutKeywordRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/PutOptedOutNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/ReleasePhoneNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/RequestPhoneNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SendTextMessageRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SendVoiceMessageRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetDefaultMessageTypeRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetDefaultSenderIdRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetTextMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetVoiceMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/TagResourceRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UntagResourceRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdateEventDestinationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdatePhoneNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdatePoolRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PinpointSMSVoiceV2;
using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "sms-voice";
static const char* ALLOCATION_TAG = "PinpointSMSVoiceV2Client";

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PinpointSMSVoiceV2Client::~PinpointSMSVoiceV2Client()
{
}

void PinpointSMSVoiceV2Client::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Pinpoint SMS Voice V2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PinpointSMSVoiceV2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PinpointSMSVoiceV2Client::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateOriginationIdentityOutcome PinpointSMSVoiceV2Client::AssociateOriginationIdentity(const AssociateOriginationIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateOriginationIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateOriginationIdentityOutcomeCallable PinpointSMSVoiceV2Client::AssociateOriginationIdentityCallable(const AssociateOriginationIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateOriginationIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateOriginationIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::AssociateOriginationIdentityAsync(const AssociateOriginationIdentityRequest& request, const AssociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateOriginationIdentityAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::AssociateOriginationIdentityAsyncHelper(const AssociateOriginationIdentityRequest& request, const AssociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateOriginationIdentity(request), context);
}

CreateConfigurationSetOutcome PinpointSMSVoiceV2Client::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationSetOutcomeCallable PinpointSMSVoiceV2Client::CreateConfigurationSetCallable(const CreateConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::CreateConfigurationSetAsync(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConfigurationSetAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::CreateConfigurationSetAsyncHelper(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConfigurationSet(request), context);
}

CreateEventDestinationOutcome PinpointSMSVoiceV2Client::CreateEventDestination(const CreateEventDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventDestinationOutcomeCallable PinpointSMSVoiceV2Client::CreateEventDestinationCallable(const CreateEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::CreateEventDestinationAsync(const CreateEventDestinationRequest& request, const CreateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEventDestinationAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::CreateEventDestinationAsyncHelper(const CreateEventDestinationRequest& request, const CreateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventDestination(request), context);
}

CreateOptOutListOutcome PinpointSMSVoiceV2Client::CreateOptOutList(const CreateOptOutListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateOptOutListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOptOutListOutcomeCallable PinpointSMSVoiceV2Client::CreateOptOutListCallable(const CreateOptOutListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOptOutListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOptOutList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::CreateOptOutListAsync(const CreateOptOutListRequest& request, const CreateOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOptOutListAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::CreateOptOutListAsyncHelper(const CreateOptOutListRequest& request, const CreateOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOptOutList(request), context);
}

CreatePoolOutcome PinpointSMSVoiceV2Client::CreatePool(const CreatePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePoolOutcomeCallable PinpointSMSVoiceV2Client::CreatePoolCallable(const CreatePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::CreatePoolAsync(const CreatePoolRequest& request, const CreatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePoolAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::CreatePoolAsyncHelper(const CreatePoolRequest& request, const CreatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePool(request), context);
}

DeleteConfigurationSetOutcome PinpointSMSVoiceV2Client::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConfigurationSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationSetOutcomeCallable PinpointSMSVoiceV2Client::DeleteConfigurationSetCallable(const DeleteConfigurationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigurationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfigurationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeleteConfigurationSetAsync(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConfigurationSetAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeleteConfigurationSetAsyncHelper(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConfigurationSet(request), context);
}

DeleteDefaultMessageTypeOutcome PinpointSMSVoiceV2Client::DeleteDefaultMessageType(const DeleteDefaultMessageTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDefaultMessageTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDefaultMessageTypeOutcomeCallable PinpointSMSVoiceV2Client::DeleteDefaultMessageTypeCallable(const DeleteDefaultMessageTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDefaultMessageTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDefaultMessageType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeleteDefaultMessageTypeAsync(const DeleteDefaultMessageTypeRequest& request, const DeleteDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDefaultMessageTypeAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeleteDefaultMessageTypeAsyncHelper(const DeleteDefaultMessageTypeRequest& request, const DeleteDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDefaultMessageType(request), context);
}

DeleteDefaultSenderIdOutcome PinpointSMSVoiceV2Client::DeleteDefaultSenderId(const DeleteDefaultSenderIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDefaultSenderIdOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDefaultSenderIdOutcomeCallable PinpointSMSVoiceV2Client::DeleteDefaultSenderIdCallable(const DeleteDefaultSenderIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDefaultSenderIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDefaultSenderId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeleteDefaultSenderIdAsync(const DeleteDefaultSenderIdRequest& request, const DeleteDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDefaultSenderIdAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeleteDefaultSenderIdAsyncHelper(const DeleteDefaultSenderIdRequest& request, const DeleteDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDefaultSenderId(request), context);
}

DeleteEventDestinationOutcome PinpointSMSVoiceV2Client::DeleteEventDestination(const DeleteEventDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventDestinationOutcomeCallable PinpointSMSVoiceV2Client::DeleteEventDestinationCallable(const DeleteEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeleteEventDestinationAsync(const DeleteEventDestinationRequest& request, const DeleteEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventDestinationAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeleteEventDestinationAsyncHelper(const DeleteEventDestinationRequest& request, const DeleteEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventDestination(request), context);
}

DeleteKeywordOutcome PinpointSMSVoiceV2Client::DeleteKeyword(const DeleteKeywordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteKeywordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteKeywordOutcomeCallable PinpointSMSVoiceV2Client::DeleteKeywordCallable(const DeleteKeywordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteKeywordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteKeyword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeleteKeywordAsync(const DeleteKeywordRequest& request, const DeleteKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteKeywordAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeleteKeywordAsyncHelper(const DeleteKeywordRequest& request, const DeleteKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteKeyword(request), context);
}

DeleteOptOutListOutcome PinpointSMSVoiceV2Client::DeleteOptOutList(const DeleteOptOutListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOptOutListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOptOutListOutcomeCallable PinpointSMSVoiceV2Client::DeleteOptOutListCallable(const DeleteOptOutListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOptOutListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOptOutList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeleteOptOutListAsync(const DeleteOptOutListRequest& request, const DeleteOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOptOutListAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeleteOptOutListAsyncHelper(const DeleteOptOutListRequest& request, const DeleteOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOptOutList(request), context);
}

DeleteOptedOutNumberOutcome PinpointSMSVoiceV2Client::DeleteOptedOutNumber(const DeleteOptedOutNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteOptedOutNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOptedOutNumberOutcomeCallable PinpointSMSVoiceV2Client::DeleteOptedOutNumberCallable(const DeleteOptedOutNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOptedOutNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOptedOutNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeleteOptedOutNumberAsync(const DeleteOptedOutNumberRequest& request, const DeleteOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOptedOutNumberAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeleteOptedOutNumberAsyncHelper(const DeleteOptedOutNumberRequest& request, const DeleteOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOptedOutNumber(request), context);
}

DeletePoolOutcome PinpointSMSVoiceV2Client::DeletePool(const DeletePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePoolOutcomeCallable PinpointSMSVoiceV2Client::DeletePoolCallable(const DeletePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeletePoolAsync(const DeletePoolRequest& request, const DeletePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePoolAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeletePoolAsyncHelper(const DeletePoolRequest& request, const DeletePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePool(request), context);
}

DeleteTextMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverride(const DeleteTextMessageSpendLimitOverrideRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTextMessageSpendLimitOverrideOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTextMessageSpendLimitOverrideOutcomeCallable PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverrideCallable(const DeleteTextMessageSpendLimitOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTextMessageSpendLimitOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTextMessageSpendLimitOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverrideAsync(const DeleteTextMessageSpendLimitOverrideRequest& request, const DeleteTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTextMessageSpendLimitOverrideAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverrideAsyncHelper(const DeleteTextMessageSpendLimitOverrideRequest& request, const DeleteTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTextMessageSpendLimitOverride(request), context);
}

DeleteVoiceMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverride(const DeleteVoiceMessageSpendLimitOverrideRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVoiceMessageSpendLimitOverrideOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceMessageSpendLimitOverrideOutcomeCallable PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverrideCallable(const DeleteVoiceMessageSpendLimitOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceMessageSpendLimitOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceMessageSpendLimitOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverrideAsync(const DeleteVoiceMessageSpendLimitOverrideRequest& request, const DeleteVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceMessageSpendLimitOverrideAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverrideAsyncHelper(const DeleteVoiceMessageSpendLimitOverrideRequest& request, const DeleteVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceMessageSpendLimitOverride(request), context);
}

DescribeAccountAttributesOutcome PinpointSMSVoiceV2Client::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAttributesOutcomeCallable PinpointSMSVoiceV2Client::DescribeAccountAttributesCallable(const DescribeAccountAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountAttributesAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribeAccountAttributesAsyncHelper(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountAttributes(request), context);
}

DescribeAccountLimitsOutcome PinpointSMSVoiceV2Client::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountLimitsOutcomeCallable PinpointSMSVoiceV2Client::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountLimitsAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribeAccountLimitsAsyncHelper(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountLimits(request), context);
}

DescribeConfigurationSetsOutcome PinpointSMSVoiceV2Client::DescribeConfigurationSets(const DescribeConfigurationSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigurationSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationSetsOutcomeCallable PinpointSMSVoiceV2Client::DescribeConfigurationSetsCallable(const DescribeConfigurationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribeConfigurationSetsAsync(const DescribeConfigurationSetsRequest& request, const DescribeConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationSetsAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribeConfigurationSetsAsyncHelper(const DescribeConfigurationSetsRequest& request, const DescribeConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurationSets(request), context);
}

DescribeKeywordsOutcome PinpointSMSVoiceV2Client::DescribeKeywords(const DescribeKeywordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeKeywordsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeKeywordsOutcomeCallable PinpointSMSVoiceV2Client::DescribeKeywordsCallable(const DescribeKeywordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeKeywordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeKeywords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribeKeywordsAsync(const DescribeKeywordsRequest& request, const DescribeKeywordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeKeywordsAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribeKeywordsAsyncHelper(const DescribeKeywordsRequest& request, const DescribeKeywordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeKeywords(request), context);
}

DescribeOptOutListsOutcome PinpointSMSVoiceV2Client::DescribeOptOutLists(const DescribeOptOutListsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOptOutListsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOptOutListsOutcomeCallable PinpointSMSVoiceV2Client::DescribeOptOutListsCallable(const DescribeOptOutListsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOptOutListsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOptOutLists(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribeOptOutListsAsync(const DescribeOptOutListsRequest& request, const DescribeOptOutListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOptOutListsAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribeOptOutListsAsyncHelper(const DescribeOptOutListsRequest& request, const DescribeOptOutListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOptOutLists(request), context);
}

DescribeOptedOutNumbersOutcome PinpointSMSVoiceV2Client::DescribeOptedOutNumbers(const DescribeOptedOutNumbersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeOptedOutNumbersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOptedOutNumbersOutcomeCallable PinpointSMSVoiceV2Client::DescribeOptedOutNumbersCallable(const DescribeOptedOutNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOptedOutNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOptedOutNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribeOptedOutNumbersAsync(const DescribeOptedOutNumbersRequest& request, const DescribeOptedOutNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOptedOutNumbersAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribeOptedOutNumbersAsyncHelper(const DescribeOptedOutNumbersRequest& request, const DescribeOptedOutNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOptedOutNumbers(request), context);
}

DescribePhoneNumbersOutcome PinpointSMSVoiceV2Client::DescribePhoneNumbers(const DescribePhoneNumbersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePhoneNumbersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePhoneNumbersOutcomeCallable PinpointSMSVoiceV2Client::DescribePhoneNumbersCallable(const DescribePhoneNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePhoneNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePhoneNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribePhoneNumbersAsync(const DescribePhoneNumbersRequest& request, const DescribePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePhoneNumbersAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribePhoneNumbersAsyncHelper(const DescribePhoneNumbersRequest& request, const DescribePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePhoneNumbers(request), context);
}

DescribePoolsOutcome PinpointSMSVoiceV2Client::DescribePools(const DescribePoolsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePoolsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePoolsOutcomeCallable PinpointSMSVoiceV2Client::DescribePoolsCallable(const DescribePoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribePoolsAsync(const DescribePoolsRequest& request, const DescribePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePoolsAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribePoolsAsyncHelper(const DescribePoolsRequest& request, const DescribePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePools(request), context);
}

DescribeSenderIdsOutcome PinpointSMSVoiceV2Client::DescribeSenderIds(const DescribeSenderIdsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSenderIdsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSenderIdsOutcomeCallable PinpointSMSVoiceV2Client::DescribeSenderIdsCallable(const DescribeSenderIdsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSenderIdsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSenderIds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribeSenderIdsAsync(const DescribeSenderIdsRequest& request, const DescribeSenderIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSenderIdsAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribeSenderIdsAsyncHelper(const DescribeSenderIdsRequest& request, const DescribeSenderIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSenderIds(request), context);
}

DescribeSpendLimitsOutcome PinpointSMSVoiceV2Client::DescribeSpendLimits(const DescribeSpendLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSpendLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSpendLimitsOutcomeCallable PinpointSMSVoiceV2Client::DescribeSpendLimitsCallable(const DescribeSpendLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpendLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpendLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DescribeSpendLimitsAsync(const DescribeSpendLimitsRequest& request, const DescribeSpendLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSpendLimitsAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DescribeSpendLimitsAsyncHelper(const DescribeSpendLimitsRequest& request, const DescribeSpendLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpendLimits(request), context);
}

DisassociateOriginationIdentityOutcome PinpointSMSVoiceV2Client::DisassociateOriginationIdentity(const DisassociateOriginationIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateOriginationIdentityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateOriginationIdentityOutcomeCallable PinpointSMSVoiceV2Client::DisassociateOriginationIdentityCallable(const DisassociateOriginationIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateOriginationIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateOriginationIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::DisassociateOriginationIdentityAsync(const DisassociateOriginationIdentityRequest& request, const DisassociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateOriginationIdentityAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::DisassociateOriginationIdentityAsyncHelper(const DisassociateOriginationIdentityRequest& request, const DisassociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateOriginationIdentity(request), context);
}

ListPoolOriginationIdentitiesOutcome PinpointSMSVoiceV2Client::ListPoolOriginationIdentities(const ListPoolOriginationIdentitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPoolOriginationIdentitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPoolOriginationIdentitiesOutcomeCallable PinpointSMSVoiceV2Client::ListPoolOriginationIdentitiesCallable(const ListPoolOriginationIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoolOriginationIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPoolOriginationIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::ListPoolOriginationIdentitiesAsync(const ListPoolOriginationIdentitiesRequest& request, const ListPoolOriginationIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPoolOriginationIdentitiesAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::ListPoolOriginationIdentitiesAsyncHelper(const ListPoolOriginationIdentitiesRequest& request, const ListPoolOriginationIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPoolOriginationIdentities(request), context);
}

ListTagsForResourceOutcome PinpointSMSVoiceV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable PinpointSMSVoiceV2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutKeywordOutcome PinpointSMSVoiceV2Client::PutKeyword(const PutKeywordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutKeywordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutKeywordOutcomeCallable PinpointSMSVoiceV2Client::PutKeywordCallable(const PutKeywordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutKeywordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutKeyword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::PutKeywordAsync(const PutKeywordRequest& request, const PutKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutKeywordAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::PutKeywordAsyncHelper(const PutKeywordRequest& request, const PutKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutKeyword(request), context);
}

PutOptedOutNumberOutcome PinpointSMSVoiceV2Client::PutOptedOutNumber(const PutOptedOutNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutOptedOutNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutOptedOutNumberOutcomeCallable PinpointSMSVoiceV2Client::PutOptedOutNumberCallable(const PutOptedOutNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutOptedOutNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutOptedOutNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::PutOptedOutNumberAsync(const PutOptedOutNumberRequest& request, const PutOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutOptedOutNumberAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::PutOptedOutNumberAsyncHelper(const PutOptedOutNumberRequest& request, const PutOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutOptedOutNumber(request), context);
}

ReleasePhoneNumberOutcome PinpointSMSVoiceV2Client::ReleasePhoneNumber(const ReleasePhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ReleasePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReleasePhoneNumberOutcomeCallable PinpointSMSVoiceV2Client::ReleasePhoneNumberCallable(const ReleasePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReleasePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReleasePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::ReleasePhoneNumberAsync(const ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReleasePhoneNumberAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::ReleasePhoneNumberAsyncHelper(const ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReleasePhoneNumber(request), context);
}

RequestPhoneNumberOutcome PinpointSMSVoiceV2Client::RequestPhoneNumber(const RequestPhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RequestPhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RequestPhoneNumberOutcomeCallable PinpointSMSVoiceV2Client::RequestPhoneNumberCallable(const RequestPhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestPhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestPhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::RequestPhoneNumberAsync(const RequestPhoneNumberRequest& request, const RequestPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RequestPhoneNumberAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::RequestPhoneNumberAsyncHelper(const RequestPhoneNumberRequest& request, const RequestPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestPhoneNumber(request), context);
}

SendTextMessageOutcome PinpointSMSVoiceV2Client::SendTextMessage(const SendTextMessageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendTextMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendTextMessageOutcomeCallable PinpointSMSVoiceV2Client::SendTextMessageCallable(const SendTextMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendTextMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendTextMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::SendTextMessageAsync(const SendTextMessageRequest& request, const SendTextMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendTextMessageAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::SendTextMessageAsyncHelper(const SendTextMessageRequest& request, const SendTextMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendTextMessage(request), context);
}

SendVoiceMessageOutcome PinpointSMSVoiceV2Client::SendVoiceMessage(const SendVoiceMessageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendVoiceMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendVoiceMessageOutcomeCallable PinpointSMSVoiceV2Client::SendVoiceMessageCallable(const SendVoiceMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendVoiceMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendVoiceMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::SendVoiceMessageAsync(const SendVoiceMessageRequest& request, const SendVoiceMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendVoiceMessageAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::SendVoiceMessageAsyncHelper(const SendVoiceMessageRequest& request, const SendVoiceMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendVoiceMessage(request), context);
}

SetDefaultMessageTypeOutcome PinpointSMSVoiceV2Client::SetDefaultMessageType(const SetDefaultMessageTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetDefaultMessageTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetDefaultMessageTypeOutcomeCallable PinpointSMSVoiceV2Client::SetDefaultMessageTypeCallable(const SetDefaultMessageTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDefaultMessageTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDefaultMessageType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::SetDefaultMessageTypeAsync(const SetDefaultMessageTypeRequest& request, const SetDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetDefaultMessageTypeAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::SetDefaultMessageTypeAsyncHelper(const SetDefaultMessageTypeRequest& request, const SetDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDefaultMessageType(request), context);
}

SetDefaultSenderIdOutcome PinpointSMSVoiceV2Client::SetDefaultSenderId(const SetDefaultSenderIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetDefaultSenderIdOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetDefaultSenderIdOutcomeCallable PinpointSMSVoiceV2Client::SetDefaultSenderIdCallable(const SetDefaultSenderIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDefaultSenderIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDefaultSenderId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::SetDefaultSenderIdAsync(const SetDefaultSenderIdRequest& request, const SetDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetDefaultSenderIdAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::SetDefaultSenderIdAsyncHelper(const SetDefaultSenderIdRequest& request, const SetDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDefaultSenderId(request), context);
}

SetTextMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverride(const SetTextMessageSpendLimitOverrideRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetTextMessageSpendLimitOverrideOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetTextMessageSpendLimitOverrideOutcomeCallable PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverrideCallable(const SetTextMessageSpendLimitOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTextMessageSpendLimitOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTextMessageSpendLimitOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverrideAsync(const SetTextMessageSpendLimitOverrideRequest& request, const SetTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetTextMessageSpendLimitOverrideAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverrideAsyncHelper(const SetTextMessageSpendLimitOverrideRequest& request, const SetTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTextMessageSpendLimitOverride(request), context);
}

SetVoiceMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverride(const SetVoiceMessageSpendLimitOverrideRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetVoiceMessageSpendLimitOverrideOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetVoiceMessageSpendLimitOverrideOutcomeCallable PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverrideCallable(const SetVoiceMessageSpendLimitOverrideRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetVoiceMessageSpendLimitOverrideOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetVoiceMessageSpendLimitOverride(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverrideAsync(const SetVoiceMessageSpendLimitOverrideRequest& request, const SetVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetVoiceMessageSpendLimitOverrideAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverrideAsyncHelper(const SetVoiceMessageSpendLimitOverrideRequest& request, const SetVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetVoiceMessageSpendLimitOverride(request), context);
}

TagResourceOutcome PinpointSMSVoiceV2Client::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable PinpointSMSVoiceV2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome PinpointSMSVoiceV2Client::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable PinpointSMSVoiceV2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateEventDestinationOutcome PinpointSMSVoiceV2Client::UpdateEventDestination(const UpdateEventDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEventDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventDestinationOutcomeCallable PinpointSMSVoiceV2Client::UpdateEventDestinationCallable(const UpdateEventDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::UpdateEventDestinationAsync(const UpdateEventDestinationRequest& request, const UpdateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEventDestinationAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::UpdateEventDestinationAsyncHelper(const UpdateEventDestinationRequest& request, const UpdateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEventDestination(request), context);
}

UpdatePhoneNumberOutcome PinpointSMSVoiceV2Client::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePhoneNumberOutcomeCallable PinpointSMSVoiceV2Client::UpdatePhoneNumberCallable(const UpdatePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::UpdatePhoneNumberAsync(const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePhoneNumberAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::UpdatePhoneNumberAsyncHelper(const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePhoneNumber(request), context);
}

UpdatePoolOutcome PinpointSMSVoiceV2Client::UpdatePool(const UpdatePoolRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePoolOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePoolOutcomeCallable PinpointSMSVoiceV2Client::UpdatePoolCallable(const UpdatePoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PinpointSMSVoiceV2Client::UpdatePoolAsync(const UpdatePoolRequest& request, const UpdatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePoolAsyncHelper( request, handler, context ); } );
}

void PinpointSMSVoiceV2Client::UpdatePoolAsyncHelper(const UpdatePoolRequest& request, const UpdatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePool(request), context);
}

