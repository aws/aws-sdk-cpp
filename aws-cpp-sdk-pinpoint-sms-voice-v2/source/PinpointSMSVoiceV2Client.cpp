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

void PinpointSMSVoiceV2ClientAssociateOriginationIdentityAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const AssociateOriginationIdentityRequest& request, const AssociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateOriginationIdentity(request), context);
}

void PinpointSMSVoiceV2Client::AssociateOriginationIdentityAsync(const AssociateOriginationIdentityRequest& request, const AssociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientAssociateOriginationIdentityAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientCreateConfigurationSetAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConfigurationSet(request), context);
}

void PinpointSMSVoiceV2Client::CreateConfigurationSetAsync(const CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientCreateConfigurationSetAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientCreateEventDestinationAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const CreateEventDestinationRequest& request, const CreateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEventDestination(request), context);
}

void PinpointSMSVoiceV2Client::CreateEventDestinationAsync(const CreateEventDestinationRequest& request, const CreateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientCreateEventDestinationAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientCreateOptOutListAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const CreateOptOutListRequest& request, const CreateOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateOptOutList(request), context);
}

void PinpointSMSVoiceV2Client::CreateOptOutListAsync(const CreateOptOutListRequest& request, const CreateOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientCreateOptOutListAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientCreatePoolAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const CreatePoolRequest& request, const CreatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePool(request), context);
}

void PinpointSMSVoiceV2Client::CreatePoolAsync(const CreatePoolRequest& request, const CreatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientCreatePoolAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeleteConfigurationSetAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConfigurationSet(request), context);
}

void PinpointSMSVoiceV2Client::DeleteConfigurationSetAsync(const DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeleteConfigurationSetAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeleteDefaultMessageTypeAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeleteDefaultMessageTypeRequest& request, const DeleteDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDefaultMessageType(request), context);
}

void PinpointSMSVoiceV2Client::DeleteDefaultMessageTypeAsync(const DeleteDefaultMessageTypeRequest& request, const DeleteDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeleteDefaultMessageTypeAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeleteDefaultSenderIdAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeleteDefaultSenderIdRequest& request, const DeleteDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDefaultSenderId(request), context);
}

void PinpointSMSVoiceV2Client::DeleteDefaultSenderIdAsync(const DeleteDefaultSenderIdRequest& request, const DeleteDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeleteDefaultSenderIdAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeleteEventDestinationAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeleteEventDestinationRequest& request, const DeleteEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventDestination(request), context);
}

void PinpointSMSVoiceV2Client::DeleteEventDestinationAsync(const DeleteEventDestinationRequest& request, const DeleteEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeleteEventDestinationAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeleteKeywordAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeleteKeywordRequest& request, const DeleteKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteKeyword(request), context);
}

void PinpointSMSVoiceV2Client::DeleteKeywordAsync(const DeleteKeywordRequest& request, const DeleteKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeleteKeywordAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeleteOptOutListAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeleteOptOutListRequest& request, const DeleteOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOptOutList(request), context);
}

void PinpointSMSVoiceV2Client::DeleteOptOutListAsync(const DeleteOptOutListRequest& request, const DeleteOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeleteOptOutListAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeleteOptedOutNumberAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeleteOptedOutNumberRequest& request, const DeleteOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteOptedOutNumber(request), context);
}

void PinpointSMSVoiceV2Client::DeleteOptedOutNumberAsync(const DeleteOptedOutNumberRequest& request, const DeleteOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeleteOptedOutNumberAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeletePoolAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeletePoolRequest& request, const DeletePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePool(request), context);
}

void PinpointSMSVoiceV2Client::DeletePoolAsync(const DeletePoolRequest& request, const DeletePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeletePoolAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeleteTextMessageSpendLimitOverrideAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeleteTextMessageSpendLimitOverrideRequest& request, const DeleteTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTextMessageSpendLimitOverride(request), context);
}

void PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverrideAsync(const DeleteTextMessageSpendLimitOverrideRequest& request, const DeleteTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeleteTextMessageSpendLimitOverrideAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDeleteVoiceMessageSpendLimitOverrideAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DeleteVoiceMessageSpendLimitOverrideRequest& request, const DeleteVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVoiceMessageSpendLimitOverride(request), context);
}

void PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverrideAsync(const DeleteVoiceMessageSpendLimitOverrideRequest& request, const DeleteVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDeleteVoiceMessageSpendLimitOverrideAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribeAccountAttributesAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountAttributes(request), context);
}

void PinpointSMSVoiceV2Client::DescribeAccountAttributesAsync(const DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribeAccountAttributesAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribeAccountLimitsAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountLimits(request), context);
}

void PinpointSMSVoiceV2Client::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribeAccountLimitsAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribeConfigurationSetsAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribeConfigurationSetsRequest& request, const DescribeConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurationSets(request), context);
}

void PinpointSMSVoiceV2Client::DescribeConfigurationSetsAsync(const DescribeConfigurationSetsRequest& request, const DescribeConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribeConfigurationSetsAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribeKeywordsAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribeKeywordsRequest& request, const DescribeKeywordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeKeywords(request), context);
}

void PinpointSMSVoiceV2Client::DescribeKeywordsAsync(const DescribeKeywordsRequest& request, const DescribeKeywordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribeKeywordsAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribeOptOutListsAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribeOptOutListsRequest& request, const DescribeOptOutListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOptOutLists(request), context);
}

void PinpointSMSVoiceV2Client::DescribeOptOutListsAsync(const DescribeOptOutListsRequest& request, const DescribeOptOutListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribeOptOutListsAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribeOptedOutNumbersAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribeOptedOutNumbersRequest& request, const DescribeOptedOutNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOptedOutNumbers(request), context);
}

void PinpointSMSVoiceV2Client::DescribeOptedOutNumbersAsync(const DescribeOptedOutNumbersRequest& request, const DescribeOptedOutNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribeOptedOutNumbersAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribePhoneNumbersAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribePhoneNumbersRequest& request, const DescribePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePhoneNumbers(request), context);
}

void PinpointSMSVoiceV2Client::DescribePhoneNumbersAsync(const DescribePhoneNumbersRequest& request, const DescribePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribePhoneNumbersAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribePoolsAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribePoolsRequest& request, const DescribePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePools(request), context);
}

void PinpointSMSVoiceV2Client::DescribePoolsAsync(const DescribePoolsRequest& request, const DescribePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribePoolsAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribeSenderIdsAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribeSenderIdsRequest& request, const DescribeSenderIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSenderIds(request), context);
}

void PinpointSMSVoiceV2Client::DescribeSenderIdsAsync(const DescribeSenderIdsRequest& request, const DescribeSenderIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribeSenderIdsAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDescribeSpendLimitsAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DescribeSpendLimitsRequest& request, const DescribeSpendLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSpendLimits(request), context);
}

void PinpointSMSVoiceV2Client::DescribeSpendLimitsAsync(const DescribeSpendLimitsRequest& request, const DescribeSpendLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDescribeSpendLimitsAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientDisassociateOriginationIdentityAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const DisassociateOriginationIdentityRequest& request, const DisassociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateOriginationIdentity(request), context);
}

void PinpointSMSVoiceV2Client::DisassociateOriginationIdentityAsync(const DisassociateOriginationIdentityRequest& request, const DisassociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientDisassociateOriginationIdentityAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientListPoolOriginationIdentitiesAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const ListPoolOriginationIdentitiesRequest& request, const ListPoolOriginationIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPoolOriginationIdentities(request), context);
}

void PinpointSMSVoiceV2Client::ListPoolOriginationIdentitiesAsync(const ListPoolOriginationIdentitiesRequest& request, const ListPoolOriginationIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientListPoolOriginationIdentitiesAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientListTagsForResourceAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void PinpointSMSVoiceV2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientPutKeywordAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const PutKeywordRequest& request, const PutKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutKeyword(request), context);
}

void PinpointSMSVoiceV2Client::PutKeywordAsync(const PutKeywordRequest& request, const PutKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientPutKeywordAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientPutOptedOutNumberAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const PutOptedOutNumberRequest& request, const PutOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutOptedOutNumber(request), context);
}

void PinpointSMSVoiceV2Client::PutOptedOutNumberAsync(const PutOptedOutNumberRequest& request, const PutOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientPutOptedOutNumberAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientReleasePhoneNumberAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReleasePhoneNumber(request), context);
}

void PinpointSMSVoiceV2Client::ReleasePhoneNumberAsync(const ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientReleasePhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientRequestPhoneNumberAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const RequestPhoneNumberRequest& request, const RequestPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RequestPhoneNumber(request), context);
}

void PinpointSMSVoiceV2Client::RequestPhoneNumberAsync(const RequestPhoneNumberRequest& request, const RequestPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientRequestPhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientSendTextMessageAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const SendTextMessageRequest& request, const SendTextMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendTextMessage(request), context);
}

void PinpointSMSVoiceV2Client::SendTextMessageAsync(const SendTextMessageRequest& request, const SendTextMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientSendTextMessageAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientSendVoiceMessageAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const SendVoiceMessageRequest& request, const SendVoiceMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendVoiceMessage(request), context);
}

void PinpointSMSVoiceV2Client::SendVoiceMessageAsync(const SendVoiceMessageRequest& request, const SendVoiceMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientSendVoiceMessageAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientSetDefaultMessageTypeAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const SetDefaultMessageTypeRequest& request, const SetDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetDefaultMessageType(request), context);
}

void PinpointSMSVoiceV2Client::SetDefaultMessageTypeAsync(const SetDefaultMessageTypeRequest& request, const SetDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientSetDefaultMessageTypeAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientSetDefaultSenderIdAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const SetDefaultSenderIdRequest& request, const SetDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetDefaultSenderId(request), context);
}

void PinpointSMSVoiceV2Client::SetDefaultSenderIdAsync(const SetDefaultSenderIdRequest& request, const SetDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientSetDefaultSenderIdAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientSetTextMessageSpendLimitOverrideAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const SetTextMessageSpendLimitOverrideRequest& request, const SetTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetTextMessageSpendLimitOverride(request), context);
}

void PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverrideAsync(const SetTextMessageSpendLimitOverrideRequest& request, const SetTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientSetTextMessageSpendLimitOverrideAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientSetVoiceMessageSpendLimitOverrideAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const SetVoiceMessageSpendLimitOverrideRequest& request, const SetVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetVoiceMessageSpendLimitOverride(request), context);
}

void PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverrideAsync(const SetVoiceMessageSpendLimitOverrideRequest& request, const SetVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientSetVoiceMessageSpendLimitOverrideAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientTagResourceAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void PinpointSMSVoiceV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientUntagResourceAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void PinpointSMSVoiceV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientUpdateEventDestinationAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const UpdateEventDestinationRequest& request, const UpdateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEventDestination(request), context);
}

void PinpointSMSVoiceV2Client::UpdateEventDestinationAsync(const UpdateEventDestinationRequest& request, const UpdateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientUpdateEventDestinationAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientUpdatePhoneNumberAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePhoneNumber(request), context);
}

void PinpointSMSVoiceV2Client::UpdatePhoneNumberAsync(const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientUpdatePhoneNumberAsyncHelper( this, request, handler, context ); } );
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

void PinpointSMSVoiceV2ClientUpdatePoolAsyncHelper(PinpointSMSVoiceV2Client const * const clientThis, const UpdatePoolRequest& request, const UpdatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePool(request), context);
}

void PinpointSMSVoiceV2Client::UpdatePoolAsync(const UpdatePoolRequest& request, const UpdatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ PinpointSMSVoiceV2ClientUpdatePoolAsyncHelper( this, request, handler, context ); } );
}

