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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Client.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2ErrorMarshaller.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2EndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* PinpointSMSVoiceV2Client::SERVICE_NAME = "sms-voice";
const char* PinpointSMSVoiceV2Client::ALLOCATION_TAG = "PinpointSMSVoiceV2Client";

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const AWSCredentials& credentials,
                                                   std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> endpointProvider,
                                                   const PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> endpointProvider,
                                                   const PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<PinpointSMSVoiceV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PinpointSMSVoiceV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PinpointSMSVoiceV2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
PinpointSMSVoiceV2Client::~PinpointSMSVoiceV2Client()
{
}

std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase>& PinpointSMSVoiceV2Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PinpointSMSVoiceV2Client::init(const PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Pinpoint SMS Voice V2");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void PinpointSMSVoiceV2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateOriginationIdentityOutcome PinpointSMSVoiceV2Client::AssociateOriginationIdentity(const AssociateOriginationIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateOriginationIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateOriginationIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateOriginationIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateOriginationIdentity(request), context);
    } );
}

CreateConfigurationSetOutcome PinpointSMSVoiceV2Client::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateConfigurationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConfigurationSet(request), context);
    } );
}

CreateEventDestinationOutcome PinpointSMSVoiceV2Client::CreateEventDestination(const CreateEventDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEventDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEventDestination(request), context);
    } );
}

CreateOptOutListOutcome PinpointSMSVoiceV2Client::CreateOptOutList(const CreateOptOutListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOptOutList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOptOutList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateOptOutListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateOptOutList(request), context);
    } );
}

CreatePoolOutcome PinpointSMSVoiceV2Client::CreatePool(const CreatePoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePool(request), context);
    } );
}

DeleteConfigurationSetOutcome PinpointSMSVoiceV2Client::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteConfigurationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConfigurationSet(request), context);
    } );
}

DeleteDefaultMessageTypeOutcome PinpointSMSVoiceV2Client::DeleteDefaultMessageType(const DeleteDefaultMessageTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDefaultMessageType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDefaultMessageType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDefaultMessageTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDefaultMessageType(request), context);
    } );
}

DeleteDefaultSenderIdOutcome PinpointSMSVoiceV2Client::DeleteDefaultSenderId(const DeleteDefaultSenderIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDefaultSenderId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDefaultSenderId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDefaultSenderIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDefaultSenderId(request), context);
    } );
}

DeleteEventDestinationOutcome PinpointSMSVoiceV2Client::DeleteEventDestination(const DeleteEventDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEventDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventDestination(request), context);
    } );
}

DeleteKeywordOutcome PinpointSMSVoiceV2Client::DeleteKeyword(const DeleteKeywordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKeyword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKeyword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteKeywordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteKeyword(request), context);
    } );
}

DeleteOptOutListOutcome PinpointSMSVoiceV2Client::DeleteOptOutList(const DeleteOptOutListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOptOutList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOptOutList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteOptOutListOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteOptOutList(request), context);
    } );
}

DeleteOptedOutNumberOutcome PinpointSMSVoiceV2Client::DeleteOptedOutNumber(const DeleteOptedOutNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOptedOutNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOptedOutNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteOptedOutNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteOptedOutNumber(request), context);
    } );
}

DeletePoolOutcome PinpointSMSVoiceV2Client::DeletePool(const DeletePoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePool(request), context);
    } );
}

DeleteTextMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverride(const DeleteTextMessageSpendLimitOverrideRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTextMessageSpendLimitOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTextMessageSpendLimitOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTextMessageSpendLimitOverrideOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTextMessageSpendLimitOverride(request), context);
    } );
}

DeleteVoiceMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverride(const DeleteVoiceMessageSpendLimitOverrideRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceMessageSpendLimitOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceMessageSpendLimitOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVoiceMessageSpendLimitOverrideOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceMessageSpendLimitOverride(request), context);
    } );
}

DescribeAccountAttributesOutcome PinpointSMSVoiceV2Client::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountAttributes(request), context);
    } );
}

DescribeAccountLimitsOutcome PinpointSMSVoiceV2Client::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAccountLimits(request), context);
    } );
}

DescribeConfigurationSetsOutcome PinpointSMSVoiceV2Client::DescribeConfigurationSets(const DescribeConfigurationSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConfigurationSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConfigurationSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeConfigurationSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeConfigurationSets(request), context);
    } );
}

DescribeKeywordsOutcome PinpointSMSVoiceV2Client::DescribeKeywords(const DescribeKeywordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeKeywords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeKeywords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeKeywordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeKeywords(request), context);
    } );
}

DescribeOptOutListsOutcome PinpointSMSVoiceV2Client::DescribeOptOutLists(const DescribeOptOutListsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOptOutLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOptOutLists, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeOptOutListsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOptOutLists(request), context);
    } );
}

DescribeOptedOutNumbersOutcome PinpointSMSVoiceV2Client::DescribeOptedOutNumbers(const DescribeOptedOutNumbersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOptedOutNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOptedOutNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeOptedOutNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeOptedOutNumbers(request), context);
    } );
}

DescribePhoneNumbersOutcome PinpointSMSVoiceV2Client::DescribePhoneNumbers(const DescribePhoneNumbersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePhoneNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePhoneNumbers(request), context);
    } );
}

DescribePoolsOutcome PinpointSMSVoiceV2Client::DescribePools(const DescribePoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePools(request), context);
    } );
}

DescribeSenderIdsOutcome PinpointSMSVoiceV2Client::DescribeSenderIds(const DescribeSenderIdsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSenderIds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSenderIds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSenderIdsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSenderIds(request), context);
    } );
}

DescribeSpendLimitsOutcome PinpointSMSVoiceV2Client::DescribeSpendLimits(const DescribeSpendLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpendLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpendLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpendLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSpendLimits(request), context);
    } );
}

DisassociateOriginationIdentityOutcome PinpointSMSVoiceV2Client::DisassociateOriginationIdentity(const DisassociateOriginationIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateOriginationIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateOriginationIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateOriginationIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateOriginationIdentity(request), context);
    } );
}

ListPoolOriginationIdentitiesOutcome PinpointSMSVoiceV2Client::ListPoolOriginationIdentities(const ListPoolOriginationIdentitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPoolOriginationIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPoolOriginationIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPoolOriginationIdentitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPoolOriginationIdentities(request), context);
    } );
}

ListTagsForResourceOutcome PinpointSMSVoiceV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutKeywordOutcome PinpointSMSVoiceV2Client::PutKeyword(const PutKeywordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutKeyword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutKeyword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutKeywordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutKeyword(request), context);
    } );
}

PutOptedOutNumberOutcome PinpointSMSVoiceV2Client::PutOptedOutNumber(const PutOptedOutNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutOptedOutNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutOptedOutNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutOptedOutNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutOptedOutNumber(request), context);
    } );
}

ReleasePhoneNumberOutcome PinpointSMSVoiceV2Client::ReleasePhoneNumber(const ReleasePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleasePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleasePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleasePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReleasePhoneNumber(request), context);
    } );
}

RequestPhoneNumberOutcome PinpointSMSVoiceV2Client::RequestPhoneNumber(const RequestPhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RequestPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RequestPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RequestPhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RequestPhoneNumber(request), context);
    } );
}

SendTextMessageOutcome PinpointSMSVoiceV2Client::SendTextMessage(const SendTextMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendTextMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendTextMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendTextMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendTextMessage(request), context);
    } );
}

SendVoiceMessageOutcome PinpointSMSVoiceV2Client::SendVoiceMessage(const SendVoiceMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendVoiceMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendVoiceMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendVoiceMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendVoiceMessage(request), context);
    } );
}

SetDefaultMessageTypeOutcome PinpointSMSVoiceV2Client::SetDefaultMessageType(const SetDefaultMessageTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetDefaultMessageType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetDefaultMessageType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetDefaultMessageTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetDefaultMessageType(request), context);
    } );
}

SetDefaultSenderIdOutcome PinpointSMSVoiceV2Client::SetDefaultSenderId(const SetDefaultSenderIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetDefaultSenderId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetDefaultSenderId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetDefaultSenderIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetDefaultSenderId(request), context);
    } );
}

SetTextMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverride(const SetTextMessageSpendLimitOverrideRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetTextMessageSpendLimitOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetTextMessageSpendLimitOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetTextMessageSpendLimitOverrideOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetTextMessageSpendLimitOverride(request), context);
    } );
}

SetVoiceMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverride(const SetVoiceMessageSpendLimitOverrideRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetVoiceMessageSpendLimitOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetVoiceMessageSpendLimitOverride, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetVoiceMessageSpendLimitOverrideOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetVoiceMessageSpendLimitOverride(request), context);
    } );
}

TagResourceOutcome PinpointSMSVoiceV2Client::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome PinpointSMSVoiceV2Client::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateEventDestinationOutcome PinpointSMSVoiceV2Client::UpdateEventDestination(const UpdateEventDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEventDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEventDestination(request), context);
    } );
}

UpdatePhoneNumberOutcome PinpointSMSVoiceV2Client::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePhoneNumber(request), context);
    } );
}

UpdatePoolOutcome PinpointSMSVoiceV2Client::UpdatePool(const UpdatePoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePool(request), context);
    } );
}

